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

#include "common.h"

s32 func_801192E0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK sp10;

    CdIntToPos(arg1, &sp10);
    CdControl(2, &sp10, 0);
    CdRead(arg0, arg2, 0x80);
    return CdReadSync(0, 0) == 0;
}
