#include "common.h"

void func_800A6CE8(void) {
    extern s32 D_8006AF84[];
    M2C_UNK var_a1;
    M2C_UNK var_a2;

    func_8001A49C(0x80113000);
    func_8001A49C(0x80146A18);
    func_800C0C60();
    func_800A6ED4();
    func_8001AD48(8);
    func_8001611C(0x1000);
    var_a2 = 4;
    if ((u32) (((*D_8006AF84) % 28800) - 0x20D0) < 0x3840U) {
        var_a1 = 0;
        var_a2 = 0;
    } else {
        var_a1 = 1;
    }
    func_80014D30(1, var_a1, var_a2, MULT_HI((*D_8006AF84), 0x91A2B3C5));
    func_800AED5C(7, 0);
    func_80033974(0);
}
