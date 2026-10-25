#include "common.h"

/* o valor em v0 na saída é o que sobra nos registradores do original */
s32 func_80038294(u8 *p) {
    s32 v;

    if (p[2] == 0) {
        *(s16 *)(p + 0x1E) = 0;
        return 0;
    }
    if (*(u16 *)(p + 0x14) != 0) {
        if (*(s16 *)(p + 0x1E) + *(s16 *)(p + 0x1C) < *(s16 *)(p + 0x20)) {
            v = *(u16 *)(p + 0x1E) + *(u16 *)(p + 0x1C);
        } else {
            v = *(u16 *)(p + 0x20);
            *(s16 *)(p + 0x14) = 0;
        }
    } else if (-*(s16 *)(p + 0x20) < *(s16 *)(p + 0x1E) - *(s16 *)(p + 0x1C)) {
        v = *(u16 *)(p + 0x1E) - *(u16 *)(p + 0x1C);
    } else {
        v = -*(u16 *)(p + 0x20);
        *(s16 *)(p + 0x14) = 1;
    }
    *(s16 *)(p + 0x1E) = v;
    return v;
}
