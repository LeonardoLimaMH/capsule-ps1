#define GTE_CMD_WAIT "nop\n "
#define GTE_READ_WAIT ""
#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgte_smp_00", LightColor);

/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* arg3: 0x80150300 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "gte_inline.h"

/* libgte: cor rgb pela luz v com névoa de profundidade (DCPL) */
void DpqColorLight(void *v, void *rgb, long p, void *out) {
    gte_ldlvl(v);
    gte_ldrgb(rgb);
    gte_lddp(p);
    gte_dpcl();
    gte_strgb(out);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgte_smp_00", DpqColor3);

/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg2: 0x80150200 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "gte_inline.h"

/* libgte: interpola o vetor v com a cor de névoa por p (INTPL) */
void Intpl(void *v, long p, void *out) {
    gte_ldlvl(v);
    gte_lddp(p);
    gte_intpl();
    gte_strgb(out);
}

/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "gte_inline.h"

/* libgte: quadrado de cada componente de v em 4.12 (SQR) */
void *Square12(void *v, void *out) {
    register void *target __asm__("$5") = out;
    gte_ldlvl(v);
    gte_sqr12();
    gte_stlvnl(target);
    return target;
}

/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "gte_inline.h"

/* libgte: quadrado de cada componente de v (SQR, sem deslocamento) */
void *Square0(void *v, void *out) {
    register void *target __asm__("$5") = out;
    gte_ldlvl(v);
    gte_sqr0();
    gte_stlvnl(target);
    return target;
}

/* stub-ret: mixed */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "gte_inline.h"

/* libgte: profundidade média de três valores (AVSZ3) */
long AverageZ3(long a, long b, long c) {
    long otz;
    gte_ldsz3(a, b, c);
    gte_avsz3();
    GTE_MFC2(otz, 7);
    return otz;
}

/* stub-ret: mixed */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "gte_inline.h"

/* libgte: profundidade média de quatro valores (AVSZ4) */
long AverageZ4(long a, long b, long c, long d) {
    long otz;
    gte_ldsz4(a, b, c, d);
    gte_avsz4();
    GTE_MFC2(otz, 7);
    return otz;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgte_smp_00", OuterProduct12);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgte_smp_00", OuterProduct0);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgte_smp_00", Lzc);
