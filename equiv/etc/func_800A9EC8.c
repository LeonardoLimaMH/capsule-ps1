#include "common.h"

void func_800A9EC8(void) {
    extern u8 D_80018600[];
    extern u16 D_8008EE44[];
    extern int func_800A9C0C();
    s16 temp_s1;
    s16 var_v0;
    void *temp_s2;
    void *temp_v0;

    temp_s2 = func_80015B3C(&func_800A9C0C, D_80018600, 1);
    temp_s1 = func_800202A4(4);
    temp_v0 = func_80015B3C(D_80018600, D_80018600, 5);
    func_80015EF8(temp_v0);
    M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(0x6000B, 0x2F);
    M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (((M2C_FIELD(temp_v0, s32 *, 0x38) | 0x40) & ~0x30) | 0x10);
    M2C_FIELD(temp_s2, void **, 0x28) = temp_v0;
    M2C_FIELD(temp_s2, s16 *, 0x2C) = (s16) (func_800202A4(0x65) - 0x32);
    M2C_FIELD(temp_s2, s16 *, 0x2E) = (s16) -func_800202A4(0x64);
    M2C_FIELD(temp_s2, s16 *, 0x30) = 5;
    M2C_FIELD(temp_s2, s8 *, 0x32) = func_800202A4(5);
    if (temp_s1 == 0) {
        M2C_FIELD(temp_s2, s8 *, 0x33) = 6;
        M2C_FIELD(temp_s2, s8 *, 0x34) = 4;
        var_v0 = func_800202A4(0x190) - 0xC8;
    } else {
        M2C_FIELD(temp_s2, s8 *, 0x33) = 0x14;
        M2C_FIELD(temp_s2, s8 *, 0x34) = 1;
        var_v0 = func_800202A4(0x1000);
    }
    M2C_FIELD(temp_s2, s16 *, 0x38) = var_v0;
    M2C_FIELD(temp_s2, s16 *, 0x3A) = (s16) (func_800202A4(0x32) + 0x32);
    M2C_FIELD(temp_s2, s16 *, 0x3C) = (s16) (func_800202A4(0x14) + 0x28);
    if ((*D_8008EE44) == 4) {
        func_80034AB0(0x40);
    }
}
