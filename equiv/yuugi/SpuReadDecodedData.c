#include "common.h"

s32 SpuReadDecodedData(s32 arg0, s32 arg1) {
    extern void * D_80071598[];
    M2C_UNK var_a1;
    M2C_UNK var_a2;
    s32 var_a0;

    var_a0 = arg0;
    if (arg1 != 5) {
        var_a1 = 0;
        if (arg1 != 6) {
            var_a2 = 0x40;
        } else {
            var_a0 += 0x800;
            var_a1 = 0x100;
            var_a2 = 0x20;
        }
    } else {
        var_a1 = 0;
        var_a2 = 0x20;
    }
    _spu_Fr_(var_a0, var_a1, var_a2);
    return (M2C_FIELD((*D_80071598), u16 *, 0x1AE) & 0x800) != 0;
}
