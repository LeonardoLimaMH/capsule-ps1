#include "common.h"

s16 func_800A8CD0(s16 arg0, M2C_UNK arg1) {
    extern s16 D_800F2D20[];
    extern s32 D_800F2D24[];
    extern s16 D_800F2D28[];
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;

    (*D_800F2D24) = func_800202A4(0x64);
    (*D_800F2D20) = 0;
    if (arg0 > 0) {
loop_2:
        temp_v0_2 = func_800A8DB8((*D_800F2D20), arg1);
        (*D_800F2D28) = temp_v0_2;
        if (temp_v0_2 >= (*D_800F2D24)) {
            return (*D_800F2D20);
        }
        temp_v0_3 = (u16) (*D_800F2D20) + 1;
        (*D_800F2D20) = temp_v0_3;
        if (temp_v0_3 >= arg0) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    temp_v0 = arg0 - 1;
    (*D_800F2D20) = temp_v0;
    return temp_v0;
}
