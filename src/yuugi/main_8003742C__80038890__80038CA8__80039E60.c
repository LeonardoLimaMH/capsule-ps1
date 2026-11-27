#include "common.h"

#include "yuugi.h"

struct VoiceE {
    u8 _p0[0xC];
    u16 l;
    u16 r;
    u8 _p1[0x2E];
    s16 cur;
    u8 _p2[6];
    s16 last;
    u8 _p3[0x4E - 0x48];
};

extern u8 D_80093790[];

extern s32 D_8007142C[];

extern u16 D_80078D54, D_80078D56;

extern void SpuSetVoiceAttr();

extern u16 D_80078C7C;

extern u8 D_80093790[];

extern s32 D_8007142C[];

extern u16 D_80078D54;

extern u16 D_80078D56;

extern u8 D_80093790[];

extern s32 D_8007142C[];

extern s32 D_80078C78;

extern struct VoiceE D_80093D68[];

extern s32 D_8007142C[], D_80078C78;

extern void func_8003860C(s32);

extern s32 SpuSetKey(s32, s32);

extern s32 SpuGetKeyStatus(s32);

extern u8 D_80093790[];

extern s32 D_8007142C[];

extern u8 D_80093790[];

extern s32 D_8007142C[];

extern u8 D_800937D0[], D_800944B8[], D_800947E8[];

extern s32 func_80038ABC(s32, s32, s32), func_80037A7C(void *, void *);

extern u8 D_800947E8[], D_800944B8[];

#define REFRESH_39E60(ch) do { \
    s32 count = D_80078C78; \
    i = 0; \
    *(s16 *)(p + 0x1E) = 0; \
    if (count > 0) { \
        do { \
            if (D_80093D68[i]._p0[3] == ch) \
                func_800380C8((u8 *)&D_80093D68[i], 1); \
        } while (++i < D_80078C78); \
    } \
} while (0)

void func_80039E60(u8 ch, u8 ctl, u8 val) {
    struct Channel39E60 { u8 pad[6]; u8 active; u8 tail[0x4D]; };
    struct Voice39E60 {
        u8 pad0[3];
        u8 ch;
        u8 pad4[0x12];
        s16 unk16;
        u8 pad18[2];
        u8 unk1A;
        u8 unk1B;
        u8 pad1C[0x4E - 0x1C];
    };
    u8 *p = D_800937D0 + ch * 0x54;
    s32 flag = 0;
    s32 mask = 0;
    s32 i, j, t, st;

    switch (ctl) {
    case 1:
        if (p[0x1A] < 0x40) {
            s16 twice;
            register u32 divisor asm("v1") = *(u16 *)(p + 0x18);
            twice = val * 2;
            p[2] = val;
            *(s16 *)(p + 0x20) = twice;
            if (divisor != 0 && twice != 0) {
                *(s16 *)(p + 0x1C) = (twice << 2) / (s32)divisor;
            } else {
                REFRESH_39E60(ch);
            }
            if (val == 0 || *(s16 *)(p + 0x1C) == 0) {
                REFRESH_39E60(ch);
            }
        } else {
            register s32 t asm("v0") = val;
            p[2] = val;
            *(u16 *)(p + 0x18) = t;
            if (t != 0 && *(s16 *)(p + 0x20) != 0) {
                *(s16 *)(p + 0x1C) = (*(s16 *)(p + 0x20) / *(u16 *)(p + 0x18)) * 2;
            } else {
                REFRESH_39E60(ch);
            }
            if (val == 0 || *(s16 *)(p + 0x1C) == 0) {
                REFRESH_39E60(ch);
            }
        }
        break;
    case 2: {
        register s32 value asm("v0");
        if (p[0x1A] < 0x40) {
            value = val;
            *(u16 *)(p + 0x18) = value;
        } else {
            value = val;
            *(s16 *)(p + 0x20) = value * 2;
        }
        break;
    }
    case 3:
        p[0x1A] = val;
        break;
    case 4:
        p[0x10] = val;
        break;
    case 5:
        *(u16 *)(p + 0x26) = val;
        break;
    case 7:
        p[3] = val;
        flag = 1;
        break;
    case 10:
        if (val != 0) {
            p[1] = val;
        } else {
            p[1] = 1;
        }
        flag = 1;
        break;
    case 11:
        p[5] = val;
        flag = 1;
        break;
    case 12:
        p[0x11] = val;
        flag = 1;
        break;
    case 20:
        p[0x37] = val << 1;
        break;
    case 21:
        p[0x39] = val;
        break;
    case 22:
        *(u16 *)(p + 0x3A) = *(u16 *)(p + 0x3C) = val << 4;
        p[0x38] = 0;
        p[0x32] = 1;
        break;
    case 23: {
        register s32 denominator asm("a2") = val;
        p[0x38] = val;
        if (denominator != 0 && *(u16 *)(p + 0x3C) != 0) {
            register s32 q asm("v0");
            q = *(u16 *)(p + 0x3C) / denominator;
            *(s16 *)(p + 0x3E) = q;
            if (q == 0) {
                *(s16 *)(p + 0x3E) = 1;
            }
        }
        break;
    }
    case 25:
        p[0x4F] = val << 1;
        break;
    case 26:
        p[0x51] = val;
        break;
    case 27:
        *(u16 *)(p + 0x46) = *(u16 *)(p + 0x48) = val << 7;
        p[0x50] = 0;
        p[0x42] = 1;
        break;
    case 28: {
        register s32 denominator asm("a2") = val;
        p[0x50] = val;
        if (denominator != 0 && *(u16 *)(p + 0x48) != 0) {
            register s32 q asm("v0");
            q = *(u16 *)(p + 0x48) / denominator;
            *(s16 *)(p + 0x4A) = q;
            if (q == 0) {
                *(s16 *)(p + 0x4A) = 1;
            }
        }
        break;
    }
    case 30:
        D_80078C7C = val;
        func_80037E40(ch >> 4);
        break;
    case 64:
        for (j = 0; j < D_80078C78; j++) {
            if (ch == D_80093D68[j]._p0[3]) {
                if (val < 0x40) {
                    for (i = 0; i < D_80078C78; i++) {
                        if (((struct Voice39E60 *)D_80093D68)[i].ch == ch &&
                            ((struct Voice39E60 *)D_80093D68)[i].unk1B != 0 &&
                            (((struct Voice39E60 *)D_80093D68)[i].unk1A & 0x80)) {
                            register s32 *key asm("s0") = &D_8007142C[i];
                            mask |= *key;
                            do {
                                SpuSetKey(0, *key);
                                st = SpuGetKeyStatus(*key);
                                if (st == 2) {
                                    break;
                                }
                            } while (st != 0);
                            ((struct Voice39E60 *)D_80093D68)[i].unk1B = 0;
                            ((struct Voice39E60 *)D_80093D68)[i].unk16 = 0;
                        }
                    }
                    D_80093D68[j]._p0[0x1B] = 0;
                } else {
                    D_80093D68[j]._p0[0x1B] = 1;
                }
            }
        }
        if (val < 0x40) {
            register u8 *base asm("a0") = D_800937D0;
            base[ch * 0x54 + 6] = 0;
        } else {
            register u8 *base asm("a0") = D_800937D0;
            base[ch * 0x54 + 6] = 1;
        }
        break;
    case 91:
        p[0x22] = val & 0x7F;
        break;
    case 6:
        t = p[0x24];
        p[0x25] = val;
        if (t != 0x14 && t != 0x1E) {
            func_8003992C(p, ch);
        }
        break;
    case 98:
        p[0x23] = val;
        break;
    case 99:
        p[0x24] = val;
        break;
    case 120:
    case 121:
    case 123:
        func_8003860C(ch >> 4);
        break;
    case 126:
        p[0x12] = val;
        break;
    }

    if (mask != 0) {
        do {
            SpuSetKey(0, mask);
            st = SpuGetKeyStatus(mask);
            if (st == 2) {
                break;
            }
        } while (st != 0);
    }
    if (flag != 0) {
        for (j = 0; j < D_80078C78; j++) {
            struct VoiceE *e = &D_80093D68[j];
            if (ch == e->_p0[3] && *(u16 *)(e->_p0 + 0x16) != 0) {
                s32 x, y;
                func_80037A7C(e, D_800937D0 + ch * 0x54);
                x = e->l * D_80078D54;
                y = e->r * D_80078D56;
                M2C_GFIELD(D_80093790, s32, 4) = 0xF;
                *(s32 *)D_80093790 = D_8007142C[j];
                M2C_GFIELD(D_80093790, s16, 0xC) = 0;
                M2C_GFIELD(D_80093790, s16, 0xE) = 0;
                M2C_GFIELD(D_80093790, s16, 8) = x >> 7;
                M2C_GFIELD(D_80093790, s16, 0xA) = y >> 7;
                SpuSetVoiceAttr(D_80093790);
            }
        }
    }
}
