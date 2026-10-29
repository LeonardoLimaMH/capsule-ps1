/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* arg2: 0x80150200 */
/* rand-u16: 0x80150000 0x180 0,1,0x10,0x40,0x800,0x1000,0xF000,0xFFC0,0x7FFF,0x8000 */
#include "common.h"
#include "gte_inline.h"

/* libgte: composição de matrizes completas, m2 = m0 * m1 (rotação e translação) */
/* coluna c de m1 (MATRIX de s16 3x3) como vetor V0, multiplicada pela matriz RT (MVMVA RT * V0) */
static void col_times_rt(short *m1, long c, long *ir) {
    long xy = (unsigned short)m1[c] | ((long)m1[3 + c] << 16), z = m1[6 + c];
    __asm__ volatile("mtc2 %0, $0\n mtc2 %1, $1" :: "r"(xy), "r"(z));
    gte_rtv0();
    GTE_MFC2(ir[0], 9);
    GTE_MFC2(ir[1], 10);
    GTE_MFC2(ir[2], 11);
}

/* m2 = m0 * m1 (só a rotação); o último elemento vai como palavra inteira (swc2 IR3) */
static void mul_rot(short *m0, short *m1, short *m2) {
    long r[3][3], c;
    gte_SetRotMatrix(m0);
    for (c = 0; c < 3; c++) col_times_rt(m1, c, r[c]);
    for (c = 0; c < 3; c++) {
        m2[c] = r[c][0];
        m2[3 + c] = r[c][1];
    }
    m2[6] = r[0][2];
    m2[7] = r[1][2];
    *(long *)(m2 + 8) = r[2][2];
}

short *CompMatrix(short *m0, short *m1, short *m2) {
    long *t0 = (long *)(m0 + 10), *t1 = (long *)(m1 + 10), *t2 = (long *)(m2 + 10);
    long r[3][3], mac[3], c, xy, z;
    gte_SetRotMatrix(m0);
    for (c = 0; c < 3; c++) col_times_rt(m1, c, r[c]);
    /* translação: RT * T1 (componentes truncadas a 16 bits, como no original) + T0 */
    xy = (unsigned short)t1[0] | (t1[1] << 16);
    z = t1[2];
    __asm__ volatile("mtc2 %0, $0\n mtc2 %1, $1" :: "r"(xy), "r"(z));
    gte_rtv0();
    for (c = 0; c < 3; c++) {
        m2[c] = r[c][0];
        m2[3 + c] = r[c][1];
    }
    m2[6] = r[0][2];
    m2[7] = r[1][2];
    *(long *)(m2 + 8) = r[2][2];
    GTE_MFC2(mac[0], 25);
    GTE_MFC2(mac[1], 26);
    GTE_MFC2(mac[2], 27);
    /* soma com add (gera exceção de estouro, como no original) */
    for (c = 0; c < 3; c++) {
        long sum;
        __asm__ volatile("add %0, %1, %2" : "=r"(sum) : "r"(mac[c]), "r"(t0[c]));
        t2[c] = sum;
    }
    return m2;
}
