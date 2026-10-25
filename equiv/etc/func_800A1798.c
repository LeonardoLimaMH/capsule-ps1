/* arg1: small */
/* rand-mem: 0x800B3B38 1 8 */
/* rand-mem: 0x800B3B3A 1 8 */
/* rand-mem: 0x800B3B3C 2 7 */
/* rand-mem: 0x800B3B40 2 3 */
/* rand-mem: 0x800B3B44 2 2 */
/* rand-mem: 0x800B3C00 2 2 */
/* rand-mem: 0x800B3BF8 1 2 */
/* rand-mem: 0x800B3BFC 1 2 */
/* rand-mem: 0x8008EDF0 2 0xFF */
/* rand-mem: 0x8008EE00 2 0xFF */
#include "common.h"

extern u8 D_8008ED68[];
extern s16 D_800B3B38[];
extern s16 D_800B3B70[];
extern u8 D_800B3B90[];
extern s32 D_800B3BF8[];
extern u8 D_800B3C00[];
extern s32 D_800B3C08[];
extern u8 D_8006B1FC[];
extern char D_800B29C8[], D_800B29DC[], D_800B29E0[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, char *, s32, s32, s32);
extern s32 func_800A150C(void *, s32, s32, s32, s32);
extern s32 func_80034AB0(s32);
extern void func_800A2CC8(s32, s32);
extern s32 func_80012544(s32), func_80012508(void);

static s32 udiv_rem(s32 a, s32 b) {
    s32 r;
    __asm__ volatile("div $0,%1,%2\n\tmfhi %0" : "=r"(r) : "r"(a), "r"(b));
    return r;
}

#define B D_800B3B38
#define PAD(i) (*(u32 *)(D_8008ED68 + (i) * 16 + 0x88))
#define N(i, k) (*(s16 *)((u8 *)D_800B3B38 + (i) * 12 + 0x10 + (k) * 2))
#define P(i, k) (*(s16 *)((u8 *)D_800B3B70 + (i) * 12 + (k) * 2))
#define Q(i) (D_800B3B90 + (i) * 50)

static s32 flip_state(s32 i) {
    s16 v = B[i] != 1 ? 2 : 0;
    B[i] = v;
    return v;
}

s32 func_800A1798(u8 *p, s16 i) {
    u32 pad;
    s32 k, y;
    s16 st, c, t;

    switch ((u32)B[i]) {
    case 0:
        if (PAD(i) & 0xA000) {
            func_80034AB0(0x84);
            B[6 + i] ^= 1;
        }
        break;
    case 1:
    case 5:
        if (!D_800B3C00[i] || !D_800B3BF8[i]) break;
        if (i == 1) y = 0x30;
        else if (p[0x5D0] == 2) y = -0x50;
        else y = 0x18;
        func_8001F1A8(-0x40, (s16)y, 0, 1, 0, D_800B29C8, 1, 9, 2);
        y = (s16)(y + 0x18);
        func_8001F1A8(-0x30, y, B[4 + i] == 0 ? 3 : 0, 1, 0, D_800B29DC, 1, 2, 2);
        func_8001F1A8(0, y, B[4 + i] == 1 ? 3 : 0, 1, 0, D_800B29E0, 1, 3, 2);
        if (PAD(i) & 0xA000) {
            func_80034AB0(0x84);
            B[4 + i] ^= 1;
        }
        break;
    case 2: {
        s32 x;
        u8 *a;
        if (p[0x5D0] == 2) x = i ? 0x28 : -0x60;
        else x = 0x20;
        func_800A150C(p + i * 0x2BC + 0x50, 0, B[4 + i], 0x20, (s16)x);
        pad = PAD(i);
        a = D_8008ED68 + i * 16;
        if ((pad & 0x2000) || *(u32 *)(a + 0xA8) % 10 != 0) {
            func_80034AB0(0x84);
            B[4 + i] += 1;
            B[4 + i] = udiv_rem(B[4 + i], p[2 + i]);
            D_800B3C08[i] = 0;
            B[i] = 3;
        } else if ((pad & 0x8000) || *(u32 *)(a + 0xB0) % 10 != 0) {
            func_80034AB0(0x84);
            B[4 + i] -= 1;
            if (B[4 + i] < 0) B[4 + i] = p[2 + i] - 1;
            D_800B3C08[i] = 0;
            B[i] = 4;
        }
        break;
    }
    case 3:
    case 4:
        D_800B3C08[i] += 4;
        if (D_800B3C08[i] >= 0x40) B[i] = 2;
        break;
    case 6:
        if (B[0] == 6 && B[1] == 6) {
            B[1] = 0;
            B[0] = 0;
            func_80012544(0x19);
        }
        break;
    }

    pad = PAD(i);
    if (pad & 0x20) {
        st = B[i];
        switch (st) {
        case 0:
            if (p[0x5D0] == 2) {
                D_800B3C00[i] = 0;
                D_800B3BF8[i] = 1;
            } else {
                D_800B3BF8[i] = 1;
                D_800B3C00[i] = 1;
            }
            if (B[6 + i] == 0) {
                func_80034AB0(0x48);
                for (k = 0; k < 6; k++) N(i, k) = D_8006B1FC[k * 14];
                B[2 + i] = 0;
                B[4 + i] = 0;
                p[i + 0x5DC] = 0;
                B[i] = 1;
                return 1;
            }
            if (p[2 + i] < 6) return func_80034AB0(0x4C);
            func_80034AB0(0x48);
            for (k = 0x31; k >= 0; k--) Q(i)[k] = 0;
            for (k = 5; k >= 0; k--) P(i, k) = 0;
            p[i + 0x5DC] = 1;
            B[i] = 2;
            return (s32)&B[i];
        case 1:
        case 5:
            if (!D_800B3C00[i]) {
                D_800B3C00[i] = 1;
                D_800B3BF8[i] = 0;
                return (s32)&D_800B3BF8[i];
            }
            D_800B3BF8[i] = 0;
            D_800B3C00[i] = 0;
            c = B[4 + i];
            if (c == 0) {
                func_80034AB0(0x48);
                B[6 + i] = 0;
                B[4 + i] = 0;
                B[2 + i] = 0;
                if (p[0x5D0] == 2) {
                    B[i] = 6;
                    return 6;
                }
                B[i] = 0;
                return func_80012508();
            }
            if (c != 1) return 1;
            func_80034AB0(0x5D);
            func_800A2CC8(i, i + 1);
            return flip_state(i);
        case 2:
            if (Q(i)[B[4 + i]] != 0) return func_80034AB0(0x4C);
            func_80034AB0(0x48);
            Q(i)[B[4 + i]] = 1;
            P(i, 6 - B[2 + i]) = B[4 + i];
            N(i, 6 - B[2 + i]) = p[i * 0x2BC + B[4 + i] * 14 + 0x50];
            t = B[2 + i] - 1;
            B[2 + i] = t;
            if (t != 0) return (u32)(u16)t << 16;
            if (p[0x5D0] == 2) {
                D_800B3C00[i] = 0;
                D_800B3BF8[i] = 1;
            } else {
                D_800B3BF8[i] = 1;
                D_800B3C00[i] = 1;
            }
            B[4 + i] = 0;
            B[i] = 5;
            return 5;
        }
        if (st < 0) return 1;
        return (u32)(u16)i << 16;
    }
    if (!(pad & 0x40)) return 0;
    if ((u16)(B[i] - 3) >= 2) func_80034AB0(0x5D);
    st = B[i];
    switch (st) {
    case 0:
        B[5] = 0;
        B[4] = 0;
        B[7] = 0;
        B[6] = 0;
        B[1] = 0;
        B[0] = 0;
        B[3] = 0;
        B[2] = 0;
        return func_80012544(0x15);
    case 1:
    case 5:
        D_800B3BF8[i] = 0;
        D_800B3C00[i] = 0;
        func_800A2CC8(i, i + 1);
        return flip_state(i);
    case 2:
        t = B[2 + i];
        if (t == 6) {
            B[i] = 0;
            return 6;
        }
        Q(i)[P(i, 5 - t)] = 0;
        P(i, 5 - B[2 + i]) = 0;
        N(i, 5 - B[2 + i]) = -1;
        k = (u16)B[2 + i] + 1;
        B[2 + i] = k;
        return k;
    }
    if (st < 0) return 1;
    return 5;
}
