#include "common.h"

s32 slpm_SpuInitMalloc(s32 arg0, void *arg1) {
    extern s32 D_801333FC[];
    extern s32 D_80133434[];
    extern s32 D_80133438[];
    extern void * D_8013343C[];
    if (arg0 <= 0) {
        return 0;
    }
    M2C_FIELD(arg1, s32 *, 0) = 0x40001010;
    (*D_8013343C) = arg1;
    (*D_80133438) = 0;
    (*D_80133434) = arg0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) ((0x10000 << (*D_801333FC)) - 0x1010);
    return arg0;
}
