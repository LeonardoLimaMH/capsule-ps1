#include "common.h"

void func_800A13E8(void) {
    extern u16 D_8008EE48[];
    M2C_UNK var_a0;

    switch ((*D_8008EE48)) {
    case 0:
        func_8001A49C(0x8011C400);
        var_a0 = 0x8011EDF4;
block_17:
        func_8001A49C(var_a0);
        func_80012578();
        return;
    case 1:
        var_a0 = 0x8013B9B4;
        goto block_17;
    case 2:
        var_a0 = 0x8014E298;
        goto block_17;
    case 3:
        var_a0 = 0x8016CF00;
        goto block_17;
    case 4:
        var_a0 = 0x801840FC;
        goto block_17;
    case 5:
        var_a0 = 0x801891A0;
        goto block_17;
    case 6:
        var_a0 = 0x8018E048;
        goto block_17;
    case 7:
        var_a0 = 0x80194728;
        goto block_17;
    case 8:
        var_a0 = 0x80199B34;
        goto block_17;
    case 9:
        var_a0 = 0x8019E904;
        goto block_17;
    case 10:
        var_a0 = 0x801A4664;
        goto block_17;
    case 11:
        var_a0 = 0x801A9560;
        goto block_17;
    case 12:
        var_a0 = 0x801AF324;
        goto block_17;
    case 13:
        var_a0 = 0x801B49C0;
        goto block_17;
    case 14:
        var_a0 = 0x801BBC64;
        goto block_17;
    default:
        func_80012508();
        return;
    }
}
