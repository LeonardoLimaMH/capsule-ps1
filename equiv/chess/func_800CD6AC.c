/* arg0: 0x80150100 */
/* arg1: 0x80150000 */
/* rand-u16: 0x80150100 12 0,1,0x10,0x40,0xFFC0,0xFFF0,0x80,0xFF80 */
#include "common.h"

/* projeta os três vértices de v (RTPT), grava os pontos de tela na primitiva (+8, +0x10,
 * +0x18) e devolve a profundidade média (AVSZ3; o original calcula a média duas vezes) */
s32 func_800CD6AC(void *v, u8 *prim) {
    s32 sxy0, sxy1, sxy2, otz;
    /* gte_ldv3(v, v+8, v+0x10); gte_rtpt(); gte_avsz3(); gte_stsxy3(...); gte_avsz3(); gte_stotz(&otz) */
    __asm__ volatile("lwc2 $0, 0(%4)\n lwc2 $1, 4(%4)\n"
                     "lwc2 $2, 8(%4)\n lwc2 $3, 12(%4)\n"
                     "lwc2 $4, 16(%4)\n lwc2 $5, 20(%4)\n"
                     "nop\n nop\n .word 0x4A280030\n" /* rtpt */
                     "nop\n nop\n .word 0x4B58002D\n" /* avsz3 */
                     "mfc2 %0, $12\n mfc2 %1, $13\n mfc2 %2, $14\n"
                     "nop\n nop\n .word 0x4B58002D\n" /* avsz3 */
                     "mfc2 %3, $7\n nop\n"
                     : "=r"(sxy0), "=r"(sxy1), "=r"(sxy2), "=r"(otz)
                     : "r"(v));
    *(u16 *)(prim + 8) = sxy0;
    *(u16 *)(prim + 10) = sxy0 >> 16;
    *(u16 *)(prim + 0x10) = sxy1;
    *(u16 *)(prim + 0x12) = sxy1 >> 16;
    *(u16 *)(prim + 0x18) = sxy2;
    *(u16 *)(prim + 0x1A) = sxy2 >> 16;
    return otz;
}
