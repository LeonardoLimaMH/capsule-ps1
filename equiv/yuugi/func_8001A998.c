#include "common.h"

/* zera n bytes: bytes soltos nas pontas, palavras alinhadas no meio.
   O valor em v0 na saída é o que sobra nos registradores do original. */
u32 func_8001A998(u8 *p, s32 n) {
    s32 i;
    u32 *w;
    u32 cnt;

    if (n < 8) {
        if (n <= 0) {
            return 1;
        }
        for (i = 0; i < n; i++) {
            p[i] = 0;
        }
        return (u32)(p + n);
    }
    for (i = 0; i < 4; i++) {
        p[i] = 0;
        p[i + n - 4] = 0;
    }
    if ((u32)p & 3) {
        w = (u32 *)((((u32)p >> 2) << 2) + 4);
    } else {
        w = (u32 *)p;
    }
    cnt = ((u32)(p + n) - (u32)w) / 4;
    if ((s32)(cnt - 1) < 0) {
        return cnt;
    }
    for (i = cnt - 1; i >= 0; i--) {
        w[i] = 0;
    }
    return (u32)w - 4;
}
