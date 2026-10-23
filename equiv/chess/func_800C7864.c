#include "common.h"

s32 func_800C7864(void *arg0, void *arg1, void *arg2, M2C_UNK arg3) {
    extern M2C_UNK D_8008ED68[];
    M2C_UNK sp18;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_v0;
    u16 temp_v0_3;
    u8 temp_a1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_4;
    u8 temp_v1;
    u8 var_v0_2;
    void *temp_v1_2;
    void *var_a0;
    void *var_a0_2;
    void *var_v1;
    void *var_v1_2;

    if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 1) {
        if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) < 2) {
            if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 0) {
                return 0;
            }
            var_a1 = 0;
            if (func_800B7734(arg0, arg1, arg2, arg3) == 0) {
                M2C_FIELD(arg2, s8 *, 0x26) = 0;
                temp_a1 = M2C_FIELD(arg1, u8 *, 0x5FA);
                func_8009C4B0(arg0, temp_a1, M2C_FIELD((arg1 + temp_a1), u8 *, 0x5FB));
                func_800374E8(0x800A);
                M2C_FIELD(arg0, u16 *, 0xC) = 0U;
                func_80012668();
                return 0;
            }
            var_v1 = arg1;
            do {
                temp_v0 = M2C_FIELD((arg2 + var_a1), u8 *, 0x15);
                var_a1 += 1;
                M2C_FIELD(var_v1, u8 *, 0x6E0) = temp_v0;
                var_v1 = arg1 + var_a1;
            } while (var_a1 < 2);
            func_80012684(3, var_a1);
            return 0;
        }
        switch (M2C_FIELD(D_8008ED68, u16 *, 0xEC)) { /* irregular */
        case 2:
            var_v0 = 0;
            if (M2C_FIELD(arg2, u8 *, 0x22) != 1) {
                temp_v1 = M2C_FIELD(arg1, u8 *, 0x709);
                if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                    var_v0_2 = temp_v1 - M2C_FIELD(D_8008ED68, u8 *, 0x103);
                } else {
                    var_v0_2 = temp_v1 - 1;
                }
                M2C_FIELD(arg1, u8 *, 0x709) = var_v0_2;
                var_v0 = 0;
                if (!(var_v0_2 & 0xFF)) {
                    var_a1_2 = 0;
                    M2C_FIELD(arg2, s8 *, 0x25) = func_800A83E0(arg0, arg2, arg3);
                    M2C_FIELD(arg2, s8 *, 0x17) = 1;
                    M2C_FIELD(arg2, s32 *, 0x18) = 0;
                    var_v1_2 = arg2;
                    do {
                        temp_v0_2 = M2C_FIELD((arg1 + var_a1_2), u8 *, 0x6E4);
                        var_a1_2 += 1;
                        M2C_FIELD(var_v1_2, u8 *, 0x15) = temp_v0_2;
                        var_v1_2 = arg2 + var_a1_2;
                    } while (var_a1_2 < 2);
                    func_80012668();
                    return 0;
                }
                /* Duplicate return node #28. Try simplifying control flow for better match */
                return var_v0;
            }
            /* Duplicate return node #28. Try simplifying control flow for better match */
            return var_v0;
        case 3:
            var_v0 = 0;
            if (func_800B2ABC(arg0, 0, arg2, arg3) != 0) {
                var_v0 = 1;
            }
            /* Duplicate return node #28. Try simplifying control flow for better match */
            return var_v0;
        default:
            return 0;
        }
    } else {
        temp_v0_3 = M2C_FIELD(arg0, u16 *, 0xC) + 1;
        M2C_FIELD(arg0, u16 *, 0xC) = temp_v0_3;
        var_a0 = arg1 + 0x6E0;
        if ((u32) (temp_v0_3 & 0xFFFF) < 0x78U) {
            var_v0 = 0;
            if (!(func_800337EC(var_a0, 1) & 1)) {
                var_a0 = arg1 + 0x6E0;
                goto block_15;
            }
            return var_v0;
        }
block_15:
        func_8001A998(var_a0, 0x2B);
        func_800B7790(arg0, arg1, arg2, arg3, &sp18);
        var_a1_3 = 0;
        var_a0_2 = arg2;
        do {
            temp_v1_2 = arg1 + var_a1_3;
            M2C_FIELD(temp_v1_2, u8 *, 0x6E0) = (u8) M2C_FIELD(var_a0_2, u8 *, 0x15);
            M2C_FIELD(temp_v1_2, u8 *, 0x6E6) = (u8) M2C_FIELD(var_a0_2, u8 *, 0x15);
            temp_v0_4 = *(&sp18 + var_a1_3);
            var_a1_3 += 1;
            M2C_FIELD(temp_v1_2, u8 *, 0x6E4) = temp_v0_4;
            var_a0_2 = arg2 + var_a1_3;
        } while (var_a1_3 < 2);
        M2C_FIELD(arg2, s8 *, 0x25) = func_800A8378(arg0, var_a1_3);
        M2C_FIELD(arg1, u8 *, 0x709) = 0x3CU;
        M2C_FIELD(arg1, s8 *, 0x708) = 0x3C;
        M2C_FIELD(arg2, s8 *, 0x17) = 0x82;
        M2C_FIELD(arg2, s8 *, 0x23) = 0;
        M2C_FIELD(arg2, s32 *, 0x18) = (s32) (M2C_FIELD(arg2, s32 *, 0x18) | 0x840000 | 0x01000000);
        func_80034AB0(0x800A);
        func_80012668();
        return 0;
    }
}
