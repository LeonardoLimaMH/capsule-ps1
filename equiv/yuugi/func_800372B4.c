#include "common.h"

extern u8 D_800922F0[];
extern s32 SpuReadDecodedData();

/* energia dos dois canais decodificados (soma dos quadrados / 256) */
s32 func_800372B4(void) {
    s16 *a, *b;
    s32 i, v;

    if (*(u16 *)D_800922F0 & 3) {
        return 0;
    }
    v = SpuReadDecodedData(D_800922F0 + 0x14C, 5);
    *(s32 *)(D_800922F0 + 0x148) = v;
    if (v == 0) {
        a = *(s16 **)(D_800922F0 + 0x114C);
        b = *(s16 **)(D_800922F0 + 0x1154);
    } else {
        a = *(s16 **)(D_800922F0 + 0x1150);
        b = *(s16 **)(D_800922F0 + 0x1158);
    }
    *(s32 *)(D_800922F0 + 0x115C) = 0;
    *(s32 *)(D_800922F0 + 0x1160) = 0;
    for (i = 0; i < 256; i++) {
        *(s32 *)(D_800922F0 + 0x115C) += (a[i] * a[i]) >> 8;
        *(s32 *)(D_800922F0 + 0x1160) += (b[i] * b[i]) >> 8;
    }
    v = *(s16 *)(D_800922F0 + 0x115E);
    *(s32 *)(D_800922F0 + 0x115C) = v;
    *(s32 *)(D_800922F0 + 0x1160) = *(s16 *)(D_800922F0 + 0x1162);
    return v;
}
