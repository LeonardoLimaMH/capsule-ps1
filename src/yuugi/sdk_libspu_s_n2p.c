#include "common.h"
#include "yuugi.h"

u32 _spu_2pitch(s32 arg0, u32 arg1) {
    s32 sp0;
    register s32 i asm("a2");
    register s32 product asm("t1");
    register s32 base asm("t0");
    register u32 groups asm("a3");
    register u32 factor;
    factor = 0x103B;
    base = arg0 << 12;
    groups = arg1 >> 5;
    i = 0;
    arg1 &= 31;
    product = arg0 * (s32)factor;
    sp0 = product;
    if (groups) {
        do {
            base = arg0 * factor;
            factor = (factor * 0x103B) >> 12;
            product = arg0 * factor;
            i++;
            sp0 = product;
        } while (i < (s32)groups);
    }
    product = ((u32)(*(volatile s32 *)&sp0 - base) >> 5) * arg1;
    return (u32)(base + product) >> 12;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libspu_s_n2p", _spu_note2pitch);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libspu_s_n2p", _spu_pitch2note);
