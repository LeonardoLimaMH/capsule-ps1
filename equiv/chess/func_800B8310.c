#include "common.h"

void func_800B8310(void *arg0) {
    extern M2C_UNK D_80063940[];
    extern u16 D_8008EE50[];
    u16 temp_v0;
    u8 temp_a2;
    u8 temp_a3;
    void *temp_a0;
    void *temp_a1;
    void *temp_s0;

    temp_a0 = arg0 + 0x5D0;
    temp_a3 = M2C_FIELD(temp_a0, u8 *, 0x5FA);
    temp_a2 = M2C_FIELD((temp_a0 + temp_a3), u8 *, 0x5FB);
    temp_s0 = temp_a0 + ((temp_a3 * 0x2E8) + 0x18) + (temp_a2 * 0x7C);
    temp_a1 = M2C_FIELD(temp_s0, void **, 0x70);
    switch ((*D_8008EE50)) {                           /* irregular */
    case 0:
        M2C_FIELD(temp_s0, s8 *, 0x26) = 3;
        func_8009C4B0(arg0, temp_a3, temp_a2, temp_a3);
        func_80012628();
        return;
    case 1:
        M2C_FIELD(temp_s0, s8 *, 0x17) = 0x85;
        M2C_FIELD(temp_s0, s8 *, 0x23) = 0;
        func_800A87C8(arg0, temp_a3, temp_a2, 0);
        M2C_FIELD(temp_s0, s8 *, 0x25) = func_800C94DC(arg0, (u8) M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0) * 0x3C) + (*D_80063940)), u8 *, 0x18) >> 5);
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        func_80012628();
        return;
    case 2:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0xC) + 1;
        M2C_FIELD(arg0, u16 *, 0xC) = temp_v0;
        if (((u32) (temp_v0 & 0xFFFF) >= 0x51U) && ((u16) M2C_FIELD(temp_a1, u16 *, 0x26) >= 2U)) {
            func_800125D8((*D_8008EE50), temp_a1, temp_a2, temp_a3);
        }
        return;
    }
}
