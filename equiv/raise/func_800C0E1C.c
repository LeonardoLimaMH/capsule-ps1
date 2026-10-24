#include "common.h"

void func_800C0E1C(s32 arg0, s16 arg1, s16 arg2) {
    extern M2C_UNK D_80100F38[];
    s32 temp_s0;
    void *temp_v0;

    temp_s0 = func_800B1260() & 0xFFFF;
    if (temp_s0 != 0xFFFF) {
        if (func_800E1820(temp_s0) == 0) {
            if (func_800E17F8(temp_s0) == 0) {
                goto block_4;
            }
            temp_v0 = (temp_s0 * 0x79C) + D_80100F38;
            M2C_FIELD(temp_v0, s16 *, 0x2C0) = arg1;
            M2C_FIELD(temp_v0, s16 *, 0x2C2) = arg2;
            M2C_FIELD(temp_v0, s16 *, 0x2C8) = 1;
        } else {
block_4:
            func_800C0EE8(arg0, arg1, arg2);
        }
    }
}
