#include "common.h"

void func_800BD8EC(void *arg0) {
    extern u16 D_8008EE4C[];
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    u8 *temp_s2;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_s4;
    u8 temp_s6;
    void *temp_a2;
    void *temp_a3;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s3;

    switch ((*D_8008EE4C)) {
    case 0:
        temp_s3 = arg0 + 0x5D0;
        temp_s6 = M2C_FIELD(temp_s3, u8 *, 0x5FA);
        temp_s4 = M2C_FIELD(temp_s3, u8 *, 0x70C);
        temp_s1 = (1 - temp_s6) * 0x2E8;
        temp_s0 = temp_s4 * 0x7C;
        temp_s2 = temp_s3 + (temp_s1 + 0x18) + temp_s0;
        if (func_800C9414() == 0) {
            temp_v0 = temp_s0 + temp_s1;
            if (*temp_s2 == 0x36) {
                M2C_FIELD((temp_s3 + temp_v0), s8 *, 0x3E) = 1;
            } else {
                M2C_FIELD((temp_s3 + temp_v0), s8 *, 0x3E) = 2;
            }
            func_8009C4B0(arg0, 1 - temp_s6, temp_s4);
            func_800125D8();
            return;
        }
    default:
        return;
    case 1:
        func_800B98E8(arg0);
        return;
    case 2:
        temp_s0_2 = arg0 + 0x5D0;
        temp_a1 = M2C_FIELD(temp_s0_2, u8 *, 0x5FA);
        temp_a3 = temp_s0_2 + temp_a1;
        temp_s0_3 = temp_s0_2 + ((temp_a1 * 0x2E8) + 0x18) + (M2C_FIELD(temp_a3, u8 *, 0x5FB) * 0x7C);
        M2C_FIELD(temp_s0_3, s8 *, 0x25) = func_800A83E0(arg0, temp_s0_3, temp_s0_2 + (((1 - temp_a1) * 0x2E8) + 0x18) + (M2C_FIELD(temp_s0_2, u8 *, 0x70C) * 0x7C), temp_a3);
        func_800BD1B0(arg0);
        return;
    case 3:
        temp_a2 = arg0 + 0x5D0;
        temp_a0 = M2C_FIELD(temp_a2, u8 *, 0x5FA);
        if (M2C_FIELD(temp_a2, u8 *, 0x60D) == 2) {
            M2C_FIELD((temp_a2 + (((1 - temp_a0) * 0x2E8) + 0x18) + (M2C_FIELD(temp_a2, u8 *, 0x70C) * 0x7C)), s8 *, 0x17) = 1;
            func_800CABDC(arg0, temp_a2 + ((temp_a0 * 0x2E8) + 0x18) + (M2C_FIELD((temp_a2 + temp_a0), u8 *, 0x5FB) * 0x7C), 0x10000, 1);
            func_800125D8();
            return;
        }
        break;
    case 4:
        func_800BD51C(arg0);
        return;
    case 5:
        func_800BD3D4(arg0);
        return;
    case 6:
        func_800BA3C4(arg0);
        return;
    case 7:
        func_800BA4E0(arg0, 1 - M2C_FIELD(arg0, u8 *, 0xBCA), 1);
        return;
    case 8:
        func_800BA684(arg0);
        return;
    case 9:
        func_800BA744(arg0);
        break;
    }
}
