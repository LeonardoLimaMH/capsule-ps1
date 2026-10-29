#define GTE_CMD_WAIT "nop\n "
#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgte_smp", LocalLight);

/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg2: 0x80150200 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "gte_inline.h"

/* libgte: cor com névoa de profundidade (DPCS) */
void DpqColor(void *rgb, long p, void *out) {
    gte_ldrgb(rgb);
    gte_lddp(p);
    gte_dpcs();
    gte_strgb(out);
}

/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "gte_inline.h"

/* libgte: cor da luz para a normal v (NCS) */
void NormalColor(void *v, void *out) {
    gte_ldv0(v);
    gte_ncs();
    gte_strgb(out);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgte_smp", NormalColor3);

/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* arg3: 0x80150300 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "gte_inline.h"

/* libgte: cor da luz para a normal v, com névoa de profundidade (NCDS) */
void NormalColorDpq(void *v, void *rgb, long p, void *out) {
    gte_ldv0(v);
    gte_ldrgb(rgb);
    gte_lddp(p);
    gte_ncds();
    gte_strgb(out);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgte_smp", NormalColorDpq3);

/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* arg2: 0x80150200 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "gte_inline.h"

/* libgte: cor da luz para a normal v vezes a cor rgb (NCCS) */
void NormalColorCol(void *v, void *rgb, void *out) {
    gte_ldv0(v);
    gte_ldrgb(rgb);
    gte_nccs();
    gte_strgb(out);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgte_smp", NormalColorCol3);

/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* arg3: 0x80150300 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "gte_inline.h"

/* libgte: cor da luz v vezes rgb com névoa de profundidade (CDP) */
void ColorDpq(void *v, void *rgb, long p, void *out) {
    gte_ldlvl(v);
    gte_ldrgb(rgb);
    gte_lddp(p);
    gte_cdp();
    gte_strgb(out);
}

/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* arg2: 0x80150200 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "gte_inline.h"

/* libgte: cor da luz para o vetor de luz v vezes rgb (CC) */
void ColorCol(void *v, void *rgb, void *out) {
    gte_ldlvl(v);
    gte_ldrgb(rgb);
    gte_cc();
    gte_strgb(out);
}
