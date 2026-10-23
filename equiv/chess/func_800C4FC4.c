#include "common.h"

void func_800C4FC4(void *arg0) {
    extern s8 D_8008610C[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_8010102C[];
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_6;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_v1;
    void *temp_v1_5;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0x84) >= 0x29) {
            M2C_FIELD(arg0, s32 *, 0x84) = 0;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
        case 1:
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x84);
            if (temp_v1_2 < 0x5B) {
                temp_v0 = (temp_v1_2 << 0xC) / 30;
                var_a0 = temp_v0;
                if (temp_v0 < 0) {
                    var_a0 = temp_v0 + 0x7FF;
                }
                var_v1 = rsin(temp_v0 - ((var_a0 >> 0xB) << 0xB), MULT_HI((temp_v1_2 << 0xC), 0x88888889)) * M2C_FIELD(D_8010102C, u8 *, 0);
                if (var_v1 < 0) {
                    var_v1 += 0xFFF;
                }
                temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x84);
                M2C_FIELD(arg0, s8 *, 0x58) = (s8) (var_v1 >> 0xC);
                temp_v1_3 = (temp_v0_2 << 0xC) / 30;
                var_a0_2 = temp_v1_3;
                if (temp_v1_3 < 0) {
                    var_a0_2 = temp_v1_3 + 0x7FF;
                }
                var_v1_2 = rsin(temp_v1_3 - ((var_a0_2 >> 0xB) << 0xB), MULT_HI((temp_v0_2 << 0xC), 0x88888889)) * M2C_FIELD(D_8010102C, u8 *, 1);
                if (var_v1_2 < 0) {
                    var_v1_2 += 0xFFF;
                }
                temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x84);
                M2C_FIELD(arg0, s8 *, 0x59) = (s8) (var_v1_2 >> 0xC);
                temp_v1_4 = (temp_v0_3 << 0xC) / 30;
                var_a0_3 = temp_v1_4;
                if (temp_v1_4 < 0) {
                    var_a0_3 = temp_v1_4 + 0x7FF;
                }
                var_v0 = rsin(temp_v1_4 - ((var_a0_3 >> 0xB) << 0xB), MULT_HI((temp_v0_3 << 0xC), 0x88888889)) * M2C_FIELD(D_8010102C, u8 *, 2);
                if (var_v0 < 0) {
                    var_v0 += 0xFFF;
                }
                M2C_FIELD(arg0, s8 *, 0x5A) = (s8) (var_v0 >> 0xC);
            } else {
                M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            }
        }
        break;
    case 2:
        (*D_8008610C) = 1;
        func_800185F8(arg0);
        break;
    }
    temp_v1_5 = M2C_FIELD(arg0, void **, 0x40);
    M2C_FIELD(arg0, u16 *, 0x46) = (u16) M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), u16 *, 0x46);
    M2C_FIELD(arg0, u16 *, 0x4A) = (u16) M2C_FIELD(temp_v1_5, u16 *, 0x4A);
    M2C_FIELD(arg0, s16 *, 0x4E) = (s16) (M2C_FIELD(temp_v1_5, u16 *, 0x4E) - 1);
    M2C_FIELD(arg0, u16 *, 0x50) = (u16) M2C_FIELD(temp_v1_5, u16 *, 0x50);
    M2C_FIELD(arg0, u16 *, 0x52) = (u16) M2C_FIELD(temp_v1_5, u16 *, 0x52);
    temp_v1_6 = M2C_FIELD(arg0, s32 *, 0x84);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0_2 = temp_v1_6 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0_2 = temp_v1_6 + 1;
    }
    M2C_FIELD(arg0, s32 *, 0x84) = var_v0_2;
}
