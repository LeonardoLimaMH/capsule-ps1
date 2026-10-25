#include "common.h"

s32 func_800B03B8(s32 arg1, s32 arg2) {
    extern u8 D_80069AD4[];
    s16 temp_v1;
    s16 var_v0_2;
    s16 var_v0_3;
    s32 var_v0;

    temp_v1 = M2C_FIELD(D_80069AD4, u16 *, 0xEA) + 0x10;
    var_v0_2 = temp_v1;
    M2C_FIELD(D_80069AD4, u16 *, 0xEA) = (u16) temp_v1;
    if (temp_v1 < 0) {
        var_v0_2 = temp_v1 + 0xFFF;
    }
    M2C_FIELD(D_80069AD4, u16 *, 0xEA) = (u16) (temp_v1 - ((var_v0_2 >> 0xC) << 0xC));
    func_8002CC74(temp_v1);
    func_8002CD50();
    var_v0 = 0;
    if (!(M2C_FIELD(D_80069AD4, u16 *, 0xEA) & 0x1FF)) {
        var_v0_3 = (s16) M2C_FIELD(D_80069AD4, u16 *, 0xEA);
        if (var_v0_3 < 0) {
            var_v0_3 += 0x1FF;
        }
        M2C_FIELD((arg1 + arg2), s8 *, 0x605) = (s8) (var_v0_3 >> 9);
        var_v0 = 1;
    }
    return var_v0;
}
