#include "common.h"

void func_800BA3C4(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    u16 temp_a1;
    u16 var_v0;
    u8 temp_a0;
    void *temp_a2;
    void *temp_a3;
    void *temp_s0;

    temp_s0 = arg0 + 0x5D0;
    temp_a0 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_a2 = temp_s0 + ((temp_a0 * 0x2E8) + 0x18) + (M2C_FIELD((temp_s0 + temp_a0), u8 *, 0x5FB) * 0x7C);
    temp_a3 = temp_s0 + (((1 - temp_a0) * 0x2E8) + 0x18) + (M2C_FIELD(temp_s0, u8 *, 0x70C) * 0x7C);
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    case 0:
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        func_80012628(D_8008ED68, M2C_FIELD(D_8008ED68, u16 *, 0xE8), temp_a2, temp_a3);
        return;
    case 1:
        temp_a1 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0 = temp_a1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0 = temp_a1 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0;
        if (((u32) (var_v0 & 0xFFFF) >= 0x1EU) && (func_800B2ABC(arg0, 1, temp_a2, temp_a3) != 0)) {
            M2C_FIELD(temp_s0, s8 *, 0x610) = 0;
            func_800125D8();
        }
        return;
    }
}
