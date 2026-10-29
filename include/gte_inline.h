#ifndef GTE_INLINE_H
#define GTE_INLINE_H

/* Macros do GTE (coprocessador 2) em asm inline, com os nomes da convenção do inline_c.h
 * do PsyQ (gte_ldv0, gte_rtps, gte_stsxy...). Implementação própria deste projeto.
 * Os comandos são emitidos como .word com a codificação exata usada pelo jogo, porque o
 * assembler GNU não conhece os mnemônicos do GTE. Ver docs/gte.md. */

/* ---------------------------------------------------------------- comandos */
#define GTE_CMD(word) __asm__ volatile("nop\n nop\n .word " #word "\n")
#define gte_rtps()   GTE_CMD(0x4A180001)
#define gte_rtpt()   GTE_CMD(0x4A280030)
#define gte_nclip()  GTE_CMD(0x4B400006)
#define gte_avsz3()  GTE_CMD(0x4B58002D)
#define gte_avsz4()  GTE_CMD(0x4B68002E)
#define gte_ncs()    GTE_CMD(0x4AC8041E)
#define gte_nct()    GTE_CMD(0x4AD80420)
#define gte_nccs()   GTE_CMD(0x4B08041B)
#define gte_ncct()   GTE_CMD(0x4B18043F)
#define gte_ncds()   GTE_CMD(0x4AE80413)
#define gte_ncdt()   GTE_CMD(0x4AF80416)
#define gte_cc()     GTE_CMD(0x4B38041C)
#define gte_cdp()    GTE_CMD(0x4B280414)
#define gte_dpcs()   GTE_CMD(0x4A780010)
#define gte_dpct()   GTE_CMD(0x4AF8002A)
#define gte_dpcl()   GTE_CMD(0x4A680029)
#define gte_intpl()  GTE_CMD(0x4A980011)
#define gte_sqr0()   GTE_CMD(0x4AA00428)
#define gte_sqr12()  GTE_CMD(0x4AA80428)
#define gte_op0()    GTE_CMD(0x4B70000C)
#define gte_op12()   GTE_CMD(0x4B78000C)
/* MVMVA nas variantes usadas: sf=1; matriz RT/LLM/LCM; vetor V0/IR; translação TR/BK/nenhuma */
#define gte_rt()           GTE_CMD(0x4A480012) /* RT * V0 + TR */
#define gte_rtv0()         GTE_CMD(0x4A486012) /* RT * V0 */
#define gte_rtir()         GTE_CMD(0x4A49E012) /* RT * IR */
#define gte_llv0()         GTE_CMD(0x4A4A6412) /* LLM * V0, lm=1 */
#define gte_lcir()         GTE_CMD(0x4A4DA412) /* BK + LCM * IR, lm=1 */

/* ---------------------------------------------------------------- cargas */
#define gte_ldv0(v) \
    __asm__ volatile("lwc2 $0, 0(%0)\n lwc2 $1, 4(%0)" :: "r"(v))
#define gte_ldv1(v) \
    __asm__ volatile("lwc2 $2, 0(%0)\n lwc2 $3, 4(%0)" :: "r"(v))
#define gte_ldv2(v) \
    __asm__ volatile("lwc2 $4, 0(%0)\n lwc2 $5, 4(%0)" :: "r"(v))
#define gte_ldv3(a, b, c) \
    __asm__ volatile("lwc2 $0, 0(%0)\n lwc2 $1, 4(%0)\n lwc2 $2, 0(%1)\n lwc2 $3, 4(%1)\n" \
                     "lwc2 $4, 0(%2)\n lwc2 $5, 4(%2)" :: "r"(a), "r"(b), "r"(c))
#define gte_ldrgb(p)  __asm__ volatile("lwc2 $6, 0(%0)" :: "r"(p))
#define gte_ldrgb3(a, b, c) /* fila de cores RGB0..2 */ \
    __asm__ volatile("lwc2 $20, 0(%0)\n lwc2 $21, 0(%1)\n lwc2 $22, 0(%2)" :: "r"(a), "r"(b), "r"(c))
#define gte_ldlvl(p) /* IR1..3 de um VECTOR (3 x s32) */ \
    __asm__ volatile("lwc2 $9, 0(%0)\n lwc2 $10, 4(%0)\n lwc2 $11, 8(%0)" :: "r"(p))
#define gte_lddp(x)   __asm__ volatile("mtc2 %0, $8" :: "r"(x))
#define gte_ldlzc(x)  __asm__ volatile("mtc2 %0, $30" :: "r"(x))
#define gte_ldsz3(a, b, c) \
    __asm__ volatile("mtc2 %0, $17\n mtc2 %1, $18\n mtc2 %2, $19" :: "r"(a), "r"(b), "r"(c))
#define gte_ldsz4(a, b, c, d) \
    __asm__ volatile("mtc2 %0, $16\n mtc2 %1, $17\n mtc2 %2, $18\n mtc2 %3, $19" \
                     :: "r"(a), "r"(b), "r"(c), "r"(d))
/* SXY0, SXY2 e SXY1 nessa ordem (escrita direta, sem empurrar a fila) */
#define gte_ldsxy3(a, b, c) \
    __asm__ volatile("mtc2 %0, $12\n mtc2 %2, $14\n mtc2 %1, $13" :: "r"(a), "r"(b), "r"(c))

/* ---------------------------------------------------------------- leituras */
#define GTE_MFC2(var, reg) __asm__ volatile("mfc2 %0, $" #reg "\n nop" : "=r"(var))
#define GTE_CFC2(var, reg) __asm__ volatile("cfc2 %0, $" #reg "\n nop" : "=r"(var))
#define gte_stsxy(p)   __asm__ volatile("swc2 $14, 0(%0)" :: "r"(p) : "memory")
#define gte_stsxy3(a, b, c) \
    __asm__ volatile("swc2 $12, 0(%0)\n swc2 $13, 0(%1)\n swc2 $14, 0(%2)" \
                     :: "r"(a), "r"(b), "r"(c) : "memory")
#define gte_stir0(p)   __asm__ volatile("swc2 $8, 0(%0)" :: "r"(p) : "memory")
#define gte_strgb(p)   __asm__ volatile("swc2 $22, 0(%0)" :: "r"(p) : "memory")
#define gte_strgb3(a, b, c) \
    __asm__ volatile("swc2 $20, 0(%0)\n swc2 $21, 0(%1)\n swc2 $22, 0(%2)" \
                     :: "r"(a), "r"(b), "r"(c) : "memory")
#define gte_stlvnl(p) /* MAC1..3 em um VECTOR */ \
    __asm__ volatile("swc2 $25, 0(%0)\n swc2 $26, 4(%0)\n swc2 $27, 8(%0)" :: "r"(p) : "memory")
#define gte_stlvl(p) /* IR1..3 em um VECTOR */ \
    __asm__ volatile("swc2 $9, 0(%0)\n swc2 $10, 4(%0)\n swc2 $11, 8(%0)" :: "r"(p) : "memory")
#define gte_stflg(p)   do { long f_; GTE_CFC2(f_, 31); *(long *)(p) = f_; } while (0)

/* ---------------------------------------------------------------- matrizes e constantes */
#define GTE_SET5(m, r0, r1, r2, r3, r4) \
    __asm__ volatile("lw $8, 0(%0)\n lw $9, 4(%0)\n lw $10, 8(%0)\n lw $11, 12(%0)\n lw $12, 16(%0)\n" \
                     "ctc2 $8, $" #r0 "\n ctc2 $9, $" #r1 "\n ctc2 $10, $" #r2 "\n" \
                     "ctc2 $11, $" #r3 "\n ctc2 $12, $" #r4 \
                     :: "r"(m) : "$8", "$9", "$10", "$11", "$12")
#define gte_SetRotMatrix(m)   GTE_SET5(m, 0, 1, 2, 3, 4)
#define gte_SetLightMatrix(m) GTE_SET5(m, 8, 9, 10, 11, 12)
#define gte_SetColorMatrix(m) GTE_SET5(m, 16, 17, 18, 19, 20)
#define gte_SetTransMatrix(m) \
    __asm__ volatile("lw $8, 20(%0)\n lw $9, 24(%0)\n lw $10, 28(%0)\n" \
                     "ctc2 $8, $5\n ctc2 $9, $6\n ctc2 $10, $7" :: "r"(m) : "$8", "$9", "$10")
#define gte_SetBackColor(r, g, b) \
    __asm__ volatile("ctc2 %0, $13\n ctc2 %1, $14\n ctc2 %2, $15" \
                     :: "r"((r) << 4), "r"((g) << 4), "r"((b) << 4))
#define gte_SetGeomOffset(x, y) \
    __asm__ volatile("ctc2 %0, $24\n ctc2 %1, $25" :: "r"((x) << 16), "r"((y) << 16))
#define gte_SetGeomScreen(h)  __asm__ volatile("ctc2 %0, $26" :: "r"(h))

#endif
