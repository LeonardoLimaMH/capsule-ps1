#include "common.h"

s32 func_800DC5F8(void) {
    extern s32 D_8008ED80[];
    return (func_800202A4(0x64) + (*D_8008ED80)) & 1;
}
