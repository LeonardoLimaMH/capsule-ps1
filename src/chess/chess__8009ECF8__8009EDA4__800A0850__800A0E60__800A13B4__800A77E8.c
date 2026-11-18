#include "ghidra.h"
#include "matching.h"
#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A77E8", func_800A77E8);

void func_800A7A60(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    register s32 i asm("s0");
    register u32 flags asm("s3");
    register s32 p asm("v1");
    p = arg0 + arg2 * 0x2E8;
    p += arg3 * 0x7C;
    i = 0;
    flags = M2C_FIELD(p, u32 *, 0x600);
    do {
        if (((flags >> i) & 1) && i == 0x12) {
            func_800C4E94(arg0, arg1, arg2, arg3);
        }
        i++;
    } while (i < 0x20);
}

s32 func_800A7B30(s32 arg0, u8 *arg1, s32 arg2, u32 arg3) {
    s32 ret = 0;

    switch (arg3 & 0x7F) {
    case 0:
        break;
    case 1:
        ret = arg2;
        break;
    case 2:
        ret = arg2 + 0x13;
        break;
    case 4:
        ret = 0x1B;
        break;
    case 5:
        ret = 0x1C;
        break;
    case 6:
        ret = arg2 + 0x31;
        break;
    case 7:
    case 8:
    case 9:
        ret = arg2 + 0x39;
        break;
    case 10:
        ret = arg2 + 0x46;
        if (*arg1 != 'R') {
            ret = arg1[0x24] + arg2;
        }
        break;
    }
    return ret;
}
