#include "common.h"

void func_800CD188(s32 arg0, s32 arg1) {
    extern u8 D_80069EC4[];
    extern u8 D_80111FBC[];
    s32 temp_a3;
    s32 var_a0;
    s32 var_a2;
    void *temp_v0;

    var_a2 = 0;
    temp_a3 = arg1 * 0x24;
    var_a0 = (arg0 + 0x13) * 0x1C;
    do {
        temp_v0 = var_a0 + D_80069EC4;
        var_a2 += 1;
        M2C_FIELD(temp_v0, void **, 4) = (void *) (temp_a3 + D_80111FBC);
        M2C_FIELD(temp_v0, void **, 8) = (void *) (temp_a3 + (D_80111FBC + 0x1878));
        M2C_FIELD(temp_v0, void **, 0xC) = (void *) ((arg1 * 0x50) + (D_80111FBC + 0x30F0));
        var_a0 += 0x2D8;
    } while (var_a2 < 2);
}
