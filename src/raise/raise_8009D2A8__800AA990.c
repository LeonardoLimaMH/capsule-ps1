#include "common.h"

#include "common.h"

void func_800AA990(s32 arg0, M2C_UNK arg1) {
    extern u8 D_80100F38[];
    void *temp_s0;

    temp_s0 = ((arg0 & 0xFFFF) * 0x79C) + D_80100F38;
    M2C_FIELD((temp_s0 + (((u32) M2C_FIELD(temp_s0, u32 *, 0x798) >> 0x1A) & 0x1F)), s8 *, 0x3A8) = 0;
    func_800C59F4(arg1, 0, ((u32) M2C_FIELD(temp_s0, u32 *, 0x798) >> 0x1A) & 0x1F);
    if ((u32) ((((u32) M2C_FIELD(temp_s0, u32 *, 0x798) >> 0x1A) & 0x1F) - 4) < 2U) {
        func_800C59F4(arg1, 0, 8);
    }
    M2C_FIELD(temp_s0, s32 *, 0x21C) = 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800AA990", func_800AAA44);

#include "common.h"

void func_800ABF44(void) {
    extern u16 D_80078C34[];
    func_800D1018();
    func_80033974((*D_80078C34));
    func_80033974(0x8000U);
}

void func_800ABF7C(s32 arg0) {
    extern u8 D_800EEB9C[], D_800EEA08[], D_800EEA00[];
    extern s32 D_800EEFD0[];
    extern s32 func_800D1548(void), func_800AA77C(s32);
    extern s32 func_800B9C3C(void), func_800B9CEC(void), func_800B9E34(void);
    extern u8 func_800B7E70(s32);
    register s32 mode asm("s4") = arg0;
    register u8 *initial asm("v1") = D_800EEB9C;
    register u32 i asm("s2") = 0;
    register u8 *base asm("fp") = initial;
    register u8 *row asm("s7") = base;
    register u32 j asm("s0");
    register s32 off asm("s3");
    register s32 *p asm("s5");
    register s32 *q asm("s6");
    register s32 *d asm("s1");

    *(s32 *)(initial + 0x7BC) = mode;
    do {
        j = 0;
        p = D_800EEFD0;
        q = D_800EEFD0 + 9;
        off = j;
        do {
            d = (s32 *)(off + (row + 0x3C8));
            *d = *((mode * 56 + D_800EEA08) + i * 8 + j);
            if (mode == 1) {
                if (i < 2) {
                    if (i == 0) {
                        if (j < 8) {
                            d = (s32 *)(off + (base + 0x3C8));
                            if (func_800D1548() == mode) *d = 1;
                            else *d = func_800AA77C(0);
                        }
                    } else if (j < 7) {
                        if (func_800D1548() == mode) *d = 1;
                        else *d = func_800AA77C(1);
                    }
                } else if (i == 3 && j < 2) {
                    d = p;
                    if (func_800D1548() == mode) *d = 1;
                    else *d = func_800AA77C(3);
                } else if (mode == 1 && i == 4 && (s32)j > 0 && (s32)j < 4 && func_800D1548() == 0) {
                    if (j == 1) *(s32 *)(base + 0x45C) = func_800B9C3C();
                    else if (j == 2) *(s32 *)(base + 0x460) = func_800B9CEC();
                    else *q = func_800B9E34();
                }
            }
            q++;
            off += 4;
            j++;
            p++;
        } while ((s32)j < 8);
        D_800EEA00[i] = func_800B7E70(i);
        i++;
        row += 0x24;
    } while ((s32)i < 7);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800AA990", func_800AC1A4);
