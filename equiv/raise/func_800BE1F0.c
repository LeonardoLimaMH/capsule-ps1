#include "common.h"

extern s32 D_800F062C[], D_800ED890, D_800ED894;
extern u16 D_800F2CF2, D_800F2CF0, D_800F2D10, D_80100D4E, D_80100D48, D_80100D4C, D_80100D44;
extern u16 D_80100D46, D_800F062A, D_80100D4A, D_800F0654, D_800F0656;

s32 func_800BE1F0(void) {
    s32 i;
    D_800ED890 = 0;
    D_800ED894 = 0;
    D_800F2CF2 = 0;
    D_800F2CF0 = 0;
    D_800F2D10 = 0;
    D_80100D4E = 0;
    D_80100D48 = 0xFF;
    D_80100D4C = 0;
    D_80100D44 = 0;
    D_80100D46 = 0;
    D_800F062A = 0x10;
    for (i = 4; i >= 0; i--) D_800F062C[i] = 0;
    D_80100D4A = 0;
    D_800F0654 = 0;
    D_800F0656 = 0;
    return 0;
}
