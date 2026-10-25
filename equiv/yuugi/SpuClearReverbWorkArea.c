#include "common.h"

extern s32 D_800715B4, D_800715C0, D_800715D0, D_80071520;
extern u32 D_80071A08[];
extern u8 D_80071608[];
extern s32 _SpuIsInAllocateArea_();
extern void _spu_t();
extern void func_8004FE5C();

s32 SpuClearReverbWorkArea(u32 mode) {
    volatile s32 saved;
    s32 restore = 0;
    s32 old, more;
    u32 size, addr, n;

    saved = 0;
    if (mode >= 10 || _SpuIsInAllocateArea_(D_80071A08[mode]) != 0) {
        return -1;
    }
    if (mode == 0) {
        size = 0x10 << D_800715C0;
        addr = 0xFFF0 << D_800715C0;
    } else {
        size = (0x10000 - D_80071A08[mode]) << D_800715C0;
        addr = D_80071A08[mode] << D_800715C0;
    }
    old = D_800715B4;
    if (old == 1) {
        D_800715B4 = 0;
        restore = 1;
    }
    if (D_800715D0 != 0) {
        saved = D_800715D0;
        D_800715D0 = 0;
    }
    more = 1;
    do {
        n = 0x400;
        if (size < 0x401) {
            n = size;
            more = 0;
        }
        _spu_t(2, addr);
        _spu_t(1);
        _spu_t(3, D_80071608, n);
        size -= 0x400;
        addr += 0x400;
        func_8004FE5C(D_80071520);
    } while (more);
    if (restore) {
        D_800715B4 = old;
    }
    if (saved != 0) {
        D_800715D0 = saved;
    }
    return 0;
}
