#include "ghidra.h"
#include "common.h"

void func_800C1890(u8 *arg0, s32 arg1, s32 arg2) {
    extern u16 D_8008EE50[];
    u8 c = arg0[0xBCA];
    u8 flags;
    s32 next;

    switch (*D_8008EE50) {
    case 0:
        next = 5;
        if (arg2 != 0 && (flags = arg0[0xBE1], next = 9, !(flags & 1)) &&
            (next = 5, flags >> 7)) {
            func_80012628();
        } else {
            func_8001264C(next);
        }
        arg0[0xBE1] &= 0x7F;
        return;
    case 1:
        if (func_800A0D40(arg0, c, 0) == 0) {
            func_8001264C(3);
            return;
        }
        goto success;
    case 2:
        if (func_800220D4(arg0, 1, c, 0) != 0) {
            func_8001264C(9);
        }
        return;
    case 3:
        if (func_800A0D40(arg0, 1 - c, 0) == 0) {
            func_8001264C(5);
            return;
        }
        goto success;
    case 5:
        if (func_800A0AD4(arg0, c, arg1, 1) == 0) {
            func_8001264C(7);
            return;
        }
        goto success;
    case 6:
        if (func_800220D4(arg0, 1, c, 0) != 0) {
            func_8001264C(9);
        }
        return;
    case 7:
        if (func_800A0AD4(arg0, 1 - c, arg1, 1) != 0) {
success:
            func_800220B8(arg0);
            func_80012628();
            return;
        }
        func_8001264C(9);
        return;
    case 4:
    case 8:
        if (func_800220D4(arg0, 1, 1 - c, 0) != 0) {
            func_8001264C(9);
        }
        return;
    case 9:
        func_800125D8();
        return;
    }
}

