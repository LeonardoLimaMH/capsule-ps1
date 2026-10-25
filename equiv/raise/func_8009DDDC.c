#include "common.h"

typedef struct { u8 b[8]; } B8;
extern s32 D_8008F7D0, D_800EFFB8;
extern u8 D_800EFF58[];
extern B8 D_80097C8C;
extern s32 func_8009DFAC(void);

s32 func_8009DDDC(void) {
    B8 t;
    u8 *f;
    s32 i;
    if (D_8008F7D0 != 0) return 0;
    if (func_8009DFAC() != -1) return 0;
    f = D_800EFF58;
    *(s32 *)(*(u8 **)(f + 0x7C) + 0x38) &= ~1;
    t = D_80097C8C;
    t = *(B8 *)(f + 0x64);
    for (i = 0; i < 7; i++, f += 4) {
        u8 *o = *(u8 **)(f + 0x28);
        o[0x5B] = 1;
        *(B8 *)(o + 0x5C) = t;
    }
    D_800EFFB8 = 1;
    return -1;
}
