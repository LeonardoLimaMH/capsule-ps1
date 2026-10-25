#include "common.h"

extern u8 D_800922F0[];
extern s16 D_80092434;

void func_800371A4(s32 vol) {
    s32 m[2];
    u8 v;

    v = ((D_800922F0[0x1187] * (((s16)vol * *(u16 *)(D_800922F0 + 4)) >> 8)) & 0xFFFF) >> 3;
    ((u8 *)m)[3] = 0;
    ((u8 *)m)[0] = v;
    if (D_800922F0[2] == 0) {
        ((u8 *)m)[1] = 0;
        ((u8 *)m)[2] = v;
    } else {
        ((u8 *)m)[1] = v;
        ((u8 *)m)[2] = 0;
    }
    DsMix(m);
    D_80092434 = vol;
}
