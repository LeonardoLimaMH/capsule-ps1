/* arg0: 0x80150100 */
/* arg1: 0x80150000 */
#include "common.h"

/* projeta os dois vetores de v[0..1] (RotTransPers sem a profundidade) e grava os pontos de
 * tela em pts[4..7] (halfwords); devolve a média dos dois OTZ lidos */
s32 func_800CDA94(u8 *v, u16 *pts) {
    s32 sxy0, otz0, sxy1, otz1;
    /* gte_ldv0(v); gte_rtps(); gte_stsxy(&sxy0); gte_stotz(&otz0) */
    __asm__ volatile("lwc2 $0, 0(%2)\n"
                     "lwc2 $1, 4(%2)\n"
                     "nop\n"
                     "nop\n"
                     ".word 0x4A180001\n" /* rtps */
                     "mfc2 %0, $14\n"
                     "mfc2 %1, $7\n"
                     "nop\n"
                     : "=r"(sxy0), "=r"(otz0)
                     : "r"(v));
    __asm__ volatile("lwc2 $0, 0(%2)\n"
                     "lwc2 $1, 4(%2)\n"
                     "nop\n"
                     "nop\n"
                     ".word 0x4A180001\n" /* rtps */
                     "mfc2 %0, $14\n"
                     "mfc2 %1, $7\n"
                     "nop\n"
                     : "=r"(sxy1), "=r"(otz1)
                     : "r"(v + 8));
    pts[4] = sxy0;
    pts[5] = sxy0 >> 16;
    pts[6] = sxy1;
    pts[7] = sxy1 >> 16;
    return (otz0 + otz1) / 2;
}
