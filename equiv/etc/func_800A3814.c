#include "common.h"

void func_800A3814(void *arg0) {
    extern M2C_UNK D_800859F8[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800B2C9C[];
    extern u16 D_800B2CB0[];
    extern M2C_UNK D_800B2CB4[];
    extern u16 D_800B2CC8[];
    extern M2C_UNK D_800B2CCC[];
    extern M2C_UNK D_800B2CE4[];
    extern s16 D_800B3B40[];
    s16 var_v0;
    s16 var_v0_2;
    s32 var_a1;
    u8 temp_s2;

    temp_s2 = M2C_FIELD(D_800859F8, u8 *, 9);
    if ((*D_8008EE44) != 0x12) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
    var_a1 = 0x4B;
    if (M2C_FIELD(D_800859F8, u8 *, 0xA) == 0) {
        var_a1 = M2C_FIELD(D_800859F8, u8 *, 0x11) + 0x4C;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60010, var_a1);
    if ((*D_800B3B40) != 0) {
        if (temp_s2 == 0xA) {
            if (M2C_FIELD(D_800859F8, u8 *, 0xA) == 0) {
                if (M2C_FIELD(D_800859F8, u8 *, 0x11) == 1) {
                    var_v0 = (*D_800B2CC8) - 0x20;
                } else {
                    goto block_10;
                }
            } else {
block_10:
                var_v0 = *(u16 *)((temp_s2 * 2) + (u8 *)D_800B2CB4) - 8;
            }
        } else {
            var_v0 = *(u16 *)((temp_s2 * 2) + (u8 *)D_800B2CB4) + 0x20;
        }
        M2C_FIELD(arg0, s16 *, 0x46) = var_v0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((M2C_FIELD(arg0, s32 *, 0x30) & ~0x1C0) | 0x40);
        M2C_FIELD(arg0, s16 *, 0x4A) = (s16) (*(u16 *)((temp_s2 * 2) + (u8 *)D_800B2CE4) - 0x20);
        return;
    }
    if (temp_s2 == 0xA) {
        var_v0_2 = (*D_800B2CB0) - 8;
    } else {
        var_v0_2 = *(u16 *)((temp_s2 * 2) + (u8 *)D_800B2C9C) - 0x30;
    }
    M2C_FIELD(arg0, s16 *, 0x46) = var_v0_2;
    M2C_FIELD(arg0, s16 *, 0x4A) = (s16) (*(u16 *)((temp_s2 * 2) + (u8 *)D_800B2CCC) + 0x10);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & ~0x1C0);
}
