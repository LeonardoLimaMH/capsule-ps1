#include "common.h"

void func_8009D2A8(void) {
    extern int func_800161C4();
    extern int func_8009D330();
    void *temp_v0;

    temp_v0 = func_80015B3C(&func_8009D330, &func_800161C4, 2);
    func_80015EF8(temp_v0);
    M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) & ~1);
    func_80015CD0(temp_v0 + 0x14, func_80019F30(0x7000E, 0xA5), 0);
    M2C_FIELD(temp_v0, s16 *, 0x4E) = 0x402;
}
