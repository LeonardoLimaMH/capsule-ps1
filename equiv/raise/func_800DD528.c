#include "common.h"

s32 func_800DD528(void) {
    extern M2C_UNK D_80100F38[];
    s32 var_v0;
    u16 temp_v0;
    void *temp_a0;
    void *temp_v1;

    temp_a0 = ((func_800B1260() & 0xFFFF) * 0x79C) + D_80100F38;
    temp_v0 = M2C_FIELD(temp_a0, u16 *, 0x472) + 1;
    M2C_FIELD(temp_a0, u16 *, 0x472) = temp_v0;
    var_v0 = 1;
    if ((s16) temp_v0 == M2C_FIELD(temp_a0, s16 *, 0x474)) {
        temp_v1 = M2C_FIELD(temp_a0, void **, 0x478);
        M2C_FIELD(temp_a0, u16 *, 0x472) = 1U;
        M2C_FIELD(temp_a0, void **, 0x478) = (void *) (temp_v1 + 1);
        var_v0 = M2C_FIELD(temp_v1, u8 *, 1) != 0xFF;
    }
    return var_v0;
}
