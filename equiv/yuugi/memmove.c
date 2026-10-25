#include "common.h"

/* na cópia para a frente o original devolve o fim do destino, não o início */
u8 *memmove(u8 *d, u8 *s, s32 n) {
    if (d >= s) {
        for (n--; n >= 0; n--) {
            d[n] = s[n];
        }
        return d;
    }
    for (; n > 0; n--) {
        *d++ = *s++;
    }
    return d;
}
