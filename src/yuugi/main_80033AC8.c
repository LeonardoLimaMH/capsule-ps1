#include "common.h"
#include "yuugi.h"

typedef struct { s32 a, b, c, d; } S_33BD0;
typedef struct { u8 pad[0x140]; S_33BD0 *p; } S_922F0;
extern S_922F0 D_800922F0;
extern s16 D_80092424[];
extern s16 D_80078D3C;
extern s32 D_80078D40;
extern u8 D_80093490[];

void func_80033AC8(void) {
    s32 p[6];
    s32 i;
    register u8 *v0_ptr asm("v0");
    u8 *g;
    u8 *h;
    u8 *a;
    S_922F0 *b;

    i = 0;
    v0_ptr = (u8 *)&D_800922F0;
    g = v0_ptr;
    h = g;
    g[0x125] = 0;
    g[0x126] = 0;
    for (; i < 4; i++) {
        h[0x127 + i] = 0;
        *(s16 *)(g + 0x12C) = 0;
        g += 2;
    }
    SpuReserveReverbWorkArea(1);
    SpuSetReverb(1);
    p[0] = 7;
    p[1] = 2;
    ((s16 *)p)[4] = 0x7FFF;
    ((s16 *)p)[5] = 0x7FFF;
    SpuSetReverbModeParam(p);
    SpuSetTransferMode(0);
    a = D_80093490;
    *(s32 *)(a + 4) = 0x601FF;
    *(s16 *)(a + 0x14) = 0x1000;
    *(s16 *)(a + 0x18) = 0x3C00;
    *(s32 *)(a + 0x24) = 1;
    *(s32 *)(a + 0x28) = 1;
    *(s16 *)(a + 0xC) = 0;
    *(s16 *)(a + 0xE) = 0;
    *(s32 *)(a + 0x2C) = 3;
    *(s16 *)(a + 0x30) = 0;
    *(s16 *)(a + 0x32) = 0;
    *(s16 *)(a + 0x34) = 0;
    *(s16 *)(a + 0x36) = 0;
    *(s16 *)(a + 0x38) = 0xF;
    b = &D_800922F0;
    b->p = (S_33BD0 *)0x801EF000;
    D_80078D3C = 0;
    D_80078D40 = 0;
    *(s32 *)((u8 *)b + 0x138) = *(s32 *)((u8 *)b + 0xC) + 5;
}

void func_80033BD0(void) {
    s32 i;

    for (i = 0; i < 0x99; i++) {
        D_800922F0.p[i].d = 0;
    }
    D_80092424[0] = 0;
    D_80078D3C = 0;
}
