#include "common.h"

s32 func_800B9334(void) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800ED88C[];
    extern s32 D_800EEB9C[];
    extern M2C_UNK D_800EFF58[];
    extern M2C_UNK D_80100F38[];
    u16 temp_a0;
    u16 temp_v1_2;
    void *temp_v0;
    void *temp_v1;

    if ((*D_800EEB9C) == 1) {
        if (func_800A9A74() == -1) {
            M2C_FIELD(D_800EFF58, s32 *, 0x84) = 0;
            M2C_FIELD(D_800EFF58, s32 *, 0x88) = 0;
            temp_v1 = ((*D_8006AF80) * 0x1A8) + D_80091618;
            temp_a0 = M2C_FIELD(temp_v1, u16 *, 0xA4);
            temp_v0 = ((*D_8006AF80) * 0x79C) + D_80100F38;
            M2C_FIELD(temp_v0, u16 *, 0x336) = temp_a0;
            M2C_FIELD(temp_v0, u16 *, 0x332) = temp_a0;
            temp_v1_2 = M2C_FIELD(temp_v1, u16 *, 0xA8);
            M2C_FIELD(temp_v0, u16 *, 0x338) = temp_v1_2;
            M2C_FIELD(temp_v0, u16 *, 0x334) = temp_v1_2;
            M2C_FIELD((((*D_8006AF80) * 0x79C) + D_80100F38), s16 *, 0x344) = 0;
            M2C_FIELD((((*D_8006AF80) * 0x79C) + D_80100F38), s16 *, 0x342) = 0;
            func_800ABF7C(1, D_80100F38, D_8006AF80);
            return 1;
        }
        goto block_7;
    }
    if (M2C_FIELD(D_800EFF58, s32 *, 0x84) == 2) {
        if (func_8009ED54(2) == -1) {
            func_800B9F50(1);
            (*D_800ED88C) = 0;
            func_800B7264(1);
        }
    } else {
        M2C_FIELD(D_800EFF58, s32 *, 0x84) = 2;
        M2C_FIELD(D_800EFF58, s32 *, 0x88) = 0;
    }
block_7:
    func_800ABF7C(1);
    return 0;
}
