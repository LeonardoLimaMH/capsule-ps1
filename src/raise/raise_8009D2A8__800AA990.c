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

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800AA990", func_800ABF7C);

extern u8 D_800EEA00[], D_800EEB9C[], D_800EE9C0[];
extern s32 func_800AC328(s32);
extern void func_80034AB0(s32);
s32 func_800AC1A4(s16 s, s16 n, s16 c) {
    s32 tries = 9;
    s16 original = s;
    if (n != 0) {
        u8 *flags = D_800EEA00;
        s32 column = c;
        u8 *context = D_800EEB9C;
        u8 *table = D_800EE9C0;
        for (;;) {
            tries--;
            if (s == 5 && flags[4] == 0) {
                switch (column) {
                case 2: s = 2; break;
                case 3: s = 6; break;
                }
            } else {
                u8 *row;
                row = (u8 *)(*(s32 *)(context + 0x7BC) * 28 + (u32)table);
                s = *(u8 *)(((s32)s * 4 + (u32)row) + column);
                if (s == 4 && flags[4] == 0) s = 5;
            }
            if (func_800AC328(s) == 1) break;
            n--;
            if (tries == 0) {
                s = original;
                break;
            }
            if (n == 0) break;
        }
    }
    if (s != original && n != 0) func_80034AB0(0x84);
    return s;
}
