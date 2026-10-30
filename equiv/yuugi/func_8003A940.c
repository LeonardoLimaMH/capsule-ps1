#include "common.h"

s32 func_8003A940(u32 arg0) {
    extern s32 D_80078C9C;
    extern u8 D_80078CAC[];
    extern M2C_UNK D_800944B8[];
    s32 var_a0;
    s32 var_v0;
    u32 var_a3;
    u8 *var_a1;
    u8 *var_a2;
    u8 var_v0_2;
    u8 var_v1;
    void *temp_t0;

    var_a3 = arg0;
    temp_t0 = (D_80078C9C * 0x2AC) + (u8 *)D_800944B8;
    var_a1 = D_80078CAC;
loop_1:
    var_a2 = M2C_FIELD(temp_t0, s32 *, 0x284) + var_a3;
    var_a0 = 3;
loop_2:
    var_v1 = *var_a1;
    var_v0_2 = *var_a2;
    var_a1 += 1;
    if (var_v1 == var_v0_2) {
        var_a0 -= 1;
        var_a2 += 1;
        if (var_a0 == 0) {
            var_v1 = *var_a1;
            var_v0_2 = *var_a2;
        } else {
            goto loop_2;
        }
    }
    var_v0 = var_a3 + 4;
    if (var_v1 != var_v0_2) {
        var_a3 += 1;
        var_a1 = D_80078CAC;
        if ((u32) M2C_FIELD(temp_t0, u32 *, 0x294) < var_a3) {
            var_v0 = -1;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
