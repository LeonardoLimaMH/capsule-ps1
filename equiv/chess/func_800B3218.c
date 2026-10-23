#include "common.h"

s32 func_800B3218(s32 arg0, s32 arg1) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_8008ED68[];
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s3;
    s32 var_v1;
    u8 temp_v0;
    u8 var_s2;
    void *temp_s1;

    var_s3 = 0;
    var_s2 = 1;
    temp_s1 = arg0 + 0x5D0;
    if (M2C_FIELD(D_8008ED68, u8 *, 0x103) != 0) {
        var_s2 = M2C_FIELD(D_8008ED68, u8 *, 0x103);
    }
    var_s0 = 0;
    if ((s32) var_s2 > 0) {
loop_4:
        temp_v0 = M2C_FIELD(temp_s1, u8 *, 0x7A4) + 1;
        M2C_FIELD(temp_s1, u8 *, 0x7A4) = temp_v0;
        temp_v0_2 = rsin(((temp_v0 & 0xFF) << 0xC) / 6);
        var_v1 = temp_v0_2 >> 6;
        if (temp_v0_2 < 0) {
            var_v1 = (s32) (temp_v0_2 + 0x3F) >> 6;
        }
        temp_v1 = var_v1 + 0x660;
        M2C_FIELD(D_80069AD4, s32 *, 0xE0) = temp_v1;
        if ((temp_v1 == 0x660) && (arg1 != 0)) {
            var_s3 = 1;
        } else {
            var_s0 += 1;
            if (var_s0 < (s32) var_s2) {
                goto loop_4;
            }
        }
    }
    M2C_FIELD(D_8008ED68, s8 *, 0xA66) = 1;
    func_8002CC74();
    func_8002CD50();
    return var_s3;
}
