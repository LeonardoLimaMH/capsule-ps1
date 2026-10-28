/* stub-ret: mixed */
/* rand-ptr: 0x80150000 1 */
/* arg1: 0x80150100 */
/* arg2: 0x80150000 */
/* rand-u16: 0x80101272 1 10,11,12 */
/* rand-u16: 0x80101A0E 1 10,11,12 */
/* rand-u16: 0x801021AA 1 10,11,12 */
/* rand-u16: 0x80102946 1 10,11,12 */
#include "common.h"

/* projeta o vetor v com a matriz da câmera do jogador a0 (GTE: RotTransPers), posiciona o
 * objeto na tela (+0x46, +0x4A) e aplica o ajuste da tabela D_800F1A68 (por forma da
 * espécie e pose do jogador); devolve a profundidade (SZ3 / 4 + ajuste) - 5 */
extern u8 D_800900C0[], D_8008ED68[], D_80063940[], D_80100F38[];
extern s16 D_800F1A68[];
extern s32 func_800B1260(s32), func_800E3810(s32);
extern void PushMatrix(void), PopMatrix(void), func_8002CEC0(void *);

s32 func_800E3D18(s32 a0, void *v, u8 **obj) {
    u16 k = func_800B1260(a0);
    s32 s = func_800E3810(a0);
    s32 sxy, p, flag, z, g;
    u8 *pl;
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
    g = (*(u32 *)(D_80063940 + k * 60 + 0x20) >> 15) & 0xF;
    pl = D_80100F38 + k * 0x79C;
    *(u16 *)(*obj + 0x46) += D_800F1A68[(*(s16 *)(pl + 0x2BA) - 10) * 3 + g * 9];
    *(u16 *)(*obj + 0x4A) += D_800F1A68[(*(s16 *)(pl + 0x2BA) - 10) * 3 + g * 9 + 1];
    z += D_800F1A68[(*(s16 *)(pl + 0x2BA) - 10) * 3 + g * 9 + 2];
    return (s16)((u16)z - 5);
}
