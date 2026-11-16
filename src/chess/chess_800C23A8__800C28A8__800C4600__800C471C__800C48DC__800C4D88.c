#include "common.h"

void func_800C3D9C();



typedef struct {
    u8 values[10];
} ChessLookup10;

u8 *func_800C4D88(u8 *board, s32 arg1, s32 side, s32 slot) {
    extern u8 *func_80015B3C();
    extern void func_800C4C18();
    extern void func_800161C4();
    u8 *o;
    register s32 off asm("a1");
    register u8 *b asm("a0");
    register u8 *p asm("v0");
    s16 pos[3];

    func_8009CA60(3);
    o = func_80015B3C(func_800C4C18, func_800161C4, 5);
    func_80015EF8(o);
    *(s32 *)(o + 0x40) = arg1;
    *(s32 *)(o + 0x38) |= 1;
    func_80015CD0(o + 0x14, func_80019F30(0x70013, 0x5D), 2);
    b = board;
    off = slot * 0x7C;
    off += side * 0x2E8;
    p = b + off;
    func_800A46B8(b, p[0x5FD], p[0x5FE], pos);
    *(s32 *)(o + 0x84) = pos[0];
    *(s32 *)(o + 0x88) = pos[1];
    *(s32 *)(o + 0x8C) = pos[2];
    return o;
}

