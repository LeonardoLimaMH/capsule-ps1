#include "common.h"

typedef struct {
    u8 _p0[0x10];
    u16 unk10;
    u8 _p12[0x72];
    u16 unk84;
    u8 _p86[0x4];
    u16 unk8A;
    u8 _p8C[0x11C];
} S_80091618;

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B088", func_8009B088);
