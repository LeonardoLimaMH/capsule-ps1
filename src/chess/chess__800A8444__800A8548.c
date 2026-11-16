#include "ghidra.h"
#include "matching.h"
#include "common.h"



void func_800A8548(s32 arg0, s32 arg1, s32 arg2)
{
    extern u8 D_80085428[];
    s32 i = 0;
    register s32 offset asm("v0") = arg2 * 0x2E8 + 0x18;
    u8 *p = (u8 *)(arg1 + offset);
loop:
    if ((p[0x17] & 0x7F) != 4 &&
        func_800A8E34(arg1, arg2, i) == 0 &&
        p[0x28] == 0) {
        if (func_800CA6B8(arg0, arg2, arg2, i) != 0) {
            p[0x23] = 0;
            p[0x17] |= 0x80;
            if (i != 5) {
                switch (p[0]) {
                case 0x13: case 0x22: case 0x25: case 0x31:
                case 0x47: case 0x48: case 0x5C: case 0x5D:
                    if (p[0x27] != 0) {
                        p[0x27] = 0;
                        func_8009C278(D_80085428, arg2, i);
                    }
                    break;
                }
            }
        } else {
            p[0x17] &= 0x7F;
            if (i != 5) {
                switch (p[0]) {
                case 0x13: case 0x22: case 0x25: case 0x31:
                case 0x47: case 0x48: case 0x5C: case 0x5D:
                    if (p[0x27] == 0) {
                        p[0x27] = 1;
                        func_8009C5C4(D_80085428, arg2, i, p);
                    }
                    break;
                }
            }
        }
    }
    p += 0x7C;
    i++;
    if (i < 5) goto loop;
}

extern u8 D_8006B2A4[];

extern s32 rsin(s32);



