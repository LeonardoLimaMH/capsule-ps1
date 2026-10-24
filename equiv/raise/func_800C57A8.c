#include "common.h"

void func_800C57A8(void) {
    extern M2C_UNK D_800EE5D0[];
    extern M2C_UNK D_800EEB9C[];
    extern M2C_UNK D_80100F38[];
    void *temp_s0;

    temp_s0 = ((func_800B1260() & 0xFFFF) * 0x79C) + D_80100F38;
    M2C_FIELD(M2C_FIELD(((M2C_FIELD(temp_s0, s16 *, 0x2BA) * 4) + temp_s0), void **, 0x230), s32 *, 0x18) = func_80019F30(M2C_FIELD(D_800EE5D0, s32 *, 0) | 0x60000, M2C_FIELD(D_800EE5D0, s32 *, 0x18) + M2C_FIELD(((M2C_FIELD(temp_s0, s16 *, 0x2BA) * 4) + D_800EEB9C), s32 *, 0x6E0), M2C_FIELD(D_800EE5D0, s32 *, 0x18));
    M2C_FIELD(temp_s0, s16 *, 0x37A) = 0;
}
