#include "common.h"

void func_800C0BC8(s16 arg0, s16 arg1, s16 arg2) {
    extern M2C_UNK D_80100E60[];
    s16 temp_v0;
    s16 var_a3;
    void *temp_v0_2;

    temp_v0 = M2C_FIELD(D_80100E60, u16 *, 6) + 1;
    var_a3 = temp_v0;
    M2C_FIELD(D_80100E60, u16 *, 6) = (u16) temp_v0;
    if (temp_v0 < 0) {
        var_a3 = temp_v0 + 0x1F;
    }
    M2C_FIELD(D_80100E60, u16 *, 6) = (u16) (temp_v0 - ((var_a3 >> 5) << 5));
    temp_v0_2 = ((s16) M2C_FIELD(D_80100E60, u16 *, 4) * 2) + D_80100E60;
    M2C_FIELD(temp_v0_2, s16 *, 0xA) = arg0;
    M2C_FIELD(temp_v0_2, s16 *, 0x4A) = arg1;
    M2C_FIELD(temp_v0_2, s16 *, 0x8A) = arg2;
    if ((s16) M2C_FIELD(D_80100E60, u16 *, 4) != 0x1F) {
        M2C_FIELD(D_80100E60, u16 *, 4) = (u16) (M2C_FIELD(D_80100E60, u16 *, 4) + 1);
        return;
    }
    M2C_FIELD(D_80100E60, u16 *, 4) = 0U;
}
