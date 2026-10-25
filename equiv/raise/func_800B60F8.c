#include "common.h"

void func_800B60F8(void) {
    extern u8 D_800859F2[];
    extern u8 D_800EE5D0[];
    extern s32 D_800EF2EC[];
    extern s32 D_800EFF70[];
    s32 var_v1;

    if ((*D_800859F2) & 8) {
        var_v1 = (*D_800EF2EC);
    } else {
        var_v1 = (*D_800EFF70);
    }
    func_800B6D98(0x19, 0x176, 0x10, 4, 0, D_800EE5D0, var_v1, 1, 0, 0, 2, 1);
}
