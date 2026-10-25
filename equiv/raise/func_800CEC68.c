#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

extern s32 func_800D0730(u8 *, s32, s32, s32);

s32 func_800CEC68(s32 a0, s32 a1, s32 a2) {
    return func_800D0730(PL(a0) + 0x1CC, (s16)(a1 - 1), (s16)(a2 - 1), 0);
}
