#include "common.h"

void func_800ED9CC(s32 unused_arg0, s32 unused_arg1, s32 arg2, s32 arg3) {
    extern u8 D_80085A10[];
    extern int func_800EE7D4();
    extern int func_800FB368();
    void *temp_s0;
    void *temp_s1;

    temp_s0 = (arg2 * 0x2E8) + ((arg3 * 0x7C) + D_80085A10);
    temp_s1 = func_80015B3C(&func_800EE7D4, &func_800FB368, 1);
    func_800DDA78(temp_s0);
    func_800FE188(temp_s0, temp_s1 + 0x28);
    M2C_FIELD(temp_s1, s8 *, 0x30) = 0x80;
    M2C_FIELD(temp_s1, s8 *, 0x31) = 0x80;
    M2C_FIELD(temp_s1, s8 *, 0x32) = 0x80;
    M2C_FIELD(temp_s1, s8 *, 0x34) = 0x10;
    M2C_FIELD(temp_s1, s16 *, 0x36) = 0x32;
    M2C_FIELD(temp_s1, s16 *, 0x3A) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x38) = 0x14;
    M2C_FIELD(temp_s1, s8 *, 0x3C) = 1;
    M2C_FIELD(temp_s1, s16 *, 0x3E) = GetTPage(0, 1, 0x280, 0x100);
    M2C_FIELD(temp_s1, s16 *, 0x40) = GetClut(0, 0x1F0);
    M2C_FIELD(temp_s1, s8 *, 0x42) = 0;
    M2C_FIELD(D_80085A10, s8 *, 0x6FC) = 1;
}
