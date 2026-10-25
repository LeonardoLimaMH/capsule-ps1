#include "common.h"

extern s32 D_800715BC;
extern u32 D_800715C4;
extern u32 D_800715C8;
extern s32 D_800715C0;
extern u16 *D_80071598;

u32 _spu_FsetRXXa(s32 reg, u32 addr) {
    u32 s;

    if (D_800715BC != 0 && addr % D_800715C4 != 0) {
        addr = (addr + D_800715C4) & ~D_800715C8;
    }
    s = addr >> D_800715C0;
    if (reg == -2) {
        return addr;
    }
    if (reg == -1) {
        return s & 0xFFFF;
    }
    D_80071598[reg] = s;
    return addr;
}
