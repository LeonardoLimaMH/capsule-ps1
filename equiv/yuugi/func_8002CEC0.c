/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* rand-u32-strided: D_80069B24 1 4 0,1 */
#include "common.h"
#include "gte_inline.h"

/* monta as matrizes de desenho do objeto obj a partir da câmera (D_80069AE4): posição na tela
 * (rotação + translação, escalada por obj+0x10) em obj+0x80 e matriz de luz em obj+0x60;
 * com o modo extra ligado compõe antes com a segunda câmera (D_80069B04) e com a matriz local do
 * objeto (obj+0x20). Deixa no GTE a luz, a rotação e a translação resultantes. */
extern u8 D_80069AE4[], D_80069B8C[], D_80069BA0[], D_80069B04[], D_80069B18[], D_80069B64[];
extern s32 D_80069B24;
extern void ScaleMatrix(void *, void *);

/* uma coluna de dst = RT * coluna de src (MVMVA RT * IR) */
#define MUL_COL(src, dst)     __asm__ volatile("lhu $12, 0(%0)\n lhu $13, 6(%0)\n lhu $14, 12(%0)\n"                      "mtc2 $12, $9\n mtc2 $13, $10\n mtc2 $14, $11\n"                      "nop\n nop\n .word 0x4A49E012\n"                      "mfc2 $12, $9\n mfc2 $13, $10\n mfc2 $14, $11\n"                      "sh $12, 0(%1)\n sh $13, 6(%1)\n sh $14, 12(%1)\n"                      :: "r"(src), "r"(dst) : "$12", "$13", "$14", "memory")
/* dst = RT * v + TR (vetor de s32 truncado a 16 bits; MVMVA RT/V0/TR) */
#define APPLY_LV(v, dst)     __asm__ volatile("lhu $13, 4(%0)\n lhu $12, 0(%0)\n sll $13, $13, 16\n or $12, $12, $13\n"                      "mtc2 $12, $0\n lwc2 $1, 8(%0)\n"                      "nop\n nop\n .word 0x4A480012\n"                      "swc2 $25, 0(%1)\n swc2 $26, 4(%1)\n swc2 $27, 8(%1)\n"                      :: "r"(v), "r"(dst) : "$12", "$13", "memory")

void *func_8002CEC0(u8 *obj) {
    long c;
    ScaleMatrix(D_80069B8C, obj + 0x10);
    gte_SetRotMatrix(D_80069AE4);
    if (D_80069B24 == 0) {
        for (c = 0; c < 3; c++) MUL_COL(D_80069B8C + c * 2, obj + 0x80 + c * 2);
        gte_SetTransMatrix(D_80069AE4);
        APPLY_LV(D_80069BA0, obj + 0x94);
    } else {
        for (c = 0; c < 3; c++) MUL_COL(D_80069B04 + c * 2, obj + 0x80 + c * 2);
        gte_SetTransMatrix(D_80069AE4);
        APPLY_LV(D_80069B18, obj + 0x94);
        gte_SetRotMatrix(obj + 0x80);
        for (c = 0; c < 3; c++) MUL_COL(obj + 0x20 + c * 2, obj + 0x80 + c * 2);
        gte_SetTransMatrix(obj + 0x80);
        APPLY_LV(obj + 0x34, obj + 0x94);
        ScaleMatrix(obj + 0x80, obj + 0x10);
    }
    gte_SetRotMatrix(D_80069B64);
    for (c = 0; c < 3; c++) MUL_COL(D_80069B8C + c * 2, obj + 0x60 + c * 2);
    gte_SetLightMatrix(obj + 0x60);
    gte_SetRotMatrix(obj + 0x80);
    gte_SetTransMatrix(obj + 0x80);
    return obj + 0x80;
}
