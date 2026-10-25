#include "common.h"

s32 func_800E1DAC(void) {
    extern u8 D_80091618[];
    extern s32 D_800EF2D8[];
    extern u8 D_800F2D30[];
    extern int func_80012508();
    s32 temp_s0_2;
    s32 var_v0;
    u16 temp_s0;

    temp_s0 = *(((*D_800EF2D8) * 0x1A8) + D_80091618);
    var_v0 = 1;
    if (*(temp_s0 + D_800F2D30) == 0xFF) {
        temp_s0_2 = func_800A8CB4(temp_s0);
        func_8001A464(temp_s0_2, func_800A0E6C(temp_s0));
        func_80019F30(temp_s0_2, &func_80012508);
        var_v0 = 0;
    }
    return var_v0;
}
