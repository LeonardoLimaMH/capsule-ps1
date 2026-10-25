#include "common.h"

typedef struct { u8 b[8]; } B8;
extern u8 D_800EFF58[];
extern B8 D_80097C8C;
extern s16 D_800ED878;
extern s32 D_800EFFB8;
extern void func_800BB310(s32, s32);

s32 func_8009DC78(s32 a0) {
    B8 t = D_80097C8C;
    u8 *f;
    s32 i;
    if (a0 == 1) t = *(B8 *)(D_800EFF58 + 0x64);
    f = D_800EFF58;
    for (i = 0; i < 7; i++, f += 4) {
        u8 *o = *(u8 **)(f + 0x28);
        o[0x5B] = a0;
        *(B8 *)(o + 0x5C) = t;
        if (a0 != 1) func_800BB310(i * D_800ED878, 1);
    }
    D_800EFFB8 = a0;
    return 0x800F0000;
}
