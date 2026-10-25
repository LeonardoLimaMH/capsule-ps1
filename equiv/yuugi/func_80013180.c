#include "common.h"

extern u8 D_8008ED68[];

/* estado de botões: atual, anterior, recém-apertados e recém-soltos */
s32 func_80013180(s32 pad, s32 now) {
    u8 *p = D_8008ED68 + pad * 0x10;
    s32 prev = *(s32 *)(p + 0x80);
    s32 released;

    *(s32 *)(p + 0x80) = now;
    *(s32 *)(p + 0x84) = prev;
    *(s32 *)(p + 0x88) = ~prev & now;
    released = ~now & *(s32 *)(p + 0x84);
    *(s32 *)(p + 0x8C) = released;
    return released;
}
