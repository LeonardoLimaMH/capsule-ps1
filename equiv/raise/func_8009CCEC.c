#include "common.h"

void func_8009CCEC(void) {
    extern int func_800161C4();
    extern int func_8009CAB4();
    void *temp_v0;

    func_80012A20(func_80019F30(0x2000E, 0x2B), 1, 0, 0);
    func_80012A20(func_80019F30(0x2000E, 0x2C), 1, 0, 0);
    temp_v0 = func_80015B3C(&func_8009CAB4, &func_800161C4, 2);
    func_80015EF8(temp_v0);
    M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) & ~1);
    func_80015CD0(temp_v0 + 0x14, func_80019F30(0x7000E, 0xA8), 1);
    M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x30) & ~0x1C0) | 0x40);
    M2C_FIELD(temp_v0, s32 *, 0x80) = func_80020304(2);
    M2C_FIELD(temp_v0, s16 *, 0x4A) = -0x80;
    M2C_FIELD(temp_v0, s16 *, 0x46) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x4E) = 6;
    func_80033878(0x801E);
}
