#include "common.h"

extern s32 D_80094768[];

/* ordena (bolha) os pares {chave, valor} até a primeira chave zero, no máximo 16 */
void func_8003C654(void) {
    s32 n, i, j;
    s32 *a, *b;
    s32 t0, t1;

    for (n = 0; n < 16; n++) {
        if (D_80094768[n * 2] == 0) {
            break;
        }
    }
    for (i = 0; i < n; i++) {
        a = &D_80094768[i * 2];
        for (j = n - 1; i < j; j--) {
            b = &D_80094768[j * 2];
            if (b[0] < a[0]) {
                t1 = a[1];
                t0 = a[0];
                a[1] = b[1];
                a[0] = b[0];
                b[1] = t1;
                b[0] = t0;
            }
        }
    }
}
