#include "common.h"

void func_800C9F98(void) {
    extern int func_800161C4();
    extern int func_800C9D18();
    void *temp_v0;

    temp_v0 = func_80015B3C(&func_800C9D18, &func_800161C4, 5);
    func_80015EF8(temp_v0);
    M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(0x60012, 0x3A);
    M2C_FIELD(temp_v0, s16 *, 0x4A) = -0x6C;
    M2C_FIELD(temp_v0, s16 *, 0x4E) = 4;
    M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) | 0x40);
}
