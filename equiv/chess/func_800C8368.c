#include "common.h"

s32 func_800C8368(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    extern u16 D_8008EE54[];
    s32 temp_s6;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = arg1 + ((arg2 * 0x2E8) + 0x18) + (arg3 * 0x7C);
    temp_s6 = M2C_FIELD(temp_s0, s32 *, 0x70);
    if ((*D_8008EE54) != 1) {
        if ((s32) (*D_8008EE54) < 2) {
            if ((*D_8008EE54) != 0) {
                return 0;
            }
            func_800CAA44(arg0, temp_s0);
            M2C_FIELD(temp_s0, u8 *, 0x6B) = (u8) ((M2C_FIELD(temp_s0, u8 *, 0xE) * 9) / 10);
            M2C_FIELD(arg1, s8 *, 0x715) = 0;
            if (M2C_FIELD(temp_s0, u8 *, 0x6B) == 0) {
                M2C_FIELD(temp_s0, u8 *, 0x6B) = 1U;
            }
            M2C_FIELD(arg1, s16 *, 0x710) = (s16) (M2C_FIELD(temp_s0, u8 *, 0x6B) - M2C_FIELD(temp_s0, u8 *, 0xE));
            func_800C471C(arg0, temp_s6, arg2, arg3);
            M2C_FIELD(arg1, s8 *, 0x70E) = 0;
            M2C_FIELD(arg1, s8 *, 0x70D) = 0;
            func_800C44BC(arg0, temp_s6, arg2, arg3, 0);
            M2C_FIELD(arg1, u8 *, 0x7A4) = 0U;
            func_80012668();
            return 0;
        }
        if ((*D_8008EE54) != 2) {
            return 0;
        }
        var_v0 = 0;
        if (func_800B3218(arg0, 1) != 0) {
            M2C_FIELD(arg1, s8 *, 0x70D) = 1;
            var_v0 = 1;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return var_v0;
    }
    func_800B3218(arg0, 0);
    var_v0 = 0;
    if ((u8) M2C_FIELD(arg1, u8 *, 0x7A4) >= 0x29U) {
        func_80012668();
        return 0;
    }
    return var_v0;
}
