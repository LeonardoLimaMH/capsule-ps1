#include "common.h"

void func_800C3D9C();



typedef struct {
    u8 values[10];
} ChessLookup10;

u8 *func_800C47B8(u8 *a, s32 b, s32 c, s32 d, s32 e) {
    extern ChessLookup10 D_800988C8;
    extern u8 *func_80015B3C();
    extern void func_800C61F4();
    extern void func_800161C4();
    extern void func_80015EF8();
    extern s32 func_800A8770();
    extern s32 func_80019F30();
    extern void func_80015CD0();

    ChessLookup10 table;
    u8 *o;
    s32 i;
    s32 code;
    u8 val;
    u8 *p;

    table = D_800988C8;
    o = func_80015B3C(func_800C61F4, func_800161C4, 5);
    func_80015EF8(o);
    *(s32 *)(o + 0x7c) = c;
    *(s32 *)(o + 0x80) = d;
    *(s32 *)(o + 0x40) = b;
    p = a + a[0xbca];
    i = func_800A8770(a, a[0xbca], p[0xbcb]);
    val = table.values[i];
    *(s32 *)(o + 0x84) = e;
    *(u16 *)(o + 0x66) = val;
    code = 0x5b;
    if (e < 2) {
        code = 0x5a;
    }
    func_80015CD0(o + 0x14, func_80019F30(0x70013, code), 2);
    return o;
}

