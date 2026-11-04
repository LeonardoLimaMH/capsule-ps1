#include "common.h"
#include "yuugi.h"

void _spu_FiDMA(void) {
    extern volatile u16 *D_80071598;
    extern void (*volatile D_800715D0)(s32);
    extern s32 D_800715E8;
    volatile u16 *p;
    u32 i;
    if (D_800715E8 == 0) _spu_Fw1ts();
    p = D_80071598;
    p[0xD5] &= 0xFFCF;
    i = 0;
    while (p[0xD5] & 0x30) {
        if (++i >= 0xF01U) break;
    }
    if (D_800715D0 != 0) D_800715D0(0xF0000000);
    else func_8004FE2C(0xF0000009, 0x20);
}
