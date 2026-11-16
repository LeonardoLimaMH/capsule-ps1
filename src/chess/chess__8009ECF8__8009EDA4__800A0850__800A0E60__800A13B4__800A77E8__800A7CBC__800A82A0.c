#include "ghidra.h"
#include "matching.h"
#include "common.h"








void func_800A82A0(void *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_a3;
    s32 temp_v1;
    s32 new_var;

    temp_v1 = *(s32 *)((s8 *)arg0 + 0x84) + 0x10000;
    *(s32 *)((s8 *)arg0 + 0x84) = temp_v1;
    if ((temp_v1 & 0xFF0000) > 0x20000) {
        temp_a3 = *(s32 *)((s8 *)arg0 + 0x8C);
        new_var = temp_a3 - 8;
        if (((*arg2 - new_var) % 8) >= 5) {
            *arg2 = temp_a3 + 7;
        } else {
            *arg2 = temp_a3 + 1;
        }
        *(s32 *)((s8 *)arg0 + 0x84) &= 0xFF00FFFF;
    } else {
        *arg2 = *(s32 *)((s8 *)arg0 + 0x8C);
    }
    *arg2 %= 8;
    *arg1 = 1;
    *(s16 *)((s8 *)arg0 + 0x24) = 0;
}

