#include "common.h"

void func_800ACB08(s16 arg0) {
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_800EEA78[];
    extern M2C_UNK D_800EEA80[];
    extern M2C_UNK D_800EEB9C[];
    extern u16 D_800F2DAC[];
    extern s16 D_800F2DAE[];
    s16 temp_v0_3;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;

    if (M2C_FIELD(D_800EEB9C, s32 *, 0x18) == 1) {
        if (M2C_FIELD(D_800EEB9C, s32 *, 0x24) == 5) {
            temp_v0 = M2C_FIELD(((*(s16 *)((arg0 * 2) + (u8 *)D_800EEA78) * 4) + (u8 *)D_8008ED68), s32 *, 0xA4);
            if ((temp_v0 != 7) && ((temp_v0 & 7) == 7) && (arg0 < 2) && (arg0 >= 0)) {
                func_800B4944(arg0, D_800EEB9C, arg0);
            }
        } else {
            goto block_8;
        }
    } else {
block_8:
        if (M2C_FIELD(D_800EEB9C, s32 *, 0x14) == 1) {
            temp_s2 = (s32) (arg0 << 0x10) >> 0xF;
            temp_v0_2 = M2C_FIELD(((*(s16 *)(temp_s2 + (u8 *)D_800EEA78) * 4) + (u8 *)D_8008ED68), s32 *, 0xA4);
            temp_v0_3 = temp_v0_2 & 7;
            if ((temp_v0_2 != 7) && (temp_v0_3 == 7)) {
                (*D_800F2DAE) = temp_v0_3;
                (*D_800F2DAC) = (u16) M2C_FIELD(D_800EEB9C, s32 *, 0x24);
                func_800AEB5C(2, 0, arg0, D_800EEB9C);
                (*D_800F2DAC) = func_800AC1A4((s16) (*D_800F2DAC), (*D_800F2DAE), *(s16 *)(temp_s2 + (u8 *)D_800EEA80));
                func_800AEB5C(1, 0);
            }
        }
    }
}
