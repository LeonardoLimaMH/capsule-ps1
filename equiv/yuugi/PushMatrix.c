/* stub-ret: mixed */
/* rand-u32-strided: 0x80073DA8 1 4 0,0x20,0x40,0x260,0x280,0x2A0,0xFFFFFFE0 */
#include "common.h"
#include "gte_inline.h"

/* libgte: empilha a matriz de rotação e a translação do GTE (pilha de 20 matrizes) */
extern s32 D_80073DA8, D_80073D9C;
extern u8 D_80073DAC[], D_8007402C[];
extern s32 printf();

long PushMatrix(void) {
    register long v0_ __asm__("$2");
    long keep = v0_; /* o original não mexe em v0 */
    long ra;
    long *m, a, b, c;
    if (D_80073DA8 >= 0x280) {
        __asm__ volatile("move %0, $31" : "=r"(ra));
        D_80073D9C = ra; /* o original guarda o próprio $ra aqui antes do printf */
        return printf(D_8007402C);
    }
    m = (long *)(D_80073DAC + D_80073DA8);
    GTE_CFC2(a, 0);
    GTE_CFC2(b, 1);
    m[0] = a;
    m[1] = b;
    GTE_CFC2(a, 2);
    GTE_CFC2(b, 3);
    m[2] = a;
    m[3] = b;
    GTE_CFC2(a, 4);
    m[4] = a;
    GTE_CFC2(a, 5);
    GTE_CFC2(b, 6);
    GTE_CFC2(c, 7);
    m[5] = a;
    m[6] = b;
    m[7] = c;
    D_80073DA8 += 0x20;
    return keep;
}
