#include "common.h"

typedef struct {
    u8 _p0[0xA4];
    u16 f_A4;
    u8 _pA6[0x2];
    u16 f_A8;
    u8 _pAA[0xE2];
    s32 f_18C;
    u8 _p190[0x18];
} S_80091618;
extern S_80091618 D_80091618[];

s32 func_800B8FAC(void) {
    typedef struct {
        u8 _p00[0x12];
        u16 unk12;
        u8 _p14[0x90];
        s32 unkA4;
        s32 unkA8;
        u8 _pAC[0xFC];
    } S_91618;
    typedef struct {
        u8 _p00[0x2BC];
        u8 *unk2BC;
        u8 _p2C0[0x76];
        s16 unk336;
        s16 unk338;
        u8 _p33A[0xA];
        s16 unk344;
        u8 _p346[0x38];
        s16 unk37E;
        u8 _p380[0x41C];
    } S_100F38;
    extern u16 D_8006AF80[];
    extern s16 D_800ED88C[];
    extern S_100F38 D_80100F38[];
    S_100F38 *p;
    u8 c;
    S_91618 *q;
    s32 n;
    s32 i;

    p = &D_80100F38[*D_8006AF80];
    if (func_800E14C4(*D_8006AF80) != 1) {
        c = *p->unk2BC;
        if (c == 0x52 || c == 0xD || c == 0x53 || c == 0x69 || c == 0x79 || c == 0x7A || c == 0x71 || c == 0x74 || c == 0x77 || c == 0x70) {
            switch (c) {
            case 0x52:
                if (p->unk344 == 2) {
                    return 0;
                }
                if (p->unk344 >= 3) {
                    if (p->unk37E != 0) {
                        return 0;
                    }
                } else if (p->unk344 < 0) {
                    if (p->unk37E != 0) {
                        return 0;
                    }
                }
                break;
            case 0x53:
                if (p->unk344 != 3) {
                    return 0;
                }
                if (p->unk37E != 0) {
                    return 0;
                }
                break;
            case 0x69:
                if (p->unk344 != 3) {
                    return 0;
                }
                break;
            default:
                if (p->unk344 == 2) {
                    return 0;
                }
                break;
            }
        }
    }
    func_800B8E34();
    q = &((S_91618 *)D_80091618)[*D_8006AF80];
    q->unkA4 = p->unk336;
    q->unkA8 = p->unk338;
    n = q->unk12;
    for (i = 0; i < n; i++) {
        func_800CCFA4(1, i, 0);
    }
    q->unk12 = 0;
    *D_800ED88C = 1;
    func_800B7264(2);
    return 1;
}

typedef struct {
    u8 _p0[0x332];
    u16 f_332;
    u16 f_334;
    u16 f_336;
    u16 f_338;
    u8 _p33A[0x8];
    s16 f_342;
    s16 f_344;
    u8 _p346[0x456];
} S_80100F38;

extern u8 D_800900C0[];
