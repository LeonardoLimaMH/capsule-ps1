#include "common.h"

void func_800B9E8C(s32 arg0) {
    s32 var_v0;
    u8 *temp_a2;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_v1;
    void *temp_a3;
    void *temp_t0;

    temp_t0 = arg0 + 0x5D0;
    temp_a1 = M2C_FIELD(temp_t0, u8 *, 0x5FA);
    temp_a2 = temp_t0 + ((temp_a1 * 0x2E8) + 0x18) + (M2C_FIELD((temp_t0 + temp_a1), u8 *, 0x5FB) * 0x7C);
    temp_a1_2 = M2C_FIELD(temp_t0, u8 *, 0x70C);
    temp_v1 = *temp_a2;
    temp_a3 = temp_t0 + (((1 - temp_a1) * 0x2E8) + 0x18) + (temp_a1_2 * 0x7C);
    switch (temp_v1) {                              /* irregular */
    case 0x52:
        var_v0 = func_800BAF44(arg0, temp_t0, temp_a2, temp_a3, (s32) temp_a1_2);
block_9:
        if (var_v0 != 0) {
            func_80012604(8);
        }
        return;
    case 0x56:
        var_v0 = func_800BB344(arg0, temp_t0, temp_a2, temp_a3);
        goto block_9;
    case 0x62:
        var_v0 = func_800BB670(arg0, temp_t0, temp_a2, temp_a3);
        goto block_9;
    }
}
