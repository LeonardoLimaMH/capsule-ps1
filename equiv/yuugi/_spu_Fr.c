#include "common.h"

s32 _spu_Fr(s32 arg0, s32 arg1) {
    extern u16 D_800715B0[];
    extern s32 D_800715C0[];
    _spu_t(2, (*D_800715B0) << (*D_800715C0));
    _spu_t(0);
    _spu_t(3, arg0, arg1);
    return arg1;
}
