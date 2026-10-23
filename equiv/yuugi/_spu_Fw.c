#include "common.h"

s32 _spu_Fw(s32 arg0, s32 arg1) {
    extern u16 D_800715B0[];
    extern s32 D_800715B4[];
    extern s32 D_800715C0[];
    if ((*D_800715B4) == 0) {
        _spu_t(2, (*D_800715B0) << (*D_800715C0));
        _spu_t(1);
        _spu_t(3, arg0, arg1);
        return arg1;
    }
    func_8003F468(arg0, arg1);
    return arg1;
}
