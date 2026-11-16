#include "common.h"

void func_800A70F8(void)
{
    extern u8 D_80091618[];
    extern u16 D_8006AF80[];
    extern s32 D_8008EE00[];
    extern s16 D_800ED8E8[];
    extern char D_80097EC8[], D_80097EE8[], D_80097EF0[], D_80097EF8[], D_80097F00[], D_80097F08[];
    extern char D_80097F14[], D_80097F20[], D_80097F2C[], D_80097F38[], D_80097F50[], D_80097F74[];
    extern void func_8001DB8C(char *, ...);
    u16 k = D_8006AF80[0];
    u8 *base;
    u8 *e;

    if (k == 0xFFFF) {
        return;
    }
    if (D_8008EE00[0] & 0x40) {
        D_800ED8E8[0] = (D_800ED8E8[0] == 0);
    }
    if (D_800ED8E8[0] != 0) {
        base = D_80091618;
        e = base + k * 0x1A8;
        func_8001DB8C(D_80097EC8, *(s16 *)(e + 0xE6), *(s16 *)(e + 0xD4), *(s16 *)(e + 0xD6), *(s16 *)(e + 0xC2));
        func_8001DB8C(D_80097EE8, *(s16 *)(e + 0xD2));
        func_8001DB8C(D_80097EF0, *(s16 *)(e + 0xDA));
        func_8001DB8C(D_80097EF8, *(s16 *)(e + 0xDC));
        func_8001DB8C(D_80097F00, *(s16 *)(e + 0xDE));
        func_8001DB8C(D_80097F08, *(s16 *)(e + 0xE0));
        func_8001DB8C(D_80097F14, *(s16 *)(e + 0xD8));
        func_8001DB8C(D_80097F20, *(s16 *)(e + 0xE2));
        func_8001DB8C(D_80097F2C, *(s16 *)(e + 0xE4));
        func_8001DB8C(D_80097F38, *(u16 *)(e + 0x9E), *(s16 *)(e + 0xC0), *(s16 *)(e + 0xBE));
        func_8001DB8C(D_80097F50, *(s16 *)(e + 0xB4), *(s16 *)(e + 0xB6), *(s16 *)(e + 0xB8), *(s16 *)(e + 0xBA), *(s16 *)(e + 0xBC));
        func_8001DB8C(D_80097F74, *(s16 *)(e + 0xE8), *(s16 *)(e + 0xEA), *(s16 *)(e + 0xEC));
    }
}

extern u8 D_800916E8[];
extern s16 D_800EC588[][17];

extern s16 D_800ECB84[][17];

