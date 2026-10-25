#include "common.h"

void func_800EBBBC(void *arg0, s32 arg1) {
    extern u8 D_80018600[];
    extern u16 D_8008F754[];
    extern int func_800EB968();
    extern int func_800F7D1C();
    s32 temp_lo;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_v0;
    void *temp_v0_2;

    func_800202A4(0x1000);
    var_s2 = 0;
    do {
        temp_lo = (s32) (var_s2 << 0xC) / 16;
        temp_v0 = func_80015B3C(D_80018600, D_80018600, 1);
        func_80015EF8(temp_v0);
        M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(0x60013, 0xD);
        M2C_FIELD(temp_v0, s16 *, 0x66) = (s16) (arg1 & 0xFF);
        M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (((M2C_FIELD(temp_v0, s32 *, 0x38) | 0x40) & ~0x30) | 0x10);
        temp_v0_2 = func_80015B3C(&func_800EB968, &func_800F7D1C, 1);
        M2C_FIELD(temp_v0_2, s8 *, 0x2C) = 7;
        M2C_FIELD(temp_v0_2, void **, 0x28) = temp_v0;
        M2C_FIELD(temp_v0_2, s16 *, 0x30) = 9;
        M2C_FIELD(temp_v0_2, s16 *, 0x32) = 0;
        M2C_FIELD(temp_v0_2, s16 *, 0x34) = (s16) (func_800202A4(0x14) + 0x64);
        M2C_FIELD(temp_v0_2, u16 *, 0x3A) = (u16) M2C_FIELD(arg0, u16 *, 0);
        M2C_FIELD(temp_v0_2, u16 *, 0x3E) = (u16) M2C_FIELD(arg0, u16 *, 2);
        M2C_FIELD(temp_v0_2, u16 *, 0x42) = (u16) M2C_FIELD(arg0, u16 *, 4);
        var_v0 = 0x186A0 * rcos(temp_lo);
        if (var_v0 < 0) {
            var_v0 += 0xFFF;
        }
        M2C_FIELD(temp_v0_2, s32 *, 0x44) = (s32) (var_v0 >> 0xC);
        M2C_FIELD(temp_v0_2, s32 *, 0x48) = 0xFFFCF2C0;
        var_v0_2 = 0x186A0 * rsin(temp_lo);
        if (var_v0_2 < 0) {
            var_v0_2 += 0xFFF;
        }
        M2C_FIELD(temp_v0_2, s32 *, 0x4C) = (s32) (var_v0_2 >> 0xC);
        M2C_FIELD(temp_v0_2, s16 *, 0x2E) = func_800202A4(M2C_FIELD(temp_v0_2, s16 *, 0x30));
        var_s2 += 1;
        (*D_8008F754) += 1;
    } while (var_s2 < 0x10);
}
