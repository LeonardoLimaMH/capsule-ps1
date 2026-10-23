#include "common.h"

void func_800BD51C(s32 arg0) {
    extern u16 D_8008EE50[];
    s32 temp_t1;
    s32 temp_t3;
    u8 temp_a2;
    u8 temp_a3;
    void *temp_a1;
    void *temp_s0;

    temp_s0 = arg0 + 0x5D0;
    temp_a2 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_t3 = temp_a2 * 0x2E8;
    temp_a3 = M2C_FIELD((temp_s0 + temp_a2), u8 *, 0x5FB);
    temp_t1 = temp_a3 * 0x7C;
    temp_a1 = temp_s0 + (temp_t3 + 0x18) + temp_t1;
    switch ((*D_8008EE50)) {                           /* irregular */
    case 0:
        func_800CABDC(arg0, temp_a1, 0x10000, temp_a3);
        func_80012628();
        return;
    case 1:
        if (M2C_FIELD(temp_s0, u8 *, 0x720) != 0) {
            M2C_FIELD(temp_s0, s8 *, 0x70D) = 1;
            func_80012628((*D_8008EE50), temp_a1, temp_a2, temp_a3);
            return;
        }
        return;
    case 2:
        if (M2C_FIELD(temp_a1, u8 *, 0xE) != 0) {
            M2C_FIELD((temp_s0 + (temp_t1 + temp_t3)), s8 *, 0x3E) = 1;
            func_8009C4B0(arg0, temp_a2, temp_a3, temp_a3);
            M2C_FIELD(temp_s0, s8 *, 0x60D) = 0;
            M2C_FIELD(temp_s0, s8 *, 0x70D) = 0;
            M2C_FIELD(temp_s0, s8 *, 0x614) = 0;
            func_800125AC(6);
            func_80012604(5);
            return;
        }
        func_800A903C(arg0, temp_s0, temp_a2, temp_a3);
        func_800125D8();
        break;
    }
}
