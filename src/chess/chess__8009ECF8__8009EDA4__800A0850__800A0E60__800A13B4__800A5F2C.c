#include "ghidra.h"
#include "matching.h"
#include "common.h"







void func_800A5F2C(void) {
    extern void func_800161C4();
    extern void func_800A6DA8();
    u8 *p;
    s32 i;
    s32 j;

    for (j = 0; j < 2; j++) {
        for (i = 0; i < 2; i++) {
            p = (u8 *)func_80015B3C(func_800A6DA8, func_800161C4, 5);
            func_80015EF8(p);
            *(s16 *)(p + 0x4e) = 5;
            *(s32 *)(p + 0x7c) = j;
            *(u32 *)(p + 0x34) = (*(u32 *)(p + 0x34) & ~0x7f) | (i & 0x7f);
            if (i == 1) {
                *(u32 *)(p + 0x38) = (*(u32 *)(p + 0x38) | 0x40) & ~0x30;
            }
        }
    }
}


