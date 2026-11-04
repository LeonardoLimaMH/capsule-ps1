#include "common.h"

void func_800A04F4(void)
{
  M2C_UNK *new_var;
  extern M2C_UNK D_800EFF58[];
  new_var = D_800EFF58;
  *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EFF58) + 0x31C)))) + 0x38)) = (s32) (((*((s32 *) (((s8 *) (*((void **) (((s8 *) new_var) + 0x31C)))) + 0x38))) & (~1)) | ((*((s32 *) (((s8 *) D_800EFF58) + 0x32C))) == 0));
  *((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EFF58) + 0x320)))) + 0x38)) = (s32) (((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EFF58) + 0x320)))) + 0x38))) & (~1)) | ((*((s32 *) (((s8 *) new_var) + 0x330))) == 0xD));
}

void func_800A0540(s32 arg0) {
    extern u8 D_800EFF58[];
    register u8 *var_a0 asm("a0");
    register u8 *base asm("v0");
    register s32 absent asm("t0");
    register s32 x asm("v0");
    register s32 y asm("v1");
    register s32 temp_a3 asm("a3");
    register s32 var_a1 asm("a1");
    register s32 var_a2 asm("a2");
    void *temp_v0;
    void *temp_v1;

    switch (arg0) {
    case 0:
        base = D_800EFF58;
        y = *(s32 *)(base + 0x32C);
        x = *(s32 *)(base + 0x114);
        var_a1 = x - y;
        break;
    case 1:
        base = D_800EFF58;
        y = *(s32 *)(base + 0x114);
        x = *(s32 *)(base + 0x330);
        var_a1 = y - x;
        break;
    case -1:
    default:
        var_a1 = -1;
        break;
    }
    var_a2 = 0;
    temp_a3 = var_a1 * 0x10;
    absent = -1;
    base = D_800EFF58;
    var_a0 = base;
    M2C_FIELD(D_800EFF58, s32 *, 0x32C) = (s32) (M2C_FIELD(D_800EFF58, s32 *, 0x32C) + var_a1);
    M2C_FIELD(D_800EFF58, s32 *, 0x330) = (s32) (M2C_FIELD(D_800EFF58, s32 *, 0x330) + var_a1);
    do {
        temp_v0 = M2C_FIELD(var_a0, void **, 0x120);
        M2C_FIELD(temp_v0, u16 *, 0x4A) = (u16) (M2C_FIELD(temp_v0, u16 *, 0x4A) - temp_a3);
        if (M2C_FIELD(var_a0, s32 *, 0x21C) != absent) {
            temp_v1 = M2C_FIELD(var_a0, void **, 0x290);
            M2C_FIELD(temp_v1, u16 *, 0x4A) = (u16) (M2C_FIELD(temp_v1, u16 *, 0x4A) - temp_a3);
        }
        var_a2 += 1;
        var_a0 += 4;
    } while (var_a2 < 0xE);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A04F4", func_800A0618);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A04F4", func_800A0780);

#include "common.h"

void func_800A09E4(void) {
    extern s16 D_800ED88C[];
    (*D_800ED88C) = 1;
    func_800BCF98(1);
}
