#include "common.h"

extern s32 func_80100018(s16, s16);
extern s32 func_80100018();
s32 func_800FFE6C(s16 arg0, s16 arg1) {
    s16 result;
    switch (arg0) {
    case 0:
        if (arg1 == 82) result = 8;
        else result = func_80100018(arg0, arg1);
        break;
    case 3:
        if (arg1 == 42) result = 44;
        else result = func_80100018(arg0, arg1);
        break;
    case 12:
        if (arg1 == 55) result = 60;
        else result = func_80100018(arg0, arg1);
        break;
    case 26:
        if (arg1 == 95) result = 32;
        else result = func_80100018(arg0, arg1);
        break;
    case 42:
        if (arg1 == 3) result = 44;
        else result = func_80100018(arg0, arg1);
        break;
    case 55:
        if (arg1 == 12) result = 60;
        else result = func_80100018(arg0, arg1);
        break;
    case 68:
        if (arg1 == 72) result = 74;
        else result = func_80100018(arg0, arg1);
        break;
    case 72:
        if (arg1 == 68) result = 74;
        else result = func_80100018(arg0, arg1);
        break;
    case 82:
        if (arg1 == 0) result = 8;
        else result = func_80100018(arg0, arg1);
        break;
    case 95:
        if (arg1 == 26) result = 32;
        else result = func_80100018(arg0, arg1);
        break;
    case 100: case 101: case 102:
        result = arg0;
        break;
    default:
        result = func_80100018(arg0, arg1);
        break;
    }
    return result;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800FFE6C", func_80100018);
