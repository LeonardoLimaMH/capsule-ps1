#include "common.h"
#include "yuugi.h"

typedef struct { s32 f_0; u8 f_4; u8 pad[7]; s32 f_c; s32 pad2[2]; } S_DsEnt2;
extern s32 D_80094B6C[];
extern s32 D_80094B70[];
extern s32 D_80094A88[];
extern s32 D_80094A98[];
extern void (*D_80094C54)(s32, u8 *);

s32 DsLastCom(void) {
    return func_80044B10() & 0xFF;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800446D0", func_800446F0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800446D0", func_80044794);
