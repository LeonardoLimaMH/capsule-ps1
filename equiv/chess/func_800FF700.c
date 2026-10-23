#include "common.h"

void func_800FF700(void) {
    extern M2C_UNK D_80119600[];
    func_8001A998(D_80119600, 0x54);
    M2C_FIELD(D_80119600, s32 *, 0x2C) = func_800FF644();
}
