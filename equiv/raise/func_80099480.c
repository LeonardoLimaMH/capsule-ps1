#include "common.h"

void func_80099480(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 var_v1;
    u32 temp_v0;
    u8 var_a1;

    var_a1 = 1;
    if ((u8) M2C_FIELD((*D_8008ED68), u8 *, 0x103) >= 2U) {
        var_a1 = M2C_FIELD((*D_8008ED68), u8 *, 0x103);
    }
    var_v1 = 0;
    if (var_a1 != 0) {
loop_3:
        temp_v0 = M2C_FIELD(arg0, u32 *, 0x3C) + 1;
        M2C_FIELD(arg0, u32 *, 0x3C) = temp_v0;
        var_v1 += 1;
        if (temp_v0 >= 7U) {
            func_800185F8((s32) var_a1);
            return;
        }
        if (var_v1 >= (s32) var_a1) {

        } else {
            goto loop_3;
        }
    }
}
