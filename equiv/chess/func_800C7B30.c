#include "common.h"

s32 func_800C7B30(void *arg0, void *arg1, void *arg2) {
    extern M2C_UNK D_8008ED68[];
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    u16 temp_v0;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1_2;
    u8 var_v0_2;
    void *temp_v1;
    void *var_v1;

    if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 1) {
        if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) < 2) {
            if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 0) {
                return 0;
            }
            var_v0 = 0;
            if (func_800B2ABC(arg0, 1, arg2) != 0) {
                func_80012668();
                return 0;
            }
            /* Duplicate return node #26. Try simplifying control flow for better match */
            return var_v0;
        }
        switch (M2C_FIELD(D_8008ED68, u16 *, 0xEC)) { /* irregular */
        case 2:
            temp_v0 = M2C_FIELD(arg0, u16 *, 0xC) + 1;
            M2C_FIELD(arg0, u16 *, 0xC) = temp_v0;
            var_a1 = 0;
            if ((u32) (temp_v0 & 0xFFFF) < 0x78U) {
                var_v0 = 0;
                if (!(func_800337EC(D_8008ED68, 0) & 1)) {
                    var_a1 = 0;
                    goto loop_15;
                }
                /* Duplicate return node #26. Try simplifying control flow for better match */
                return var_v0;
            }
            do {
loop_15:
                temp_v1 = arg1 + var_a1;
                temp_v0_2 = M2C_FIELD((arg2 + var_a1), u8 *, 0x15);
                temp_a0 = M2C_FIELD(temp_v1, u8 *, 0x6E0);
                var_a1 += 1;
                M2C_FIELD(temp_v1, u8 *, 0x6E6) = temp_v0_2;
                M2C_FIELD(temp_v1, u8 *, 0x6E4) = temp_a0;
            } while (var_a1 < 2);
            M2C_FIELD(arg2, s8 *, 0x25) = func_800A8378(arg0, var_a1);
            M2C_FIELD(arg1, u8 *, 0x709) = 0x3CU;
            M2C_FIELD(arg1, s8 *, 0x708) = 0x3C;
            M2C_FIELD(arg2, s8 *, 0x17) = 0x82;
            M2C_FIELD(arg2, s32 *, 0x18) = 0x01840000;
            M2C_FIELD(arg2, s8 *, 0x23) = 0;
            func_80034AB0(0x800A);
            func_80012668();
            return 0;
        case 3:
            var_v0 = 0;
            if (M2C_FIELD(arg2, u8 *, 0x22) != 1) {
                temp_v1_2 = M2C_FIELD(arg1, u8 *, 0x709);
                if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                    var_v0_2 = temp_v1_2 - M2C_FIELD(D_8008ED68, u8 *, 0x103);
                } else {
                    var_v0_2 = temp_v1_2 - 1;
                }
                M2C_FIELD(arg1, u8 *, 0x709) = var_v0_2;
                var_v0 = 0;
                if (!(var_v0_2 & 0xFF)) {
                    var_a1_2 = 0;
                    M2C_FIELD(arg2, s8 *, 0x25) = func_800A835C(arg0, M2C_FIELD(arg1, u8 *, 0x5FA));
                    M2C_FIELD(arg2, s8 *, 0x17) = 1;
                    M2C_FIELD(arg2, s32 *, 0x18) = 0;
                    var_v1 = arg2;
                    do {
                        temp_v0_3 = M2C_FIELD((arg1 + var_a1_2), u8 *, 0x6E4);
                        var_a1_2 += 1;
                        M2C_FIELD(var_v1, u8 *, 0x15) = temp_v0_3;
                        var_v1 = arg2 + var_a1_2;
                    } while (var_a1_2 < 2);
                    goto block_25;
                }
            }
            /* Duplicate return node #26. Try simplifying control flow for better match */
            return var_v0;
        default:
            return 0;
        }
    } else {
        if ((((u32) M2C_FIELD(arg2, u32 *, 0x14) >> 8) & 0xFFFF) == M2C_FIELD(arg1, u16 *, 0x6E0)) {
            M2C_FIELD(arg2, s8 *, 0x25) = func_800A835C(arg0, M2C_FIELD(arg1, u8 *, 0x5FA));
            M2C_FIELD(arg2, s8 *, 0x17) = 1;
            M2C_FIELD(arg2, s32 *, 0x18) = 0;
block_25:
            var_v0 = 1;
            return var_v0;
        }
        M2C_FIELD(arg2, s8 *, 0x26) = 0;
        temp_a1 = M2C_FIELD(arg1, u8 *, 0x5FA);
        func_8009C4B0(arg0, temp_a1, M2C_FIELD((arg1 + temp_a1), u8 *, 0x5FB));
        func_800374E8(0x800A);
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        func_80012668();
        return 0;
    }
}
