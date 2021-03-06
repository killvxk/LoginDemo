//*****************************************************************//
//*****************************************************************//
//*****************************************************************//
//**                                                             **//
//**         (C)Copyright 2011, American Megatrends, Inc.        **//
//**                                                             **//
//**                     All Rights Reserved.                    **//
//**                                                             **//
//**   5555 Oakbrook Pkwy, Building 200,Norcross, Georgia 30093  **//
//**                                                             **//
//**                     Phone (770)-246-8600                    **//
//**                                                             **//
//*****************************************************************//
//*****************************************************************//
//*****************************************************************//
// $Archive: /Alaska/SOURCE/Modules/AMITSE2_0/AMITSE/BootOnly/logo.c $
//
// $Author: Rajashakerg $
//
// $Revision: 26 $
//
// $Date: 9/18/12 12:50a $
//
//*****************************************************************//
//*****************************************************************//
//*****************************************************************//

//<AMI_FHDR_START>
//----------------------------------------------------------------------------
//
// Name:		logo.c
//
// Description:	file contains code to handle the logo operations.
//				Taken from graphics.c to eliminnate library dependancy
//
//----------------------------------------------------------------------------
//<AMI_FHDR_END>

#include "minisetup.h"
#include "Protocol/EdidActive.h" 

// to retrieve the frame coordinates in case different frames in a image
UINT16 gGifSrcX=0;
UINT16 gGifSrcY=0;
UINT16 gGifDestX=0;
UINT16 gGifDestY=0;
BOOLEAN GifImageFlag = 0;

#define TSE_ABS(a,b)             (((a) < (b)) ? ((b) - (a)) : ((a) - (b)))

extern LOGO_TYPE GetBmpLogoType(UINT8 *ImageData);

extern EFI_STATUS ConvertBmpToUgaBltWrapper (IN VOID *BmpImage, IN UINTN BmpImageSize, IN OUT VOID **UgaBlt,
		IN OUT UINTN  *UgaBltSize, OUT UINTN *PixelHeight, OUT UINTN *PixelWidth );

VOID *ConvertBlt2Bmp ();
VOID AddImageDetailToACPI (UINT8 *, INTN, INTN, BOOLEAN);
UINT8 gAddBgrtResolutions = 0;
VOID SetGetBgrtCoordinates (
	UINTN	*DestX,
	UINTN	*DestY,
	UINTN   *Width,
	UINTN   *Height,
	BOOLEAN Command
	);
VOID InvalidateStatusInBgrtWrapper (VOID);
BOOLEAN IsBGRTSupported(VOID); //EIP-88527


LOGO_TYPE GetLogoType(UINT8 *ImageData)
{
	if ( BMP_Logo == GetBmpLogoType(ImageData))
		return BMP_Logo;
	
	return Unsupported_Logo;
}

//<AMI_PHDR_START>
//----------------------------------------------------------------------------
// Procedure:	CleanUpLogo
//
// Description:	function to Clear all the logo buffers.
//
// Input:		nil
//
// Output:		void
//
//----------------------------------------------------------------------------
//<AMI_PHDR_END>
VOID CleanUpLogo()
{
	CleanUpExtendedLogoWrapper();
	InvalidateStatusInBgrtWrapper ();			//Setup key detected so clearing the status field
}

//<AMI_PHDR_START>
//----------------------------------------------------------------------------
// Procedure:	SetScreenResolution
//
// Description:	function to set the screen resolutions.
//
// Input:		UINTN ResX, UINTN ResY
//
// Output:		status
//
//----------------------------------------------------------------------------
//<AMI_PHDR_END>
EFI_STATUS SetScreenResolution(UINTN ResX, UINTN ResY)
{
    EFI_STATUS Status;

#if SETUP_USE_GRAPHICS_OUTPUT_PROTOCOL
    UINT32  i;
    UINTN   SizeOfInfo;
    EFI_GRAPHICS_OUTPUT_MODE_INFORMATION    *pModeInfo;

    if( gGOP == NULL )
        return EFI_UNSUPPORTED;

    for(i=0;i<gGOP->Mode->MaxMode;i++)
    {
        Status = gGOP->QueryMode(gGOP,i,&SizeOfInfo,&pModeInfo);
        if((EFI_SUCCESS == Status) && SizeOfInfo)
        {
            if((ResX == pModeInfo->HorizontalResolution) &&
               (ResY == pModeInfo->VerticalResolution))
            {
                //Set to this mode
                Status = gGOP->SetMode(gGOP,i);
                return Status;
            }
        }
    }

    return EFI_UNSUPPORTED;
#else
	UINT32 ColorDepth, RefreshRate;
    UINTN CurrResX, CurrResY;

    if ( gUgaDraw == NULL )
        return EFI_UNSUPPORTED;

    Status = gUgaDraw->GetMode( gUgaDraw, (UINT32 *)(&CurrResX), (UINT32 *)(&CurrResY), &ColorDepth, &RefreshRate );

    if(EFI_SUCCESS == Status)
        Status = gUgaDraw->SetMode( gUgaDraw, (UINT32)ResX, (UINT32)ResY, ColorDepth, RefreshRate );

    return Status;
#endif
}

//EIP60048 starts
//<AMI_PHDR_START>
//----------------------------------------------------------------------------------------------
// Procedure:	GOPSetScreenResolution
//
// Description:	Sets the mode which approximately fits the current image resolution
//
// Input:		UINTN *, UINTN * -> Pointer to the width and height of the image to be drawn
//
// Output:		EFI_STATUS -> Status for the operation
//
//----------------------------------------------------------------------------------------------
//<AMI_PHDR_END>
EFI_STATUS GOPSetScreenResolution (UINTN *Width, UINTN *Height)
{
	UINT32  i=0, Index = 0;
	UINTN 	DiffXY = 0, ResXY = 0;
	UINTN   SizeOfInfo;
	BOOLEAN ResXYSet = FALSE;
	EFI_STATUS	Status;
	EFI_GRAPHICS_OUTPUT_MODE_INFORMATION    *pModeInfo;

	if( NULL == gGOP )
	  return EFI_UNSUPPORTED;//EIP 95518 : Validate the Gop before usage in all the possible cases and also get instance of Gop through notification
	//Find proper mode to fit image
	for (i=0;i<gGOP->Mode->MaxMode;i++)
	{
		Status = gGOP->QueryMode (gGOP,i,&SizeOfInfo,&pModeInfo);
		if ((EFI_SUCCESS == Status) && SizeOfInfo)
		{
			DiffXY = TSE_ABS(*Width , pModeInfo->HorizontalResolution) + TSE_ABS(*Height , pModeInfo->VerticalResolution);
			if ((ResXY || ResXYSet) ? (DiffXY <= ResXY) : (ResXY <= DiffXY))				//EIP69171, Mode not set properly
			{
				Index = i;
				ResXY = DiffXY;
				ResXYSet = TRUE;
			}
		}
	}	
	gGOP->SetMode (gGOP, Index);
	Status = GOPSetScreenResolutionHook (Width, Height, Index);
	return Status;
}
//EIP60048 Ends

//<AMI_PHDR_START>
//----------------------------------------------------------------------------
// Procedure:	GetScreenResolution
//
// Description:	function to get the screen resolutions.
//
// Input:	UINTN *ResX, UINTN *ResY
//
// Output:	status
//
//----------------------------------------------------------------------------
//<AMI_PHDR_END>
EFI_STATUS GetScreenResolution(UINTN *ResX, UINTN *ResY)
{
#if SETUP_USE_GRAPHICS_OUTPUT_PROTOCOL
    if( gGOP == NULL )
        return EFI_UNSUPPORTED;
    *ResX = gGOP->Mode->Info->HorizontalResolution;
    *ResY = gGOP->Mode->Info->VerticalResolution;
    return EFI_SUCCESS;
#else
	UINT32 ColorDepth, RefreshRate;

    if ( gUgaDraw == NULL )
        return EFI_UNSUPPORTED;
    return gUgaDraw->GetMode( gUgaDraw, (UINT32 *)ResX, (UINT32 *) ResY, &ColorDepth, &RefreshRate );
#endif
}

//<AMI_PHDR_START>
//----------------------------------------------------------------------------
// Procedure:	DrawImage
//
// Description:	function to draw a image
//
// Input:	UINT8 *ImageData, UINTN ImageSize, CO_ORD_ATTRIBUTE Attribute,
//					INTN CoordinateX, INTN CoordinateY, BOOLEAN AdjustScreenResolution,
//					UINTN *Width, UINTN *Height
//
// Output:	status
//
//----------------------------------------------------------------------------
//<AMI_PHDR_END>
EFI_STATUS
DrawImage( 
    IN UINT8 *ImageData,
    IN UINTN ImageSize,
    IN CO_ORD_ATTRIBUTE Attribute,
    IN INTN CoordinateX,
    IN INTN CoordinateY,
    IN BOOLEAN AdjustScreenResolution,
    OUT UINTN *Width,
    OUT UINTN *Height
)
{

    EFI_STATUS	Status;
    UINTN		SizeOfX, SizeOfY;
    UINTN		UgaBltSize=0;
    UINTN		unBufferWidth=0;
    UINTN		LogoType;
    BOOLEAN		Animate = FALSE;

    EFI_UGA_PIXEL	*UgaBlt = NULL;

    *Height = *Width = 0;
    UpdateGoPUgaDraw();//EIP:50479 : Function to Update gGop before using it in AMITSE.
    Status = GetScreenResolution(&SizeOfX, &SizeOfY);
    if ( EFI_ERROR(Status) )
        return Status;

    LogoType = GetLogoType(ImageData);
    switch(LogoType)
    {

	case BMP_Logo:
		Status = ConvertBmpToUgaBltWrapper(
                                ImageData,
                                ImageSize,
                                (void**)&UgaBlt,
                                &UgaBltSize,
                                Height,
                                Width );
            	unBufferWidth = *Width;
        	break;

        case Unsupported_Logo:
        	default:

		Status = ConvertAdvancedImageToUgaBlt(
                                ImageData,
                                ImageSize,
                               (void**) &UgaBlt,
                                &UgaBltSize,
                                Height,
                                Width,
				&Animate);
		unBufferWidth = *Width;


            break;
    }

    if( EFI_ERROR(Status) )
    {
//        CleanUpLogo();    //If Jpeg off bmp on, jpeg image unsuccess clearing the drawn bmp image so commented.
        return Status;
    }

    if(AdjustScreenResolution)
    {
        //If the image is bigger than the current resolution
        //then try to set resolution to fit the image
        if((*Width > SizeOfX) || (*Height > SizeOfY))
        {
#if SETUP_USE_GRAPHICS_OUTPUT_PROTOCOL
			Status = GOPSetScreenResolution (Width, Height);			//EIP69171, Always check to suite the best resolution

#else
            UINT32 NewSizeOfX = 0;
            UINT32 NewSizeOfY = 0;

            if((*Width > 1024) || (*Height > 768))
            {
                // Set to max resolution available ie 1024 x 768
                NewSizeOfX = 1024; NewSizeOfY = 768;
            }
            else if((*Width > 800) || (*Height > 600))
            {
                //Set to 1024 x 768
                NewSizeOfX = 1024; NewSizeOfY = 768;
            }
            else if((*Width > 640) || (*Height > 480))
            {
                //Set to 800 x 600
                NewSizeOfX = 800; NewSizeOfY = 600;
            }

            if(NewSizeOfX)
            {
                SetScreenResolution(NewSizeOfX,NewSizeOfY);
            }
#endif
			GetScreenResolution (&SizeOfX,&SizeOfY);
		}
    }
    DrawBltBuffer (UgaBlt, Attribute, *Width, *Height, CoordinateX, CoordinateY, unBufferWidth);
	if(Animate)
	{
		DoLogoAnimate(Attribute,CoordinateX,CoordinateY);
	}
	else
	{
		//MemFreePointer( (VOID **)&ImageData ); //eip 36596 - image data will be freed in the calling function.
		MemFreePointer( (VOID **)&UgaBlt );
    }
	return EFI_SUCCESS;
}

//<AMI_PHDR_START>
//----------------------------------------------------------------------------
// Procedure:	DrawBltProgressBar
//
// Description:	function to draw a progress bar
//
// Input:	nil
//
// Output:	void
//
//----------------------------------------------------------------------------
//<AMI_PHDR_END>
VOID DrawBltProgressBar()
{
#ifndef STANDALONE_APPLICATION

	UINTN x = gProgress->x ;
    UINTN y = gProgress->y ;
	UINTN w = gProgress->w ;
    UINTN h = gProgress->h ;
	UINTN delta = gProgress->delta ;
	gProgress->completed+=delta ;

	if(gProgress->quiteBootActive && (gProgress->completed <= w))
	{
		DrawBlock(x, y, w, h, gProgress->backgroundColor) ;					//draw background
		DrawBlock(x, y, gProgress->completed, h, gProgress->fillColor) ;	//draw progression
		DrawProgressBarBorder(x, y, w, h, gProgress->borderColor, 2) ; 		//draw border
	}
#endif
}

//<AMI_PHDR_START>
//----------------------------------------------------------------------------
// Procedure:	DrawProgressBarBorder
//
// Description:	function to draw the border of a progress bar
//
// Input:	UINTN DestX, UINTN DestY, UINTN Width, UINTN Height,
//					EFI_UGA_PIXEL *BltBuffer, UINTN	bw
//
// Output:	void
//
//----------------------------------------------------------------------------
//<AMI_PHDR_END>
VOID DrawProgressBarBorder(
    UINTN	x,
    UINTN	y,
	UINTN	w,
    UINTN	h,
	EFI_UGA_PIXEL *BltBuffer,
	UINTN	bw
    )
{
#ifndef STANDALONE_APPLICATION
 	//Top
	DrawBlock(x, y, w, bw, BltBuffer) ;
	//Bottom
	DrawBlock(x, y+h-bw, w, bw, BltBuffer) ;
	//Left
	DrawBlock(x, y, bw, h, BltBuffer) ;
	//Right
	DrawBlock(x+w-bw, y, bw, h, BltBuffer) ;
#endif
}

//<AMI_PHDR_START>
//----------------------------------------------------------------------------
// Procedure:	DrawBlock
//
// Description:	function to draw draw a block
//
// Input:	UINTN DestX, UINTN DestY, UINTN	Width, UINTN Height, EFI_UGA_PIXEL *BltBuffer
//
// Output:	void
//
//----------------------------------------------------------------------------
//<AMI_PHDR_END>
VOID DrawBlock(
    UINTN	x,
    UINTN	y,
	UINTN	w,
    UINTN	h,
	EFI_UGA_PIXEL *BltBuffer
    )
{
#ifndef STANDALONE_APPLICATION

#if SETUP_USE_GRAPHICS_OUTPUT_PROTOCOL
    if ( gQuietBoot && gGOP)
#else
    if ( gQuietBoot && gUgaDraw)
#endif
	{
#if SETUP_USE_GRAPHICS_OUTPUT_PROTOCOL
    gGOP->Blt (
        gGOP,
        BltBuffer,
        EfiBltVideoFill,
        0, 0,
        x, y,
        w, h,
        0 /*BufferWidth * sizeof (EFI_UGA_PIXEL)*/
        );
#else
    gUgaDraw->Blt (
        gUgaDraw,
        BltBuffer,
        EfiBltVideoFill,
        0, 0,
        x, y,
        w, h,
        0 /*BufferWidth * sizeof (EFI_UGA_PIXEL)*/
        );
#endif
	}
#endif
}

//<AMI_PHDR_START>
//----------------------------------------------------------------------------
// Procedure:	DrawBltBuffer
//
// Description:	function to draw draw a block
//
// Input:	EFI_UGA_PIXEL *UgaBlt, CO_ORD_ATTRIBUTE Attribute,
//					UINTN Width, UINTN Height, INTN DestX, INTN DestY,
//					UINTN BufferWidth
//
// Output:	void
//
//----------------------------------------------------------------------------
//<AMI_PHDR_END>
VOID DrawBltBuffer(
    EFI_UGA_PIXEL *UgaBlt,
    CO_ORD_ATTRIBUTE Attribute,
    UINTN   Width,
    UINTN   Height,
    INTN    DestX,
    INTN    DestY,
    UINTN   BufferWidth
    )
{
    UINTN SizeOfX=0, SizeOfY=0;
    UINTN SourceX=0, SourceY=0;

    GetScreenResolution(&SizeOfX,&SizeOfY);
    // In case of gif set the frame position
    if(GifImageFlag) {
    	SourceX = gGifSrcX; 
    	SourceY = gGifSrcY;
    }
    switch(Attribute)
    {
        case CA_AttributeLeftTop:
            //Need to alter DestX and DestY based on the image descriptor.
            if(GifImageFlag) {
            	DestX = SourceX;
            	DestY = SourceY;
            }
            //No need to alter DestX and DestY
        break;

        case CA_AttributeCenterTop:
            DestX = ((INTN)(SizeOfX - Width)) / 2;
            //DestY need not be altered
        break;

        case CA_AttributeRightTop:
            DestX = (INTN)(SizeOfX - Width - DestX);
            //DestY need not be altered
        break;

        case CA_AttributeRightCenter:
            DestX = (INTN)(SizeOfX - Width - DestX);
            DestY = ((INTN)(SizeOfY - Height))/2;
        break;

        case CA_AttributeRightBottom:
            DestX = (INTN)(SizeOfX - Width - DestX);
            DestY = (INTN)(SizeOfY - Height - DestY);
        break;

        case CA_AttributeCenterBottom:
            DestX = ((INTN)(SizeOfX - Width))/2;
            DestY = (INTN)(SizeOfY - Height - DestY);
        break;

        case CA_AttributeLeftBottom:
            //DestX need not be altered
            DestY = (INTN)(SizeOfY - Height - DestY);
        break;

        case CA_AttributeLeftCenter:
            //DestX need not be altered
            DestY = ((INTN)(SizeOfY - Height))/2;
        break;

        case CA_AttributeCenter:
            // in case of gif, set the video display positions based on the image frame position.
            if(GifImageFlag) {
	           DestX = ((INTN)(SizeOfX - Width))/2 + SourceX;
               DestY = ((INTN)(SizeOfY - Height))/2 + SourceY;
            } 
				//EIP-88527 Logo should be 40% of sreen dimension
				else if (IsBGRTSupported() && ( Width <= (((UINTN)(40 *SizeOfX))/100) ) && ( Height <= (((UINTN)(40 *SizeOfY))/100) ))
				{
					DestX = ((INTN)(SizeOfX - Width))/2; //Exact center of x-axis
               DestY = (((INTN)(SizeOfY*382))/1000) - ((INTN)Height/2);//Center of logo is 38.2% from the top of screen
				}
				else 
				{
	         	DestX = ((INTN)(SizeOfX - Width))/2;
               DestY = ((INTN)(SizeOfY - Height))/2;
            }

        break;

        default:
            //DestX and DestY remains as it is
        break;
	}

    //Fill the video based on image frame descriptor values
    if(GifImageFlag) {
        Width = gGifDestX;
        Height = gGifDestY;
    }

    if( DestX < 0 )
    {
        SourceX = (-(DestX));
        DestX = 0;
    }

    if( DestY < 0 )
    {
        SourceY = (-(DestY));
        DestY = 0;
    }

    // Fix to show Logo images correctly when it is bigger then screen resolution.
    if((DestX + (Width - SourceX)) > SizeOfX)
        Width = (SizeOfX - DestX);

    if((DestY + (Height - SourceY)) > SizeOfY)
        Height = (SizeOfY - DestY);

#if SETUP_USE_GRAPHICS_OUTPUT_PROTOCOL
    if ( gGOP)
	    gGOP->Blt (
	        gGOP,
	        UgaBlt,
	        EfiBltBufferToVideo,
	        SourceX, SourceY,
	        (UINTN)DestX, (UINTN)DestY,
	        Width, Height,
	        BufferWidth * sizeof (EFI_UGA_PIXEL)
	        );
#else
    if ( gUgaDraw)
	    gUgaDraw->Blt (
	        gUgaDraw,
	        UgaBlt,
	        EfiUgaBltBufferToVideo,
	        SourceX, SourceY,
	        (UINTN)DestX, (UINTN)DestY,
	        Width, Height,
	        BufferWidth * sizeof (EFI_UGA_PIXEL)
	        );
#endif
	if (gAddBgrtResolutions)
	{
		SetGetBgrtCoordinates ((UINTN*)&DestX, (UINTN*)&DestY, &Width, &Height, TRUE);	//1 for set the value, EIP-111918: Cast for GCC Build 
	}
}

//<AMI_PHDR_START>
//----------------------------------------------------------------------------
// Procedure:	ConvertBlt2Bmp
//
// Description:	Converts the Blt in the screen to Bmp buffer
//
// Input:	    VOID
//
// Output:	    VOID *
//
//----------------------------------------------------------------------------
//<AMI_PHDR_END>
VOID *ConvertBlt2Bmp (VOID)
{
    BMP_IMAGE_HEADER BmpHeaderStruct = {
		'B',	//  CHAR8         CharB;
		'M',	//  CHAR8         CharM;
		0,		//  UINT32        Size; // Dynamic
		{0,0},	//  UINT16        Reserved[2];
		0x36,	//  UINT32        ImageOffset;
		0x28,	//  UINT32        HeaderSize;
		0,		//  UINT32        PixelWidth;	// Dynamic
		0,		//  UINT32        PixelHeight;	// Dynamic
		1,		//  UINT16        Planes;       // Must be 1
		0x18,	//  UINT16        BitPerPixel;  // 1, 4, 8, or 24
		0,		//  UINT32        CompressionType;
		0,		//  UINT32        ImageSize;    // // Dynamic
		0,		//  UINT32        XPixelsPerMeter;
		0,		//  UINT32        YPixelsPerMeter;
		0,		//  UINT32        NumberOfColors;
		0,		//  UINT32        ImportantColors;

    };
    BMP_IMAGE_HEADER  *BmpBuffer=NULL;
	UINT32 	i=0,j=0;
    UINT8   *Image;
    UINTN   ImageIndex;
    UINTN   AllignWidth = 0;
	UINTN 	SourceX = 0, SourceY = 0;
	UINTN 	Width = 0, Height = 0;
	EFI_STATUS 		Status = EFI_SUCCESS;
	EFI_UGA_PIXEL 	*BltBuffer;

	SetGetBgrtCoordinates (&SourceX, &SourceY, &Width, &Height, FALSE);		//Get the BGRT logo resolutions
#if SETUP_USE_GRAPHICS_OUTPUT_PROTOCOL
	if(gGOP)
	{
		BltBuffer = EfiLibAllocateZeroPool (Width * Height * sizeof (EFI_UGA_PIXEL));
		if (NULL == BltBuffer)
		{
			return NULL;
		}
	    Status = gGOP->Blt (
	    	gGOP,
	     	BltBuffer,
	      	EfiBltVideoToBltBuffer,
	       	SourceX, SourceY,
	        0, 0,
	        Width, Height,
	        0);
		if (EFI_SUCCESS != Status)
		{
			MemFreePointer ((VOID **)&BltBuffer);
			return NULL;
		}
	}
#else
	if (gUgaDraw)
	{
		BltBuffer = EfiLibAllocateZeroPool (Width * Height * sizeof (EFI_UGA_PIXEL));
		if (NULL == BltBuffer)
		{
			return NULL;
		}
	    Status = gUgaDraw->Blt (
	    	gUgaDraw,
	     	BltBuffer,
	      	EfiUgaVideoToBltBuffer,           
	       	SourceX, SourceY,
	        0, 0,
	        Width, Height,
	        0);
		if (EFI_SUCCESS != Status)
		{
			MemFreePointer ((VOID **)&BltBuffer);
			return NULL;
		}
	}
#endif
	else
	{
		return NULL;
	}
	AllignWidth = Width;
    if (Width%4 != 0)
    {
        AllignWidth += Width%4;					//Width should be 4 bytes alligned
    }
	BmpHeaderStruct.ImageSize = (UINT32)(3*AllignWidth*Height);
	BmpHeaderStruct.Size = sizeof (BmpHeaderStruct)+ BmpHeaderStruct.ImageSize;
	BmpBuffer = EfiLibAllocateZeroPool (BmpHeaderStruct.Size);
	if (BmpBuffer)
	{
		BmpHeaderStruct.PixelWidth = (UINT32)Width;
		BmpHeaderStruct.PixelHeight = (UINT32)Height;

		gBS->CopyMem(BmpBuffer,&BmpHeaderStruct,sizeof(BmpHeaderStruct));
		Image = (UINT8*)BmpBuffer;
		Image += BmpBuffer->ImageOffset;

		for(i=(UINT32)(Width*Height);i;i-=BmpHeaderStruct.PixelWidth)
		{
			for(j=BmpHeaderStruct.PixelWidth;j;j--)
			{
				*Image++ = BltBuffer[i-j].Blue;
				*Image++ = BltBuffer[i-j].Green;
				*Image++ = BltBuffer[i-j].Red;
			}
            ImageIndex = (UINTN) (Image - BmpBuffer->ImageOffset);
            if ((ImageIndex % 4) != 0) // Bmp Image starts each row on a 32-bit boundary!
                Image = Image + (4 - (ImageIndex % 4));
		}
		MemFreePointer ((VOID **)&BltBuffer);
        return (VOID*)BmpBuffer;
	}
	MemFreePointer ((VOID **)&BltBuffer);
	return NULL;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------------------------------------
// Procedure:	ConvertBmpandAddBGRT
//
// Description:	Converts Blt to Bmp buffer and form BGRT table and add to ACPI.
//
// Input:	    BOOLEAN  = Indicates whether to set the BGRT status field or not.
//
// Output:	    VOID
//
//--------------------------------------------------------------------------------------------------------
//<AMI_PHDR_END>
VOID ConvertBmpandAddBGRT (
	BOOLEAN GifImagePresence
    )
{
    VOID *BmpData = NULL;
    BmpData = ConvertBlt2Bmp ();
    if (BmpData)
    {
		UINTN	DestX = 0, DestY = 0, Width = 0, Height = 0;
		SetGetBgrtCoordinates (&DestX, &DestY, &Width, &Height, FALSE); //Get the Bgrt logo resolution
   	    AddImageDetailToACPI (BmpData, DestX, DestY, GifImagePresence);
	}
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------------------------------------
// Procedure:	SetGetBgrtCoordinates
//
// Description:	Sets the BGRT logo coordinates
//
// Input:	    UINTN	*DestX = X coordinate
//				UINTN	*DestY = Y coordinate
//				UINTN   *Width = Width of the logo
//				UINTN   *Height = Heigth of the logo
//				BOOLEAN Command = To set or get the Bgrt logo resolutions
//
// Output:	    VOID
//
//--------------------------------------------------------------------------------------------------------
//<AMI_PHDR_END>
VOID SetGetBgrtCoordinates (
	UINTN	*DestX,
	UINTN	*DestY,
	UINTN   *Width,
	UINTN   *Height,
	BOOLEAN Command
	)
{
	static UINTN gBgrtStartResX = 0;
	static UINTN gBgrtStartResY = 0;
	static UINTN gBgrtEndResX = 0;
	static UINTN gBgrtEndResY = 0;

	if (FALSE == Command)			//To get the Bgrt logo resolution
	{
		*DestX = gBgrtStartResX;
		*DestY = gBgrtStartResY;
		*Width = gBgrtEndResX - gBgrtStartResX;
		*Height = gBgrtEndResY - gBgrtStartResY;
	}
	else
	{
		if (1 == gAddBgrtResolutions)			//At first time initialize the values
		{
			gBgrtStartResX = *DestX;
			gBgrtStartResY = *DestY;
			gBgrtEndResX = *DestX + *Width;
			gBgrtEndResY = *DestY + *Height;
		}
		else
		{
			if (*DestX < gBgrtStartResX)
			{
				gBgrtStartResX = *DestX;
			}
			if (*DestY < gBgrtStartResY)
			{
				gBgrtStartResY = *DestY;
			}
			if (gBgrtEndResX < (*DestX + *Width))
			{
				gBgrtEndResX = (*DestX + *Width);
			}
			if (gBgrtEndResY < (*DestY + *Height))
			{
				gBgrtEndResY = (*DestY + *Height);
			}
		}
		gAddBgrtResolutions ++;
	}
}

//EIP94702 starts
//<AMI_PHDR_START>
//-------------------------------------------------------------------------------------------------------
// Procedure:		SetGraphicsResolution
//
// Description:	Sets the graphical resolution corresponding to the input parameter
//
// Input:	    	UINT32 - Horizontal resolution of the mode to set
//						UINT32 - Vertical resolution of the mode to set
//
// Output:	    	EFI_STATUS - EFI_SUCCESS - If input resolutions are set successfully
//										 !EFI_SUCCESS - If input resolutions are not set successfully
//
//--------------------------------------------------------------------------------------------------------
//<AMI_PHDR_END>
EFI_STATUS SetGraphicsResolution (UINT32 HorResolution, UINT32 VerResolution)
{
	EFI_STATUS	Status = EFI_SUCCESS;
	UINT32  		iIndex = 0;
	UINTN   		SizeOfInfo = 0;
	EFI_GRAPHICS_OUTPUT_MODE_INFORMATION *pModeInfo = NULL;

	for (iIndex = 0; iIndex < gGOP->Mode->MaxMode; iIndex ++)
	{
		Status = gGOP->QueryMode (gGOP, iIndex, &SizeOfInfo, &pModeInfo);
		if (!EFI_ERROR (Status))
		{
			SETUP_DEBUG_TSE ("\n[TSE] pModeInfo HorizontalResolution=%d VerticalResolution=%d\n", pModeInfo->HorizontalResolution, pModeInfo->VerticalResolution);
			if ((HorResolution == pModeInfo->HorizontalResolution) && (VerResolution == pModeInfo->VerticalResolution))
			{
				if (gGOP->Mode->Mode != iIndex)			//If Current mode not equals the found mode then call SetMode otherwise return success
				{
					SETUP_DEBUG_TSE ("\n[TSE] Setting %d Mode\n", iIndex);
					Status = gGOP->SetMode (gGOP, iIndex);
					if (!EFI_ERROR (Status))				//Loop for all the cases. Not success also loop for another without returning from here
					{
						return EFI_SUCCESS;
					}
				}
				else
				{
					SETUP_DEBUG_TSE ("\n[TSE] Without Setting %d Mode\n", iIndex);
					return EFI_SUCCESS;
				}
			}
		}
	}
	return EFI_NOT_FOUND;
}

//<AMI_PHDR_START>
//-------------------------------------------------------------------------------------------------------
// Procedure:		SetNativeResFromEdid
//
// Description:	Finds and sets the resolution from EDID
//
// Input:	    	VOID
//
// Output:	    	VOID
//
//--------------------------------------------------------------------------------------------------------
//<AMI_PHDR_END>
EFI_STATUS SetNativeResFromEdid (VOID)
{
	EFI_STATUS 	Status;
	UINT32 			HorRes;
	UINT32 			VerRes;
	EFI_EDID_ACTIVE_PROTOCOL *EdidActive;
	EFI_GUID EdidActiveProtocolGuid = EFI_EDID_ACTIVE_PROTOCOL_GUID;

	Status = gBS->LocateProtocol (&EdidActiveProtocolGuid, NULL, (void**)&EdidActive);
	if(EFI_ERROR(Status) || EdidActive->SizeOfEdid == 0)
	{
		SETUP_DEBUG_TSE ("\n[TSE] Edid active protocol fails \n");
		Status = SetGraphicsResolution (1024, 768);			//If EDID not found set 1024*768 mode
		return Status;
	}

	if(!((EdidActive->Edid)[24] & BIT01))
	{
	/* native resolution not supported */
		return EFI_UNSUPPORTED;
	}
	
	HorRes = ((((EdidActive->Edid)[0x36 + 4]) & 0xF0) << 4) + (EdidActive->Edid)[0x36 + 2];
	VerRes = ((((EdidActive->Edid)[0x36 + 7]) & 0xF0) << 4) + (EdidActive->Edid)[0x36 + 5];

	SETUP_DEBUG_TSE ("\n[TSE] %02d, ", EdidActive->Edid[0x36 + 4]);
	SETUP_DEBUG_TSE ("\n[TSE] %02d, ", EdidActive->Edid[0x36 + 2]);
	SETUP_DEBUG_TSE ("\n[TSE] %02d, ", EdidActive->Edid[0x36 + 7]);
	SETUP_DEBUG_TSE ("\n[TSE] %02d, ", EdidActive->Edid[0x36 + 5]);
	SETUP_DEBUG_TSE ("\n[TSE] EDID HorizontalResolution=%d VerticalResolution=%d\n", HorRes, VerRes);

	Status = SetGraphicsResolution (HorRes, VerRes);
	if (EFI_ERROR(Status))
	{
		SETUP_DEBUG_TSE ("\n[TSE] Setting 1024 * 768 Mode \n");
		Status = SetGraphicsResolution (1024, 768);			//If EDID not found set 1024*768 mode
#if OVERRIDE_MainSetupLoopHook
		if (EFI_ERROR(Status)) {
			SETUP_DEBUG_TSE ("\n[TSE] Setting 800x600 Mode \n");
			Status = SetGraphicsResolution (800, 600);		//If setting to 1024x768 fails
		}
#endif
	}
	return Status;
}
//EIP94702 ends
//**********************************************************************
//**********************************************************************
//**                                                                  **
//**        (C)Copyright 1985-2011, American Megatrends, Inc.         **
//**                                                                  **
//**                       All Rights Reserved.                       **
//**                                                                  **
//**     5555 Oakbrook Pkwy, Building 200,Norcross, Georgia 30093     **
//**                                                                  **
//**                       Phone: (770)-246-8600                      **
//**                                                                  **
//**********************************************************************
//**********************************************************************

