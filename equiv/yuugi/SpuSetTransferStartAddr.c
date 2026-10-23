#include "common.h"

s32 SpuSetTransferStartAddr(s32 arg0) {
    extern u16 D_800715B0[];
    extern s32 D_800715C0[];
    if ((u32) (arg0 - 0x1010) <= 0x7EFE8U) {
        (*D_800715B0) = _spu_FsetRXXa(-1, arg0);
        return (*D_800715B0) << (*D_800715C0);
    }
    return 0;
}
