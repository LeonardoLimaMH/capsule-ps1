#include "common.h"

void _spu_Fr_(s32 arg0, s16 arg1, s32 arg2) {
    extern void * D_80071598[];
    extern s32 * D_8007159C[];
    extern s32 * D_800715A0[];
    extern s32 * D_800715A4[];
    extern s32 D_800715E8[];
    M2C_FIELD((*D_80071598), s16 *, 0x1A6) = arg1;
    _spu_Fw1ts();
    M2C_FIELD((*D_80071598), u16 *, 0x1AA) = (u16) (M2C_FIELD((*D_80071598), u16 *, 0x1AA) | 0x30);
    _spu_Fw1ts();
    func_8003FC98();
    *(*D_8007159C) = arg0;
    *(*D_800715A0) = (arg2 << 0x10) | 0x10;
    (*D_800715E8) = 1;
    *(*D_800715A4) = 0x01000200;
}
