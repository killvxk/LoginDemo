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
MODULE_NAME = PeiPcdLib
MODULE_GUID = 9dbf6f25-0da2-4a1d-8e12-e78de6ab4d0e
MODULE_NAME_GUID = PeiPcdLib
MODULE_VERSION = 1.0
MODULE_TYPE = PEIM
MODULE_FILE = PeiPcdLib.inf
MODULE_FILE_BASE_NAME = PeiPcdLib
BASE_NAME = $(MODULE_NAME)
MODULE_RELATIVE_DIR = MdePkg\Library\PeiPcdLib
PACKAGE_RELATIVE_DIR = Library\PeiPcdLib
MODULE_DIR = $(WORKSPACE)\MdePkg\Library\PeiPcdLib

MODULE_ENTRY_POINT = _ModuleEntryPoint
ARCH_ENTRY_POINT = _ModuleEntryPoint
IMAGE_ENTRY_POINT = _ModuleEntryPoint

INF_VERSION = 0x00010005
BASE_NAME = PeiPcdLib
FILE_GUID = 9dbf6f25-0da2-4a1d-8e12-e78de6ab4d0e
MODULE_TYPE = PEIM
VERSION_STRING = 1.0

#
# Build Configuration Macro Definition
#
ARCH = IA32
TOOLCHAIN = MYTOOLS
TOOLCHAIN_TAG = MYTOOLS
TARGET = RELEASE

#
# Build Directory Macro Definition
#
# PLATFORM_BUILD_DIR = c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS
BUILD_DIR = c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS
BIN_DIR = $(BUILD_DIR)\IA32
LIB_DIR = $(BIN_DIR)
MODULE_BUILD_DIR = c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\IA32\MdePkg\Library\PeiPcdLib\PeiPcdLib
OUTPUT_DIR = c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\IA32\MdePkg\Library\PeiPcdLib\PeiPcdLib\OUTPUT
DEBUG_DIR = c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\IA32\MdePkg\Library\PeiPcdLib\PeiPcdLib\DEBUG
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

ASLDLINK =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\x86\link.exe
ASLDLINK_FLAGS = /nologo /NODEFAULTLIB /ENTRY:ReferenceAcpiTable /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER

DT =  C:/Aptio_5.x_TOOLS_29/Tools/iasl5

VFR =  VfrCompile
VFR_FLAGS = -n

PP =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\x86\cl.exe
PP_FLAGS = /nologo /E /TC /FIAutoGen.h

LZMAF86 =  LzmaF86Compress
LZMAF86_GUID =  D42AE6BD-1352-4bfb-909A-CA72A6EAE889

GENFW =  GenFw
GENFW_FLAGS = 

DLINK =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\x86\link.exe
DLINK_FLAGS = /MACHINE:I386 /NOLOGO /NODEFAULTLIB /IGNORE:4001 /OPT:REF /OPT:ICF=10 /MAP /ALIGN:32 /SECTION:.xdata,D /SECTION:.pdata,D /LTCG /DLL /ENTRY:$(IMAGE_ENTRY_POINT) /SUBSYSTEM:EFI_BOOT_SERVICE_DRIVER /SAFESEH:NO /BASE:0 /DRIVER /MERGE:.data=.text /MERGE:.rdata=.text /IGNORE:4254 /PDB:$(DEBUG_DIR)/$(BASE_NAME).pdb

SLINK =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\x86\link.exe /LIB
SLINK_FLAGS = /nologo /LTCG

ASM =  ml.exe
ASM_FLAGS = /nologo /c /WX /W3 /Cx /Zd /coff

ASL =  C:/Aptio_5.x_TOOLS_29/Tools/iasl5 #AptioV server override
ASL_FLAGS = 
ASL_OUTFLAGS =  -cr -p #AptioV server override: Flag added to skip resource descriptor checks

TIANO =  TianoCompress
TIANO_GUID =  A31280AD-481E-41B6-95E8-127F4C984779

CC =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\x86\cl.exe
CC_FLAGS = /nologo /c /WX /GS- /W3 /Gs32768 /Gy /D UNICODE /GL /FIAutoGen.h /EHs-c- /GR- /GF -D PI_SPECIFICATION_VERSION=0x1001E -D EFI_SPECIFICATION_VERSION=0x20028 /wd4819 /O1ib2 -DMDEPKG_NDEBUG /D CRB_FLAG /D VFR_CRB_FLAG /D EXTERNAL_PACKAGE /D SSA_FLAG /D SSA_LOADER_FLAG /D HSX_HOST /D BDX_HOST /D LT_FLAG /DTRAD_FLAG=1 /DPCH_SERVER_BIOS_FLAG=1 /DPCH_SERVER_BIOS_FLAG=1 /DME_SUPPORT_FLAG=1 /DSPS_SUPPORT=1 /DPFAT_FLAG=1 /D AMI_PAM_SAVE_RESTORE_SWSMI_VALUE=0xBE /D AMI_PAM_SAVE_CMD=0xE0 /D AMI_PAM_RESTORE_CMD=0xE1 /DUSB_PRECONDITION_ENABLE_FLAG=1 /DWDT_SUPPORT_ENABLED=1

VFRPP =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\x86\cl.exe
VFRPP_FLAGS = /nologo /E /TC /DVFRCOMPILE /FI$(MODULE_NAME)StrDefs.h -D PI_SPECIFICATION_VERSION=0x1001E -D EFI_SPECIFICATION_VERSION=0x20028 /wd4819 /O1ib2 -DMDEPKG_NDEBUG /D CRB_FLAG /D VFR_CRB_FLAG /D EXTERNAL_PACKAGE /D SSA_FLAG /D SSA_LOADER_FLAG /D HSX_HOST /D BDX_HOST /D LT_FLAG /DTRAD_FLAG=1 /DPCH_SERVER_BIOS_FLAG=1 /DPCH_SERVER_BIOS_FLAG=1 /DME_SUPPORT_FLAG=1 /DSPS_SUPPORT=1 /DPFAT_FLAG=1 /D AMI_PAM_SAVE_RESTORE_SWSMI_VALUE=0xBE /D AMI_PAM_SAVE_CMD=0xE0 /D AMI_PAM_RESTORE_CMD=0xE1 /DUSB_PRECONDITION_ENABLE_FLAG=1 /DWDT_SUPPORT_ENABLED=1

LZMA =  LzmaCompress
LZMA_GUID =  EE4E5898-3914-4259-9D6E-DC7BD79403CF

ASM16 =  ml.exe

ASLCC =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\x86\cl.exe
ASLCC_FLAGS = /nologo /c /TC /FIAutoGen.h /Dmain=ReferenceAcpiTable

CBINCC_FLAGS = /nologo /c /TC /Os /FIAutoGen.h

APP =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\x86\cl.exe
APP_FLAGS = /nologo /E /TC

OPTROM =  EfiRom
OPTROM_FLAGS = -e

NASMB_FLAGS = -f bin

VPDTOOL =  BPDG
VPDTOOL_GUID =  8C3D856A-9BE6-468E-850A-24F7A8D38E08

ASLPP =  C:\WinDDK_7600.16385.1\WinDDk\WinDDK\7600.16385.1\bin\x86\x86\cl.exe
ASLPP_FLAGS = /nologo /EP /TC

OBJCOPY =  echo
OBJCOPY_FLAGS = objcopy not needed for

MAKE =  nmake.exe

ASMLINK =  link16.exe
ASMLINK_FLAGS = /nologo /tiny

NASM =  nasm
NASM_FLAGS = -Ox -f win32


MAKE_FILE = $(MODULE_BUILD_DIR)\Makefile

#
# Build Macro
#
OBJECT_FILES =  \
    $(OUTPUT_DIR)\PeiPcdLib.obj

INC =  \
    /I$(WORKSPACE)\MdePkg\Library\PeiPcdLib \
    /I$(DEBUG_DIR) \
    /I$(WORKSPACE)\MdePkg \
    /I$(WORKSPACE)\MdePkg\Include \
    /I$(WORKSPACE)\MdePkg\Include\Ia32

OBJECT_FILES_LIST = c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\IA32\MdePkg\Library\PeiPcdLib\PeiPcdLib\OUTPUT\object_files.lst


COMMON_DEPS = $(WORKSPACE)\MdePkg\Include\Ppi\CpuIo.h \
              $(WORKSPACE)\MdePkg\Include\PiPei.h \
              $(WORKSPACE)\MdePkg\Include\Uefi\UefiBaseType.h \
              $(WORKSPACE)\MdePkg\Include\Uefi\UefiMultiPhase.h \
              $(WORKSPACE)\MdePkg\Include\Ppi\Pcd.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiFirmwareVolume.h \
              $(DEBUG_DIR)\AutoGen.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiStatusCode.h \
              $(WORKSPACE)\MdePkg\Include\Ppi\PcdInfo.h \
              $(WORKSPACE)\MdePkg\Include\Library\BaseMemoryLib.h \
              $(WORKSPACE)\MdePkg\Include\Ppi\PciCfg2.h \
              $(WORKSPACE)\MdePkg\Include\Ppi\PiPcd.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiMultiPhase.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiHob.h \
              $(WORKSPACE)\MdePkg\Include\IndustryStandard\PeImage.h \
              $(WORKSPACE)\MdePkg\Include\Protocol\DebugSupport.h \
              $(WORKSPACE)\MdePkg\Include\Library\BaseLib.h \
              $(WORKSPACE)\MdePkg\Include\Library\DebugLib.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiPeiCis.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiFirmwareFile.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiS3BootScript.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiBootMode.h \
              $(WORKSPACE)\MdePkg\Include\Pi\PiDependency.h \
              $(WORKSPACE)\MdePkg\Include\Library\PcdLib.h \
              $(WORKSPACE)\MdePkg\Include\Guid\WinCertificate.h \
              $(WORKSPACE)\MdePkg\Include\Library\PeiServicesLib.h \
              $(WORKSPACE)\MdePkg\Include\Base.h \
              $(WORKSPACE)\MdePkg\Include\Ppi\PiPcdInfo.h \
              $(WORKSPACE)\MdePkg\Include\Ia32\ProcessorBind.h \
              

#
# Overridable Target Macro Definitions
#
FORCE_REBUILD = force_build
INIT_TARGET = init
PCH_TARGET =
BC_TARGET = 
CODA_TARGET = c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\IA32\MdePkg\Library\PeiPcdLib\PeiPcdLib\OUTPUT\PeiPcdLib.lib \
              

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
$(OUTPUT_DIR)\PeiPcdLib.lib : $(OBJECT_FILES)
	"$(SLINK)" $(SLINK_FLAGS) /OUT:c:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\IA32\MdePkg\Library\PeiPcdLib\PeiPcdLib\OUTPUT\PeiPcdLib.lib @$(OBJECT_FILES_LIST)

$(OUTPUT_DIR)\PeiPcdLib.obj : $(MAKE_FILE)
$(OUTPUT_DIR)\PeiPcdLib.obj : $(COMMON_DEPS)
$(OUTPUT_DIR)\PeiPcdLib.obj : $(WORKSPACE)\MdePkg\Library\PeiPcdLib\PeiPcdLib.c
	"$(CC)" /Foc:\1218_alibaba\Build\GRANTLEY\RELEASE_MYTOOLS\IA32\MdePkg\Library\PeiPcdLib\PeiPcdLib\OUTPUT\.\PeiPcdLib.obj $(CC_FLAGS) -DPEI_BUILD $(INC) c:\1218_alibaba\MdePkg\Library\PeiPcdLib\PeiPcdLib.c



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
	@cd $(MODULE_BUILD_DIR)

