#include "common.h"

extern u8 D_80085428[], D_8008ED68[], D_8006D89C[], D_8006DA24[], D_8006DA38[];
extern s16 D_800922D0[];
extern s32 D_8008F788, D_800922D8, D_80078D28;
extern void func_80033020(), func_8001F1A8(), func_8001F35C(), func_80033974();
extern u8 *func_80032F50();
extern void func_80032610(), func_80032CF4(), func_80032760(), func_80032B0C(), func_800327CC();
extern void func_80032888(), func_80032C54(), func_80032BB8(), func_80032A28(), func_80032944();

void func_8002E7A4(void) {
    u8 *G = D_80085428;
    u8 *D;
    u8 *o;
    s32 i, r, c, t, odd, x, id, v, s1;

    func_80033020(-0x30, -0x68, 0, 0, func_80032610);
    func_80033020(-0x20, 0x18, 0, 1, func_80032CF4);
    func_80032F50(-0x90, -0x74, 0, 0, func_80032760);
    for (i = 0; i < 3; i++) {
        *(s32 *)(func_80032F50(-0x90, -0x50 + i * 0x40, 0, 0xD, func_80032B0C) + 0x80) = i;
    }
    func_80032F50(-0x90, -0x70, 0, 0xB, func_800327CC);
    func_80032F50(-0x90, -0x70, 0, 0xC, func_80032888);
    for (i = 0; i < 2; i++) {
        *(s32 *)(func_80032F50(-0x30 + i * 0x40, 0x18, 0, i + 0xF, func_80032C54) + 0x80) = i;
    }
    func_80032F50(-0x70, -0x20, 0, 0xE, func_80032BB8);
    for (r = 0; r < 2; r++) {
        for (c = 0; c < 8; c++) {
            o = func_80032F50(8 + c * 15, r * 16 + 8, 0, c + 0x16, func_80032A28);
            *(s32 *)(o + 0x80) = c;
            *(s32 *)(o + 0x84) = r;
        }
    }
    if (G[0] != 3 && (u32)D_8008F788 < 2) {
        t = 0;
        for (r = 0; r < 5; r++) {
            odd = r & 1;
            for (c = 0; c < 6;) {
                if (odd) {
                    x = 0xA0;
                    id = t != 0 ? 0x1E : 0x1F;
                } else {
                    x = -0xE0;
                    id = t != 0 ? 0x1F : 0x1E;
                }
                o = func_80032F50(x, -0xA0 + r * 0x40, 2, id, func_80032944);
                *(s16 *)(o + 0x6A) = c + 1;
                if (odd) {
                    *(s16 *)(o + 0x6A) = -(c + 1);
                }
                *(s32 *)(o + 0x84) = c;
                c++;
                v = *(u32 *)(o + 0x38);
                t ^= 1;
                *(s32 *)(o + 0x80) = r;
                *(u32 *)(o + 0x38) = v | 8;
                *(u16 *)(o + 0x66) += G[0] + 2;
            }
        }
    }
    D = D_8008ED68;
    if (*(s32 *)(D + 0xA20) != 0) {
        G[0x5CB] = 2;
        *(s32 *)(D_800922D0 + 4) = 2;
        func_80033974(0);
        if (*(u32 *)(D + 0xA20) < 5) {
            D_800922D0[0xD] = 1;
        } else {
            D_800922D0[0xD] = 0;
        }
        D_800922D0[2] = 0;
        *(s16 *)(D_8008ED68 + 0xF0) = 4;
        D_800922D0[0] = 0;
        if (G[0x5D0] != 2) {
            func_8001F1A8(-0x68, 0, 3, 1, 0, D_8006D89C, 1, 0xF, 0);
        } else {
            v = *(s32 *)(D_8008ED68 + 0xA20);
            s1 = (v == 7 || v == 4) ? 2 : 1;
            func_8001F1A8(-0x64, -8, 3, 1, 0, D_8006DA24, 1, 9, 0);
            func_8001F35C(-2, -8, 3, 1, 0, s1, 1, 0);
            func_8001F1A8(-0x64, 8, 3, 1, 0, D_8006DA38, 1, 8, 0);
        }
    } else if (G[0] == 3) {
        G[0x5CB] = 1;
        D_800922D8 = 1;
        *(s16 *)(D + 0xF0) = G[0];
    } else {
        D_80078D28 = 0x41;
        *(u16 *)(D + 0xF0) += 1;
    }
}
