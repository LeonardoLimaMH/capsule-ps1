#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_iso9660", CdSearchFile);

#include "ghidra.h"
bool func_80118CBC(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strncmp(param_1,param_2,0xc);
  return iVar1 == 0;
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_iso9660", func_80118CDC);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_iso9660", func_80118FA0);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_iso9660", func_80119044);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_iso9660", func_801192E0);
