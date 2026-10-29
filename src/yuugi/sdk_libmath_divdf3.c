#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libmath_divdf3", __divdf3);

#include "common.h"

/* compara mantissas de 64 bits (lo, hi) x (lo, hi): -1, 0 ou 1 */
s32 _comp_mant(u32 alo, u32 ahi, u32 blo, u32 bhi) {
    (void)&alo;
    (void)&ahi;
    (void)&blo;
    (void)&bhi;
    if (bhi < ahi) {
        return 1;
    }
    if (ahi < bhi) {
        return -1;
    }
    if (blo < alo) {
        return 1;
    }
    if (alo < blo) {
        return -1;
    }
    return 0;
}
