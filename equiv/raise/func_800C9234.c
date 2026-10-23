#include "common.h"

void func_800C9234(void *arg0, s32 arg1, void *arg2) {
    func_80015CD0(arg2 + 0x14, func_80019F30(M2C_FIELD(arg0, s32 *, 0) | 0x70000, M2C_FIELD(arg0, s32 *, 0x18) + arg1), 0);
    M2C_FIELD(arg2, s16 *, 0x66) = 0;
    M2C_FIELD(arg2, s32 *, 0x7C) = arg1;
    M2C_FIELD(arg2, s32 *, 0x30) = (s32) ((M2C_FIELD(arg2, s32 *, 0x30) & ~0x1C0 & ~0x30) | 0x10);
}
