#include "common.h"

extern u8 D_8008ED68[];
extern s32 func_8009A64C(u8 *);

s32 func_8009AF70(u8 *o) {
    u8 *w = D_8008ED68;
    if (w[0x99A] != 1 && *(u16 *)(o + 0x7A) == 0) {
        *(s32 *)(o + 0x34) = (*(s32 *)(o + 0x34) & ~0x7F) | 0x10;
        *(s16 *)(o + 0x46) = 0x2C - *(s32 *)(w + 0x108) / 2;
        *(s16 *)(o + 0x6E) = -10;
        *(s16 *)(o + 0x4E) = 5;
        *(s16 *)(o + 0x4A) = 0x268 - *(s32 *)(w + 0x10C) / 2;
    }
    return func_8009A64C(o);
}
