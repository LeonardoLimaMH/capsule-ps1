#include "common.h"

s32 func_800DCDE4(s32 arg0) {
    extern M2C_UNK D_80118C18[];
    s32 var_v0;

    var_v0 = 0;
    if (func_800202A4(0x64) < 0xA) {
        func_800D90C0(arg0 & 0xFF);
        var_v0 = 1;
        M2C_FIELD((*D_80118C18), u16 *, 0x5B4) = (u16) (M2C_FIELD((*D_80118C18), u16 *, 0x5B4) + func_800202A4(0x12C));
    }
    return var_v0;
}
