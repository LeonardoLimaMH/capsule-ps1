#include "common.h"

void func_80032570(void) {
    extern u8 D_80078D34;
    extern u16 D_80085430[];
    extern s16 D_800922DC[];
    extern s16 D_800922DE[];
    extern u8 D_800922FA[];
    s32 var_a0;
    s32 var_a0_2;

    if ((*D_800922DE) != 0) {
        var_a0 = (*D_800922FA) | 2;
    } else {
        var_a0 = (*D_800922FA) & 0xFD;
    }
    if ((*D_800922DC) != 2) {
        var_a0_2 = var_a0 | 1;
    } else {
        var_a0_2 = var_a0 & 0xFE;
    }
    func_800337E0(var_a0_2 & 0xFF);
    if ((*D_800922DC) != 2) {
        if (D_80078D34 != 1) {
            func_800338DC((*D_80085430));
        }
    } else {
        func_80033974(0);
    }
}
