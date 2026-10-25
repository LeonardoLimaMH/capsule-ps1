#include "common.h"

u8 *func_8001A8C0(u8 *arg0, u8 *arg1) {
    s32 temp_v0_2;
    s32 var_a3;
    s32 var_v1;
    s32 var_v1_2;
    u32 var_t0;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_a3;
    u8 temp_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_t0 = 0;
loop_1:
    var_t0 = var_t0 >> 1;
loop_2:
    if (!(var_t0 & 0x100)) {
        temp_v0 = *var_a0;
        var_a0 += 1;
        var_t0 = temp_v0 | 0xFF00;
    }
    temp_a2 = M2C_FIELD(var_a0, u8 *, 0);
    if (!(var_t0 & 1)) {
        *var_a1 = temp_a2;
        var_a1 += 1;
        var_a0 += 1;
        goto loop_1;
    }
    if (!(temp_a2 & 0x80)) {
        temp_a3 = M2C_FIELD(var_a0, u8 *, 1);
        var_a0 += 2;
        var_v1 = (temp_a2 >> 2) + 2;
        var_a3 = temp_a3 | ((temp_a2 & 3) << 8);
        do {
loop_10:
            var_v1 -= 1;
            *var_a1 = *(var_a1 - var_a3);
            var_a1 += 1;
        } while (var_v1 >= 0);
        var_t0 = var_t0 >> 1;
        goto loop_2;
    }
    var_a0 += 1;
    if (!(temp_a2 & 0x40)) {
        var_a3 = (temp_a2 & 0xF) + 1;
        var_v1 = (temp_a2 >> 4) - 7;
        goto loop_10;
    }
    temp_v0_2 = temp_a2 & 0xFF;
    var_v1_2 = temp_v0_2 - 0xB9;
    if (temp_v0_2 != 0xFF) {
        do {
            temp_a2_2 = *var_a0;
            var_a0 += 1;
            var_a1 += 1;
            var_v1_2 -= 1;
            M2C_FIELD(var_a1, u8 *, -1) = temp_a2_2;
        } while (var_v1_2 >= 0);
        var_t0 = var_t0 >> 1;
        goto loop_2;
    }
    return var_a1;
}
