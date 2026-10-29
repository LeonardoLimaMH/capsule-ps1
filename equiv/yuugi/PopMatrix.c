/* stub-ret: mixed */
/* rand-u32-strided: 0x80073DA8 1 4 0,0x20,0x40,0x260,0x280,0x2A0,0xFFFFFFE0 */
#include "common.h"
#include "gte_inline.h"

/* libgte: desempilha a matriz de rotação e a translação do GTE */
extern s32 D_80073DA8, D_80073D9C;
extern u8 D_80073DAC[], D_8007405D[];
extern s32 printf();

long PopMatrix(void) {
    register long v0_ __asm__("$2");
    long keep = v0_; /* o original não mexe em v0 */
    long ra;
    long *m;
    if (D_80073DA8 <= 0) {
        __asm__ volatile("move %0, $31" : "=r"(ra));
        D_80073D9C = ra; /* o original guarda o próprio $ra aqui antes do printf */
        return printf(D_8007405D);
    }
    D_80073DA8 -= 0x20;
    m = (long *)(D_80073DAC + D_80073DA8);
    gte_SetRotMatrix(m);
    gte_SetTransMatrix(m);
    return keep;
}
