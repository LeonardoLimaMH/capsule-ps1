#include "common.h"

extern u8 D_8008ED68[];

/* tmp[n] fica na pilha, indexado pelo argumento, como no original */
s32 func_800201D8(s32 n) {
    u32 tmp[2];
    u32 *e = (u32 *)(D_8008ED68 + n * 16 + 0xA4);
    u32 r = 0;
    s32 i;

    tmp[n] = *(u32 *)(D_8008ED68 + n * 16 + 0x88);
    for (i = 0; i < 4; i++, e++) {
        if (*e >= 0x28 && ((*e - 0x28) & 7) == 0) {
            tmp[n] |= 1 << (i + 12);
        }
    }
    if (tmp[n] & 0x1000) {
        r |= 1;
    }
    if (tmp[n] & 0x8000) {
        r |= 4;
    }
    if (tmp[n] & 0x4000) {
        r |= 0x10;
    }
    if (tmp[n] & 0x2000) {
        r |= 0x40;
    }
    return r & 0xFF;
}
