#include "common.h"

s32 func_800A070C(void *arg0) {
    extern M2C_UNK D_80065310[];
    s32 temp_v0;
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_v1;
    u8 temp_v1_2;

    var_v0 = 0;
    if (M2C_FIELD((arg0 + M2C_FIELD(arg0, u8 *, 0xBCA)), u8 *, 0x5E4) != 0xFF) {
        var_v0 = 0;
        if (func_800202A4(5) == 0) {
            temp_v0 = func_800CB10C(arg0, arg0 + 0x5D0, M2C_FIELD(arg0, u8 *, 0xBCA));
            if (temp_v0 == 2) {
                temp_v1 = M2C_FIELD(arg0, u8 *, 0xBCA);
                temp_a1 = M2C_FIELD((arg0 + temp_v1), u8 *, 0x5E4);
                if (temp_a1 >= 8U) {
                    var_a0 = 0;
                } else {
                    var_a0 = (temp_v1 * 0x980) - 0x5580;
                }
                var_v1 = M2C_FIELD((*((temp_a1 * 4) + D_80065310) + var_a0), s32 *, 0x2C);
                var_v0 = 1;
                goto block_12;
            }
            var_v0 = 0;
            if (temp_v0 == 0) {
                temp_v1_2 = M2C_FIELD(arg0, u8 *, 0xBCA);
                temp_a1_2 = M2C_FIELD((arg0 + temp_v1_2), u8 *, 0x5E4);
                if (temp_a1_2 >= 8U) {
                    var_a0 = 0;
                } else {
                    var_a0 = (temp_v1_2 * 0x980) - 0x5580;
                }
                var_v1 = M2C_FIELD((*((temp_a1_2 * 4) + D_80065310) + var_a0), s32 *, 0x30);
                var_v0 = 1;
block_12:
                M2C_FIELD(arg0, s32 *, 0x14) = (s32) (var_v1 + var_a0);
            }
        }
    }
    return var_v0;
}
