#include "ghidra.h"
#include "matching.h"
#include "common.h"



void func_800A3FC0(u8 *arg0, s32 arg1, s32 unused_arg2, void *arg3) {
    extern void func_800A431C();
    extern s32 func_800A44E8(void *, s32, s32);
    extern void *func_800A4678(void *);
    extern void func_800A4900(void *, void *, s32, s32);

    s32 first = 0;
    s32 i = 0;
    s32 s8 = arg1 & 0xFF;
    u8 *s4 = arg0 + (s8 * 2);
    u8 *s3 = arg0;
    register u8 *s7 asm("s7");

    do {
        s32 j = 0;
        s7 = s3 + 0xC00;
        do {
            if (s7[j] != 0) {
                u8 *temp_v0 = (u8 *)func_800A4678(arg3);
                register void *fn asm("v0");
                *(s32 *)(temp_v0 + 0x5C) = s8;
                *(s32 *)(temp_v0 + 0x60) = i;
                *(s32 *)(temp_v0 + 0x64) = j;
                *(s32 *)(temp_v0 + 0x68) = s4[0xBD1];
                *(s32 *)(temp_v0 + 0x6C) = s4[0xBD2];
                *(s32 *)(temp_v0 + 0x50) = ((*(s32 *)(temp_v0 + 0x50) & ~1) | 0x40) & ~0x30;
                func_800A4900(arg0, temp_v0 + 0x18, i, j);
                fn = (void *)func_800A431C;
                if (fn == arg3) {
                    *(s32 *)(temp_v0 + 0x70) = func_800A44E8(arg0, i, j) & 0xFF;
                }
                *(u8 *)(temp_v0 + 0x58) = first;
                first = 1;
            }
            j++;
        } while (j < 13);
        i++;
        s3 += 13;
    } while (i < 13);
}






