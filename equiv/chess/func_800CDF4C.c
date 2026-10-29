/* stub-ret: mixed */
/* arg0: 0x80150100 */
/* arg1: 0x80150000 */
/* arg2: 0x80151000 */
/* arg3: 0x80152000 */
/* rand-u16: 0x80150100 12 0,1,0x10,0x40,0xFFC0,0xFFF0,0x80,0xFF80 */
#include "common.h"

/* monta as matrizes de desenho de um objeto do tabuleiro a partir da câmera cam e da matriz
 * local (posição, escala, luz: como func_800CD200, nas matrizes globais D_800906A0) e
 * projeta os três vértices de v na primitiva (+8, +0x10, +0x18); devolve a profundidade
 * média (AVSZ3; o original calcula a média duas vezes) */
extern u8 D_80069B64[], D_80069B8C[], D_800906A0[];
extern void ScaleMatrix(void *, void *);
/* gte_SetRotMatrix(m) */
#define SET_ROT(m) \
    __asm__ volatile("lw $12, 0(%0)\n lw $13, 4(%0)\n ctc2 $12, $0\n ctc2 $13, $1\n" \
                     "lw $12, 8(%0)\n lw $13, 12(%0)\n lw $14, 16(%0)\n" \
                     "ctc2 $12, $2\n ctc2 $13, $3\n ctc2 $14, $4\n" \
                     :: "r"(m) : "$12", "$13", "$14")
/* gte_SetLightMatrix(m) */
#define SET_LIGHT(m) \
    __asm__ volatile("lw $12, 0(%0)\n lw $13, 4(%0)\n ctc2 $12, $8\n ctc2 $13, $9\n" \
                     "lw $12, 8(%0)\n lw $13, 12(%0)\n lw $14, 16(%0)\n" \
                     "ctc2 $12, $10\n ctc2 $13, $11\n ctc2 $14, $12\n" \
                     :: "r"(m) : "$12", "$13", "$14")
/* gte_SetTransMatrix(m) */
#define SET_TRANS(m) \
    __asm__ volatile("lw $12, 20(%0)\n lw $13, 24(%0)\n ctc2 $12, $5\n" \
                     "lw $14, 28(%0)\n ctc2 $13, $6\n ctc2 $14, $7\n" \
                     :: "r"(m) : "$12", "$13", "$14")
/* uma coluna de dst = RT * coluna de src (IR = RT * IR, MVMVA sf=1 RT/IR/sem translação) */
#define MUL_COL(src, dst) \
    __asm__ volatile("lhu $12, 0(%0)\n lhu $13, 6(%0)\n lhu $14, 12(%0)\n" \
                     "mtc2 $12, $9\n mtc2 $13, $10\n mtc2 $14, $11\n" \
                     "nop\n nop\n .word 0x4A49E012\n" \
                     "mfc2 $12, $9\n mfc2 $13, $10\n mfc2 $14, $11\n" \
                     "sh $12, 0(%1)\n sh $13, 6(%1)\n sh $14, 12(%1)\n" \
                     :: "r"(src), "r"(dst) : "$12", "$13", "$14", "memory")
/* dst = RT * v + TR (vetor de s32; MVMVA sf=1 RT/V0/TR) */
#define APPLY_LV(v, dst) \
    __asm__ volatile("lhu $13, 4(%0)\n lhu $12, 0(%0)\n sll $13, $13, 16\n or $12, $12, $13\n" \
                     "mtc2 $12, $0\n lwc2 $1, 8(%0)\n" \
                     "nop\n nop\n .word 0x4A480012\n" \
                     "swc2 $25, 0(%1)\n swc2 $26, 4(%1)\n swc2 $27, 8(%1)\n" \
                     :: "r"(v), "r"(dst) : "$12", "$13", "memory")

s32 func_800CDF4C(void *v, u8 *prim, u8 *cam, u8 *local) {
    s32 sxy0, sxy1, sxy2, otz, c;
    ScaleMatrix(D_80069B8C, D_800906A0 + 0x10);
    /* D_800906A0+0x80 = cam * local, escalada */
    SET_ROT(cam);
    for (c = 0; c < 3; c++) MUL_COL(local + c * 2, D_800906A0 + 0x80 + c * 2);
    SET_TRANS(cam);
    APPLY_LV(local + 0x14, D_800906A0 + 0x94);
    ScaleMatrix(D_800906A0 + 0x80, D_800906A0 + 0x10);
    /* D_800906A0+0x60 = D_80069B64 * D_80069B8C: matriz de luz */
    SET_ROT(D_80069B64);
    for (c = 0; c < 3; c++) MUL_COL(D_80069B8C + c * 2, D_800906A0 + 0x60 + c * 2);
    SET_LIGHT(D_800906A0 + 0x60);
    SET_ROT(D_800906A0 + 0x80);
    SET_TRANS(D_800906A0 + 0x80);
    /* gte_ldv3(v, v+8, v+0x10); gte_rtpt(); gte_avsz3(); gte_stsxy3(...); gte_avsz3(); gte_stotz(&otz) */
    __asm__ volatile("lwc2 $0, 0(%4)\n lwc2 $1, 4(%4)\n"
                     "lwc2 $2, 8(%4)\n lwc2 $3, 12(%4)\n"
                     "lwc2 $4, 16(%4)\n lwc2 $5, 20(%4)\n"
                     "nop\n nop\n .word 0x4A280030\n" /* rtpt */
                     "nop\n nop\n .word 0x4B58002D\n" /* avsz3 */
                     "mfc2 %0, $12\n mfc2 %1, $13\n mfc2 %2, $14\n"
                     "nop\n nop\n .word 0x4B58002D\n" /* avsz3 */
                     "mfc2 %3, $7\n nop\n"
                     : "=&r"(sxy0), "=&r"(sxy1), "=&r"(sxy2), "=&r"(otz)
                     : "r"(v));
    *(u16 *)(prim + 8) = sxy0;
    *(u16 *)(prim + 10) = sxy0 >> 16;
    *(u16 *)(prim + 0x10) = sxy1;
    *(u16 *)(prim + 0x12) = sxy1 >> 16;
    *(u16 *)(prim + 0x18) = sxy2;
    *(u16 *)(prim + 0x1A) = sxy2 >> 16;
    return otz;
}
