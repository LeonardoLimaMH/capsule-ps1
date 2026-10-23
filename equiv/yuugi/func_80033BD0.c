#include "common.h"

void func_80033BD0(void) {
    extern s16 D_80078D3C;
    extern M2C_UNK D_800922F0[];
    extern s16 D_80092424[];
    s32 var_a0;
    s32 var_v0;

    var_a0 = 0;
    var_v0 = 0 * 0x10;
    do {
        var_a0 += 1;
        M2C_FIELD((var_v0 + M2C_FIELD((*D_800922F0), s32 *, 0x140)), s32 *, 0xC) = 0;
        var_v0 = var_a0 * 0x10;
    } while (var_a0 < 0x99);
    (*D_80092424) = 0;
    D_80078D3C = 0;
}
