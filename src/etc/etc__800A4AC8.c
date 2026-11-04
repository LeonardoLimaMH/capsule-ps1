#include "common.h"

void func_800A4AC8(void) {
    func_8001A49C(0x80110000);
    func_80012508();
}

void func_800A4AF0(void) {
    extern u16 D_8008EE48[];
    extern u8 D_800859F0[];
    extern s32 D_800B3C18[];
    switch ((s32)D_8008EE48[0]) {
    case 0:
        D_800B3C18[0] = 0;
        if (D_800859F0[0] & 4) func_80012578();
        else func_80012508();
        break;
    case 1:
        if (func_80019654()) func_80012578();
        break;
    case 2:
        func_800338DC(0x7017);
        func_80012578();
        break;
    case 3:
        if (D_800859F0[0] & 4) {
            if (func_800337EC() & 0x80) func_80012508();
        } else func_80012508();
        break;
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A4BCC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A5400);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A5654);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A6198);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A6D68);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A6F10);

void func_800A7654(void) {
    extern int func_80099394();
    func_80013668();
    func_80012200(&func_80099394);
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A7680);

void func_800A7754(u16 *s, u8 sel) {
    extern u8 D_8008ED68[];
    extern void func_8001EA24(s16, s16, s32, s32, s32, s32);
    u32 i;
    s32 x = 0, y = 0x40;
    u16 c;
    for (i = 0; i < 0x20; x += 0xE) {
        c = *s;
        if (i == sel) {
            x = 0;
            y += 0x10;
        }
        s++;
        i++;
        func_8001EA24(-0x80 + (*(s32 *)(D_8008ED68 + 0x108)) / 2 + x, y + (*(s32 *)(D_8008ED68 + 0x10C)) / 2, 3, c, 0, 3);
    }
    
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A7840);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A790C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A7984);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A7D2C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A7EB0);
