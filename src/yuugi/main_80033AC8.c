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
}

void func_80033BD0(void) {
    s32 i;

    for (i = 0; i < 0x99; i++) {
        D_800922F0.p[i].d = 0;
    }
    D_80092424[0] = 0;
    D_80078D3C = 0;
}
