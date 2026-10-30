#include "common.h"

void func_8009B1CC(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_800AF000[];
    extern M2C_UNK D_800AF198[];
    extern M2C_UNK D_800B3AF8[];
    extern s32 D_800B3B20[];
    s16 temp_v0_3;
    s32 *temp_s2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 var_v0;
    u16 temp_v1;
    void *temp_s0;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x84);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_a1;
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xDC)) {  /* irregular */
    case 4:
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a1 & ~1);
        if (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 0) {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x80);
            var_v0 = temp_v0 - 1;
            if (temp_v0 == 0) {
                if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
                    func_80015CD0(arg0 + 0x14, func_80019F30(0x70008, M2C_FIELD((((s16) temp_v1 * 0x12) + (u8 *)D_800AF000), s16 *, 4), D_8008ED68), 0);
                    return;
                }
                var_v0 = M2C_FIELD(arg0, s32 *, 0x80) - 1;
                goto block_10;
            }
block_10:
            M2C_FIELD(arg0, s32 *, 0x80) = var_v0;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) M2C_FIELD((((s16) temp_v1 * 0x12) + (u8 *)D_800AF000), s16 *, 6);
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a1 & ~1);
        if (M2C_FIELD(D_8008ED68, u16 *, 0xE0) != 0) {
            temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x80);
            var_v0 = temp_v0_2 - 1;
            if (temp_v0_2 > 0) {
                goto block_10;
            }
            temp_s2 = ((s16) temp_v1 * 4) + (u8 *)D_800B3AF8;
            temp_v1_2 = *temp_s2;
            if (temp_v1_2 == 0) {
                M2C_FIELD(arg0, u8 *, 0x58) = (u8) (M2C_FIELD(arg0, u8 *, 0x58) + 3);
                M2C_FIELD(arg0, u8 *, 0x59) = (u8) (M2C_FIELD(arg0, u8 *, 0x59) + 3);
                M2C_FIELD(arg0, u8 *, 0x5A) = (u8) (M2C_FIELD(arg0, u8 *, 0x5A) + 3);
                if ((u8) M2C_FIELD(arg0, u8 *, 0x58) >= 0xFDU) {
                    func_80015CD0(arg0 + 0x14, func_80019F30(0x70008, 0xB, D_8008ED68), 1);
                    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
                    M2C_FIELD(arg0, s32 *, 0x88) = 0;
                    *temp_s2 += 1;
                    return;
                }
            } else if (temp_v1_2 == 1) {
                M2C_FIELD(arg0, u8 *, 0x5A) = 0x80U;
                M2C_FIELD(arg0, u8 *, 0x59) = 0x80U;
                M2C_FIELD(arg0, u8 *, 0x58) = 0x80U;
                if (M2C_FIELD(arg0, s16 *, 0x24) < 0) {
                    temp_s0 = ((s16) temp_v1 * 0x12) + (u8 *)D_800AF000;
                    func_80015CD0(arg0 + 0x14, func_80019F30(0x70008, M2C_FIELD(temp_s0, s16 *, 8) + 0xC, D_8008ED68), 0);
                    M2C_FIELD(arg0, s16 *, 0x4E) = 3;
                    M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((M2C_FIELD(arg0, s32 *, 0x30) & ~0x30) | 0x20);
                    M2C_FIELD(arg0, u16 *, 0x6A) = (u16) M2C_FIELD(temp_s0, u16 *, 0xA);
                    M2C_FIELD(arg0, u16 *, 0x68) = (u16) M2C_FIELD(temp_s0, u16 *, 0xC);
                    M2C_FIELD(arg0, u16 *, 0x6E) = (u16) M2C_FIELD(temp_s0, u16 *, 0xE);
                    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 8);
                    M2C_FIELD(arg0, s16 *, 0x52) = 0;
                    M2C_FIELD(arg0, s16 *, 0x50) = 0;
                    M2C_FIELD(arg0, u16 *, 0x6C) = (u16) M2C_FIELD(temp_s0, u16 *, 0x10);
                    (*D_800B3B20) += 1;
                    *temp_s2 += 1;
                    func_80034AB0(0x85, D_800B3B20);
                    return;
                }
                temp_a0 = M2C_FIELD(arg0, s32 *, 0x3C) + 1;
                M2C_FIELD(arg0, s32 *, 0x3C) = temp_a0;
                if (temp_a0 == *(u16 *)((M2C_FIELD(arg0, s32 *, 0x88) * 2) + (u8 *)D_800AF198)) {
                    func_80034AB0(0x50, (s32 *) (s16) temp_v1, D_8008ED68);
                    M2C_FIELD(arg0, s32 *, 0x88) = (s32) (M2C_FIELD(arg0, s32 *, 0x88) + 1);
                    return;
                }
            } else {
                temp_v0_3 = (u16) M2C_FIELD(arg0, s16 *, 0x50) + 0x40;
                if (M2C_FIELD(arg0, s16 *, 0x50) < 0x1000) {
                    M2C_FIELD(arg0, s16 *, 0x50) = temp_v0_3;
                    M2C_FIELD(arg0, s16 *, 0x52) = temp_v0_3;
                    return;
                }
                M2C_FIELD(arg0, s16 *, 0x52) = 0x1000;
                M2C_FIELD(arg0, s16 *, 0x50) = 0x1000;
            }
        } else {
            return;
        }
        break;
    }
}
