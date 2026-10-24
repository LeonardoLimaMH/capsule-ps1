#include "common.h"

void func_800BCFB0(s32 arg0) {
    extern s16 D_800ED88C[];
    extern M2C_UNK D_800EFF58[];
    extern void * D_800EFF6C[];
    s16 var_v0;
    void *var_v1;

    switch (arg0) {                                 /* irregular */
    case 1:
        if ((*D_800ED88C) == 1) {
            M2C_FIELD((*D_800EFF6C), u16 *, 0x4A) = (u16) (M2C_FIELD((*D_800EFF6C), u16 *, 0x4A) + 2);
        }
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x34C), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x34C), u16 *, 0x46) + 8);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x354), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x354), u16 *, 0x46) - 8);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5FC), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5FC), u16 *, 0x46) - 8);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x414), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x414), u16 *, 0x46) - 8);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x418), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x418), u16 *, 0x4A) - 3);
        var_v1 = M2C_FIELD(D_800EFF58, void **, 0x5F8);
        var_v0 = M2C_FIELD(var_v1, u16 *, 0x4A) - 3;
block_10:
        M2C_FIELD(var_v1, s16 *, 0x4A) = var_v0;
        return;
    case 2:
        if ((*D_800ED88C) == 1) {
            M2C_FIELD((*D_800EFF6C), u16 *, 0x4A) = (u16) (M2C_FIELD((*D_800EFF6C), u16 *, 0x4A) - 2);
        }
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x34C), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x34C), u16 *, 0x46) - 8);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x354), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x354), u16 *, 0x46) + 8);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5FC), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x5FC), u16 *, 0x46) + 8);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x414), u16 *, 0x46) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x414), u16 *, 0x46) + 8);
        M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x418), u16 *, 0x4A) = (u16) (M2C_FIELD(M2C_FIELD(D_800EFF58, void **, 0x418), u16 *, 0x4A) + 3);
        var_v1 = M2C_FIELD(D_800EFF58, void **, 0x5F8);
        var_v0 = M2C_FIELD(var_v1, u16 *, 0x4A) + 3;
        goto block_10;
    }
}
