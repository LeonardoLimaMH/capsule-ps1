#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_8009F25C(s32 arg0) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE50[];
    extern s8 D_8008EE6A[];
    extern void func_800161C4();
    extern void func_8009F960(void);
    extern void *func_80015B3C();
    s32 flags;
    u8 index;
    register s32 saved_arg asm("s2") = arg0;
    u8 *p;

    p = (u8 *)(saved_arg + 0x5D0);
    index = p[0x5FA];
    switch (*D_8008EE50) {
    case 0:
        *D_8008EE6A = 2;
        func_80012628();
        break;
    case 1:
        p[0x624] = 0xFE;
        p[0x615] = 0;
        p[0x7A7] = 0;
        p[0x7A8] = 0;
        func_80012628();
    case 2:
        if (func_800B09B0(saved_arg) != 0) {
            p = func_80015B3C(func_8009F960, func_800161C4, 5);
            func_80015EF8(p);
            *(s32 *)(p + 0x18) = func_80019F30(0x60013, 8);
            *(s16 *)(p + 0x50) = 0x800;
            *(s16 *)(p + 0x52) = 0x800;
            *(s16 *)(p + 0x46) = 0x70;
            *(s16 *)(p + 0x4A) = 0x58;
            *(s16 *)(p + 0x4E) = 3;
            func_80012628();
        }
        break;
    case 3:
        if (!(func_800CFB1C() & 0xFF)) {
            *D_8008EE6A = 0;
            p[0x7A8] = 1;
            func_8009D750(saved_arg, p);
            func_80012628();
        }
        break;
    case 5: {
        register s32 offset asm("v0") = index * 6;
        if (*(u8 *)((u32)p + offset + 0x5ED) != 0) {
            p[0x624] = 0xFF;
            func_8001264C(7);
        } else {
            func_800220B8(saved_arg);
            func_8009FE5C(saved_arg);
            func_80012628();
        }
        break;
    }
    case 6:
        if (func_800212AC(saved_arg, 1, 2, 1) != 0) {
            func_80012628();
        }
        break;
    case 7: {
        register u8 *base asm("v0");
        func_800B0BB0(saved_arg);
        if (p[0x61A] == 5) {
            base = D_8008ED68;
            flags = *(s32 *)(base + index * 0x10 + 0x88);
            if (flags & 0x20) {
                p[0x7A7] = 1;
                p[0x624] = 0xFE;
                func_80012628();
            } else if (flags & 0x40) {
                p[0x7A7] = 1;
                p[0x624] = 0xFE;
                func_80012628();
            }
        }
        break;
    }
    case 9:
        if (func_800B0D70(saved_arg) != 0) {
            func_80012628();
        }
        break;
    case 10:
        p[0x615] = 1;
        p[0x624] = 0xB;
        func_80012604(1);
        break;
    }
}








