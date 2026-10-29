/* arg0: 0x80150100 */
/* arg1: 0x80150000 */
/* rand-u16: 0x80150100 16 0,1,0x10,0x40,0xFFC0,0xFFF0,0x80,0xFF80 */
#include "common.h"

/* projeta os quatro vértices de v (RTPT + RTPS), grava os pontos de tela na primitiva
 * (a partir de +8, de 8 em 8 bytes) e devolve a profundidade média dos quatro (AVSZ4) */
s32 func_800CD85C(void *v, u8 *prim) {
    s32 sxy0, sxy1, sxy2, sxy3, otz;
    /* gte_ldv3(v, v+8, v+0x10); gte_rtpt(); gte_avsz3(); gte_stsxy3(...);
     * gte_ldv0(v+0x18); gte_rtps(); gte_stsxy(...); gte_avsz4(); gte_stotz(&otz) */
    __asm__ volatile("lwc2 $0, 0(%5)\n lwc2 $1, 4(%5)\n"
                     "lwc2 $2, 8(%5)\n lwc2 $3, 12(%5)\n"
                     "lwc2 $4, 16(%5)\n lwc2 $5, 20(%5)\n"
                     "nop\n nop\n .word 0x4A280030\n" /* rtpt */
                     "nop\n nop\n .word 0x4B58002D\n" /* avsz3 */
                     "mfc2 %0, $12\n mfc2 %1, $13\n mfc2 %2, $14\n"
                     "lwc2 $0, 24(%5)\n lwc2 $1, 28(%5)\n"
                     "nop\n nop\n .word 0x4A180001\n" /* rtps */
                     "mfc2 %3, $14\n"
                     "nop\n nop\n .word 0x4B68002E\n" /* avsz4 */
                     "mfc2 %4, $7\n nop\n"
                     : "=&r"(sxy0), "=&r"(sxy1), "=&r"(sxy2), "=&r"(sxy3), "=&r"(otz)
                     : "r"(v));
    *(u16 *)(prim + 8) = sxy0;
    *(u16 *)(prim + 10) = sxy0 >> 16;
    *(u16 *)(prim + 8 + 8) = sxy1;
    *(u16 *)(prim + 10 + 8) = sxy1 >> 16;
    *(u16 *)(prim + 8 + 2 * 8) = sxy2;
    *(u16 *)(prim + 10 + 2 * 8) = sxy2 >> 16;
    *(u16 *)(prim + 8 + 3 * 8) = sxy3;
    *(u16 *)(prim + 10 + 3 * 8) = sxy3 >> 16;
    return otz;
}
