#include "common.h"

void func_800BF6A0(void *arg0) {
    extern u8 D_8008ED68[];
    s32 temp_v1_2;
    u16 temp_v1;
    u16 var_v0;
    u8 temp_s1;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s0;

    temp_s0 = arg0 + 0x5D0;
    temp_s1 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_a1 = temp_s0 + temp_s1;
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    case 0:
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        func_80012628(temp_a1, D_8008ED68, 1);
        return;
    case 1:
        if (M2C_FIELD(temp_s0, u8 *, 0x61A) == 0) {
            if (M2C_FIELD(temp_a1, u8 *, 0x10) != 0) {
                temp_v1 = M2C_FIELD(arg0, u16 *, 0xC);
                if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                    var_v0 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
                } else {
                    var_v0 = temp_v1 + 1;
                }
                M2C_FIELD(arg0, u16 *, 0xC) = var_v0;
                if ((u32) (var_v0 & 0xFFFF) >= 0x15U) {
                    func_800AECC4(temp_s0, temp_s1, D_8008ED68, 1);
                }
            }
            temp_v1_2 = M2C_FIELD(((temp_s1 * 0x10) + D_8008ED68), s32 *, 0x88);
            if (temp_v1_2 & 0x20) {
                if (func_800C9254(temp_s0) != 0) {
                    func_80034AB0(0x48);
                    M2C_FIELD(temp_s0, s8 *, 0x619) = 0;
                    func_8001264C(2);
                    return;
                }
                func_80034AB0(0x4C);
                return;
            }
            if (temp_v1_2 & 0x40) {
                func_80034AB0(0x5D);
                M2C_FIELD(temp_s0, s8 *, 0x619) = 0;
                func_8001264C(3);
                return;
            }
        } else {
            return;
        }
        break;
    case 2:
        M2C_FIELD(temp_s0, s8 *, 0x7A7) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x615) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x614) = 0;
        func_800125D8(temp_a1, D_8008ED68, 1);
        return;
    case 3:
        temp_a1_2 = temp_s0 + ((M2C_FIELD(temp_a1, u8 *, 0x5FB) * 0x7C) + (temp_s1 * 0x2E8));
        M2C_FIELD(temp_s0, s8 *, 0x7A7) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x615) = 1;
        M2C_FIELD(temp_a1_2, s8 *, 0x2F) = 1;
        func_800125AC(3, temp_a1_2, D_8008ED68, 1);
        break;
    }
}
