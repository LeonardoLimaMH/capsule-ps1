#include "common.h"

void func_800A04F4(void)
{
  M2C_UNK *new_var;
  extern M2C_UNK D_800EFF58[];
  new_var = D_800EFF58;
  *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EFF58) + 0x31C)))) + 0x38)) = (s32) (((*((s32 *) (((s8 *) (*((void **) (((s8 *) new_var) + 0x31C)))) + 0x38))) & (~1)) | ((*((s32 *) (((s8 *) D_800EFF58) + 0x32C))) == 0));
  *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EFF58) + 0x320)))) + 0x38)) = (s32) (((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EFF58) + 0x320)))) + 0x38))) & (~1)) | ((*((s32 *) (((s8 *) new_var) + 0x330))) == 0xD));
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A04F4", func_800A0540);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A04F4", func_800A0618);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A04F4", func_800A0780);

#include "common.h"

void func_800A09E4(void) {
    extern s16 D_800ED88C[];
    (*D_800ED88C) = 1;
    func_800BCF98(1);
}
