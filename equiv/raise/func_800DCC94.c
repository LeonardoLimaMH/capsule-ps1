#include "common.h"

void func_800DCC94(void) {
    extern M2C_UNK D_80100F38[];
    s16 temp_a1;
    s16 temp_v0;
    u16 var_a0;
    u16 var_a0_2;
    void *temp_v1;

    temp_v1 = ((func_800B1260() & 0xFFFF) * 0x79C) + D_80100F38;
    temp_v0 = M2C_FIELD(temp_v1, s16 *, 0x336);
    var_a0 = (u16) M2C_FIELD(temp_v1, s16 *, 0x336);
    if (temp_v0 > 0) {
        if (temp_v0 >= 9) {
            var_a0 = 8;
        }
    } else {
        var_a0 = 1;
    }
    temp_a1 = M2C_FIELD(temp_v1, s16 *, 0x338);
    M2C_FIELD(temp_v1, s16 *, 0x336) = (s16) var_a0;
    if (temp_a1 > 0) {
        var_a0_2 = (u16) M2C_FIELD(temp_v1, s16 *, 0x338);
        if (temp_a1 >= 9) {
            var_a0_2 = 8;
        }
    } else {
        var_a0_2 = 1;
    }
    M2C_FIELD(temp_v1, s16 *, 0x338) = (s16) var_a0_2;
    M2C_FIELD(temp_v1, s16 *, 0x32C) = (s16) (var_a0_2 + ((M2C_FIELD(temp_v1, s16 *, 0x336) * 8) - 9));
}
