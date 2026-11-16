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

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A77E8", func_800A7B30);
