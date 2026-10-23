#include "common.h"

void func_800CD530(s32 arg0) {
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
    M2C_UNK var_a1;
    s16 temp_a0;
    s32 temp_v0;
    u16 temp_a3;
    u16 temp_t1;
    u16 temp_v1_2;
    void *temp_t0;
    void *temp_v1;

    temp_v0 = func_800B1260() & 0xFFFF;
    temp_t0 = (temp_v0 * 0x1A8) + (*D_80091618);
    temp_v1 = (temp_v0 * 0x79C) + (*D_80100F38);
    temp_a3 = M2C_FIELD(temp_v1, u16 *, 0x2C2);
    temp_t1 = M2C_FIELD(temp_v1, u16 *, 0x336);
    temp_a0 = M2C_FIELD(temp_v1, s16 *, 0x2C0);
    temp_v1_2 = M2C_FIELD(temp_v1, u16 *, 0x338);
    switch (temp_a0) {                              /* irregular */
    case 1:
        M2C_FIELD(temp_t0, s32 *, 0x44) = (s32) (s16) temp_t1;
        M2C_FIELD(temp_t0, u16 *, 0x40) = temp_a3;
        M2C_FIELD(temp_t0, s32 *, 0x48) = (s32) (s16) temp_v1_2;
        func_800C59F4(arg0, 1, (s16) temp_a3, temp_a3);
        var_a1 = 0;
block_5:
        func_800CD9F4(arg0, var_a1);
        return;
    case 2:
        M2C_FIELD(temp_t0, s32 *, 0x54) = (s32) (s16) temp_t1;
        M2C_FIELD(temp_t0, u16 *, 0x50) = temp_a3;
        M2C_FIELD(temp_t0, s32 *, 0x58) = (s32) (s16) temp_v1_2;
        func_800C5B30(arg0, 1, (s16) temp_a3 - 8, temp_a3);
        var_a1 = 1;
        goto block_5;
    }
}
