#include "common.h"

extern u8 D_8008ED68[];
extern s32 func_800185F8(u8 *);

s32 func_80099480(u8 *o) {
    s32 n = D_8008ED68[0x103] < 2 ? 1 : D_8008ED68[0x103];
    s32 i = 0;
    do {
        if ((*(u32 *)(o + 0x3C) += 1) >= 7) return func_800185F8(o);
        i++;
    } while (i < n);
    return 0;
}
