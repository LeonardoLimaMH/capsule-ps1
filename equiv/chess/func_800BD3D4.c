#include "common.h"

void func_800BD3D4(void *arg0) {
    extern u8 D_8008ED68[];
    s32 temp_v0;
    u16 temp_a2;
    u16 var_v0;
    u8 temp_s1;
    u8 temp_s2;
    void *temp_a1;
    void *temp_s0;

    temp_s0 = arg0 + 0x5D0;
    temp_s1 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_s2 = M2C_FIELD((temp_s0 + temp_s1), u8 *, 0x5FB);
    temp_a1 = temp_s0 + ((temp_s1 * 0x2E8) + 0x18) + (temp_s2 * 0x7C);
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    case 0:
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        func_80012628(D_8008ED68, temp_a1, M2C_FIELD(D_8008ED68, u16 *, 0xE8));
        return;
    case 1:
        temp_a2 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0 = temp_a2 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0 = temp_a2 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0;
        if ((u32) (var_v0 & 0xFFFF) >= 0x64U) {
            if (__udivdi3(temp_s0, temp_a1, temp_s1, temp_s2) == 0) {
                temp_v0 = func_800A9100(arg0, temp_s0, temp_s1, temp_s2);
                if (temp_v0 != 0) {
                    M2C_FIELD(temp_s0, u8 *, 0x611) = (u8) (((temp_v0 - 1) * 8) | ((1 - temp_s1) * 2) | 1);
                }
                M2C_FIELD(temp_s0, u8 *, 0x611) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x611) | 0x80);
            }
            func_800125D8();
        }
        return;
    }
}
