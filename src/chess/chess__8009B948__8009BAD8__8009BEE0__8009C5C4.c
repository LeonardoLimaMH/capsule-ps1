#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 unk_00[0x54];
    s32 unk_54;
    s32 unk_58;
} ChessUnk69E4C;

void func_8009C5C4(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    extern s16 D_80100BC4[];
    extern s32 MoveImage();
    register s32 i asm("s0");
    register s32 ret asm("v0");
    register s32 *image asm("s1");
    register s16 *pos asm("s2");
    register s32 x asm("s1");
    s32 off;
    s16 rect[4];

    if (*arg3 != 0x5C) {
        register s32 off asm("v0");
        register s32 mode asm("a1");
        register s16 *table asm("a1");
        register s32 posOff asm("a0");
        s32 texture;

        ret = func_80019F30(func_800A8994(arg0, arg1, arg2) | 0x10000, 0);
        i = 0;
        table = D_80100BC4;
        posOff = arg2 * 4;
        posOff += arg1 * 24;
        pos = (s16 *)((u8 *)table + posOff);
        image = (s32 *)ret;
        mode = 3;
        do {
            texture = image[17];
            image += 1;
            off = i << 5;
            i++;
            func_80012A20(texture, mode, (s16)((u16)pos[0] + off), pos[1]);
            mode = 3;
        } while (i < 2);
    } else {
        register s16 *table asm("a0");
        register s16 *r asm("a0");
        register s16 width asm("v0");
        register s16 height asm("s3");
        register s32 posOff asm("v1");

        i = 0;
        height = 0x80;
        table = D_80100BC4;
        posOff = arg2 * 4;
        posOff += arg1 * 24;
        pos = (s16 *)((u8 *)table + posOff);
        x = 0x3C0;
        r = rect;
    move:
        rect[0] = x;
        x += 0x20;
        off = i << 5;
        i++;
        rect[1] = height;
        rect[2] = (width = 0x20);
        rect[3] = height;
        MoveImage(r, pos[0] + off, pos[1]);
        r = rect;
        if (2 > i) goto move;
    }
}

void func_8009C6F8(void) {
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20014, 3), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 1), 1, 0);
}

void func_8009C758(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20014, var_s0 + 6), 1, 0);
        var_s0 += 1;
    } while (var_s0 < 7);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 3), 1, 0);
}

void func_8009C7D4(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20014, var_s0 + 4), 1, 0);
        var_s0 += 1;
    } while (var_s0 < 2);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 2), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 7), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 6), 1, 0);
}

void func_8009C898(void) {
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20013, 0x1E), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 8), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 9), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20014, 0x20), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 0xA), 1, 0);
}

void func_8009C964(u8 *arg0) {
    extern u8 D_80100CD4[];
    extern u8 D_80100CC8[];
    extern u32 func_800CA480(void);
    extern s32 func_80019F30(u32, s32);
    extern void func_80012A20(s32, s32, s32, s32);
    u32 id;
    s32 i;
    s32 n;

    id = func_800CA480();
    i = 0;
    n = D_80100CD4[arg0[0x5D9]];
    while (i < n) {
        MATCHING_CALL4_REPEAT(
            func_80012A20,
            func_80019F30(id | 0x20000, D_80100CC8[arg0[0x5D9]] + i),
            1, 0);
        i++;
    }
    n = 2;
    i = 0;
    do {
        register u32 a0 asm("a0") = id | 0x50000;
        i++;
        MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(a0, i), 1, 0);
    } while (i < n);
}
