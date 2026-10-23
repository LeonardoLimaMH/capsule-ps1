#include "common.h"

s32 func_800BB910(s32 arg0, void *arg1, void *arg2, s32 arg3, s32 arg4) {
    extern u16 D_8008EE50[];
    s32 var_s5;
    s32 var_v0;
    u16 var_v0_2;
    void *temp_a0;
    void *temp_v0;

    temp_a0 = M2C_FIELD(arg2, void **, 0x70);
    var_s5 = 0;
    switch ((*D_8008EE50)) {
    case 0:
        func_800B3488(arg1, arg2);
        func_80012628();
        /* fallthrough */
    case 1:
        var_v0_2 = func_800B3338(arg0, 0);
block_10:
        var_v0 = 0;
        if (var_v0_2 != 0) {
            func_80012628();
            return 0;
        }
        return var_v0;
    case 2:
        M2C_FIELD(arg2, u8 *, 0x17) = 0x88U;
        M2C_FIELD(arg2, s8 *, 0x23) = 3;
        func_80012628(temp_a0);
        return 0;
    case 3:
        var_v0 = 0;
        if (M2C_FIELD(arg2, u8 *, 0x22) == M2C_FIELD(arg2, u8 *, 0x17)) {
            func_80012628(temp_a0);
            return 0;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return var_v0;
    case 4:
        var_v0_2 = M2C_FIELD(temp_a0, u16 *, 0x26);
        goto block_10;
    case 5:
        M2C_FIELD(arg1, s8 *, 0x70D) = 0;
        func_800CB9F4(arg1, arg3, arg4);
        temp_v0 = arg2 + func_800C20E8(arg0, arg1, arg3, arg4, arg3, arg4);
        M2C_FIELD(arg1, s16 *, 0x710) = (s16) (M2C_FIELD(temp_v0, u8 *, 0x6B) - M2C_FIELD(temp_v0, u8 *, 0xE));
        func_80012628();
        return 0;
    case 6:
        var_v0_2 = func_800C5FA0(arg0, arg1, arg2, 0, 0);
        goto block_10;
    case 7:
        var_v0 = 0;
        if (M2C_FIELD(temp_a0, s16 *, 0x24) < 0) {
            func_80012628(temp_a0);
            return 0;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return var_v0;
    case 8:
        M2C_FIELD(arg2, u8 *, 0x17) = 1U;
        var_s5 = 1;
        /* fallthrough */
    default:
        var_v0 = var_s5;
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return var_v0;
    }
}
