#include "common.h"

extern u8 D_800944B8[];
extern s32 D_80078C9C;
extern s32 func_8003AAF0();
extern void func_8003AC60();

#define ENT (D_800944B8 + D_80078C9C * 0x2AC)

static s32 rd(u32 *p) {
    u8 *e = ENT;
    u8 b = *(u8 *)(*(s32 *)(e + 0x284) + *p);

    (*p)++;
    if (*(u32 *)(e + 0x294) < *p) {
        ((u8 *)p)[0x20] = 1;
        return -1;
    }
    return b;
}

static void skip(u32 *p) {
    u32 n = *p + 1;
    u8 *e = ENT;

    *p = n;
    if (*(u32 *)(e + 0x294) < n) {
        ((u8 *)p)[0x20] = 1;
    }
}

void func_8003B178(u32 *p, u8 type) {
    s32 a, b, c, i;
    u32 t, bpm;
    u8 *e;

    switch (type) {
    case 0x2F:
        t = *p;
        ((u8 *)p)[0x20] = 1;
        *p = t + 1;
        return;
    case 0x51:
        a = rd(p);
        b = rd(p);
        c = rd(p);
        t = ((a << 16) | (b << 8)) | c;
        bpm = 60000000 / t;
        bpm = (bpm * 100) / 115;
        if (bpm >= 0x100) {
            bpm = 0xFF;
        }
        switch (*(u16 *)(ENT + 0x2A4)) {
        case 0x1E:
            bpm >>= 2;
            break;
        case 0x18:
        case 0x3C:
            bpm >>= 1;
            break;
        }
        e = ENT;
        for (i = 0; i < *(u16 *)(e + 0x2A2); i++) {
            *(s16 *)(e + i * 0x28 + 0x16) = bpm;
            *(s16 *)(e + i * 0x28 + 0x14) = bpm;
        }
        return;
    case 0x54:
        skip(p);
        skip(p);
        skip(p);
    case 0x59:
        skip(p);
        skip(p);
        skip(p);
        return;
    case 0x58:
        skip(p);
        func_8003AC60(p);
        return;
    }
    *p += func_8003AAF0(p);
}
