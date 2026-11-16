#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_800A5FEC(void) {
    extern void func_800161C4();
    extern void func_800A70EC(void *);
    extern void func_800A71DC(void *);
    u8 *p;
    void (*callback)(void *);
    u32 i;
    s32 image;

    image = 0;
    i = 2;
    do {
        if (i != 5) {
            callback = func_800A71DC;
        } else {
            callback = func_800A70EC;
        }
        p = (u8 *)func_80015B3C(callback, func_800161C4, 4);
        func_80015EF8(p);
        *(s16 *)(p + 0x4a) = -80;
        *(s16 *)(p + 0x46) = 0;
        *(s16 *)(p + 0x4e) = 4;
        *(u32 *)(p + 0x34) = (*(u32 *)(p + 0x34) & ~0x7f) | (i & 0x7f);
        if (i == 3) {
            image = 0x37;
        } else if (i == 4) {
            image = 0x38;
        } else if (i == 5) {
            *(u32 *)(p + 0x38) = (*(u32 *)(p + 0x38) | 0x40) & ~0x30;
        }
        *(s32 *)(p + 0x18) = func_80019F30(0x60012, image);
        i++;
    } while ((s32)i < 6);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A5FEC", func_800A60F8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A5FEC", func_800A6578);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A5FEC", func_800A6938);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A5FEC", func_800A6DA8);

void func_800A70EC(void *arg0) {
    extern u8 D_80085428[];
    M2C_UNK var_a1;
    s32 temp_s2;

    temp_s2 = M2C_GFIELD(D_80085428, u8, 0xBF4) - 5;
    if (func_800CAE6C(D_80085428 + 0x5D0) < 3) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
    var_a1 = 0x32;
    if (M2C_GFIELD(D_80085428, s8, 0xBF8) != 5) {
        var_a1 = 0x33;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60012, var_a1);
    func_8001F35C(-0x75, 0x2D, 0, 1, 0, M2C_GFIELD(D_80085428, s8, 0xBF8) + 1, 1, 3);
    func_800AA15C(D_80085428, temp_s2, M2C_GFIELD(D_80085428, s8, 0xBF8), -0x50, -0x42);
}

void func_800A71DC(void *arg0) {
    extern u8 D_80085428[];
    extern u32 D_8008ED84[];
    s32 var_a3;
    s32 temp_a0;
    s32 temp_s3;
    s32 var_a1;
    u8 temp_s2;
    u8 *temp_s4;
    u8 *p = D_80085428;

    temp_s4 = p + 0x5D0;
    temp_s2 = p[0xBF4];
    temp_s3 = temp_s2 - 5;
    if (func_800CAE6C(temp_s4) >= 3) {
        M2C_FIELD(arg0, s16 *, 0x4A) = -0x50;
        M2C_FIELD(arg0, s16 *, 0x46) = 0;
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x34) & 0x7F;
        M2C_FIELD(arg0, s32 *, 0x38) &= ~1;
        if (temp_a0 < 5) {
            if (temp_a0 < 3) {
                if (temp_a0 == 2) {
                    var_a1 = 0x36;
                    if (p[temp_s3 + 0x5E0] == 0) {
                        var_a1 = temp_s2 + 0x2F;
                    }
                    M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60012, var_a1);
                }
            } else {
                var_a3 = 2;
                if (temp_a0 == 3) {
                    var_a3 = 1;
                }
                if ((p[0xBFA] != 0) ||
                    (func_8009DA94(temp_s4, temp_s3, p[0xBF8], var_a3) == (s8) p[0xBF8]) ||
                    !((*D_8008ED84 >> 4) & 1)) {
                    goto block_12;
                }
            }
        }
    } else {
block_12:
        M2C_FIELD(arg0, s32 *, 0x38) |= 1;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A5FEC", func_800A7310);
