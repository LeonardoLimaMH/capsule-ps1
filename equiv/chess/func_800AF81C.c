#include "common.h"

void func_800AF81C(void *arg0) {
    extern M2C_UNK D_80063940[];
    extern u16 D_8008EE50[];
    u16 temp_v0;
    u8 temp_s1;
    u8 temp_s2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_s0;

    temp_a0 = arg0 + 0x5D0;
    temp_s1 = M2C_FIELD(temp_a0, u8 *, 0x5FA);
    temp_a1 = temp_a0 + temp_s1;
    temp_a0_2 = temp_a0 + ((temp_s1 * 0x2E8) + 0x18);
    temp_s2 = M2C_FIELD(temp_a1, u8 *, 0x5FB);
    temp_s0 = temp_a0_2 + (temp_s2 * 0x7C);
    switch ((*D_8008EE50)) {
    case 1:
        M2C_FIELD(temp_s0, s8 *, 0x26) = 3;
        func_8009C4B0(arg0, temp_s1, temp_s2);
        /* fallthrough */
    case 0:
block_3:
        func_80012628();
        return;
    case 2:
        M2C_FIELD(temp_s0, s8 *, 0x17) = 0x85;
        M2C_FIELD(temp_s0, s8 *, 0x23) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x25) = func_800C94DC(arg0, (u8) M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0) * 0x3C) + D_80063940), u8 *, 0x18) >> 5);
        func_800A84A0(temp_s0, temp_s1, temp_s2, 1);
        func_800A87C8(arg0, temp_s1, temp_s2, 0);
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        goto block_3;
    case 3:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg0, u16 *, 0xC) = (u16) (temp_v0 + 1);
        if (temp_v0 >= 0x51U) {
            goto block_3;
        }
    default:
        return;
    case 4:
        if (func_800B2F48(arg0, 1) != 0) {
            goto block_3;
        }
        break;
    case 5:
        M2C_FIELD(temp_s0, s8 *, 0x17) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x25) = func_800A835C(arg0, temp_s1);
        func_800A84A0(temp_s0, temp_s1, temp_s2, 0);
        goto block_3;
    case 6:
        func_800125D8(temp_a0_2, temp_a1);
        break;
    }
}
