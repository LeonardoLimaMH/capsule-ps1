#include "common.h"

s32 _SpuIsInAllocateArea_(s32 arg0) {
    extern s32 D_800715C0[];
    extern void * D_80071600[];
    s32 temp_v1;
    s32 var_v0;
    u32 temp_a0;
    u32 temp_v1_2;
    void *var_a1;

    temp_a0 = arg0 << (*D_800715C0);
    if ((*D_80071600) == NULL) {
        return 0;
    }
    var_a1 = (*D_80071600);
loop_3:
    temp_v1 = M2C_FIELD(var_a1, s32 *, 0);
    if (temp_v1 & 0x80000000) {
block_7:
        var_a1 += 8;
        goto loop_3;
    }
    temp_v1_2 = temp_v1 & 0x0FFFFFFF;
    if (!(temp_v1 & 0x40000000)) {
        var_v0 = 1;
        if (temp_v1_2 < temp_a0) {
            var_v0 = 1;
            if (temp_a0 >= (u32) (temp_v1_2 + M2C_FIELD(var_a1, s32 *, 4))) {
                goto block_7;
            }
        }
    } else {
        var_v0 = 0;
    }
    return var_v0;
}
