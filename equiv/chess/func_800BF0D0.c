#include "common.h"

void func_800BF0D0(s32 arg0, s32 arg1) {
    extern M2C_UNK D_8008ED68[];
    u8 sp10;
    u8 sp14;
    s32 temp_v1_2;
    u8 temp_s1;
    u8 temp_s2_2;
    u8 temp_s4;
    u8 temp_s5;
    u8 temp_v1;
    void *temp_a1;
    void *temp_s0;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1_3;

    temp_s0 = arg0 + 0x5D0;
    temp_s1 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x61A);
    temp_s2 = temp_s0 + temp_s1;
    temp_s5 = M2C_FIELD(temp_s2, u8 *, 0x5FB);
    if ((temp_v1 == 0) || (temp_v1 == 5)) {
        if (((((u32) M2C_FIELD(func_800A8E84(temp_s0), u32 *, 0x10) >> 0x15) & 7) ^ 1) != 0) {
            if (M2C_FIELD(temp_s2, u8 *, 0x10) != 0) {
                func_800AEA4C(temp_s0, temp_s1);
            }
            func_800C8EF0(arg0, temp_s1, temp_s0 + ((temp_s1 * 2) + 0x601));
        } else {
            if (M2C_FIELD(temp_s2, u8 *, 0x10) != 0) {
                func_800AEBD0(temp_s0, temp_s1);
            }
            func_800BE244(temp_s0, temp_s1, 1);
        }
        if (M2C_FIELD(temp_s0, u8 *, 0x61A) != 5) {
            if (arg1 == 2) {
                temp_v0 = temp_s0 + (temp_s1 * 2);
                M2C_FIELD(temp_s0, s8 *, 0x7A8) = func_800A44E8(arg0, M2C_FIELD(temp_v0, u8 *, 0x601), M2C_FIELD(temp_v0, u8 *, 0x602));
            }
            temp_v1_2 = M2C_FIELD(((temp_s1 * 0x10) + (*D_8008ED68)), s32 *, 0x88);
            if (temp_v1_2 & 0x20) {
                temp_v0_2 = temp_s0 + (temp_s1 * 2);
                temp_s2_2 = M2C_FIELD(temp_v0_2, u8 *, 0x601);
                temp_s4 = M2C_FIELD(temp_v0_2, u8 *, 0x602);
                if (M2C_FIELD(((temp_s2_2 * 0xD) + temp_s0 + temp_s4), u8 *, 0x630) == 2) {
                    func_80034AB0(0x48);
                    M2C_FIELD(temp_s0, s8 *, 0x619) = 0;
                    M2C_FIELD(temp_s0, s8 *, 0x7A7) = 1;
                    func_800CA730(arg0, temp_s1, &sp10, &sp14);
                    M2C_FIELD(temp_s0, u8 *, 0x712) = sp10;
                    M2C_FIELD(temp_s0, u8 *, 0x713) = sp14;
                    if (M2C_FIELD((temp_s0 + temp_s1), u8 *, 0x10) == 0) {
                        temp_v0_3 = temp_s0 + (temp_s1 * 6);
                        M2C_FIELD(temp_v0_3, u8 *, 0x5F0) = temp_s2_2;
                        M2C_FIELD(temp_v0_3, u8 *, 0x5F1) = temp_s4;
                    }
                    M2C_FIELD((temp_s0 + ((temp_s5 * 0x7C) + (temp_s1 * 0x2E8))), s8 *, 0x2F) = 1;
                    M2C_FIELD(temp_s0, s8 *, 0x615) = 0;
                    if (arg1 != 1) {
                        M2C_FIELD(temp_s0, s8 *, 0x614) = 0;
                    }
                    func_800125D8(temp_s1 * 3);
                    return;
                }
                func_80034AB0(0x4C);
                return;
            }
            if (temp_v1_2 & 0x40) {
                func_80034AB0(0x5D);
                M2C_FIELD(temp_s0, s8 *, 0x7A7) = 1;
                temp_v1_3 = temp_s0 + ((temp_s5 * 0x7C) + (temp_s1 * 0x2E8));
                M2C_FIELD(temp_s0, s8 *, 0x619) = 0;
                temp_a1 = temp_s0 + (temp_s1 * 2);
                M2C_FIELD(temp_a1, u8 *, 0x601) = (u8) M2C_FIELD(temp_v1_3, u8 *, 0x2D);
                M2C_FIELD(temp_a1, u8 *, 0x602) = (u8) M2C_FIELD(temp_v1_3, u8 *, 0x2E);
                M2C_FIELD(temp_v1_3, s8 *, 0x2F) = 0x81;
                M2C_FIELD(temp_v1_3, s8 *, 0x3B) = 0;
                M2C_FIELD(temp_s0, s8 *, 0x610) = 2;
                func_800125AC(3, temp_a1);
            }
        }
    }
}
