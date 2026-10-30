#include "common.h"

s32 func_800A0BB4(void) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_8008ED68[];
    extern s32 D_8008EDF0[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800ED88C[];
    extern M2C_UNK D_800EFF58[];
    extern M2C_UNK D_80103ED8[];
    s32 var_v1;
    s32 var_v1_2;
    void *temp_a1;

    func_800D1598(D_80103ED8);
    if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) {
        temp_a1 = (M2C_FIELD(D_800EFF58, s16 *, 0x344) * 4) + (u8 *)D_800EFF58;
        M2C_FIELD((((*D_8006AF80) * 0x1A8) + (u8 *)D_80091618), u16 *, 0x158) = (u16) M2C_FIELD(temp_a1, u16 *, 0x3D4);
        func_80034AB0(0x48, temp_a1, D_80091618);
        (*D_800ED88C) = 0;
        func_800BCF98(2);
        return -1;
    }
    if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40) {
        func_80034AB0(0x5D);
        (*D_800ED88C) = 1;
        func_800BCF98(2);
        return -2;
    }
    if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x1000) {
        func_80034AB0(0x84);
        func_800A0D88(2, 0);
        var_v1 = (s32) M2C_FIELD(D_800EFF58, s16 *, 0x344) - 1;
        if ((s32) M2C_FIELD(D_800EFF58, s16 *, 0x344) <= 0) {
            var_v1 = M2C_FIELD(D_800EFF58, s32 *, 0x348);
        }
        M2C_FIELD(D_800EFF58, s16 *, 0x344) = var_v1;
        func_800A0D88(1, 0);
    } else if (M2C_FIELD(D_8008ED68, s32 *, 0xA4) != 0) {
        func_800A0ACC(2);
    }
    if ((*D_8008EDF0) & 0x4000) {
        func_80034AB0(0x84);
        func_800A0D88(2, 0);
        var_v1_2 = 0;
        if ((s32) M2C_FIELD(D_800EFF58, s16 *, 0x344) < M2C_FIELD(D_800EFF58, s32 *, 0x348)) {
            var_v1_2 = (s32) M2C_FIELD(D_800EFF58, s16 *, 0x344) + 1;
        }
        M2C_FIELD(D_800EFF58, s16 *, 0x344) = var_v1_2;
        func_800A0D88(1, 0);
        return 0;
    }
    if (M2C_FIELD(D_8008ED68, s32 *, 0xAC) != 0) {
        func_800A0ACC(3);
    }
    return 0;
}
