#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800B9C3C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800B9CEC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800B9E34);

void raise_SpuInit(void) {
    func_800BA3A8(0);
}

void func_800B9F08(s32 arg0) {
    func_800BA534(0, arg0);
}

void func_800B9F2C(s32 arg0) {
    func_800BA744(0, arg0);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800B9F50);

void SpuInitHot(void) {
    func_800BA3A8(1);
}

void func_800BA190(s32 arg0) {
    func_800BA534(1, arg0);
}

void func_800BA1B4(s32 arg0) {
    func_800BA744(1, arg0);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA1D8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA3A8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA4A0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA534);

typedef struct {
    u8 _p0[0x8A];
    u16 f_8A;
    u8 _p8C[0x11C];
} S_80091618;
typedef struct {
    u8 _p0[0x388];
    s16 f_388;
    s16 f_38A;
    u8 _p38C[0x40C];
    s32 f_798;
} S_80100F38;
extern S_80100F38 D_80100F38[];
extern S_80091618 D_80091618[];
extern u8 D_80063940[];
extern s32 D_800EEB70[], D_800ED890[];
extern s16 D_80078C24[], D_80078C28[], D_80078C20[];
extern u16 D_8008EE44[], D_8006AF80[];
extern s32 func_800B1260(s32), func_80013920(u8 *);
extern void func_800E4158(s32);

s32 func_800BA744(s32 arg0, u8 *o) {
    register s32 k asm("s1");
    register s32 a0 asm("s2") = arg0;
    u8 *p, *d;
    s16 s;
    s32 w;
    func_800B1260(a0);
    k = func_800B1260(a0);
    if ((u16)k == 0xFFFF) {
        if (D_800EEB70[0] == 2 || D_800EEB70[0] == 0) return func_80013920(o);
        return 2;
    }
    if (D_80078C24[0] == 1 && D_80078C28[0] == 0) return func_80013920(o);
    if (a0 == 1 && *(u16 *)(D_80091618 + D_8006AF80[0] * 0x1A8 + 0x8A) == 0xFFFF &&
        ((*(u32 *)(o + 0x34) >> 8) & 1) != D_80078C20[0])
        return func_80013920(o);
    if (D_8008EE44[0] == 0x41) return func_80013920(o);
    p = D_80100F38 + (u16)k * 0x79C;
    s = *(s16 *)(p + 0x388);
    if (s == 1) {
        if (*(s16 *)(p + 0x38A) != 0) return *(s16 *)(p + 0x38A);
    } else if (s >= 2) {
        return 0;
    } else if (s != 0) {
        return 1;
    }
    func_800E4158(a0);
    if (!(D_8008EE44[0] == 0x26 && D_800ED890[0] < 2)) {
        d = D_80063940 + *(s32 *)(o + 0x8C) * 60;
        if ((((*(u32 *)(d + 0x14) & 3) << 2) | (*(u32 *)(d + 0x10) >> 30)) == 0 && *(s16 *)(o + 0x4E) > 0) {
            *(s16 *)(o + 0x52) = 0xCCC;
            *(s16 *)(o + 0x50) = 0xCC0;
            *(s16 *)(o + 0x52) = 0xCC0;
        }
    }
    p = D_80100F38 + (u16)k * 0x79C;
    w = *(s32 *)(p + 0x798) & 3;
    if (w == 1) return *(s32 *)(o + 0x38) |= 1;
    if (w != 2) return 2;
    *(s32 *)(o + 0x38) &= ~1;
    return *(s32 *)(p + 0x798) &= ~3;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C", func_800BA9D8);
