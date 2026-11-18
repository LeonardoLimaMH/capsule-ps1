#include "common.h"

s32 func_800DCC84(s32 arg0)
{
    extern u8 D_80119660[];
    register s32 saved_arg asm("s2") = arg0;
    u8 *b = D_80119660;
    u8 n;
    u8 i;
    n = func_800D7328(saved_arg & 0xFF, b);
    if (n == 0) {
        return 0;
    }
    func_800D90C0(saved_arg & 0xFF);
    for (i = 0; i < n; i++) {
        func_800D943C(saved_arg & 0xFF, *(u8 *)((u32)i + (u32)b));
    }
    return 1;
}

