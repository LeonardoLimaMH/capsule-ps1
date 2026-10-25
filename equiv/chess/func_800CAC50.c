#include "common.h"

void func_800CAC50(void *arg0, s32 arg1, s32 arg2) {
    extern u8 D_80018600[];
    extern int func_800CBA14();
    void *temp_v0;

    temp_v0 = func_80015B3C(&func_800CBA14, D_80018600, 0);
    func_80015EF8(temp_v0);
    M2C_FIELD(temp_v0, s32 *, 0x7C) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0x80) = arg2;
    M2C_FIELD(arg0, s8 *, 0xCF0) = 0;
}
