#include "common.h"
#include "yuugi.h"

u32 _spu_2pitch(s32 arg0, u32 arg1) {
    s32 sp0;
    register s32 i asm("a2");
    register s32 product asm("t1");
    register s32 base asm("t0");
    register u32 groups asm("a3");
    u32 factor;
    s32 previous;
    register u32 step asm("v0");
    register s32 loaded asm("t1");
    factor = 0x103B;
    base = arg0 << 12;
    i = 0;
    groups = arg1 >> 5;
    arg1 &= 31;
    product = (s32)((s64)arg0 * (s32)factor);
    sp0 = product;
    if (groups) {
        previous = arg0 * factor;
        do {
            base = previous;
            factor *= 0x103B;
            factor >>= 12;
            previous = arg0 * factor;
            i++;
            sp0 = previous;
        } while (i < (s32)groups);
    }
    loaded = *(volatile s32 *)&sp0;
    step = (u32)(loaded - base) >> 5;
    product = step * arg1;
    return (u32)(base + product) >> 12;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libspu_s_n2p", _spu_note2pitch);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libspu_s_n2p", _spu_pitch2note);
