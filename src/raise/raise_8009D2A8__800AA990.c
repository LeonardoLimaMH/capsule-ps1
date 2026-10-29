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

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800AA990", func_800ABF44);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800AA990", func_800ABF7C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800AA990", func_800AC1A4);
