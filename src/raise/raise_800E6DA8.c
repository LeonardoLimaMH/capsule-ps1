#include "common.h"

typedef struct {
    u16 f0;
    u8 pad2[0xC6];
    s32 fC8;
    s32 fCC;
    u16 fD0;
    u8 padD2[0x1A8 - 0xD2];
} unk_1A8;

extern unk_1A8 D_80091618[];
extern s16 D_800F2020[];
extern s16 func_800E73D8(s32);
extern s16 func_800E6E68(s32);

s16 func_800E6DA8(s32 arg0) {
    return func_800E6DCC(arg0 & 0xFFFF);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E6DA8", func_800E6DCC);
