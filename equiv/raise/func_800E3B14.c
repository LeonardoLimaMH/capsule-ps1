/* stub-ret: mixed */
/* rand-ptr: 0x80150000 1 */
/* arg1: 0x80150100 */
/* arg2: 0x80150000 */
#include "common.h"

/* projeta o vetor v com a matriz da câmera s (GTE: RotTransPers) e ajusta a posição de tela
 * do objeto (+0x46, +0x4A) para o ponto projetado; devolve a profundidade (SZ3 / 4) - 4 */
extern u8 D_800900C0[];
extern u8 D_8008ED68[];
extern s32 func_800E36E4();
extern void PushMatrix(void), PopMatrix(void), func_8002CEC0(void *);

s32 func_800E3B14(s32 a0, void *v, u8 **obj) {
    s32 s = func_800E36E4();
    s32 sxy, p, flag, z;
    PushMatrix();
    func_8002CEC0(D_800900C0 + s * 0xBC);
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
    z >>= 2;
    *(s16 *)(*obj + 0x46) = (u16)sxy - *(s32 *)(D_8008ED68 + 0x108) / 2;
    *(s16 *)(*obj + 0x4A) = (u16)(sxy >> 16) - *(s32 *)(D_8008ED68 + 0x10C) / 2 + 2;
    PopMatrix();
    return z - 4;
}
