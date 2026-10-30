#include "common.h"

s32 func_8003BFCC(void *arg0) {
    extern s32 D_80078C9C;
    extern u8 D_80078CAC[];
    extern M2C_UNK D_800944B8[];
    s32 temp_v0;
    s32 var_a0;
    u32 temp_v1;
    u32 var_a3;
    u32 var_t1;
    u8 *var_a1;
    u8 *var_a2;
    u8 var_v0;
    u8 var_v1;
    void *temp_t0;

    var_t1 = -1U;
    var_a3 = M2C_FIELD(arg0, u32 *, 0);
    temp_t0 = (D_80078C9C * 0x2AC) + (u8 *)D_800944B8;
    var_a1 = D_80078CAC;
loop_1:
    var_a2 = M2C_FIELD(temp_t0, s32 *, 0x284) + var_a3;
    var_a0 = 3;
loop_2:
    var_v1 = *var_a1;
    var_v0 = *var_a2;
    var_a1 += 1;
    if (var_v1 == var_v0) {
        var_a0 -= 1;
        var_a2 += 1;
        if (var_a0 == 0) {
            var_v1 = *var_a1;
            var_v0 = *var_a2;
        } else {
            goto loop_2;
        }
    }
    if (var_v1 != var_v0) {
        var_a3 += 1;
        var_a1 = D_80078CAC;
        if ((u32) M2C_FIELD(temp_t0, u32 *, 0x294) >= var_a3) {
            goto loop_1;
        }
    } else {
        var_t1 = var_a3 + 4;
    }
    M2C_FIELD(arg0, u32 *, 0) = var_t1;
    if (var_t1 != -1U) {
        temp_v0 = func_8003AC60(arg0, var_a1, var_a2, var_a3);
        M2C_FIELD(arg0, s32 *, 8) = temp_v0;
        temp_v1 = M2C_FIELD(arg0, u32 *, 0);
        M2C_FIELD(arg0, u32 *, 0x10) = temp_v1;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_v1 + temp_v0);
        return 0;
    }
    return 1;
}
