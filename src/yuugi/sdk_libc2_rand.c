#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libc2_rand", rand);

extern s32 D_80096600;

void srand(s32 arg0) {
    D_80096600 = arg0;
}
