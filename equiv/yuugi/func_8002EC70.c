#include "common.h"

extern u8 D_80085428[], D_8008ED68[], D_8006D6C8[], D_8006D6E8[], D_8006D780[], D_8006D784[];
extern u8 D_8006D78C[], D_8006D790[], D_8006D75C[], D_8006D764[], D_8006D744[], D_8006D770[];
extern u8 D_8006D778[];
extern s16 D_800922D0[];
extern s32 D_80078D28;
extern void func_80020844(), func_8001F1A8(), func_80032474(), func_80033974(), func_80032398();
extern void func_80032570();
extern s32 func_80034AB0();

#define M D_800922D0
#define MU(i) (*(u16 *)(M + (i)))

s32 func_8002EC70(void) {
    u8 *G = D_80085428;
    u8 *D;
    u8 *tbl;
    s16 *s1;
    s32 i, y, s0, v, a2;
    u32 pad, pad2;

    if (*(s32 *)(M + 4) < 2) {
        G[0x5CB] = 2;
        *(s32 *)(M + 4) = 2;
    }
    func_80020844(-0x8A, -0x66, 0x114, 0xCC, 0x20, 0x20, 0x20, 0, 1);
    y = -0x60;
    tbl = D_8006D6C8;
    for (i = 0; i < 4; i++, tbl += 8, y += 0x2C) {
        if (i == 1) {
            y += 0x10;
        }
        if (i == 3) {
            if (G[0] != i) {
                continue;
            }
            func_8001F1A8(-0x80, (s16)y, 0, 1, 0, D_8006D6C8 + 0x18, 1, 4, 0);
        } else {
            func_8001F1A8(-0x80, (s16)y, 0, 1, 0, tbl, 1, 4, 0);
        }
    }
    y = -0x60;
    tbl = D_8006D6E8;
    for (i = 0; i < 9; i++, tbl += 10, y += 0x10) {
        if (i == 3 || i == 5 || i == 7 || i == 8) {
            y += 0xC;
        }
        func_8001F1A8(-0x30, (s16)y, M[1] == i ? 3 : 0, 1, 0, tbl, 1, 5, 0);
    }
    func_80032474(0x28, -0x40, 2, M[8], D_8006D780, 2, D_8006D784, 3);
    func_80032474(0x28, -0x24, 3, M[9], D_8006D780, 2, D_8006D784, 3);
    func_80032474(0x28, -0x14, 4, M[10], D_8006D78C, 2, D_8006D790, 2);
    a2 = M[1] == 1 ? 3 : 1;
    func_8001F1A8(0x28, -0x50, a2, 1, 0, M[7] != 0 ? D_8006D75C : D_8006D764, 1, M[7] != 0 ? 4 : 6, 0);
    func_8001F1A8(0x28, -0x60, M[1] == 0 ? 3 : 1, 1, 0, D_8006D744 + M[6] * 8, 1, 4, 0);
    if (G[0] == 3) {
        func_8001F1A8(-0x30, 0x34, (M[1] == 7 && M[0xD] == 0) ? 3 : 0, 1, 0, D_8006D770, 1, 3, 0);
        func_8001F1A8(0x18, 0x34, (M[1] == 7 && M[0xD] != 0) ? 3 : 0, 1, 0, D_8006D778, 1, 3, 0);
    }
    D = D_8008ED68;
    if (D[0x99A] != 0) {
        return D[0x99A];
    }
    pad = *(u32 *)(D + 0x88);
    if ((pad & 0x4000) || (*(u32 *)(D + 0x98) & 0x4000)) {
        func_80034AB0(0x84);
        a2 = MU(1);
        MU(1) = a2 + 1;
        if (G[0] != 3 && (s16)(a2 + 1) == 7) {
            MU(1) = a2 + 2;
        }
        M[1] = M[1] % 9;
    } else if ((pad & 0x1000) || (*(u32 *)(D + 0x98) & 0x1000)) {
        func_80034AB0(0x84);
        MU(1) = MU(1) - 1;
        if (M[1] < 0) {
            M[1] = 8;
        }
        if (G[0] != 3 && M[1] == 7) {
            MU(1) = MU(1) - 1;
        }
    }
    s0 = M[1];
    s1 = &M[6 + s0];
    D = D_8008ED68;
    pad = *(u32 *)(D + 0x88);
    if ((pad & 0x2000) || (*(u32 *)(D + 0x98) & 0x2000)) {
        if (s0 >= 7) {
            if (s0 == 8) {
                return 8;
            }
            goto toggle;
        }
        if (s0 >= 5) {
            func_80034AB0(0x84);
            *(u16 *)s1 = *(u16 *)s1 + 1;
            v = *s1 % 8;
            *s1 = v;
            return v;
        }
        if (s0 != 0) {
            goto toggle;
        }
        MU(6) = MU(6) + 1;
        if (M[6] >= 3) {
            M[6] = 2;
            return 2;
        }
        return func_80034AB0(0x84);
    }
    pad2 = *(u32 *)(D + 0x98);
    if ((pad & 0x8000) || (pad2 & 0x8000)) {
        if (s0 >= 7) {
            if (s0 == 8) {
                return 8;
            }
            goto toggle;
        }
        if (s0 >= 5) {
            func_80034AB0(0x84);
            *(u16 *)s1 = *(u16 *)s1 - 1;
            if (*s1 < 0) {
                *s1 = 7;
            }
            return 7;
        }
        if (s0 == 0) {
            MU(6) = MU(6) - 1;
            if (M[6] < 0) {
                v = MU(6) << 16;
                M[6] = 0;
                return v;
            }
            return func_80034AB0(0x84);
        }
        goto toggle;
    }
    if ((pad & 0x830) || (pad2 & 0x830)) {
        if (s0 == 7) {
            func_80034AB0(0x48);
            func_80033974(0);
            if (M[0xD] == 0) {
                func_80032398();
            }
            *(s16 *)(D + 0xF0) = 4;
            M[0] = 0;
            M[2] = 0;
            return 4;
        }
        if (s0 == 8) {
            func_80034AB0(0x48);
            func_80032398();
            func_80032570();
            if (G[0] == 3) {
                goto quit4;
            }
            G[0x5CB] = 3;
            *(s32 *)(M + 4) = 3;
            D_80078D28 = 0x41;
            *(s16 *)(D + 0xF0) = s0;
            return 0x41;
        }
        return 8;
    }
    if ((pad & 0xC0) || (pad2 & 0xC0)) {
        func_80034AB0(0x5D);
        func_80032398();
        func_80032570();
        if (G[0] == 3) {
            goto quit4;
        }
        G[0x5CB] = 3;
        D_80078D28 = 0x41;
        *(s32 *)(M + 4) = 3;
        *(s16 *)(D + 0xF0) = 8;
        return 8;
    }
    return 0;
quit4:
    G[0x5CB] = 4;
    *(s32 *)(M + 4) = 4;
    return 4;
toggle:
    func_80034AB0(0x84);
    v = *(u16 *)s1 ^ 1;
    *s1 = v;
    return v;
}
