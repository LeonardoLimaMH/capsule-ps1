#include "common.h"

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A0824);

#include "common.h"

void func_800A0944(void) {
    extern M2C_UNK D_8002E38C[];
    extern s32 D_8008F780[];
    extern M2C_UNK D_800B3B38[];
    s16 temp_v0;

    func_8001611C(M2C_GFIELD(D_800B3B38, s16, 8));
    temp_v0 = (u16) M2C_GFIELD(D_800B3B38, s16, 8) - 0x80;
    M2C_GFIELD(D_800B3B38, s16, 8) = temp_v0;
    if ((temp_v0 << 0x10) <= 0) {
        (*D_8008F780) = 0;
        func_80012200(D_8002E38C);
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A09A4);

void func_800A1250(void) {
    extern int func_80012508();
    func_8001A464(0x12, 0x8011C400);
    func_8001A464(0x13, 0x8011EDF4);
    func_8001A464(0x14, 0x8013B9B4);
    func_8001A464(0x10, 0x8014E298);
    func_8001A464(0x1D, 0x8016CF00);
    func_8001A464(0x1E, 0x801840FC);
    func_8001A464(0x1F, 0x801891A0);
    func_8001A464(0x20, 0x8018E048);
    func_8001A464(0x21, 0x80194728);
    func_8001A464(0x22, 0x80199B34);
    func_8001A464(0x23, 0x8019E904);
    func_8001A464(0x24, 0x801A4664);
    func_8001A464(0x25, 0x801A9560);
    func_8001A464(0x26, 0x801AF324);
    func_8001A464(0x27, 0x801B49C0);
    func_8001A464(0x28, 0x801BBC64);
    func_8001A480(0xE, 0x8011C400);
    func_80019F30(0x12000E, func_80012508);
    func_80012508();
}

void func_800A1394(u8 *arg0) {
    extern u8 D_8008ED68[];
    u8 *ed = D_8008ED68;
    *(u16 *)(arg0 + 0xC) += ed[0x103] < 2 ? 1 : ed[0x103];
    func_80018F90(*(u16 *)(arg0 + 0xC), 4);
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A13E8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A150C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A1798);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A225C);

void func_800A2588(s16 arg0) {
    s32 value;
    s32 i;
    s32 x;
    u32 id;
    register s32 mask asm("s4");
    id = arg0 + 0x1EU;
    i = 0;
    mask = 0x20000;
    x = 0x2400000;
    do {
        value = func_80019F30(0x2001D, i);
        func_80012A20(value, 2, x >> 16, 0x100);
        value = func_80019F30(id | mask, i);
        func_80012A20(value, 2, x >> 16, 0x100);
        {
            register s32 step asm("v0") = 0x400000;
            x += step;
        }
        i++;
    } while (i < 3);
    i = 0;
    do {
        value = func_80019F30(id | 0x20000, i + 3);
        func_80012A20(value, 1, 0, 0);
        i++;
    } while (i < 2);
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A2678);
