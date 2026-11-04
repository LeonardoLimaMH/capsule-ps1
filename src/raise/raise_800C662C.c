#include "common.h"

typedef struct {
    u8 _p00[0xE4];
    s16 unkE4;
    u8 _pE6[0xC2];
} S_91618;
extern S_91618 D_80091618[];
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);
void func_800C662C(s32 a0, s32 a1) {
    typedef struct {
        u8 _p00[0x2BC];
        u8 *unk2BC;
        u8 _p2C0[0xB6];
        s16 unk376;
        u8 _p378[0x424];
    } S_100F38;
    typedef struct {
        u8 _p00[0xE4];
        s16 unkE4;
        u8 _pE6[0xC2];
    } S_91618;
    S_100F38 *p;
    S_91618 *q;
    s16 v;
    s32 n;

    p = &((S_100F38 *)D_80100F38)[func_800B1260(a1) & 0xFFFF];
    p->unk2BC++;
    switch (p->unk376 = *p->unk2BC) {
    case 0xFF:
        q = &((S_91618 *)D_80091618)[func_800B1260(a1) & 0xFFFF];
        v = q->unkE4;
        if (v < 0x1A) {
            n = 2;
        } else if (v < 0x34) {
            n = 3;
        } else if (v < 0x67) {
            n = 4;
        } else if (v < 0x9A) {
            n = 5;
        } else if (v >= 0xCD) {
            n = 7;
        } else {
            n = 6;
        }
        p->unk376 = n;
        break;
    case 0xFE:
        p->unk376 = 100;
        break;
    }
    p->unk2BC++;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C662C", func_800C675C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C662C", func_800C6800);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C662C", func_800C69B0);
