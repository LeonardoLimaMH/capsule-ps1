#include "common.h"

void func_800A2810(void *arg0) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE4C[];
    extern u16 D_8008EE50[];
    M2C_UNK var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s3_2;
    u16 temp_v1;
    u16 var_v0;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_a1_2;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_s0_2;
    void *var_s1;
    void *var_s1_2;

    switch ((*D_8008EE4C)) {
    case 0:
        if (M2C_FIELD(arg0, u8 *, 1) == 0) {
            func_800A1D3C(arg0);
            return;
        }
        func_80012604(0x10);
        return;
    case 1:
        if ((func_800C9414() == 0) && !(((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xBFC), u32 *, 0x38) >> 3) & 1)) {
            temp_a1 = M2C_FIELD(arg0, u8 *, 0xBCA);
            if (M2C_FIELD((arg0 + temp_a1), u8 *, 0x5E0) != 0) {
                func_800FFCAC(arg0, temp_a1);
            }
            var_a0 = 2;
            if (M2C_FIELD(arg0, u8 *, 0x5DB) != 0) {
                var_a0 = 4;
            }
            func_80012604(var_a0);
            M2C_FIELD(arg0, s8 *, 0xBE5) = 0;
            M2C_FIELD(arg0, s8 *, 0xBE9) = 0;
            return;
        }
    default:
        return;
    case 2:
        func_800A208C(arg0);
        return;
    case 3:
        func_800A2308(arg0);
        return;
    case 4:
        temp_s0 = arg0 + 0x5D0;
        func_800FFAB0(arg0, M2C_FIELD(arg0, u8 *, 0xBCA));
        M2C_FIELD(temp_s0, s8 *, 0x6DF) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x619) = 1;
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        func_80012604(5);
        return;
    case 5:
        func_800A24A4(arg0);
        return;
    case 6:
        switch ((*D_8008EE50)) {                       /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            if ((u8) M2C_FIELD((arg0 + M2C_FIELD(arg0, u8 *, 0xBCA)), u8 *, 0xCA9) < 6U) {
block_28:
                func_8001264C(3);
                return;
            }
block_27:
            func_80012628();
            return;
        case 1:                                     /* switch 1 */
            if (func_800A0448(arg0) != 0) {
                func_800220B8(arg0);
                goto block_27;
            }
            goto block_28;
        case 2:                                     /* switch 1 */
            if (func_800220D4(arg0, 1, M2C_FIELD(arg0, u8 *, 0xBCA), 0) != 0) {
                goto block_27;
            }
            break;
        case 3:                                     /* switch 1 */
            M2C_FIELD(arg0, u8 *, 0xBCA) = (u8) (M2C_FIELD(arg0, u8 *, 0xBCA) ^ 1);
            func_80012604(7);
            return;
        }
        break;
    case 7:
        temp_s0_2 = arg0 + 0x5D0;
        if (func_800C9414() == 0) {
            temp_a0 = M2C_FIELD(temp_s0_2, u8 *, 0x5FA);
            var_a1 = 0;
            if (M2C_FIELD(temp_s0_2, u8 *, 0xB) != 0) {
                var_a1 = temp_a0 == M2C_FIELD(temp_s0_2, u8 *, 0xA);
            } else if ((M2C_FIELD((temp_s0_2 + temp_a0), u8 *, 0x6D9) == 6) && (temp_a0 == M2C_FIELD(temp_s0_2, u8 *, 0xA))) {
                var_a1 = 1;
            }
            if (var_a1 != 0) {
                func_800B0F1C(temp_s0_2, var_a1);
            }
            M2C_FIELD(temp_s0_2, s8 *, 0x615) = 2;
            M2C_FIELD(temp_s0_2, s8 *, 0x616) = 0xFF;
            func_80012604(8);
            return;
        }
        break;
    case 8:
        func_800AD240(arg0);
        return;
    case 9:
        func_800AD408(arg0);
        return;
    case 10:
        temp_a0_2 = arg0 + 0x5D0;
        temp_a1_2 = M2C_FIELD(temp_a0_2, u8 *, 0x5FA);
        var_a2 = 0;
        if (M2C_FIELD(temp_a0_2, u8 *, 0xB) != 0) {
            var_a2 = temp_a1_2 == M2C_FIELD(temp_a0_2, u8 *, 0xA);
        } else if ((M2C_FIELD((temp_a0_2 + temp_a1_2), u8 *, 0x6D9) == 6) && (temp_a1_2 == M2C_FIELD(temp_a0_2, u8 *, 0xA))) {
            var_a2 = 1;
        }
        if (var_a2 != 0) {
            func_80012604(0xB, temp_a1_2, var_a2);
            return;
        }
        if (M2C_FIELD(temp_a0_2, u8 *, 0xB) != 0) {
            func_80012604(4, temp_a1_2, var_a2);
            return;
        }
        func_80012604(1, temp_a1_2, var_a2);
        return;
    case 11:
        func_800A2660(arg0);
        return;
    case 12:
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        func_800125D8();
        /* fallthrough */
    case 13:
        temp_v1 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD((*D_8008ED68), u8 *, 0x103) >= 2U) {
            var_v0 = temp_v1 + M2C_FIELD((*D_8008ED68), u8 *, 0x103);
        } else {
            var_v0 = temp_v1 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0;
        if ((u32) (var_v0 & 0xFFFF) >= 0x3DU) {
            M2C_FIELD(arg0, u8 *, 0xD77) = 0U;
            func_80034AB0(0x85);
            func_80012604(0xE);
            return;
        }
        break;
    case 14:
        if (M2C_FIELD(arg0, u8 *, 0xD77) != 0) {
            func_800125D8();
            return;
        }
        break;
    case 15:
        var_s2 = 0;
        var_s3 = 0x5E8;
        do {
            var_s0 = 0;
            var_s1 = arg0 + var_s3;
loop_64:
            func_800A84A0(var_s1, var_s2, var_s0, 0);
            var_s0 += 1;
            var_s1 += 0x7C;
            if (var_s0 < 5) {
                goto loop_64;
            }
            var_s2 += 1;
            var_s3 += 0x2E8;
        } while (var_s2 < 2);
block_72:
        func_800125AC(1);
        break;
    case 16:
        M2C_FIELD((*D_80069AD4), s32 *, 0xE0) = 0x660;
        M2C_FIELD((*D_80069AD4), s32 *, 0xD8) = 0;
        M2C_FIELD((*D_80069AD4), s32 *, 0xDC) = 0;
        M2C_FIELD((*D_80069AD4), s16 *, 0xE8) = 0x1C0;
        var_s2_2 = 0;
        var_s3_2 = 0x5E8;
        M2C_FIELD((*D_80069AD4), s16 *, 0xEA) = (s16) (M2C_FIELD((arg0 + M2C_FIELD(arg0, u8 *, 0xBCA)), u8 *, 0xBD5) << 9);
        func_8002CC74();
        func_8002CD50();
        func_800B0F1C(arg0 + 0x5D0);
        do {
            var_s0_2 = 0;
            var_s1_2 = arg0 + var_s3_2;
loop_69:
            func_800A84A0(var_s1_2, var_s2_2, var_s0_2, 0);
            var_s0_2 += 1;
            var_s1_2 += 0x7C;
            if (var_s0_2 < 5) {
                goto loop_69;
            }
            var_s2_2 += 1;
            var_s3_2 += 0x2E8;
        } while (var_s2_2 < 2);
        M2C_FIELD(arg0, s8 *, 0xF) = 1;
        goto block_72;
    }
}
