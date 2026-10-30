#include "common.h"

void func_8009B564(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_800AF1AC[];
    extern s32 D_800B3ADC[];
    s32 temp_a3;
    u16 temp_a0;
    u16 temp_a1;
    u16 temp_v0;

    temp_a3 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_a3;
    temp_a0 = M2C_FIELD(arg0, u16 *, 0x84);
    if ((M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 6) && (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 3)) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a3 & ~1);
        temp_a1 = M2C_FIELD(arg0, u16 *, 0x46);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((M2C_FIELD(arg0, s32 *, 0x30) & ~0x30) | 0x20);
        temp_v0 = temp_a1 + *(u16 *)(((s16) temp_a0 * 2) + (u8 *)D_800AF1AC);
        M2C_FIELD(arg0, u16 *, 0x46) = temp_v0;
        if (((s16) temp_a0 == 0) && ((s16) temp_v0 < -0xB7)) {
            (*D_800B3ADC) = 0xB;
            func_80012508((s16) temp_a0, temp_a1, arg0, temp_a3);
        }
    }
}
