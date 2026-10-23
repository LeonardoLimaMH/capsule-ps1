#include "common.h"

s32 SpuInitMalloc(s32 arg0, void *arg1) {
    extern s32 D_800715C0[];
    extern s32 D_800715F8[];
    extern s32 D_800715FC[];
    extern void * D_80071600[];
    if (arg0 <= 0) {
        return 0;
    }
    M2C_FIELD(arg1, s32 *, 0) = 0x40001010;
    (*D_80071600) = arg1;
    (*D_800715FC) = 0;
    (*D_800715F8) = arg0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) ((0x10000 << (*D_800715C0)) - 0x1010);
    return arg0;
}
