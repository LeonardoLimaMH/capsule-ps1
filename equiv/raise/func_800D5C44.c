#include "common.h"

extern s8 D_8008EE6A;
extern u8 D_80100F38[];

s32 func_800D5C44(s32 idx) {
    *(s16 *)(D_80100F38 + (idx & 0xFFFF) * 0x79C + 0x39C) = 0;
    D_8008EE6A = 0;
    /* o original deixa em $v0 a metade alta (lui %hi) do endereço de D_8008EE6A */
    return ((u32)&D_8008EE6A + 0x8000) & 0xFFFF0000;
}
