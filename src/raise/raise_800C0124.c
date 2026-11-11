#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0124", func_800C0124);

void func_800C0560(void) {
    extern u16 D_800F1ED2[];
    func_800D1CC4((*D_800F1ED2), 7, 3, 1);
}

void func_800C0590(void) {
    typedef struct {
        u8 _p00[6];
        s16 unk6;
        u8 _p08[0x1A0];
    } S_91618;
    extern u16 D_800F1ED2[];
    extern S_91618 D_80091618[];
    u16 i = *D_800F1ED2;
    S_91618 *base = D_80091618;
    S_91618 *p = base + i;
    s32 a;

    func_800D1CC4(i, (u16)(p->unk6 + 0x1E), 3, 2);
    switch (p->unk6) {
    case 0:
        a = 8;
        break;
    case 1:
        a = 7;
        break;
    case 2:
    default:
        a = 6;
        break;
    }
    func_80034AB0(a);
}

void func_800C062C(void) {
    extern s16 D_800F0710[];
    (*D_800F0710) = 1;
}

void func_800C063C(void) {
    extern s16 D_800F0710[];
    (*D_800F0710) = 0;
}
