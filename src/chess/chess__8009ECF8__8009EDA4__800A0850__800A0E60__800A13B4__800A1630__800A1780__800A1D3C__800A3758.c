#include "ghidra.h"
#include "matching.h"
#include "common.h"



void func_800A3758(void) {
    extern int func_800A37E8();
    extern int func_800CC7BC();
    extern void *func_80015B3C();
    s32 i = 0;
    u8 *p;

    do {
        p = func_80015B3C(func_800A37E8, func_800CC7BC, 3);
        func_8001602C(p);
        *(s32 *)(p + 0x5C) = i;
        i++;
        *(u32 *)(p + 0x50) |= 1;
        *(u32 *)(p + 0x50) &= ~0x40;
        *(u32 *)(p + 0x50) &= ~0x30;
    } while (i < 2);
}






