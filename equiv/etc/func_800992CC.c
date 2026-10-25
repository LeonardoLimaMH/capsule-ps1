#include "common.h"

void *func_800992CC(void *arg0, s32 arg1) {
    extern int func_800161C4();
    extern int func_800991AC();
    M2C_UNK var_a1;
    s32 var_a0;
    u8 temp_s2;
    void *temp_v0;

    temp_s2 = M2C_FIELD(arg0, u8 *, 0x5E5);
    temp_v0 = func_80015B3C(&func_800991AC, &func_800161C4, 1);
    func_80015EF8(temp_v0);
    M2C_FIELD(temp_v0, s16 *, 0x4A) = 0x78;
    M2C_FIELD(temp_v0, s16 *, 0x4E) = 4;
    M2C_FIELD(temp_v0, s16 *, 0x46) = 0;
    M2C_FIELD(temp_v0, s8 *, 0x59) = 0;
    M2C_FIELD(temp_v0, s8 *, 0x58) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x34) & ~0x7F) | (arg1 & 0x7F));
    if (arg1 != 0) {
        var_a0 = (temp_s2 + 0x15) | 0x60000;
        var_a1 = 5;
    } else {
        var_a0 = (temp_s2 + 0x15) | 0x60000;
        var_a1 = 1;
    }
    M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(var_a0, var_a1);
    return temp_v0;
}
