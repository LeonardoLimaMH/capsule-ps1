#include "common.h"

extern s32 D_801333F8;
extern u32 D_80133400;
extern u32 D_80133404;
extern s32 D_801333FC;
extern u16 *D_801333D4;

u32 slpm__spu_FsetRXXa(s32 reg, u32 addr) {
    u32 s;

    if (D_801333F8 != 0 && addr % D_80133400 != 0) {
        addr = (addr + D_80133400) & ~D_80133404;
    }
    s = addr >> D_801333FC;
    if (reg == -2) {
        return addr;
    }
    if (reg == -1) {
        return s & 0xFFFF;
    }
    D_801333D4[reg] = s;
    return addr;
}
