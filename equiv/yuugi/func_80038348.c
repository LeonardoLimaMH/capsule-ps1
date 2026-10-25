#include "common.h"

/* o valor em v0 na saída é o que sobra nos registradores do original */
s32 func_80038348(u8 *p) {
    s32 v;

    v = *(s16 *)(p + 0x26);
    if (v == 0) {
        return 0;
    }
    if (*(u16 *)(p + 0x2E) != 0) {
        v = *(u16 *)(p + 0x28) + *(u16 *)(p + 0x2A);
        if (*(s16 *)(p + 0x28) + *(s16 *)(p + 0x2A) >= *(u16 *)(p + 0x2C)) {
            *(u16 *)(p + 0x28) = *(u16 *)(p + 0x2C);
            return v;
        }
    } else if (*(s16 *)(p + 0x2A) - *(s16 *)(p + 0x28) >= *(u16 *)(p + 0x2C)) {
        v = -*(u16 *)(p + 0x2C);
    } else {
        v = *(u16 *)(p + 0x28) - *(u16 *)(p + 0x2A);
    }
    *(s16 *)(p + 0x28) = v;
    return v;
}
