#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 unk_00[0x54];
    s32 unk_54;
    s32 unk_58;
} ChessUnk69E4C;

void func_8009C4B0(u8 *arg0, s32 arg1, s32 arg2) {
    register u8 *p asm("s0");
    register s32 var_s4 asm("s4");
    register s32 off1 asm("v0") = arg1 * 0x2E8;
    u32 temp;
    s32 off;
    s32 *image;
    s32 i;

    p = arg0 + off1;
    p += 0x5E8;
    var_s4 = arg2 * 32;
    p += (var_s4 - arg2) * 4;

    temp = func_800A8994(arg0, arg1, arg2);
    off = p[0x26] * 2 + 2;
    image = (s32 *)func_80019F30(temp | 0x10000, 0);

    if (p[0x26] != 3) {
        var_s4 = arg1 << 23;
        arg1 = 0x2800000;
        i = 0;
        do {
            register s32 step asm("v0");
            func_80012A20(image[off + i + 3], 3, arg1 >> 16, var_s4 >> 16);
            step = 0x200000;
            arg1 += step;
            i++;
        } while (i < 2);
    } else {
        func_80012A20(image[off + 3], 3, (s16)(var_s4 + 0x2C0), (arg1 << 23) >> 16);
    }
}
