#include "common.h"


#define A1798_B D_800B3B38->unk0
#define A1798_PAD(i) (D_8008ED68->pad[i].unk0)
#define A1798_N(i, k) (D_800B3B38->unk10[i][k])
#define A1798_P(i, k) (D_800B3B70[i][k])
#define A1798_Q(i) (D_800B3B90[i])

void func_800A1798(u8 *p, s16 i) {
typedef struct {
        u8 pad0[0x88];
        struct { u32 unk0; u8 pad4[0xC]; } pad[2];
    } S_8008ED68_A1798;
    extern S_8008ED68_A1798 D_8008ED68[];
typedef struct {
        s16 unk0[2], unk4[2], unk8[2], unkC[2];
        s16 unk10[2][6];
    } S_800B3B38_A1798;
    extern S_800B3B38_A1798 D_800B3B38[];
extern s16 D_800B3B70[][6];
extern u8 D_800B3B90[][50];
extern s32 D_800B3BF8[];
extern u8 D_800B3C00[];
extern s32 D_800B3C08[];
extern u8 D_8006B1FC[];
extern char D_800B29C8[], D_800B29DC[], D_800B29E0[];
extern void func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);
extern void func_800A150C(void *, s32, s32, s32, s32);
extern s32 func_80034AB0(s32);
extern void func_800A2CC8(s32, s32);
extern void func_80012544(s32), func_80012508(void);

    u32 pad;
    s32 k;
    s16 y, y2;
    u8 *ed = (u8 *)D_8008ED68;
    s16 st, c, t;

    switch ((u32)A1798_B[i]) {
    case 0:
        if (A1798_PAD(i) & 0xA000) {
            func_80034AB0(0x84);
            D_800B3B38->unkC[i] ^= 1;
        }
        break;
    case 1:
    case 5:
        if (!D_800B3C00[i] || !D_800B3BF8[i]) break;
        y = 0x18;
        if (i == 1) {
            y = 0x30;
        } else {
            if (p[0x5D0] == 2) y = -0x50;
        }
        func_8001F1A8(-0x40, (s16)y, 0, 1, 0, D_800B29C8, 1, 9, 2);
        y2 = y + 0x18;
        func_8001F1A8(-0x30, y2, D_800B3B38->unk8[i] == 0 ? 3 : 0, 1, 0, D_800B29DC, 1, 2, 2);
        func_8001F1A8(0, y2, D_800B3B38->unk8[i] == 1 ? 3 : 0, 1, 0, D_800B29E0, 1, 3, 2);
        if (A1798_PAD(i) & 0xA000) {
            func_80034AB0(0x84);
            D_800B3B38->unk8[i] ^= 1;
        }
        break;
    case 2: {
        u8 *a;
        u32 pad2;
        y = 0x20;
        if (p[0x5D0] == 2) {
            y = -0x60;
            if (i != 0) y = 0x28;
        }
        func_800A150C(p + (i * 0x2BC + 0x50), 0, D_800B3B38->unk8[i], 0x20, y);
        pad2 = A1798_PAD(i);
        if ((pad2 & 0x2000) || *(u32 *)((a = ed + i * 16) + 0xA8) % 10 != 0) {
            func_80034AB0(0x84);
            D_800B3B38->unk8[i] += 1;
            D_800B3B38->unk8[i] = D_800B3B38->unk8[i] % (p + i)[2];
            D_800B3C08[i] = 0;
            A1798_B[i] = 3;
        } else if ((pad2 & 0x8000) || *(u32 *)(a + 0xB0) % 10 != 0) {
            func_80034AB0(0x84);
            D_800B3B38->unk8[i] -= 1;
            if (D_800B3B38->unk8[i] < 0) D_800B3B38->unk8[i] = (p + i)[2] - 1;
            D_800B3C08[i] = 0;
            A1798_B[i] = 4;
        }
        break;
    }
    case 3:
    case 4:
        D_800B3C08[i] += 4;
        if (D_800B3C08[i] >= 0x40) A1798_B[i] = 2;
        break;
    case 6:
        if (A1798_B[0] == 6 && A1798_B[1] == 6) {
            A1798_B[1] = 0;
            A1798_B[0] = 0;
            func_80012544(0x19);
        }
        break;
    }

    pad = A1798_PAD(i);
    if (pad & 0x20) {
        st = A1798_B[i];
        switch (st) {
        case 0:
            if (p[0x5D0] != 2) {
                D_800B3BF8[i] = 1;
                D_800B3C00[i] = 1;
            } else {
                D_800B3C00[i] = 0;
                D_800B3BF8[i] = 1;
            }
            if (D_800B3B38->unkC[i] == 0) {
                func_80034AB0(0x48);
                for (k = 0; k < 6; k++) A1798_N(i, k) = D_8006B1FC[k * 14];
                D_800B3B38->unk4[i] = 0;
                D_800B3B38->unk8[i] = 0;
                (p + i)[0x5DC] = 0;
                A1798_B[i] = 1;
                return;
            }
            if ((p + i)[2] < 6) goto erro;
            func_80034AB0(0x48);
            {
                u8 *q;
                u8 *b = (u8 *)D_800B3B90;
                k = 0x31;
                q = b + i * 50;
                for (q += k; k >= 0; k--) *q-- = 0;
            }
            for (k = 5; k >= 0; k--) A1798_P(i, k) = 0;
            (p + i)[0x5DC] = 1;
            A1798_B[i] = 2;
            return;
        case 1:
        case 5:
            if (!D_800B3C00[i]) {
                D_800B3C00[i] = 1;
                D_800B3BF8[i] = 0;
                return;
            }
            D_800B3BF8[i] = 0;
            D_800B3C00[i] = 0;
            c = D_800B3B38->unk8[i];
            switch (c) {
            case 0:
                func_80034AB0(0x48);
                D_800B3B38->unkC[i] = 0;
                D_800B3B38->unk8[i] = 0;
                D_800B3B38->unk4[i] = 0;
                if (p[0x5D0] == 2) {
                    A1798_B[i] = 6;
                    return;
                }
                A1798_B[i] = 0;
                { func_80012508(); return; }
            case 1:
            func_80034AB0(0x5D);
            func_800A2CC8(i, i + 1);
            A1798_B[i] = (A1798_B[i] != 1) * 2;
            return;
            }
            return;
        case 2:
            if (A1798_Q(i)[D_800B3B38->unk8[i]] != 0) goto erro;
            func_80034AB0(0x48);
            A1798_Q(i)[D_800B3B38->unk8[i]] = 1;
            A1798_P(i, 6 - D_800B3B38->unk4[i]) = D_800B3B38->unk8[i];
            A1798_N(i, 6 - D_800B3B38->unk4[i]) = (p + (i * 0x2BC + D_800B3B38->unk8[i] * 14))[0x50];
            t = D_800B3B38->unk4[i] - 1;
            D_800B3B38->unk4[i] = t;
            if (t != 0) return;
            if (p[0x5D0] != 2) {
                D_800B3BF8[i] = 1;
                D_800B3C00[i] = 1;
            } else {
                D_800B3C00[i] = 0;
                D_800B3BF8[i] = 1;
            }
            D_800B3B38->unk8[i] = 0;
            A1798_B[i] = 5;
            return;
        }
        return;
    erro:
        func_80034AB0(0x4C);
        return;
    }
    if (!(pad & 0x40)) return;
    if ((u16)A1798_B[i] - 3U >= 2) func_80034AB0(0x5D);
    st = A1798_B[i];
    switch (st) {
    case 0:
        D_800B3B38->unk8[1] = 0;
        D_800B3B38->unk8[0] = 0;
        D_800B3B38->unkC[1] = 0;
        D_800B3B38->unkC[0] = 0;
        A1798_B[1] = 0;
        A1798_B[0] = 0;
        D_800B3B38->unk4[1] = 0;
        D_800B3B38->unk4[0] = 0;
        { func_80012544(0x15); return; }
    case 1:
    case 5:
        D_800B3BF8[i] = 0;
        D_800B3C00[i] = 0;
        func_800A2CC8(i, i + 1);
        A1798_B[i] = (A1798_B[i] != 1) * 2;
            return;
    case 2:
        t = D_800B3B38->unk4[i];
        if (t == 6) {
            A1798_B[i] = 0;
            return;
        }
        A1798_Q(i)[A1798_P(i, 5 - t)] = 0;
        A1798_P(i, 5 - D_800B3B38->unk4[i]) = 0;
        A1798_N(i, 5 - D_800B3B38->unk4[i]) = -1;
        D_800B3B38->unk4[i] += 1;
        return;
    }
    if (st < 0) return;
    return;
}

