#include "common.h"

s32 func_800C7FDC(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE54[];
    u32 temp_v0_2;
    s32 var_a0;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s8 temp_v0;
    u16 temp_v1_2;
    u16 var_v1_2;
    u32 temp_a0;
    u8 temp_v1;
    u8 var_v1;
    void *temp_s0;
    void *var_v0_3;

    var_s5 = 0;
    temp_s0 = arg1 + ((arg2 * 0x2E8) + 0x18) + (arg3 * 0x7C);
    switch ((*D_8008EE54)) {
    case 0:
        if ((M2C_FIELD(temp_s0, u8 *, 0) != 0x2E) || (temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x29), ((temp_v1 < 0xFEU) != 0))) {
            var_s5 = 1;
        default:
block_38:
            var_v0 = var_s5;
            return var_v0;
        }
        temp_v0 = arg2 + 3;
        if (temp_v1 == 0xFF) {
            M2C_FIELD(arg1, s8 *, 0x614) = temp_v0;
        case 3:
block_7:
            func_80012668();
            return 0;
        }
        M2C_FIELD(arg1, s8 *, 0x614) = temp_v0;
        func_80012684(9);
        return 0;
    case 1:
        M2C_FIELD(arg1, s8 *, 0x7A4) = 0;
        M2C_FIELD(arg1, s32 *, 0x78C) = (s32) M2C_FIELD((*D_80069AD4), s32 *, 0x44);
        M2C_FIELD(arg1, s32 *, 0x790) = (s32) M2C_FIELD((*D_80069AD4), s32 *, 0x48);
        M2C_FIELD(arg1, s32 *, 0x794) = (s32) M2C_FIELD((*D_80069AD4), s32 *, 0x4C);
        func_800B3488(arg1, temp_s0);
        M2C_FIELD(temp_s0, s8 *, 0x26) = 2;
        func_8009C4B0(arg0, arg2, arg3);
        M2C_FIELD(temp_s0, s8 *, 0x17) = 0x8A;
        M2C_FIELD(temp_s0, s8 *, 0x23) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x24) = 0x4D;
        temp_v0_2 = M2C_FIELD(temp_s0, s32 *, 0x18) ^ 0x100;
        M2C_FIELD(temp_s0, s32 *, 0x18) = temp_v0_2;
        if (temp_v0_2 < 0) {
            M2C_FIELD(temp_s0, s32 *, 0x18) = (s32) (temp_v0_2 ^ 0x80000000);
        }
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x70), s32 *, 0x8C) = 0;
        M2C_FIELD(temp_s0, u8 *, 0x25) = func_800C94DC(arg0, 0);
        goto block_7;
    case 2:
        var_v0_2 = func_800B2F48(arg0, 0);
block_34:
        var_v0 = 0;
        if (var_v0_2 != 0) {
            goto block_7;
        }
        /* Duplicate return node #39. Try simplifying control flow for better match */
        return var_v0;
    case 4:
        var_a0 = 0;
        var_v0_3 = temp_s0;
        do {
            var_a0 += 1;
            M2C_FIELD(var_v0_3, u8 *, 0xE) = (u8) M2C_FIELD(var_v0_3, u8 *, 9);
            var_v0_3 = temp_s0 + var_a0;
        } while (var_a0 < 5);
        temp_a0 = (u8) M2C_FIELD(temp_s0, u8 *, 9) >> 1;
        M2C_FIELD(temp_s0, u8 *, 0xE) = (u8) temp_a0;
        if (temp_a0 != 0) {
            var_v1 = M2C_FIELD(temp_s0, u8 *, 9);
            if (var_v1 >= temp_a0) {
                var_v1 = (u8) temp_a0;
            }
        } else {
            var_v1 = 1;
        }
        M2C_FIELD(temp_s0, u8 *, 0xE) = var_v1;
        M2C_FIELD(temp_s0, s8 *, 0x6A) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x28) = 0;
        M2C_FIELD(temp_s0, u8 *, 0x29) = 0U;
        goto block_7;
    case 5:
        var_v0 = 0;
        if (func_800C942C(arg0, M2C_FIELD(temp_s0, u8 *, 0x25)) == M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x70), s32 *, 0x8C)) {
            M2C_FIELD(temp_s0, s8 *, 0x17) = 0x8A;
            M2C_FIELD(temp_s0, s8 *, 0x23) = 1;
            M2C_FIELD(temp_s0, s8 *, 0x24) = 0x45;
            M2C_FIELD(arg0, u16 *, 0xC) = 0U;
            goto block_7;
        }
        /* Duplicate return node #39. Try simplifying control flow for better match */
        return var_v0;
    case 6:
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD((*D_8008ED68), u8 *, 0x103) >= 2U) {
            var_v1_2 = temp_v1_2 + M2C_FIELD((*D_8008ED68), u8 *, 0x103);
        } else {
            var_v1_2 = temp_v1_2 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v1_2;
        if ((var_v1_2 & 0xFFFF) == 0xA) {
            func_80034AB0(0xA);
        }
        var_v0 = 0;
        if (M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x70), s16 *, 0x24) < 0) {
            M2C_FIELD(temp_s0, s8 *, 0x17) = 1;
            M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
            M2C_FIELD(temp_s0, u8 *, 0x25) = func_800A835C(arg0, arg2);
            func_800A84A0(temp_s0, arg2, arg3, 0);
            goto block_7;
        }
        /* Duplicate return node #39. Try simplifying control flow for better match */
        return var_v0;
    case 7:
        func_800B3878(arg1);
        goto block_7;
    case 8:
        var_v0 = 0;
        if (func_800B2F48(arg0, 1) != 0) {
            var_s5 = 1;
block_37:
            M2C_FIELD(temp_s0, u8 *, 0x29) = 0U;
            M2C_FIELD(arg1, s8 *, 0x614) = 0;
            goto block_38;
        }
        /* Duplicate return node #39. Try simplifying control flow for better match */
        return var_v0;
    case 9:
        func_800220B8(arg0);
        func_8009FE90(arg0, temp_s0 + 1);
        func_80012668();
        /* fallthrough */
    case 10:
        var_v0_2 = func_800212AC(arg0, 1, 0, 0);
        goto block_34;
    case 11:
        var_s5 = 1;
        goto block_37;
    }
}
