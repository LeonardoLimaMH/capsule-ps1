#include "common.h"

void func_800CE164(void) {
    extern M2C_UNK D_80100F38[];
    s16 var_v0;
    u16 temp_v1;
    void *temp_a0;

    temp_a0 = ((func_800B1260() & 0xFFFF) * 0x79C) + D_80100F38;
    temp_v1 = (u16) M2C_FIELD(temp_a0, s16 *, 0x328);
    if (M2C_FIELD(temp_a0, s16 *, 0x328) > 0) {
        M2C_FIELD(temp_a0, s16 *, 0x328) = (s16) (temp_v1 - 1);
        var_v0 = (u16) M2C_FIELD(temp_a0, s16 *, 0x324) + 1;
        if (M2C_FIELD(temp_a0, s16 *, 0x324) == 7) {
            var_v0 = 0;
        }
    } else {
        M2C_FIELD(temp_a0, s16 *, 0x328) = (s16) (temp_v1 + 1);
        var_v0 = (u16) M2C_FIELD(temp_a0, s16 *, 0x324) - 1;
        if (M2C_FIELD(temp_a0, s16 *, 0x324) == 0) {
            var_v0 = 7;
        }
    }
    M2C_FIELD(temp_a0, s16 *, 0x324) = var_v0;
    M2C_FIELD(temp_a0, u16 *, 0x326) = (u16) M2C_FIELD(temp_a0, s16 *, 0x324);
}
