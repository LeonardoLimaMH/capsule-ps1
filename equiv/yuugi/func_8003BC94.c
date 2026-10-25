#include "common.h"

extern u8 D_800944B8[], D_800714A0[];
extern s32 D_80078C9C;
extern void func_8003B7B4(), func_8003B178();
extern u32 func_8003AAF0();

static s32 rd(u32 *p) {
    u8 *e = D_800944B8 + D_80078C9C * 0x2AC;
    u8 b = *(u8 *)(*(s32 *)(e + 0x284) + *p);

    (*p)++;
    if (*(u32 *)(e + 0x294) < *p) {
        ((u8 *)p)[0x20] = 1;
        return -1;
    }
    return b;
}

s32 func_8003BC94(u8 *p) {
    s32 a1, a2, a3 = 0;
    s32 t0;
    u32 n, i;

    a1 = rd((u32 *)p);
    a2 = a1;
    if (!(a1 & 0x80)) {
        a1 = p[0x25];
        p[0x24] = 1;
    } else {
        if ((a2 & 0xFF) != 0xFF) {
            p[0x25] = a1;
        }
        p[0x24] = 0;
    }
    t0 = *(s32 *)(D_800714A0 + (((u32)a1 >> 2) & 0x3C));
    if (t0 != 0) {
        if (p[0x24] == 0) {
            a2 = rd((u32 *)p);
        }
        if (t0 == 2) {
            a3 = rd((u32 *)p);
        }
        func_8003B7B4(p, a1 & 0xFF, a2 & 0xFF, a3 & 0xFF);
        return 0;
    }
    if ((a2 & 0xFF) == 0xF0) {
        n = func_8003AAF0(p);
        i = 0;
        do {
            a1 = rd((u32 *)p);
            i++;
            if ((a1 & 0xFF) == 0xF7) {
                break;
            }
        } while (i < n);
        return 0;
    }
    if ((a2 & 0xFF) == 0xFF) {
        a1 = rd((u32 *)p);
        func_8003B178(p, a1 & 0xFF);
        return 0;
    }
    return 0;
}
