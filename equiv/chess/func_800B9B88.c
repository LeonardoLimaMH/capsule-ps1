#include "common.h"

void func_800B9B88(void *arg0) {
    extern u16 D_8008EE50[];
    M2C_UNK var_a0;
    M2C_UNK var_a0_2;
    s32 temp_a1;
    s32 temp_v1_3;
    s32 var_v1;
    u8 temp_a2;
    u8 temp_s2;
    u8 temp_s4;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_4;
    void *temp_a3;
    void *temp_s0;
    void *temp_s1;

    temp_a3 = arg0 + 0x5D0;
    temp_s2 = M2C_FIELD(temp_a3, u8 *, 0x5FA);
    temp_a2 = M2C_FIELD(temp_a3, u8 *, 0x70C);
    temp_a1 = 1 - temp_s2;
    temp_s4 = M2C_FIELD((temp_a3 + temp_s2), u8 *, 0x5FB);
    temp_s1 = temp_a3 + ((temp_s2 * 0x2E8) + 0x18) + (temp_s4 * 0x7C);
    temp_s0 = temp_a3 + ((temp_a1 * 0x2E8) + 0x18) + (temp_a2 * 0x7C);
    switch ((*D_8008EE50)) {                           /* irregular */
    case 0:
        if (M2C_FIELD(arg0, u8 *, 0xD77) != 0) {
            M2C_FIELD(temp_a3, s8 *, 0x614) = 2;
            M2C_FIELD(temp_s0, u8 *, 0x25) = func_800A83E0(arg0, temp_s0, temp_s1, temp_a3);
            func_80012628();
            return;
        }
        func_8001264C(3, temp_a1, temp_a2, temp_a3);
        return;
    case 1:
        if (func_800C942C(arg0, M2C_FIELD(temp_s0, u8 *, 0x25), temp_a2, temp_a3) == M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x70), s32 *, 0x8C)) {
            temp_v1 = M2C_FIELD(temp_s0, u8 *, 0);
            if (temp_v1 == 0x5E) {
                var_v1 = 0x20000;
                goto block_15;
            }
            if (temp_v1 == 0x45) {
                var_v1 = 0x10000;
block_15:
                M2C_FIELD(temp_s0, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x1C) | var_v1);
                func_8001264C(3);
            } else {
                M2C_FIELD(temp_s0, s8 *, 0x17) = 0x88;
                M2C_FIELD(temp_s0, s8 *, 0x23) = 1;
                func_80012628();
            }
            temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 0);
            if ((temp_v1_2 == 3) || (temp_v1_2 == 0x59)) {
                var_a0 = 0xA;
                if (temp_v1_2 == 3) {
                    var_a0 = 0x3A;
                }
                func_80034AB0(var_a0, 3);
                return;
            }
        } else {
            return;
        }
        break;
    case 2:
        if (M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x70), s16 *, 0x24) < 0) {
            temp_v1_3 = ((u32) M2C_FIELD(func_800A8EE8(temp_a3, temp_a1, temp_a2, temp_a3), u32 *, 0x10) >> 2) & 0x1F;
            if (temp_v1_3 == 1) {
                M2C_FIELD(temp_s0, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x1C) | 0x10000);
            } else if (temp_v1_3 == 8) {
                M2C_FIELD(temp_s0, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x1C) | 0x20000);
                if (M2C_FIELD(temp_s0, u8 *, 0) == 3) {
                    M2C_FIELD(temp_s0, s32 *, 0x18) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x18) | 0x08000000);
                }
            }
            func_80012628();
        case 3:
            M2C_FIELD(temp_s1, u8 *, 0x25) = func_800A83E0(arg0, temp_s1, temp_s0);
            if (M2C_FIELD(temp_s1, u8 *, 0) != 0x52) {
                M2C_FIELD(temp_s1, s8 *, 0x17) = 0x86;
            } else {
                M2C_FIELD(temp_s1, s8 *, 0x17) = 0x8A;
                M2C_FIELD(temp_s1, s8 *, 0x24) = 0x46;
            }
            M2C_FIELD(temp_s1, s8 *, 0x23) = 3;
            func_800A87C8(arg0, temp_s2, temp_s4, 1);
            temp_v1_4 = M2C_FIELD(temp_s1, u8 *, 0);
            if ((temp_v1_4 == 0x56) || (temp_v1_4 == 0x62) || (var_a0_2 = 8, (temp_v1_4 == 0x52))) {
                var_a0_2 = 7;
            }
            func_80012604(var_a0_2);
        }
        break;
    }
}
