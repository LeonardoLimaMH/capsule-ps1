#include "common.h"
#include "yuugi.h"

#include "common.h"

extern u16 D_800715B0;
extern s32 D_800715C0;
extern s32 D_800715CC;
extern s32 D_800715D0;
extern void _spu_Fw();
extern s32 _spu_FsetRXXa();

u32 SpuWritePartly(u8 *addr, u32 size) {
    s32 s;

    if (size > 0x7EFF0) {
        size = 0x7EFF0;
    }
    s = D_800715B0 << D_800715C0;
    _spu_Fw(addr, size);
    D_800715B0 = _spu_FsetRXXa(-1, s + size);
    if (D_800715D0 == 0) {
        D_800715CC = 0;
    }
    return size;
}
