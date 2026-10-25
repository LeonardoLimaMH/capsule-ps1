#include "common.h"

s32 func_800ADD70(void *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5) {
    extern u8 D_801010B0[];
    s32 temp_t0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_t2;
    s32 var_v0;
    s32 var_v1;
    u32 temp_a0;
    u32 var_a0;

    temp_a0 = arg2 & 0xFF;
    temp_t0 = *(s32 *)((M2C_FIELD(arg0, u8 *, 9) * 0x34) + D_801010B0);
    if (((arg4 >= temp_a0) || (var_v1 = 2, ((((u32) M2C_FIELD((((arg3 & 0xFF) * 4) + ((temp_a0 * 0x34) + temp_t0)), u32 *, -0x34) >> 6) & 0x1FFF) == 0))) && ((temp_a0 >= arg4) || (var_v1 = 6, ((((u32) M2C_FIELD((((arg3 & 0xFF) * 4) + ((temp_a0 * 0x34) + temp_t0)), u32 *, 0x34) >> 6) & 0x1FFF) == 0)))) {
        var_a0 = arg3 & 0xFF;
        if (arg5 < var_a0) {
            var_v1 = 4;
            if (!(((u32) M2C_FIELD(((var_a0 * 4) + (((arg2 & 0xFF) * 0x34) + temp_t0)), u32 *, -4) >> 6) & 0x1FFF)) {
                var_a0 = arg3 & 0xFF;
                goto block_7;
            }
            goto block_10;
        }
block_7:
        if ((var_a0 >= arg5) || (var_v1 = 0, ((((u32) M2C_FIELD(((var_a0 * 4) + (((arg2 & 0xFF) * 0x34) + temp_t0)), u32 *, 4) >> 6) & 0x1FFF) == 0))) {
            return 0;
        }
        goto block_10;
    }
block_10:
    temp_v1 = (var_v1 + 8) - (M2C_FIELD((arg0 + arg1), u8 *, 0x605) & 0xFE);
    var_v0 = temp_v1;
    if (temp_v1 < 0) {
        var_v0 = temp_v1 + 7;
    }
    temp_v1_2 = temp_v1 - ((var_v0 >> 3) * 8);
    if (temp_v1_2 != 2) {
        if (temp_v1_2 < 3) {
            if (temp_v1_2 != 0) {
                return 0;
            }
            var_t2 = 0x1000;
            goto block_23;
        }
        switch (temp_v1_2) {                        /* irregular */
        case 4:
            var_t2 = 0x4000;
            goto block_23;
        case 6:
            var_t2 = 0x2000;
            goto block_23;
        default:
            return 0;
        }
    } else {
        var_t2 = 0x8000;
block_23:
        return var_t2;
    }
}
