#include "common.h"

#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C2CE0(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    if (PS16(0x2CC)) P16(0x2CC) -= 1;
    return P32(0x2BC) += 1;
}


extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C2D4C(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    return P32(0x2BC) += 1;
}

#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C2DA4(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    return P32(0x2BC) = *(s32 *)((u32)p + ((PS16(0x2CC) << 2) + 0x2F0));
}


INCLUDE_ASM("asm/raise/nonmatchings/raise_800C2CE0", func_800C2E04);

#include "common.h"

extern u8 D_80100F38[];

s32 func_800C3210(s32 unused, s32 ctx) {
    u8 *obj = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s32 pc = *(s32 *)(obj + 0x2BC) + 1;
    u16 count = *(u16 *)(obj + 0x2CC) - 1;

    *(u16 *)(obj + 0x2CC) = count;
    *(s32 *)(obj + 0x2BC) = pc;
    return pc;
}


extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C3270(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    return P32(0x2BC) += 1;
}


extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C32C8(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    s16 v = P16(0x2CC) - 1;
    P16(0x2CC) = v;
    return P32(0x2BC) = *(s32 *)(p + 0x2F4 + v * 4);
}
