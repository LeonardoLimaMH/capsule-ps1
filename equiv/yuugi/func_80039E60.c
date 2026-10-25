#include "common.h"

extern u8 D_800937D0[], D_80093D68[], D_80093790[];
extern s32 D_80078C78, D_8007142C[];
extern u16 D_80078C7C, D_80078D54, D_80078D56;
extern void func_800380C8(), func_80037E40(), func_8003992C(), func_8003860C(), func_80037A7C();
extern void SpuSetKey(), SpuSetVoiceAttr();
extern s32 SpuGetKeyStatus();

#define VOICE(i) (D_80093D68 + (i) * 0x4E)
#define H(o) (*(u16 *)(c + (o)))

static s32 sdiv(s32 a, s32 b) {
    s32 q;
    __asm__ volatile("div $0,%1,%2\n\tmflo %0" : "=r"(q) : "r"(a), "r"(b));
    return q;
}

static void refresh(u8 ch) {
    s32 i;

    for (i = 0; i < D_80078C78; i++) {
        if (VOICE(i)[3] == ch) {
            func_800380C8(VOICE(i), 1);
        }
    }
}

void func_80039E60(u8 ch, u8 ctl, u8 val) {
    u8 *c = D_800937D0 + ch * 0x54;
    s32 upd = 0;
    u32 mask = 0;
    s32 i, j, r, v2, q;
    u8 *v, *w;
    u32 key;

    switch (ctl) {
    case 1:
        if (c[0x1A] < 0x40) {
            v2 = val << 1;
            c[2] = val;
            H(0x20) = v2;
            if (H(0x18) != 0 && v2 != 0) {
                *(s16 *)(c + 0x1C) = sdiv(v2 << 2, H(0x18));
            } else {
                H(0x1E) = 0;
                refresh(ch);
            }
        } else {
            c[2] = val;
            H(0x18) = val;
            if (val != 0 && *(s16 *)(c + 0x20) != 0) {
                *(s16 *)(c + 0x1C) = sdiv(*(s16 *)(c + 0x20), H(0x18)) << 1;
            } else {
                H(0x1E) = 0;
                refresh(ch);
            }
        }
        if (val == 0 || *(s16 *)(c + 0x1C) == 0) {
            H(0x1E) = 0;
            refresh(ch);
        }
        break;
    case 2:
        if (c[0x1A] < 0x40) {
            H(0x18) = val;
        } else {
            H(0x20) = val << 1;
        }
        break;
    case 3:
        c[0x1A] = val;
        break;
    case 4:
        c[0x10] = val;
        break;
    case 5:
        H(0x26) = val;
        break;
    case 6:
        c[0x25] = val;
        if (c[0x24] != 0x14 && c[0x24] != 0x1E) {
            func_8003992C(c, ch);
        }
        break;
    case 7:
        c[3] = val;
        upd = 1;
        break;
    case 10:
        c[1] = val != 0 ? val : 1;
        upd = 1;
        break;
    case 11:
        c[5] = val;
        upd = 1;
        break;
    case 12:
        c[0x11] = val;
        upd = 1;
        break;
    case 20:
        c[0x37] = val << 1;
        break;
    case 21:
        c[0x39] = val;
        break;
    case 22:
        H(0x3C) = val << 4;
        H(0x3A) = val << 4;
        c[0x38] = 0;
        c[0x32] = 1;
        break;
    case 23:
        c[0x38] = val;
        if (val != 0 && H(0x3C) != 0) {
            q = sdiv(H(0x3C), val);
            H(0x3E) = q;
            if (q == 0) {
                H(0x3E) = 1;
            }
        }
        break;
    case 25:
        c[0x4F] = val << 1;
        break;
    case 26:
        c[0x51] = val;
        break;
    case 27:
        H(0x48) = val << 7;
        H(0x46) = val << 7;
        c[0x50] = 0;
        c[0x42] = 1;
        break;
    case 28:
        c[0x50] = val;
        if (val != 0 && H(0x48) != 0) {
            q = sdiv(H(0x48), val);
            H(0x4A) = q;
            if (q == 0) {
                H(0x4A) = 1;
            }
        }
        break;
    case 30:
        D_80078C7C = val;
        func_80037E40(ch >> 4);
        break;
    case 64:
        for (i = 0; i < D_80078C78; i++) {
            v = VOICE(i);
            if (ch != v[3]) {
                continue;
            }
            if (val < 0x40) {
                for (j = 0; j < D_80078C78; j++) {
                    w = VOICE(j);
                    if (w[3] == ch && w[0x1B] != 0 && (w[0x1A] & 0x80)) {
                        key = D_8007142C[j];
                        mask |= key;
                        do {
                            SpuSetKey(0, D_8007142C[j]);
                            r = SpuGetKeyStatus(D_8007142C[j]);
                        } while (r != 2 && r != 0);
                        w[0x1B] = 0;
                        *(u16 *)(w + 0x16) = 0;
                    }
                }
                v[0x1B] = 0;
            } else {
                v[0x1B] = 1;
            }
        }
        if (val < 0x40) {
            (D_800937D0 + ch * 0x54)[6] = 0;
        } else {
            (D_800937D0 + ch * 0x54)[6] = 1;
        }
        break;
    case 91:
        c[0x22] = val & 0x7F;
        break;
    case 98:
        c[0x23] = val;
        break;
    case 99:
        c[0x24] = val;
        break;
    case 120:
    case 121:
    case 123:
        func_8003860C(ch >> 4);
        break;
    case 126:
        c[0x12] = val;
        break;
    }
    if (mask != 0) {
        do {
            SpuSetKey(0, mask);
            r = SpuGetKeyStatus(mask);
        } while (r != 2 && r != 0);
    }
    if (upd != 0) {
        for (i = 0; i < D_80078C78; i++) {
            v = VOICE(i);
            if (ch == v[3] && *(u16 *)(v + 0x16) != 0) {
                func_80037A7C(v, D_800937D0 + ch * 0x54);
                *(s32 *)(D_80093790 + 4) = 0xF;
                *(s16 *)(D_80093790 + 0xC) = 0;
                *(s16 *)(D_80093790 + 0xE) = 0;
                *(s32 *)D_80093790 = D_8007142C[i];
                *(s16 *)(D_80093790 + 8) = (*(u16 *)(v + 0xC) * D_80078D54) >> 7;
                *(s16 *)(D_80093790 + 0xA) = (*(u16 *)(v + 0xE) * D_80078D56) >> 7;
                SpuSetVoiceAttr(D_80093790);
            }
        }
    }
}
