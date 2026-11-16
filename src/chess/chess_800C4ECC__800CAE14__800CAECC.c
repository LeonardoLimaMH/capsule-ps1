#include "common.h"

typedef struct {
    u8 unk0[0x15];
    u8 unk15;
    u8 unk16;
    u8 unk17[0x7C - 0x17];
} ChessPiece7C;


s32 func_800CAECC(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    switch (arg0[0xBF4]) {
    case 5:
        var_v1 = 3;
        break;
    case 6:
        var_v1 = 4;
        break;
    case 7:
        var_v1 = 2;
        break;
    case 3:
    case 4:
        var_v1 = 1;
        break;
    default:
        var_v1 = 0;
        break;
    }
    if (var_v1 >= 3) {
        if (arg1 != var_v1 - 3) {
            return 0;
        }
        if (arg2 != *(s8 *)(arg0 + 0xBF8)) {
            return 0;
        }
    } else if ((u32)(arg0[0x5CB] - 1) < 2) {
        return 0;
    }
    return 1;
}

