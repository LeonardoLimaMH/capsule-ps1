/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* rand-u32-strided: 0x80150014 1 4 0x80151000 */
/* rand-u32-strided: 0x80150018 1 4 0x80152000 */
#include "common.h"

/* monta as matrizes de desenho de um modelo: posição (rotação + translação) composta com a
 * da câmera e escalada, e a matriz de luz (direções da luz rotacionadas pelo modelo);
 * deixa no GTE a luz, a rotação e a translação resultantes.
 * As multiplicações coluna a coluna usam o GTE direto (MVMVA), como as macros do PsyQ. */
extern u8 D_80069B64[];
extern void RotMatrix(void *, void *), TransMatrix(void *, void *), MulMatrix(void *, void *);
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

s32 func_800CD200(u8 *obj) {
    u8 *m = *(u8 **)(obj + 0x14);   /* matrizes de trabalho do modelo */
    u8 *out = *(u8 **)(obj + 0x18); /* matrizes de saída e escala */
    u8 *world = m + 0x84, *local = m + 0x64, *light = m + 0xA4;
    s32 c;
    RotMatrix(m + 0x20, world);
    TransMatrix(world, m);
    RotMatrix(m + 0x50, local);
    TransMatrix(local, m + 0x30);
    RotMatrix(m + 0xE4, light);
    MulMatrix(light, world);
    ScaleMatrix(light, out + 0x10);
    /* out+0x80 = world * local (rotação e translação) */
    SET_ROT(world);
    for (c = 0; c < 3; c++) MUL_COL(local + c * 2, out + 0x80 + c * 2);
    SET_TRANS(world);
    APPLY_LV(m + 0x78, out + 0x94);
    ScaleMatrix(out + 0x80, out + 0x10);
    /* out+0x60 = D_80069B64 * light: matriz de luz */
    SET_ROT(D_80069B64);
    for (c = 0; c < 3; c++) MUL_COL(light + c * 2, out + 0x60 + c * 2);
    SET_LIGHT(out + 0x60);
    SET_ROT(out + 0x80);
    SET_TRANS(out + 0x80);
    return (s32)(out + 0x62); /* sobra do último endereço calculado em v0 */
}
