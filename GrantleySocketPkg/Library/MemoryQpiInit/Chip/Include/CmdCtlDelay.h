/*++
Copyright (c) 2009 - 2015, Intel Corporation. All rights reserved
This software and associated documentation (if any) is furnished
under a license and may only be used or copied in accordance
with the terms of the license. Except as permitted by such
license, no part of this software or documentation may be
reproduced, stored in a retrieval system, or transmitted in any
form or by any means without the express written consent of
Intel Corporation.

Module Name:

  CmdCtlDelay.h

Abstract:

  Data structures for thermal and power parameters for platform(s).

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

              DO NOT MODIFY - TABLE IS AUTO-GENERATED

        This table is generated with CreateCmdCtlDelay.py

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

--*/

#ifndef _CmdCtlDelay_h
#define _CmdCtlDelay_h

#define HSX_PCKG_TYPE 4

const struct IoGroupDelayStruct igCtlA0[] = { 

   0, 6,  SIDE_B,  { 78, 95, 95, 0xFF },
   0, 0,  SIDE_B,  { 72, 95, 95, 0xFF },
   0, 0,  SIDE_A,  { 72, 95, 95, 0xFF },
   0, 8,  SIDE_B,  { 117, 110, 110, 0xFF },
   0, 7,  SIDE_B,  { 117, 95, 95, 0xFF },
   0, 1,  SIDE_B,  { 117, 95, 95, 0xFF },
   0, 1,  SIDE_A,  { 117, 95, 95, 0xFF },
   0, 9,  SIDE_B,  { 111, 81, 81, 0xFF },
   0, 2,  SIDE_B,  { 104, 81, 81, 0xFF },
   0, 2,  SIDE_A,  { 104, 81, 81, 0xFF },
   0, 6,  SIDE_A,  { 0, 0, 0, 0xFF },
   0, 7,  SIDE_A,  { 39, 0, 0, 0xFF },
   0, 10,  SIDE_B,  { 91, 66, 66, 0xFF },
   0, 3,  SIDE_B,  { 85, 66, 66, 0xFF },
   0, 3,  SIDE_A,  { 85, 66, 66, 0xFF },
   0, 4,  SIDE_A,  { 98, 73, 73, 0xFF },
   0, 5,  SIDE_A,  { 78, 59, 59, 0xFF },
   0, 8,  SIDE_A,  { 78, 66, 66, 0xFF },
   0, 9,  SIDE_A,  { 85, 66, 66, 0xFF },
   0, 4,  SIDE_B,  { 124, 95, 95, 0xFF },
   0, 5,  SIDE_B,  { 124, 125, 125, 0xFF },
   1, 6,  SIDE_B,  { 33, 81, 81, 0xFF },
   1, 0,  SIDE_B,  { 33, 81, 81, 0xFF },
   1, 0,  SIDE_A,  { 20, 81, 81, 0xFF },
   1, 8,  SIDE_B,  { 78, 103, 103, 0xFF },
   1, 7,  SIDE_B,  { 52, 81, 81, 0xFF },
   1, 1,  SIDE_B,  { 46, 81, 81, 0xFF },
   1, 1,  SIDE_A,  { 46, 81, 81, 0xFF },
   1, 9,  SIDE_B,  { 52, 73, 73, 0xFF },
   1, 2,  SIDE_B,  { 46, 73, 73, 0xFF },
   1, 2,  SIDE_A,  { 39, 73, 81, 0xFF },
   1, 6,  SIDE_A,  { 0, 0, 0, 0xFF },
   1, 7,  SIDE_A,  { 13, 0, 0, 0xFF },
   1, 10,  SIDE_B,  { 59, 73, 73, 0xFF },
   1, 3,  SIDE_B,  { 46, 73, 73, 0xFF },
   1, 3,  SIDE_A,  { 46, 73, 73, 0xFF },
   1, 4,  SIDE_A,  { 59, 88, 88, 0xFF },
   1, 5,  SIDE_A,  { 65, 73, 73, 0xFF },
   1, 8,  SIDE_A,  { 20, 44, 44, 0xFF },
   1, 9,  SIDE_A,  { 7, 37, 37, 0xFF },
   1, 4,  SIDE_B,  { 78, 95, 95, 0xFF },
   1, 5,  SIDE_B,  { 78, 95, 103, 0xFF },
   2, 6,  SIDE_B,  { 7, 15, 15, 0xFF },
   2, 0,  SIDE_B,  { 13, 15, 15, 0xFF },
   2, 0,  SIDE_A,  { 7, 15, 22, 0xFF },
   2, 8,  SIDE_B,  { 39, 37, 37, 0xFF },
   2, 7,  SIDE_B,  { 0, 37, 37, 0xFF },
   2, 1,  SIDE_B,  { 7, 37, 37, 0xFF },
   2, 1,  SIDE_A,  { 13, 37, 37, 0xFF },
   2, 9,  SIDE_B,  { 7, 22, 22, 0xFF },
   2, 2,  SIDE_B,  { 7, 22, 22, 0xFF },
   2, 2,  SIDE_A,  { 7, 22, 29, 0xFF },
   2, 6,  SIDE_A,  { 98, 117, 110, 0xFF },
   2, 7,  SIDE_A,  { 98, 117, 125, 0xFF },
   2, 10,  SIDE_B,  { 20, 22, 22, 0xFF },
   2, 3,  SIDE_B,  { 20, 22, 22, 0xFF },
   2, 3,  SIDE_A,  { 20, 22, 37, 0xFF },
   2, 4,  SIDE_A,  { 26, 66, 73, 0xFF },
   2, 5,  SIDE_A,  { 65, 66, 73, 0xFF },
   2, 8,  SIDE_A,  { 65, 59, 73, 0xFF },
   2, 9,  SIDE_A,  { 91, 59, 59, 0xFF },
   2, 4,  SIDE_B,  { 33, 0, 0, 0xFF },
   2, 5,  SIDE_B,  { 33, 15, 15, 0xFF },
   3, 6,  SIDE_B,  { 20, 29, 29, 0xFF },
   3, 0,  SIDE_B,  { 26, 29, 29, 0xFF },
   3, 0,  SIDE_A,  { 20, 29, 29, 0xFF },
   3, 8,  SIDE_B,  { 65, 59, 59, 0xFF },
   3, 7,  SIDE_B,  { 20, 29, 29, 0xFF },
   3, 1,  SIDE_B,  { 26, 29, 29, 0xFF },
   3, 1,  SIDE_A,  { 26, 29, 29, 0xFF },
   3, 9,  SIDE_B,  { 13, 0, 0, 0xFF },
   3, 2,  SIDE_B,  { 20, 0, 0, 0xFF },
   3, 2,  SIDE_A,  { 20, 0, 0, 0xFF },
   3, 6,  SIDE_A,  { 111, 81, 81, 0xFF },
   3, 7,  SIDE_A,  { 78, 81, 81, 0xFF },
   3, 10,  SIDE_B,  { 39, 37, 37, 0xFF },
   3, 3,  SIDE_B,  { 33, 37, 37, 0xFF },
   3, 3,  SIDE_A,  { 39, 37, 37, 0xFF },
   3, 4,  SIDE_A,  { 7, 66, 66, 0xFF },
   3, 5,  SIDE_A,  { 7, 73, 73, 0xFF },
   3, 8,  SIDE_A,  { 13, 73, 73, 0xFF },
   3, 9,  SIDE_A,  { 7, 73, 73, 0xFF },
   3, 4,  SIDE_B,  { 0, 29, 29, 0xFF },
   3, 5,  SIDE_B,  { 7, 44, 44, 0xFF }
};


const struct IoGroupDelayStruct igCtl[] = { 

   0, 6,  SIDE_B,  { 73, 95, 95, 0xFF },
   0, 0,  SIDE_B,  { 73, 95, 95, 0xFF },
   0, 0,  SIDE_A,  { 73, 95, 95, 0xFF },
   0, 8,  SIDE_B,  { 117, 110, 110, 0xFF },
   0, 7,  SIDE_B,  { 117, 95, 95, 0xFF },
   0, 1,  SIDE_B,  { 117, 95, 95, 0xFF },
   0, 1,  SIDE_A,  { 117, 95, 95, 0xFF },
   0, 9,  SIDE_B,  { 110, 81, 81, 0xFF },
   0, 2,  SIDE_B,  { 110, 81, 81, 0xFF },
   0, 2,  SIDE_A,  { 103, 81, 81, 0xFF },
   0, 6,  SIDE_A,  { 0, 0, 0, 0xFF },
   0, 7,  SIDE_A,  { 44, 0, 0, 0xFF },
   0, 10,  SIDE_B,  { 95, 66, 66, 0xFF },
   0, 3,  SIDE_B,  { 88, 66, 66, 0xFF },
   0, 3,  SIDE_A,  { 88, 66, 66, 0xFF },
   0, 4,  SIDE_A,  { 95, 73, 73, 0xFF },
   0, 5,  SIDE_A,  { 81, 59, 59, 0xFF },
   0, 8,  SIDE_A,  { 73, 66, 66, 0xFF },
   0, 9,  SIDE_A,  { 81, 66, 66, 0xFF },
   0, 4,  SIDE_B,  { 125, 95, 95, 0xFF },
   0, 5,  SIDE_B,  { 125, 125, 125, 0xFF },
   1, 6,  SIDE_B,  { 29, 81, 81, 0xFF },
   1, 0,  SIDE_B,  { 29, 81, 81, 0xFF },
   1, 0,  SIDE_A,  { 22, 81, 81, 0xFF },
   1, 8,  SIDE_B,  { 81, 103, 103, 0xFF },
   1, 7,  SIDE_B,  { 51, 81, 81, 0xFF },
   1, 1,  SIDE_B,  { 51, 81, 81, 0xFF },
   1, 1,  SIDE_A,  { 44, 81, 81, 0xFF },
   1, 9,  SIDE_B,  { 51, 73, 73, 0xFF },
   1, 2,  SIDE_B,  { 44, 73, 73, 0xFF },
   1, 2,  SIDE_A,  { 37, 73, 81, 0xFF },
   1, 6,  SIDE_A,  { 0, 0, 0, 0xFF },
   1, 7,  SIDE_A,  { 7, 0, 0, 0xFF },
   1, 10,  SIDE_B,  { 59, 73, 73, 0xFF },
   1, 3,  SIDE_B,  { 51, 73, 73, 0xFF },
   1, 3,  SIDE_A,  { 44, 73, 73, 0xFF },
   1, 4,  SIDE_A,  { 59, 88, 88, 0xFF },
   1, 5,  SIDE_A,  { 66, 73, 73, 0xFF },
   1, 8,  SIDE_A,  { 15, 44, 44, 0xFF },
   1, 9,  SIDE_A,  { 7, 37, 37, 0xFF },
   1, 4,  SIDE_B,  { 81, 95, 95, 0xFF },
   1, 5,  SIDE_B,  { 73, 95, 103, 0xFF },
   2, 6,  SIDE_B,  { 29, 15, 15, 0xFF },
   2, 0,  SIDE_B,  { 37, 15, 15, 0xFF },
   2, 0,  SIDE_A,  { 29, 15, 22, 0xFF },
   2, 8,  SIDE_B,  { 66, 37, 37, 0xFF },
   2, 7,  SIDE_B,  { 22, 37, 37, 0xFF },
   2, 1,  SIDE_B,  { 37, 37, 37, 0xFF },
   2, 1,  SIDE_A,  { 37, 37, 37, 0xFF },
   2, 9,  SIDE_B,  { 29, 22, 22, 0xFF },
   2, 2,  SIDE_B,  { 37, 22, 22, 0xFF },
   2, 2,  SIDE_A,  { 37, 22, 29, 0xFF },
   2, 6,  SIDE_A,  { 125, 117, 110, 0xFF },
   2, 7,  SIDE_A,  { 125, 117, 125, 0xFF },
   2, 10,  SIDE_B,  { 44, 22, 22, 0xFF },
   2, 3,  SIDE_B,  { 44, 22, 22, 0xFF },
   2, 3,  SIDE_A,  { 51, 22, 37, 0xFF },
   2, 4,  SIDE_A,  { 51, 66, 73, 0xFF },
   2, 5,  SIDE_A,  { 95, 66, 73, 0xFF },
   2, 8,  SIDE_A,  { 95, 59, 73, 0xFF },
   2, 9,  SIDE_A,  { 117, 59, 59, 0xFF },
   2, 4,  SIDE_B,  { 59, 0, 0, 0xFF },
   2, 5,  SIDE_B,  { 59, 15, 15, 0xFF },
   3, 6,  SIDE_B,  { 22, 29, 29, 0xFF },
   3, 0,  SIDE_B,  { 22, 29, 29, 0xFF },
   3, 0,  SIDE_A,  { 22, 29, 29, 0xFF },
   3, 8,  SIDE_B,  { 66, 59, 59, 0xFF },
   3, 7,  SIDE_B,  { 22, 29, 29, 0xFF },
   3, 1,  SIDE_B,  { 22, 29, 29, 0xFF },
   3, 1,  SIDE_A,  { 22, 29, 29, 0xFF },
   3, 9,  SIDE_B,  { 15, 0, 0, 0xFF },
   3, 2,  SIDE_B,  { 22, 0, 0, 0xFF },
   3, 2,  SIDE_A,  { 22, 0, 0, 0xFF },
   3, 6,  SIDE_A,  { 110, 81, 81, 0xFF },
   3, 7,  SIDE_A,  { 81, 81, 81, 0xFF },
   3, 10,  SIDE_B,  { 37, 37, 37, 0xFF },
   3, 3,  SIDE_B,  { 37, 37, 37, 0xFF },
   3, 3,  SIDE_A,  { 37, 37, 37, 0xFF },
   3, 4,  SIDE_A,  { 7, 66, 66, 0xFF },
   3, 5,  SIDE_A,  { 7, 73, 73, 0xFF },
   3, 8,  SIDE_A,  { 7, 73, 73, 0xFF },
   3, 9,  SIDE_A,  { 7, 73, 73, 0xFF },
   3, 4,  SIDE_B,  { 0, 29, 29, 0xFF },
   3, 5,  SIDE_B,  { 7, 44, 44, 0xFF }
};

const struct IoGroupDelayStruct igCtl_BDX[] = { 

   0, 6,  SIDE_B,  { 46, 46, 46, 0xFF },
   0, 0,  SIDE_B,  { 59, 59, 52, 0xFF },
   0, 0,  SIDE_A,  { 52, 52, 52, 0xFF },
   0, 8,  SIDE_B,  { 39, 39, 39, 0xFF },
   0, 7,  SIDE_B,  { 65, 65, 65, 0xFF },
   0, 1,  SIDE_B,  { 52, 52, 52, 0xFF },
   0, 1,  SIDE_A,  { 65, 65, 59, 0xFF },
   0, 9,  SIDE_B,  { 59, 59, 59, 0xFF },
   0, 2,  SIDE_B,  { 65, 65, 59, 0xFF },
   0, 2,  SIDE_A,  { 52, 52, 52, 0xFF },
   0, 6,  SIDE_A,  { 0, 0, 0, 0xFF },
   0, 7,  SIDE_A,  { 26, 26, 26, 0xFF },
   0, 10,  SIDE_B,  { 33, 33, 33, 0xFF },
   0, 3,  SIDE_B,  { 33, 33, 33, 0xFF },
   0, 3,  SIDE_A,  { 20, 20, 20, 0xFF },
   0, 4,  SIDE_A,  { 65, 65, 65, 0xFF },
   0, 5,  SIDE_A,  { 39, 39, 39, 0xFF },
   0, 8,  SIDE_A,  { 39, 39, 39, 0xFF },
   0, 9,  SIDE_A,  { 7, 7, 0, 0xFF },
   0, 4,  SIDE_B,  { 72, 72, 72, 0xFF },
   0, 5,  SIDE_B,  { 78, 78, 78, 0xFF },
   1, 6,  SIDE_B,  { 72, 72, 65, 0xFF },
   1, 0,  SIDE_B,  { 72, 72, 72, 0xFF },
   1, 0,  SIDE_A,  { 59, 65, 65, 0xFF },
   1, 8,  SIDE_B,  { 85, 85, 85, 0xFF },
   1, 7,  SIDE_B,  { 59, 59, 59, 0xFF },
   1, 1,  SIDE_B,  { 52, 65, 59, 0xFF },
   1, 1,  SIDE_A,  { 46, 52, 52, 0xFF },
   1, 9,  SIDE_B,  { 59, 59, 59, 0xFF },
   1, 2,  SIDE_B,  { 59, 59, 52, 0xFF },
   1, 2,  SIDE_A,  { 46, 52, 52, 0xFF },
   1, 6,  SIDE_A,  { 0, 0, 0, 0xFF },
   1, 7,  SIDE_A,  { 0, 7, 0, 0xFF },
   1, 10,  SIDE_B,  { 65, 65, 65, 0xFF },
   1, 3,  SIDE_B,  { 65, 65, 65, 0xFF },
   1, 3,  SIDE_A,  { 52, 59, 59, 0xFF },
   1, 4,  SIDE_A,  { 65, 65, 65, 0xFF },
   1, 5,  SIDE_A,  { 59, 65, 59, 0xFF },
   1, 8,  SIDE_A,  { 20, 26, 26, 0xFF },
   1, 9,  SIDE_A,  { 7, 7, 7, 0xFF },
   1, 4,  SIDE_B,  { 78, 78, 72, 0xFF },
   1, 5,  SIDE_B,  { 78, 78, 72, 0xFF },
   2, 6,  SIDE_B,  { 39, 13, 13, 0xFF },
   2, 0,  SIDE_B,  { 26, 0, 7, 0xFF },
   2, 0,  SIDE_A,  { 26, 0, 0, 0xFF },
   2, 8,  SIDE_B,  { 78, 59, 65, 0xFF },
   2, 7,  SIDE_B,  { 59, 33, 39, 0xFF },
   2, 1,  SIDE_B,  { 65, 39, 39, 0xFF },
   2, 1,  SIDE_A,  { 65, 46, 46, 0xFF },
   2, 9,  SIDE_B,  { 65, 39, 39, 0xFF },
   2, 2,  SIDE_B,  { 52, 26, 33, 0xFF },
   2, 2,  SIDE_A,  { 52, 26, 26, 0xFF },
   2, 6,  SIDE_A,  { 65, 39, 39, 0xFF },
   2, 7,  SIDE_A,  { 91, 65, 65, 0xFF },
   2, 10,  SIDE_B,  { 59, 33, 39, 0xFF },
   2, 3,  SIDE_B,  { 52, 26, 26, 0xFF },
   2, 3,  SIDE_A,  { 59, 33, 26, 0xFF },
   2, 4,  SIDE_A,  { 0, 72, 72, 0xFF },
   2, 5,  SIDE_A,  { 0, 59, 59, 0xFF },
   2, 8,  SIDE_A,  { 52, 46, 46, 0xFF },
   2, 9,  SIDE_A,  { 65, 39, 39, 0xFF },
   2, 4,  SIDE_B,  { 33, 7, 13, 0xFF },
   2, 5,  SIDE_B,  { 65, 33, 39, 0xFF },
   3, 6,  SIDE_B,  { 33, 33, 33, 0xFF },
   3, 0,  SIDE_B,  { 39, 39, 39, 0xFF },
   3, 0,  SIDE_A,  { 39, 39, 39, 0xFF },
   3, 8,  SIDE_B,  { 46, 46, 52, 0xFF },
   3, 7,  SIDE_B,  { 33, 33, 39, 0xFF },
   3, 1,  SIDE_B,  { 33, 33, 33, 0xFF },
   3, 1,  SIDE_A,  { 46, 39, 39, 0xFF },
   3, 9,  SIDE_B,  { 13, 13, 13, 0xFF },
   3, 2,  SIDE_B,  { 20, 20, 20, 0xFF },
   3, 2,  SIDE_A,  { 20, 13, 13, 0xFF },
   3, 6,  SIDE_A,  { 33, 33, 33, 0xFF },
   3, 7,  SIDE_A,  { 52, 46, 46, 0xFF },
   3, 10,  SIDE_B,  { 39, 39, 46, 0xFF },
   3, 3,  SIDE_B,  { 39, 39, 46, 0xFF },
   3, 3,  SIDE_A,  { 52, 52, 52, 0xFF },
   3, 4,  SIDE_A,  { 78, 72, 72, 0xFF },
   3, 5,  SIDE_A,  { 78, 78, 78, 0xFF },
   3, 8,  SIDE_A,  { 72, 72, 72, 0xFF },
   3, 9,  SIDE_A,  { 59, 59, 59, 0xFF },
   3, 4,  SIDE_B,  { 33, 33, 33, 0xFF },
   3, 5,  SIDE_B,  { 46, 46, 46, 0xFF }
};

struct IoGroupClkDelayStruct { 
  UINT8   ch;                         // Channel 
  UINT8   clk;                        // Clock number (4 clocks per channel) 
  UINT8   delay[HSX_PCKG_TYPE];       // Delay in Pico Seconds HSX 15C 10C 6C 
}; 


const struct IoGroupClkDelayStruct igClkA0[] = { 
  0, 0, {91, 95, 95, 0xFF}, 
  1, 0, {46, 95, 95, 0xFF}, 
  2, 0, {46, 95, 95, 0xFF}, 
  3, 0, {46, 95, 95, 0xFF}, 
  0, 2, {111, 95, 95, 0xFF}, 
  1, 2, {72, 103, 103, 0xFF}, 
  2, 2, {46, 51, 51, 0xFF}, 
  3, 2, {20, 15, 15, 0xFF}, 
  0, 1, {85, 66, 66, 0xFF}, 
  1, 1, {72, 110, 110, 0xFF}, 
  2, 1, {46, 59, 59, 0xFF}, 
  3, 1, {20, 15, 15, 0xFF}, 
  0, 3, {117, 95, 95, 0xFF}, 
  1, 3, {72, 103, 103, 0xFF}, 
  2, 3, {26, 37, 37, 0xFF}, 
  3, 3, {13, 22, 22, 0xFF}, 
};


const struct IoGroupClkDelayStruct igClk[] = { 
  0, 0, {95, 73, 73, 0xFF},
  1, 0, {44, 73, 73, 0xFF},
  2, 0, {73, 73, 73, 0xFF},
  3, 0, {44, 44, 44, 0xFF},
  0, 2, {110, 95, 95, 0xFF}, 
  1, 2, {73, 103, 103, 0xFF}, 
  2, 2, {73, 51, 51, 0xFF}, 
  3, 2, {22, 15, 15, 0xFF}, 
  0, 1, {81, 66, 66, 0xFF}, 
  1, 1, {73, 110, 110, 0xFF}, 
  2, 1, {66, 59, 59, 0xFF}, 
  3, 1, {22, 15, 15, 0xFF}, 
  0, 3, {117, 95, 95, 0xFF}, 
  1, 3, {66, 103, 103, 0xFF}, 
  2, 3, {51, 37, 37, 0xFF}, 
  3, 3, {15, 22, 22, 0xFF}
};


const struct IoGroupClkDelayStruct igClk_BDX[] = { 

  0, 2, {78, 78, 78,  0xFF} ,
  1, 2, {85, 85, 78,  0xFF} ,
  2, 2, {85, 52, 59,  0xFF} ,
  3, 2, {33, 33, 33,  0xFF} ,
  0, 1, {39, 39, 39,  0xFF} ,
  1, 1, {85, 85, 85,  0xFF} ,
  2, 1, {91, 65, 72,  0xFF} ,
  3, 1, {33, 33, 33,  0xFF} ,
  0, 3, {46, 46, 46,  0xFF} ,
  1, 3, {85, 85, 85,  0xFF} ,
  2, 3, {91, 65, 65,  0xFF} ,
  3, 3, {26, 26, 26,  0xFF} ,
  0, 0, {33, 26, 33,  0xFF} ,
  1, 0, {46, 46, 46,  0xFF} ,
  2, 0, {46, 20, 26,  0xFF} ,
  3, 0, {0, 0, 0,  0xFF}
};


const struct IoGroupDelayStruct igCmdA0[] = { 

   0, 0,  SIDE_B,  { 130, 103, 103, 0xFF },
   0, 1,  SIDE_B,  { 124, 110, 110, 0xFF },
   0, 1,  SIDE_A,  { 111, 88, 88, 0xFF },
   0, 0,  SIDE_A,  { 117, 88, 88, 0xFF },
   0, 2,  SIDE_B,  { 72, 103, 103, 0xFF },
   0, 2,  SIDE_A,  { 104, 81, 81, 0xFF },
   1, 0,  SIDE_B,  { 52, 103, 103, 0xFF },
   1, 1,  SIDE_B,  { 52, 110, 110, 0xFF },
   1, 1,  SIDE_A,  { 65, 81, 81, 0xFF },
   1, 0,  SIDE_A,  { 52, 81, 81, 0xFF },
   1, 2,  SIDE_B,  { 59, 103, 103, 0xFF },
   1, 2,  SIDE_A,  { 33, 81, 81, 0xFF },
   2, 0,  SIDE_B,  { 26, 59, 59, 0xFF },
   2, 1,  SIDE_B,  { 33, 44, 44, 0xFF },
   2, 1,  SIDE_A,  { 46, 66, 73, 0xFF },
   2, 0,  SIDE_A,  { 46, 66, 73, 0xFF },
   2, 2,  SIDE_B,  { 0, 51, 51, 0xFF },
   2, 2,  SIDE_A,  { 46, 81, 81, 0xFF },
   3, 0,  SIDE_B,  { 52, 59, 59, 0xFF },
   3, 1,  SIDE_B,  { 52, 51, 51, 0xFF },
   3, 1,  SIDE_A,  { 72, 73, 73, 0xFF },
   3, 0,  SIDE_A,  { 65, 66, 66, 0xFF },
   3, 2,  SIDE_B,  { 39, 51, 51, 0xFF },
   3, 2,  SIDE_A,  { 59, 73, 73, 0xFF }
};


const struct IoGroupDelayStruct igCmd[] = { 

   0, 0,  SIDE_B,  { 139, 110, 110, 0xFF },
   0, 3,  SIDE_B,  { 125, 103, 103, 0xFF },
   0, 4,  SIDE_B,  { 125, 117, 117, 0xFF },
   0, 1,  SIDE_B,  { 132, 110, 110, 0xFF },
   0, 1,  SIDE_A,  { 103, 81, 81, 0xFF },
   0, 0,  SIDE_A,  { 125, 103, 103, 0xFF },
   0, 3,  SIDE_A,  { 110, 73, 73, 0xFF },
   0, 4,  SIDE_A,  { 125, 103, 95, 0xFF },
   0, 2,  SIDE_B,  { 103, 88, 81, 0xFF },
   0, 2,  SIDE_A,  { 110, 88, 88, 0xFF },
   0, 5,  SIDE_B,  { 51, 117, 117, 0xFF },
   0, 5,  SIDE_A,  { 103, 73, 73, 0xFF },
   1, 0,  SIDE_B,  { 22, 103, 103, 0xFF },
   1, 3,  SIDE_B,  { 81, 95, 95, 0xFF },
   1, 4,  SIDE_B,  { 44, 110, 110, 0xFF },
   1, 1,  SIDE_B,  { 59, 103, 103, 0xFF },
   1, 1,  SIDE_A,  { 59, 88, 88, 0xFF },
   1, 0,  SIDE_A,  { 51, 88, 88, 0xFF },
   1, 3,  SIDE_A,  { 51, 81, 81, 0xFF },
   1, 4,  SIDE_A,  { 66, 66, 66, 0xFF },
   1, 2,  SIDE_B,  { 73, 95, 95, 0xFF },
   1, 2,  SIDE_A,  { 44, 73, 73, 0xFF },
   1, 5,  SIDE_B,  { 44, 103, 103, 0xFF },
   1, 5,  SIDE_A,  { 22, 95, 95, 0xFF },
   2, 0,  SIDE_B,  { 44, 51, 51, 0xFF },
   2, 3,  SIDE_B,  { 66, 59, 59, 0xFF },
   2, 4,  SIDE_B,  { 59, 51, 51, 0xFF },
   2, 1,  SIDE_B,  { 59, 44, 44, 0xFF },
   2, 1,  SIDE_A,  { 73, 66, 66, 0xFF },
   2, 0,  SIDE_A,  { 59, 73, 73, 0xFF },
   2, 3,  SIDE_A,  { 81, 66, 66, 0xFF },
   2, 4,  SIDE_A,  { 73, 66, 73, 0xFF },
   2, 2,  SIDE_B,  { 0, 44, 44, 0xFF },
   2, 2,  SIDE_A,  { 95, 73, 73, 0xFF },
   2, 5,  SIDE_B,  { 59, 51, 51, 0xFF },
   2, 5,  SIDE_A,  { 51, 88, 88, 0xFF },
   3, 0,  SIDE_B,  { 51, 59, 59, 0xFF },
   3, 3,  SIDE_B,  { 59, 59, 66, 0xFF },
   3, 4,  SIDE_B,  { 44, 51, 51, 0xFF },
   3, 1,  SIDE_B,  { 59, 44, 44, 0xFF },
   3, 1,  SIDE_A,  { 73, 66, 66, 0xFF },
   3, 0,  SIDE_A,  { 66, 59, 59, 0xFF },
   3, 3,  SIDE_A,  { 59, 66, 66, 0xFF },
   3, 4,  SIDE_A,  { 73, 81, 81, 0xFF },
   3, 2,  SIDE_B,  { 7, 37, 37, 0xFF },
   3, 2,  SIDE_A,  { 66, 81, 81, 0xFF },
   3, 5,  SIDE_B,  { 66, 66, 66, 0xFF },
   3, 5,  SIDE_A,  { 51, 66, 66, 0xFF }
};


const struct IoGroupDelayStruct igCmd_BDX[] = { 

   0, 0,  SIDE_B,  { 59, 26, 52, 0xFF },
   0, 3,  SIDE_B,  { 39, 33, 33, 0xFF },
   0, 4,  SIDE_B,  { 72, 72, 72, 0xFF },
   0, 1,  SIDE_B,  { 46, 46, 46, 0xFF },
   0, 1,  SIDE_A,  { 65, 65, 59, 0xFF },
   0, 0,  SIDE_A,  { 72, 72, 72, 0xFF },
   0, 3,  SIDE_A,  { 39, 39, 39, 0xFF },
   0, 4,  SIDE_A,  { 39, 39, 39, 0xFF },
   0, 2,  SIDE_B,  { 33, 33, 33, 0xFF },
   0, 2,  SIDE_A,  { 13, 13, 13, 0xFF },
   0, 5,  SIDE_B,  { 33, 26, 26, 0xFF },
   0, 5,  SIDE_A,  { 78, 78, 78, 0xFF },
   0, 6,  SIDE_A,  { 33, 33, 33, 0xFF },
   1, 0,  SIDE_B,  { 91, 91, 91, 0xFF },
   1, 3,  SIDE_B,  { 91, 91, 91, 0xFF },
   1, 4,  SIDE_B,  { 91, 85, 85, 0xFF },
   1, 1,  SIDE_B,  { 85, 85, 85, 0xFF },
   1, 1,  SIDE_A,  { 65, 65, 65, 0xFF },
   1, 0,  SIDE_A,  { 85, 85, 85, 0xFF },
   1, 3,  SIDE_A,  { 78, 78, 78, 0xFF },
   1, 4,  SIDE_A,  { 78, 78, 78, 0xFF },
   1, 2,  SIDE_B,  { 78, 78, 78, 0xFF },
   1, 2,  SIDE_A,  { 52, 46, 46, 0xFF },
   1, 5,  SIDE_B,  { 91, 91, 91, 0xFF },
   1, 5,  SIDE_A,  { 85, 85, 85, 0xFF },
   1, 6,  SIDE_A,  { 7, 7, 7, 0xFF },
   2, 0,  SIDE_B,  { 72, 39, 39, 0xFF },
   2, 3,  SIDE_B,  { 59, 33, 33, 0xFF },
   2, 4,  SIDE_B,  { 85, 59, 65, 0xFF },
   2, 1,  SIDE_B,  { 91, 65, 72, 0xFF },
   2, 1,  SIDE_A,  { 91, 72, 72, 0xFF },
   2, 0,  SIDE_A,  { 91, 65, 72, 0xFF },
   2, 3,  SIDE_A,  { 85, 65, 72, 0xFF },
   2, 4,  SIDE_A,  { 85, 85, 91, 0xFF },
   2, 2,  SIDE_B,  { 52, 26, 33, 0xFF },
   2, 2,  SIDE_A,  { 91, 59, 65, 0xFF },
   2, 5,  SIDE_B,  { 52, 26, 33, 0xFF },
   2, 5,  SIDE_A,  { 85, 59, 65, 0xFF },
   2, 6,  SIDE_A,  { 91, 65, 65, 0xFF },
   3, 0,  SIDE_B,  { 72, 72, 72, 0xFF },
   3, 3,  SIDE_B,  { 59, 65, 65, 0xFF },
   3, 4,  SIDE_B,  { 65, 65, 65, 0xFF },
   3, 1,  SIDE_B,  { 65, 65, 65, 0xFF },
   3, 1,  SIDE_A,  { 65, 65, 65, 0xFF },
   3, 0,  SIDE_A,  { 72, 72, 72, 0xFF },
   3, 3,  SIDE_A,  { 78, 78, 78, 0xFF },
   3, 4,  SIDE_A,  { 78, 78, 78, 0xFF },
   3, 2,  SIDE_B,  { 20, 26, 20, 0xFF },
   3, 2,  SIDE_A,  { 72, 72, 72, 0xFF },
   3, 5,  SIDE_B,  { 78, 78, 78, 0xFF },
   3, 5,  SIDE_A,  { 72, 72, 72, 0xFF },
   3, 6,  SIDE_A,  { 72, 72, 72, 0xFF }
};

#endif  // _CmdCtlDelay_h
