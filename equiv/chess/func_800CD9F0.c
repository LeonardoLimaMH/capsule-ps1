/* stub-ret: mixed */
/* arg0: 0x80150100 */
/* arg1: 0x80150000 */
/* arg2: small */
#include "common.h"

/* projeta o vetor v (RotTransPers), com a matriz da câmera do tabuleiro quando set != 0,
 * e grava o ponto de tela no objeto (+0x46, +0x4A); devolve a profundidade SZ3 / 4 */
extern u8 D_800906A0[];
extern void func_8002CEC0(void *);

s32 func_800CD9F0(void *v, u8 *obj, s32 set) {
    s32 sxy, p, flag, z;
    if (set) func_8002CEC0(D_800906A0);
    /* gte_ldv0(v); gte_rtps(); gte_stsxy(&sxy); gte_stir0(&p); gte_stflg(&flag); gte_stsz(&z) */
    __asm__ volatile("lwc2 $0, 0(%4)\n"
                     "lwc2 $1, 4(%4)\n"
                     "nop\n"
                     "nop\n"
                     ".word 0x4A180001\n" /* rtps */
                     "mfc2 %0, $14\n"
                     "mfc2 %1, $8\n"
                     "cfc2 %2, $31\n"
                     "mfc2 %3, $19\n"
                     "nop\n"
                     : "=r"(sxy), "=r"(p), "=r"(flag), "=r"(z)
                     : "r"(v));
    *(u16 *)(obj + 0x46) = sxy;
    *(u16 *)(obj + 0x4A) = sxy >> 16;
    return z >> 2;
}
