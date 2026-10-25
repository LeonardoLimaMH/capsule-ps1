#include "common.h"

void func_800A87C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg2 != 5) {
        func_80028200(M2C_FIELD((arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8))), u8 *, 0x5E8), arg3 & 0xFFFF);
        return;
    }
    func_80034AB0(0x48);
}
