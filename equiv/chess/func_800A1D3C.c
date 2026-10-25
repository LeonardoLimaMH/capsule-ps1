#include "common.h"

void func_800A1D3C(u8 *arg0) {
    extern u8 D_80069AD4[];
    extern u8 D_8008ED68[];
    extern u16 D_8008EE50[];
    extern u8 D_801010B0[];
    u8 *temp_s2;
    u8 *var_a0;
    s16 temp_a1;
    s32 temp_a2;
    s32 var_a1;
    s32 var_a1_2;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 var_v0;
    u16 var_v0_2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 temp_s1;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_a3;
    void *temp_s0;

    var_a0 = arg0;
    temp_s2 = var_a0;
    temp_s0 = temp_s2 + 0x5D0;
    switch ((*D_8008EE50)) {
    case 0:
        M2C_FIELD(temp_s0, s32 *, 0x62C) = func_800A1780(temp_s2);
        func_800A3AE8(temp_s2);
        func_800A1BD4(temp_s2, temp_s2 + 0x5D0);
        M2C_FIELD(D_8008ED68, s32 *, 0x9EC) = 0;
        M2C_FIELD(D_8008ED68, s32 *, 0x9F0) = 0;
        func_80012628();
        break;
    case 2:
        temp_s1 = M2C_FIELD((temp_s0 + M2C_FIELD(temp_s0, u8 *, 0x5FA)), u8 *, 0x605);
        M2C_FIELD(D_80069AD4, s32 *, 0xD8) = (s32) func_800CB8A4(0x700, 0, M2C_FIELD(temp_s2, u16 *, 0xC), 0x40, 0);
        M2C_FIELD(D_80069AD4, s32 *, 0xDC) = (s32) func_800CB8A4(0x700, 0, M2C_FIELD(temp_s2, u16 *, 0xC), 0x40, 0);
        M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) func_800CB8A4(0x1260, 0x660, M2C_FIELD(temp_s2, u16 *, 0xC), 0x40, 0);
        temp_a1 = temp_s1 << 9;
        M2C_FIELD(D_80069AD4, s16 *, 0xE8) = func_800CB960(0x400, 0x1C0, M2C_FIELD(temp_s2, u16 *, 0xC), 0x40, 0);
        M2C_FIELD(D_80069AD4, s16 *, 0xEA) = func_800CB960(temp_a1 + 0x1200, temp_a1, M2C_FIELD(temp_s2, u16 *, 0xC), 0x40, 0);
        func_800B0478(temp_s2);
        var_a0 = D_8008ED68;
        temp_v1 = M2C_FIELD(temp_s2, u16 *, 0xC);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0 = temp_v1 + 1;
        }
        M2C_FIELD(temp_s2, u16 *, 0xC) = var_v0;
        if ((u32) (var_v0 & 0xFFFF) >= 0x41U) {
            M2C_FIELD(D_80069AD4, s32 *, 0xE0) = 0x660;
            M2C_FIELD(D_80069AD4, s32 *, 0xD8) = 0;
            M2C_FIELD(D_80069AD4, s32 *, 0xDC) = 0;
            M2C_FIELD(D_80069AD4, s16 *, 0xE8) = 0x1C0;
            M2C_FIELD(D_80069AD4, s16 *, 0xEA) = (s16) (temp_s1 << 9);
        case 1:
            M2C_FIELD(temp_s2, u16 *, 0xC) = 0U;
            func_80012628(var_a0);
        }
        break;
    case 3:
        temp_v1_2 = M2C_FIELD(temp_s2, u16 *, 0xC);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0_2 = temp_v1_2 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0_2 = temp_v1_2 + 1;
        }
        M2C_FIELD(temp_s2, u16 *, 0xC) = var_v0_2;
        if ((u32) (var_v0_2 & 0xFFFF) >= 0x21U) {
            func_80012628(D_8008ED68);
        }
        break;
    case 4:
        var_a1 = 0;
        if (func_800C9414() == 0) {
            do {
                temp_a0 = temp_s0 + 0x601 + var_a1;
                temp_v0 = M2C_FIELD((((M2C_FIELD(temp_s0, u8 *, 0xE) != 1) * 2) + ((M2C_FIELD(temp_s0, u8 *, 9) * 0x34) + D_801010B0) + var_a1), u8 *, 0xC);
                var_a1 += 1;
                *temp_a0 = temp_v0;
            } while (var_a1 < 2);
            var_a1_2 = 0;
            temp_a3 = temp_s0 + 0x603;
            temp_a2 = (M2C_FIELD(temp_s0, u8 *, 0xF) != 1) * 2;
            do {
                temp_a0_2 = temp_a3 + var_a1_2;
                temp_v0_2 = M2C_FIELD((temp_a2 + ((M2C_FIELD(temp_s0, u8 *, 9) * 0x34) + D_801010B0) + var_a1_2), u8 *, 0xC);
                var_a1_2 += 1;
                *temp_a0_2 = temp_v0_2;
            } while (var_a1_2 < 2);
            M2C_FIELD(temp_s0, s8 *, 0x616) = 0xFF;
            M2C_FIELD(temp_s0, s8 *, 0x615) = 2;
            func_800B077C(temp_s2, 0xA, temp_a2, temp_a3);
            func_8002CC74();
            func_8002CD50();
            func_80012628();
        }
        break;
    case 5:
        if (func_800C9414() == 0) {
            func_800125D8();
        }
        break;
    }
    func_8002CC74();
    func_8002CD50();
}
