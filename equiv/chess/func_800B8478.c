#include "common.h"

void func_800B8478(s32 arg0) {
    extern u16 D_8008EE50[];
    u8 temp_a1;
    u8 temp_a2;
    void *temp_s0;
    void *temp_t0;

    temp_t0 = arg0 + 0x5D0;
    temp_a1 = M2C_FIELD(temp_t0, u8 *, 0x5FA);
    temp_a2 = M2C_FIELD(temp_t0, u8 *, 0x716);
    temp_s0 = temp_t0 + ((temp_a1 * 0x2E8) + 0x18) + (M2C_FIELD((temp_t0 + temp_a1), u8 *, 0x5FB) * 0x7C);
    switch ((*D_8008EE50)) {
    case 0:
        M2C_FIELD(temp_t0, s8 *, 0x610) = 0;
        if (func_800A1278(arg0, M2C_FIELD(temp_t0, u8 *, 0x5FA), temp_a2) == 0) {
            func_8001264C(2);
            return;
        }
block_7:
        func_800220B8(arg0);
        func_80012628();
        return;
    case 1:
        if (func_800220D4(arg0, 1, M2C_FIELD(temp_t0, u8 *, 0x5FA), 0) != 0) {
block_8:
            func_8001264C(4);
            return;
        }
    default:
        return;
    case 2:
        if (func_800A1278(arg0, 1 - M2C_FIELD(temp_t0, u8 *, 0x5FA), temp_a2) != 0) {
            goto block_7;
        }
        goto block_8;
    case 3:
        if (func_800220D4(arg0, 1, 1 - M2C_FIELD(temp_t0, u8 *, 0x5FA), 0) != 0) {
            func_80012628();
            return;
        }
        break;
    case 4:
        M2C_FIELD(temp_s0, u8 *, 0x17) = 1U;
        M2C_FIELD(temp_s0, s8 *, 0x25) = func_800A835C(arg0, temp_a1, temp_a2);
        func_80012628();
        return;
    case 5:
        if (M2C_FIELD(temp_s0, u8 *, 0x22) == M2C_FIELD(temp_s0, u8 *, 0x17)) {
            if (temp_a2 != 3) {
                func_80012604(0xD, temp_a1, temp_a2);
                return;
            }
            func_800125D8((*D_8008EE50), temp_a1, temp_a2);
        }
        break;
    }
}
