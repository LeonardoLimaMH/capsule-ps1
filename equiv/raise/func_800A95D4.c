#include "common.h"

void func_800A95D4(void) {
    extern u8 D_800EE914[];
    u8 *var_a1;
    u8 *var_v1;
    s32 var_a0;
    s32 var_a2;

    var_a2 = 0;
    var_a1 = D_800EE914;
    M2C_FIELD(D_800EE914, s32 *, 0) = 0;
    M2C_FIELD(D_800EE914, s8 *, 0x98) = 0x40;
    M2C_FIELD(D_800EE914, s8 *, 0x99) = 0x74;
    M2C_FIELD(D_800EE914, s8 *, 0x9A) = 0xB8;
    M2C_FIELD(D_800EE914, s32 *, 0x94) = 0;
    M2C_FIELD(D_800EE914, s8 *, 0x9B) = 0x2C;
    do {
        var_a0 = 0;
        var_v1 = D_800EE914;
        M2C_FIELD(var_a1, s32 *, 4) = 0;
        M2C_FIELD(var_a1, s32 *, 0x70) = -1;
loop_2:
        M2C_FIELD((var_v1 + var_a2), s32 *, 0x28) = 0;
        var_a0 += 1;
        var_v1 += 0x24;
        if (var_a0 < 2) {
            goto loop_2;
        }
        var_a1 += 4;
        var_a2 += 4;
    } while ((s32) var_a1 < (s32) (D_800EE914 + 0x24));
}
