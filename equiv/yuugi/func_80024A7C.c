#include "common.h"

extern s16 D_80078C28, D_80078C2C, D_80078C2A, D_80078C24;
extern u8 D_80069E4C[], D_80069AD4[], D_80085428[];
extern s16 D_8006B004, D_8006B002;
extern s32 D_80069B18;
extern s32 D_8006AF70[];
extern void func_80025514(), func_80025050(), func_800D827C(), func_800D8558(), func_800254A0();
extern void func_80025764(), func_80025DA8(), func_80025000(), func_800D4258();
extern s32 func_800D8440(), func_800D865C(), func_800B8BCC(), func_800B1260();

#define S D_80069E4C
#define SP (*(u16 **)(S + 0x50))

static s32 sdiv(s32 a, s32 b) {
    s32 q;
    __asm__ volatile("div $0,%1,%2\n\tmflo %0" : "=r"(q) : "r"(a), "r"(b));
    return q;
}

void func_80024A7C(u8 *p) {
    u16 *v;
    s32 c, r, i;
    u16 a2;

    if (D_80078C28 == 0) {
        return;
    }
    if (*(s32 *)(p + 0x54) != 0) {
        *(s32 *)(p + 0x54) -= 1;
        if (D_80078C28 == 1) {
            func_80025514();
        } else {
            func_80025050(p);
        }
        return;
    }
    switch ((s16)(*SP + 4) - 4) {
    case 17:
        if (D_80078C2C == 0xE) {
            D_8006B004 = 0;
        } else if (D_80078C2C == 0xF) {
            D_8006B002 = 0;
        }
        goto adv;
    case 13:
        func_800D827C();
        goto adv;
    case 14:
        if (func_800D8440() == 0) {
            return;
        }
        goto adv;
    case 15:
        func_800D8558();
        goto adv;
    case 16:
        if (func_800D865C() == 0) {
            return;
        }
        goto adv;
    case 18:
        goto adv;
    case 12:
        D_80078C24 = 1;
        goto adv;
    case 11:
        D_80078C24 = 0;
        v = SP;
        SP = v + 1;
        a2 = v[1];
        SP = v + 2;
        D_80069B18 = (s16)a2;
        return;
    case 7:
        v = SP;
        SP = v + 1;
        a2 = v[1];
        SP = v + 2;
        *(u16 *)(D_80069AD4 + 0xE8) += a2;
        return;
    case 8:
        v = SP;
        SP = v + 1;
        a2 = v[1];
        SP = v + 2;
        *(u16 *)(D_80069AD4 + 0xEA) += a2;
        return;
    case 9:
        v = SP;
        SP = v + 1;
        a2 = v[1];
        SP = v + 2;
        *(u16 *)(D_80069AD4 + 0xEC) += a2;
        return;
    case -1:
        func_800254A0();
        v = SP;
        SP = v + 1;
        c = (s16)v[1];
        SP = v + 2;
        while (c != -2) {
            v = SP;
            a2 = *v;
            SP = v + 1;
            switch (c) {
            case 0:
                *(s32 *)(S + 0x20) = (s16)a2 >> 6;
                break;
            case 1:
                *(s32 *)(S + 0x24) = (s16)a2 >> 6;
                break;
            case 2:
                *(s32 *)(S + 0x28) = (s16)a2 >> 6;
                break;
            case 4:
                *(s16 *)(S + 0x30) = (s16)a2 >> 6;
                break;
            case 5:
                *(s16 *)(S + 0x32) = (s16)a2 >> 6;
                break;
            case 6:
                *(s16 *)(S + 0x34) = (s16)a2 >> 6;
                break;
            case 10:
                if (D_80085428[0] == 0) {
                    r = sdiv((s16)a2 - D_80069B18, D_80078C2A);
                    *(s32 *)(S + 0x24) = 0;
                    *(s32 *)(S + 0x28) = 0;
                    *(s32 *)(S + 0x20) = r;
                }
                break;
            case 3:
                if (D_80085428[0] == 0) {
                    r = (s16)func_800B8BCC();
                    if (r == -1) {
                        *(s32 *)(S + 0x20) = sdiv(-0x190, D_80078C2A);
                    } else if (r == -2) {
                        *(s32 *)(S + 0x20) = sdiv(-0x320, D_80078C2A);
                    } else if (r == 1) {
                        *(s32 *)(S + 0x20) = sdiv(0x190, D_80078C2A);
                    } else if (r == 2) {
                        *(s32 *)(S + 0x20) = sdiv(0x320, D_80078C2A);
                    }
                    *(s32 *)(S + 0x24) = 0;
                    *(s32 *)(S + 0x28) = 0;
                } else if (D_80085428[0] == 1) {
                    func_80025764(S[0x16] - 1, S[0x17] - 1, S[0x18], S[0x19] - 1, S[0x1A] - 1, S[0x1B],
                                  S[0x14] - 1, S[0x15] - 1, S + 0x20, D_80078C2A);
                }
                break;
            }
            v = SP;
            c = (s16)*v;
            SP = v + 1;
        }
    case -2:
        *(u32 *)(p + 0x50) |= 8;
        *(s32 *)(p + 0x54) = D_80078C2A;
        if (D_80078C2C == 0 && D_80085428[0] == 1 && (D_8006AF70[0] != 0 || D_8006AF70[2] != 0)) {
            *(s32 *)(p + 0x54) = D_80078C2A + 1;
        }
        return;
    case -3:
        SP = SP + 1;
        if (D_80078C28 == 1) {
            for (i = 1; i >= 0; i--) {
                func_80025DA8(i);
            }
        }
        func_80025000(p);
        if (D_80078C24 == 1) {
            for (i = 1; i >= 0; i--) {
                if ((u16)func_800B1260(i) != 0xFFFF) {
                    func_800D4258(i);
                }
            }
        }
        return;
    }
    return;
adv:
    SP = SP + 1;
}
