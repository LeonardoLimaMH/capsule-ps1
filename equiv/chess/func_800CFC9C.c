#include "common.h"

s32 func_800CFC9C(s32 arg0) {
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_80118C18[];
    s32 var_s0;
    s32 var_v0;

    if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 1) {
        if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) < 2) {
            if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 0) {
                return 0;
            }
            func_800CF2C8(arg0 & 0xFF, D_8008ED68);
            goto block_8;
        }
        if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 2) {
            var_v0 = 0;
            if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 3) {
                return 0;
            }
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = 0U;
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return var_v0;
        }
        var_s0 = 0;
        if ((M2C_FIELD(D_80118C18, u16 *, 8) / 10) & 0xFFFF) {
loop_13:
            var_s0 += 1;
            if (func_800CF960() != 0) {
                if (var_s0 < ((M2C_FIELD(D_80118C18, u16 *, 8) / 10) & 0xFFFF)) {
                    goto loop_13;
                }
            } else {
                M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
            }
        }
        if ((u32) M2C_FIELD(D_8008ED68, u32 *, 0xC4) < 0x1A0U) {
            M2C_FIELD(D_80118C18, u16 *, 8) = (u16) (M2C_FIELD(D_80118C18, u16 *, 8) + 1);
        }
        var_v0 = 1;
        if ((u32) M2C_FIELD(D_8008ED68, u32 *, 0xC4) >= 0x201U) {
            M2C_FIELD(D_80118C18, u16 *, 8) = (u16) (M2C_FIELD(D_80118C18, u16 *, 8) - 0xA);
block_8:
            return 1;
        }
        return var_v0;
    }
    func_800CF450(D_8008ED68);
    return 1;
}
