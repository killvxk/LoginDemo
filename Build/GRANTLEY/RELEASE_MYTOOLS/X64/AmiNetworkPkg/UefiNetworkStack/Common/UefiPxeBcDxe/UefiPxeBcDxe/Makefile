#
# DO NOT EDIT
# This file is auto-generated by build utility
#
# Module Name:
#
#   Makefile
#
# Abstract:
#
#   Auto-generated makefile for building modules, libraries or platform
#
    

#
# Platform Macro Definition
#
PLATFORM_NAME = GRANTLEY
PLATFORM_GUID = A361BEE1-AEB7-4921-8505-A323899516E6
PLATFORM_VERSION = 1
PLATFORM_RELATIVE_DIR = Build
PLATFORM_DIR = $(WORKSPACE)\Build
PLATFORM_OUTPUT_DIR = Build\GRANTLEY

#
# Module Macro Definition
#
MODULE_NAME = UefiPxeBcDxe
MODULE_GUID = B95E9FDA-26DE-48d2-8807-1F9107AC5E3A
MODULE_NAME_GUID = UefiPxeBcDxe
MODULE_VERSION = 1.0
MODULE_TYPE = UEFI_DRIVER
MODULE_FILE = UefiPxeBcDxe.inf
MODULE_FILE_BASE_NAME = UefiPxeBcDxe
BASE_NAME = $(MODULE_NAME)
MODULE_RELATIVE_DIR = AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe
PACKAGE_RELATIVE_DIR = UefiNetworkStack\Common\UefiPxeBcDxe
MODULE_DIR = $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe

MODULE_ENTRY_POINT = PxeBcDriverEntryPoint
ARCH_ENTRY_POINT = PxeBcDriverEntryPoint
IMAGE_ENTRY_POINT = _ModuleEntryPoint

INF_VERSION = 0x00010005
BASE_NAME = UefiPxeBcDxe
FILE_GUID = B95E9FDA-26DE-48d2-8807-1F9107AC5E3A
MODULE_TYPE = UEFI_DRIVER
VERSION_STRING = 1.0

#
# Build Configuration Macro Definition
#
ARCH = X64
TOOLCHAIN = MYTOOLS
TOOLCHAIN_TAG = MYTOOLS
TARGET = RELEASE

#
# Build Directory Macro Definition
#
# PLATFORM_BUILD_DIR = c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS
BUILD_DIR = c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS
BIN_DIR = $(BUILD_DIR)\X64
LIB_DIR = $(BIN_DIR)
MODULE_BUILD_DIR = c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe
OUTPUT_DIR = c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\OUTPUT
DEBUG_DIR = c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\DEBUG
DEST_DIR_OUTPUT = $(OUTPUT_DIR)
DEST_DIR_DEBUG = $(DEBUG_DIR)

#
# Shell Command Macro
#
RD = rmdir /s /q
RM = del /f /q
MD = mkdir
CP = copy /y
MV = move /y


#
# Tools definitions specific to this module
#
SYMRENAME =  echo
SYMRENAME_FLAGS = Symbol renaming not needed for

CBINDLINK_FLAGS = /nologo /NODEFAULTLIB /NOENTRY /DLL /ALIGN:16

ASLDLINK =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\amd64\link.exe
ASLDLINK_FLAGS = /nologo /NODEFAULTLIB /ENTRY:ReferenceAcpiTable /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER

DT =  C:/Aptio_5.x_TOOLS_29/Tools/iasl5

VFR =  VfrCompile
VFR_FLAGS = -n

PP =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\amd64\cl.exe
PP_FLAGS = /nologo /E /TC /FIAutoGen.h

LZMAF86 =  LzmaF86Compress
LZMAF86_GUID =  D42AE6BD-1352-4bfb-909A-CA72A6EAE889

GENFW =  GenFw
GENFW_FLAGS = 

DLINK =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\amd64\link.exe
DLINK_FLAGS = /Machine:AMD64 /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D /SECTION:.pdata,D /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO /BASE:0 /DRIVER /MERGE:.data=.text /MERGE:.rdata=.text /IGNORE:4254

SLINK =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\amd64\link.exe /LIB
SLINK_FLAGS = /nologo /LTCG

ASM =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\amd64\ml64.exe
ASM_FLAGS = /nologo /c /WX /W3 /Cx /Zd

ASL =  C:/Aptio_5.x_TOOLS_29/Tools/iasl5 #AptioV server override
ASL_FLAGS = 
ASL_OUTFLAGS =  -cr -p #AptioV server override: Flag added to skip resource descriptor checks

TIANO =  TianoCompress
TIANO_GUID =  A31280AD-481E-41B6-95E8-127F4C984779

CC =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\amd64\cl.exe
CC_FLAGS = -DEFIx64 -DEFIX64 /nologo /c /WX /GS- /W3 /Gs32768 /Gy /D UNICODE /GL /FIAutoGen.h /EHs-c- /GR- /GF -D PI_SPECIFICATION_VERSION=0x1001E -D EFI_SPECIFICATION_VERSION=0x20028 /wd4819 /O1ib2 -DMDEPKG_NDEBUG /D CRB_FLAG /D VFR_CRB_FLAG /D EXTERNAL_PACKAGE /D SSA_FLAG /D SSA_LOADER_FLAG /D HSX_HOST /D BDX_HOST /D LT_FLAG /DTRAD_FLAG=1 /DPCH_SERVER_BIOS_FLAG=1 /DPCH_SERVER_BIOS_FLAG=1 /DME_SUPPORT_FLAG=1 /DSPS_SUPPORT=1 /DPFAT_FLAG=1 /D AMI_PAM_SAVE_RESTORE_SWSMI_VALUE=0xBE /D AMI_PAM_SAVE_CMD=0xE0 /D AMI_PAM_RESTORE_CMD=0xE1 /DUSB_PRECONDITION_ENABLE_FLAG=1 /DWDT_SUPPORT_ENABLED=1

VFRPP =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\amd64\cl.exe
VFRPP_FLAGS = /nologo /E /TC /DVFRCOMPILE /FI$(MODULE_NAME)StrDefs.h -D PI_SPECIFICATION_VERSION=0x1001E -D EFI_SPECIFICATION_VERSION=0x20028 /wd4819 /O1ib2 -DMDEPKG_NDEBUG /D CRB_FLAG /D VFR_CRB_FLAG /D EXTERNAL_PACKAGE /D SSA_FLAG /D SSA_LOADER_FLAG /D HSX_HOST /D BDX_HOST /D LT_FLAG /DTRAD_FLAG=1 /DPCH_SERVER_BIOS_FLAG=1 /DPCH_SERVER_BIOS_FLAG=1 /DME_SUPPORT_FLAG=1 /DSPS_SUPPORT=1 /DPFAT_FLAG=1 /D AMI_PAM_SAVE_RESTORE_SWSMI_VALUE=0xBE /D AMI_PAM_SAVE_CMD=0xE0 /D AMI_PAM_RESTORE_CMD=0xE1 /DUSB_PRECONDITION_ENABLE_FLAG=1 /DWDT_SUPPORT_ENABLED=1

LZMA =  LzmaCompress
LZMA_GUID =  EE4E5898-3914-4259-9D6E-DC7BD79403CF

ASM16 =  ml.exe

ASLCC =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\amd64\cl.exe
ASLCC_FLAGS = /nologo /c /TC /FIAutoGen.h /Dmain=ReferenceAcpiTable

CBINCC_FLAGS = /nologo /c /TC /Os /FIAutoGen.h

MAKE =  nmake.exe

OPTROM =  EfiRom
OPTROM_FLAGS = -e

NASMB_FLAGS = -f bin

VPDTOOL =  BPDG
VPDTOOL_GUID =  8C3D856A-9BE6-468E-850A-24F7A8D38E08

ASLPP =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\amd64\cl.exe
ASLPP_FLAGS = /nologo /EP /TC

OBJCOPY =  echo
OBJCOPY_FLAGS = objcopy not needed for

APP =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\amd64\cl.exe
APP_FLAGS = /nologo /E /TC

ASMLINK =  link16.exe
ASMLINK_FLAGS = /nologo /tiny

NASM =  nasm
NASM_FLAGS = -Ox -f win64


MAKE_FILE = $(MODULE_BUILD_DIR)\Makefile

#
# Build Macro
#
OBJECT_FILES =  \
    $(OUTPUT_DIR)\ComponentName.obj \
    $(OUTPUT_DIR)\PxeBcDriver.obj \
    $(OUTPUT_DIR)\PxeBcImpl.obj \
    $(OUTPUT_DIR)\PxeBcBoot.obj \
    $(OUTPUT_DIR)\PxeBcDhcp6.obj \
    $(OUTPUT_DIR)\PxeBcDhcp4.obj \
    $(OUTPUT_DIR)\PxeBcMtftp.obj \
    $(OUTPUT_DIR)\PxeBcSupport.obj \
    $(OUTPUT_DIR)\AutoGen.obj

STATIC_LIBRARY_FILES =  \
    $(BIN_DIR)\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib\OUTPUT\UefiBootServicesTableLib.lib \
    $(BIN_DIR)\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib\OUTPUT\UefiRuntimeServicesTableLib.lib \
    $(BIN_DIR)\MdePkg\Library\DxePcdLib\DxePcdLib\OUTPUT\DxePcdLib.lib \
    $(BIN_DIR)\AmiModulePkg\Library\DxeAmiDebugLib\DxeAmiDebugLib\OUTPUT\DxeAmiDebugLib.lib \
    $(BIN_DIR)\MdePkg\Library\BaseMemoryLibRepStr\BaseMemoryLibRepStr\OUTPUT\BaseMemoryLibRepStr.lib \
    $(BIN_DIR)\MdePkg\Library\BaseLib\BaseLib\OUTPUT\BaseLib.lib \
    $(BIN_DIR)\MdePkg\Library\BasePrintLib\BasePrintLib\OUTPUT\BasePrintLib.lib \
    $(BIN_DIR)\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib\OUTPUT\UefiMemoryAllocationLib.lib \
    $(BIN_DIR)\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib\OUTPUT\UefiDevicePathLib.lib \
    $(BIN_DIR)\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib\OUTPUT\UefiHiiServicesLib.lib \
    $(BIN_DIR)\MdePkg\Library\UefiLib\UefiLib\OUTPUT\UefiLib.lib \
    $(BIN_DIR)\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib\OUTPUT\UefiHiiLib.lib \
    $(BIN_DIR)\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint\OUTPUT\UefiDriverEntryPoint.lib \
    $(BIN_DIR)\MdeModulePkg\Library\DxeNetLib\DxeNetLib\OUTPUT\DxeNetLib.lib \
    $(BIN_DIR)\MdeModulePkg\Library\DxeDpcLib\DxeDpcLib\OUTPUT\DxeDpcLib.lib \
    $(BIN_DIR)\AmiNetworkPkg\Library\AmiNetworkPostManagerLib\AmiNetworkPostManagerLib\OUTPUT\AmiNetworkPostManagerLib.lib \
    $(OUTPUT_DIR)\UefiPxeBcDxe.lib

INC =  \
    /I$(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe \
    /I$(DEBUG_DIR) \
    /I$(WORKSPACE)\MdePkg \
    /I$(WORKSPACE)\MdePkg\Include \
    /I$(WORKSPACE)\MdePkg\Include\X64 \
    /I$(WORKSPACE)\MdeModulePkg \
    /I$(WORKSPACE)\MdeModulePkg\Include \
    /I$(WORKSPACE)\AmiNetworkPkg \
    /I$(WORKSPACE)\AmiNetworkPkg\Include \
    /I$(WORKSPACE)\AmiNetworkPkg\Include\Protocol \
    /I$(WORKSPACE)\AmiNetworkPkg\Library \
    /I$(WORKSPACE)\AmiNetworkPkg\Include\Guid

OBJECT_FILES_LIST = c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\OUTPUT\object_files.lst
STATIC_LIBRARY_FILES_LIST = c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\OUTPUT\static_library_files.lst


COMMON_DEPS = $(WORKSPACE)\MdePkg\Include\Uefi\UefiBaseType.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\PxeBaseCodeCallBack.h \
              $(WORKSPACE)\MdePkg\Include\Uefi\UefiMultiPhase.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\Ip6.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DriverConfiguration2.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\Dhcp6.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\Udp4.h \
              $(DEBUG_DIR)\AutoGen.h \
              $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcDhcp4.h \
              $(WORKSPACE)\MdePkg\Include\Guid\HiiFormMapMethodGuid.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\SimpleNetwork.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\Udp6.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\GraphicsOutput.h \
              $(WORKSPACE)\MdePkg\Include\Library\DebugLib.h \
              $(WORKSPACE)\MdePkg\Include\Library\UefiBootServicesTableLib.h \
              $(WORKSPACE)\MdePkg\Include\Uefi\UefiGpt.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\ComponentName.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\Arp.h \
              $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcDriver.h \
              $(WORKSPACE)\MdePkg\Include\Library\BaseMemoryLib.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\NetworkInterfaceIdentifier.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DevicePath.h \
              $(WORKSPACE)\MdePkg\Include\Uefi\UefiSpec.h \
              $(WORKSPACE)\MdePkg\Include\Uefi\UefiInternalFormRepresentation.h \
              $(WORKSPACE)\AmiNetworkPkg\Include\Library\AmiNetworkPostManagerLib.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\PxeBaseCode.h \
              $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcSupport.h \
              $(WORKSPACE)\MdePkg\Include\Uefi\UefiPxe.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\Mtftp6.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DriverDiagnostics.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\ComponentName2.h \
              $(WORKSPACE)\MdePkg\Include\Library\BaseLib.h \
              $(WORKSPACE)\MdePkg\Include\Library\DevicePathLib.h \
              $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcBoot.h \
              $(WORKSPACE)\MdePkg\Include\X64\ProcessorBind.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\ManagedNetwork.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DriverConfiguration.h \
              $(WORKSPACE)\MdePkg\Include\Guid\PcAnsi.h \
              $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcMtftp.h \
              $(WORKSPACE)\MdeModulePkg\Include\Library\DpcLib.h \
              $(WORKSPACE)\MdePkg\Include\Uefi.h \
              $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcImpl.h \
              $(WORKSPACE)\MdePkg\Include\Library\UefiRuntimeServicesTableLib.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\LoadFile.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\SimpleTextOut.h \
              $(WORKSPACE)\MdePkg\Include\Library\UefiDriverEntryPoint.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\SimpleTextIn.h \
              $(WORKSPACE)\MdePkg\Include\Library\MemoryAllocationLib.h \
              $(WORKSPACE)\MdePkg\Include\Library\PcdLib.h \
              $(WORKSPACE)\MdeModulePkg\Include\Protocol\Dpc.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\Dhcp4.h \
              $(WORKSPACE)\MdePkg\Include\Guid\WinCertificate.h \
              $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcDhcp6.h \
              $(WORKSPACE)\MdePkg\Include\Base.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DriverBinding.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\Ip6Config.h \
              $(WORKSPACE)\MdePkg\Include\Guid\SmBios.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\Mtftp4.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\ServiceBinding.h \
              $(WORKSPACE)\MdePkg\Include\Library\UefiLib.h \
              $(WORKSPACE)\MdeModulePkg\Include\Library\NetLib.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\SimpleTextInEx.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\SmBios.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DriverDiagnostics2.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\Ip4.h \
              $(WORKSPACE)\AmiNetworkPkg\Include\Guid\NetworkStackSetup.h \
              

#
# Overridable Target Macro Definitions
#
FORCE_REBUILD = force_build
INIT_TARGET = init
PCH_TARGET =
BC_TARGET = 
CODA_TARGET = c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\DEBUG\UefiPxeBcDxe.efi \
              

#
# Default target, which will build dependent libraries in addition to source files
#

all: mbuild


#
# Target used when called from platform makefile, which will bypass the build of dependent libraries
#

pbuild: $(INIT_TARGET) $(BC_TARGET) $(PCH_TARGET) $(CODA_TARGET)

#
# ModuleTarget
#

mbuild: $(INIT_TARGET) $(BC_TARGET) gen_libs $(PCH_TARGET) $(CODA_TARGET)

#
# Build Target used in multi-thread build mode, which will bypass the init and gen_libs targets
#

tbuild: $(BC_TARGET) $(PCH_TARGET) $(CODA_TARGET)

#
# Phony target which is used to force executing commands for a target
#
force_build:
	-@

#
# Target to update the FD
#

fds: mbuild gen_fds

#
# Initialization target: print build information and create necessary directories
#
init: info dirs

info:
	-@echo Building ... $(MODULE_DIR)\$(MODULE_FILE) [$(ARCH)]

dirs:
	-@if not exist $(DEBUG_DIR) $(MD) $(DEBUG_DIR)
	-@if not exist $(OUTPUT_DIR) $(MD) $(OUTPUT_DIR)


strdefs:
	-@$(CP) $(DEBUG_DIR)\AutoGen.h $(DEBUG_DIR)\$(MODULE_NAME)StrDefs.h

#
# GenLibsTarget
#
gen_libs:
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\DxePcdLib\DxePcdLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\AmiModulePkg\Library\DxeAmiDebugLib\DxeAmiDebugLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BaseMemoryLibRepStr\BaseMemoryLibRepStr\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BaseLib\BaseLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BasePrintLib\BasePrintLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiLib\UefiLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdeModulePkg\Library\DxeNetLib\DxeNetLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdeModulePkg\Library\DxeDpcLib\DxeDpcLib\Makefile
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\AmiNetworkPkg\Library\AmiNetworkPostManagerLib\AmiNetworkPostManagerLib\Makefile
	@cd $(MODULE_BUILD_DIR)

#
# Build Flash Device Image
#
gen_fds:
	@"$(MAKE)" $(MAKE_FLAGS) -f $(BUILD_DIR)\Makefile fds
	@cd $(MODULE_BUILD_DIR)

#
# Individual Object Build Targets
#
$(DEBUG_DIR)\UefiPxeBcDxe.efi : $(DEBUG_DIR)\UefiPxeBcDxe.dll
	"$(GENFW)" -e $(MODULE_TYPE) -o c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\DEBUG\UefiPxeBcDxe.efi c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\DEBUG\UefiPxeBcDxe.dll $(GENFW_FLAGS)
	$(CP) c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\DEBUG\UefiPxeBcDxe.efi $(OUTPUT_DIR)
	$(CP) c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\DEBUG\UefiPxeBcDxe.efi $(BIN_DIR)
	-$(CP) $(DEBUG_DIR)\*.map $(OUTPUT_DIR)
	-$(CP) $(DEBUG_DIR)\*.pdb $(OUTPUT_DIR)

$(OUTPUT_DIR)\UefiPxeBcDxe.lib : $(OBJECT_FILES)
	"$(SLINK)" $(SLINK_FLAGS) /OUT:c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\OUTPUT\UefiPxeBcDxe.lib @$(OBJECT_FILES_LIST)

$(DEBUG_DIR)\UefiPxeBcDxe.dll : $(MAKE_FILE)
$(DEBUG_DIR)\UefiPxeBcDxe.dll : $(STATIC_LIBRARY_FILES)
	"$(DLINK)" /OUT:c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\DEBUG\UefiPxeBcDxe.dll $(DLINK_FLAGS) $(DLINK_SPATH) @$(STATIC_LIBRARY_FILES_LIST)

$(OUTPUT_DIR)\PxeBcImpl.obj : $(MAKE_FILE)
$(OUTPUT_DIR)\PxeBcImpl.obj : $(COMMON_DEPS)
$(OUTPUT_DIR)\PxeBcImpl.obj : $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcImpl.c
	"$(CC)" /Foc:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\OUTPUT\.\PxeBcImpl.obj $(CC_FLAGS) -DDXE_BUILD $(INC) c:\1218_alibaba\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcImpl.c

$(OUTPUT_DIR)\PxeBcDhcp6.obj : $(MAKE_FILE)
$(OUTPUT_DIR)\PxeBcDhcp6.obj : $(COMMON_DEPS)
$(OUTPUT_DIR)\PxeBcDhcp6.obj : $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcDhcp6.c
	"$(CC)" /Foc:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\OUTPUT\.\PxeBcDhcp6.obj $(CC_FLAGS) -DDXE_BUILD $(INC) c:\1218_alibaba\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcDhcp6.c

$(OUTPUT_DIR)\PxeBcMtftp.obj : $(MAKE_FILE)
$(OUTPUT_DIR)\PxeBcMtftp.obj : $(COMMON_DEPS)
$(OUTPUT_DIR)\PxeBcMtftp.obj : $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcMtftp.c
	"$(CC)" /Foc:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\OUTPUT\.\PxeBcMtftp.obj $(CC_FLAGS) -DDXE_BUILD $(INC) c:\1218_alibaba\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcMtftp.c

$(OUTPUT_DIR)\ComponentName.obj : $(MAKE_FILE)
$(OUTPUT_DIR)\ComponentName.obj : $(COMMON_DEPS)
$(OUTPUT_DIR)\ComponentName.obj : $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\ComponentName.c
	"$(CC)" /Foc:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\OUTPUT\.\ComponentName.obj $(CC_FLAGS) -DDXE_BUILD $(INC) c:\1218_alibaba\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\ComponentName.c

$(OUTPUT_DIR)\AutoGen.obj : $(MAKE_FILE)
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Uefi\UefiBaseType.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Uefi\UefiMultiPhase.h
$(OUTPUT_DIR)\AutoGen.obj : $(DEBUG_DIR)\AutoGen.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Library\BaseLib.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Library\DebugLib.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Library\UefiBootServicesTableLib.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Uefi\UefiGpt.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Protocol\SimpleTextOut.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Protocol\DevicePath.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Uefi\UefiSpec.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Uefi\UefiInternalFormRepresentation.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Uefi\UefiPxe.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Guid\HiiFormMapMethodGuid.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\X64\ProcessorBind.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Guid\PcAnsi.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Uefi.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Library\UefiDriverEntryPoint.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Protocol\SimpleTextIn.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Library\PcdLib.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Guid\WinCertificate.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Base.h
$(OUTPUT_DIR)\AutoGen.obj : $(WORKSPACE)\MdePkg\Include\Protocol\SimpleTextInEx.h
$(OUTPUT_DIR)\AutoGen.obj : $(DEBUG_DIR)\AutoGen.c
	"$(CC)" /Foc:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\OUTPUT\.\AutoGen.obj $(CC_FLAGS) -DDXE_BUILD $(INC) c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\DEBUG\AutoGen.c

$(OUTPUT_DIR)\PxeBcSupport.obj : $(MAKE_FILE)
$(OUTPUT_DIR)\PxeBcSupport.obj : $(COMMON_DEPS)
$(OUTPUT_DIR)\PxeBcSupport.obj : $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcSupport.c
	"$(CC)" /Foc:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\OUTPUT\.\PxeBcSupport.obj $(CC_FLAGS) -DDXE_BUILD $(INC) c:\1218_alibaba\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcSupport.c

$(OUTPUT_DIR)\PxeBcBoot.obj : $(MAKE_FILE)
$(OUTPUT_DIR)\PxeBcBoot.obj : $(COMMON_DEPS)
$(OUTPUT_DIR)\PxeBcBoot.obj : $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcBoot.c
	"$(CC)" /Foc:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\OUTPUT\.\PxeBcBoot.obj $(CC_FLAGS) -DDXE_BUILD $(INC) c:\1218_alibaba\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcBoot.c

$(OUTPUT_DIR)\PxeBcDhcp4.obj : $(MAKE_FILE)
$(OUTPUT_DIR)\PxeBcDhcp4.obj : $(COMMON_DEPS)
$(OUTPUT_DIR)\PxeBcDhcp4.obj : $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcDhcp4.c
	"$(CC)" /Foc:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\OUTPUT\.\PxeBcDhcp4.obj $(CC_FLAGS) -DDXE_BUILD $(INC) c:\1218_alibaba\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcDhcp4.c

$(OUTPUT_DIR)\PxeBcDriver.obj : $(MAKE_FILE)
$(OUTPUT_DIR)\PxeBcDriver.obj : $(COMMON_DEPS)
$(OUTPUT_DIR)\PxeBcDriver.obj : $(WORKSPACE)\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcDriver.c
	"$(CC)" /Foc:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\X64\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\UefiPxeBcDxe\OUTPUT\.\PxeBcDriver.obj $(CC_FLAGS) -DDXE_BUILD $(INC) c:\1218_alibaba\AmiNetworkPkg\UefiNetworkStack\Common\UefiPxeBcDxe\PxeBcDriver.c



#
# clean all intermediate files
#
clean:
	if exist $(OUTPUT_DIR) $(RD) $(OUTPUT_DIR)
	

#
# clean all generated files
#
cleanall:
	if exist $(DEBUG_DIR) $(RD) $(DEBUG_DIR)
	if exist $(OUTPUT_DIR) $(RD) $(OUTPUT_DIR)
	$(RM) *.pdb *.idb > NUL 2>&1
	$(RM) $(BIN_DIR)\$(MODULE_NAME).efi

#
# clean all dependent libraries built
#
cleanlib:
	-@if exist $(BIN_DIR)\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiBootServicesTableLib\UefiBootServicesTableLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiRuntimeServicesTableLib\UefiRuntimeServicesTableLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\DxePcdLib\DxePcdLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\DxePcdLib\DxePcdLib\Makefile cleanall
	-@if exist $(BIN_DIR)\AmiModulePkg\Library\DxeAmiDebugLib\DxeAmiDebugLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\AmiModulePkg\Library\DxeAmiDebugLib\DxeAmiDebugLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\BaseMemoryLibRepStr\BaseMemoryLibRepStr\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BaseMemoryLibRepStr\BaseMemoryLibRepStr\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\BaseLib\BaseLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BaseLib\BaseLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\BasePrintLib\BasePrintLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\BasePrintLib\BasePrintLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiMemoryAllocationLib\UefiMemoryAllocationLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiDevicePathLib\UefiDevicePathLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdeModulePkg\Library\UefiHiiServicesLib\UefiHiiServicesLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\UefiLib\UefiLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiLib\UefiLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdeModulePkg\Library\UefiHiiLib\UefiHiiLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdePkg\Library\UefiDriverEntryPoint\UefiDriverEntryPoint\Makefile cleanall
	-@if exist $(BIN_DIR)\MdeModulePkg\Library\DxeNetLib\DxeNetLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdeModulePkg\Library\DxeNetLib\DxeNetLib\Makefile cleanall
	-@if exist $(BIN_DIR)\MdeModulePkg\Library\DxeDpcLib\DxeDpcLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\MdeModulePkg\Library\DxeDpcLib\DxeDpcLib\Makefile cleanall
	-@if exist $(BIN_DIR)\AmiNetworkPkg\Library\AmiNetworkPostManagerLib\AmiNetworkPostManagerLib\Makefile "$(MAKE)" $(MAKE_FLAGS) -f $(BIN_DIR)\AmiNetworkPkg\Library\AmiNetworkPostManagerLib\AmiNetworkPostManagerLib\Makefile cleanall
	@cd $(MODULE_BUILD_DIR)

