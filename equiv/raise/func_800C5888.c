#include "common.h"

s32 func_800C5888(void) {
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v1;
    void *temp_a0;

    temp_v0 = func_800B1260() & 0xFFFF;
    temp_v1 = M2C_FIELD(((temp_v0 * 0x1A8) + (*D_80091618)), u16 *, 0x40);
    if (temp_v1 != 0xFFFF) {
        temp_a0 = M2C_FIELD(((temp_v1 * 4) + ((temp_v0 * 0x79C) + (*D_80100F38))), void **, 0x230);
        temp_v0_2 = M2C_FIELD(temp_a0, s32 *, 0x38);
        M2C_FIELD(temp_a0, s32 *, 0x38) = (s32) ((temp_v0_2 & ~1) | (~temp_v0_2 & 1));
    }
    return 4;
}
