#include "common.h"

s32 func_800B20A4(s32 arg0, s32 arg1) {
    extern u8 D_80100F38[];
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;
    u8 temp_a1;
    void *temp_a2;
    void *temp_a3;

    temp_a2 = ((arg0 & 0xFFFF) * 0x79C) + D_80100F38;
    temp_a3 = ((arg1 & 0xFFFF) * 0x79C) + D_80100F38;
    temp_a1 = *M2C_FIELD(temp_a2, u8 **, 0x2BC);
    if ((temp_a1 == 0x52) || (temp_a1 == 0xD) || (temp_a1 == 0x53) || (temp_a1 == 0x69) || (temp_a1 == 0x79) || (temp_a1 == 0x7A) || (temp_a1 == 0x71) || (temp_a1 == 0x74) || (temp_a1 == 0x77) || (var_a0 = 1, (temp_a1 == 0x70))) {
        var_a0 = M2C_FIELD(temp_a2, s16 *, 0x344) != 2;
    }
    temp_v1 = *M2C_FIELD(temp_a3, u8 **, 0x2BC) & 0xFF;
    if ((temp_v1 == 0x52) || (temp_v1 == 0xD) || (temp_v1 == 0x53) || (temp_v1 == 0x69) || (temp_v1 == 0x79) || (temp_v1 == 0x7A) || (temp_v1 == 0x71) || (temp_v1 == 0x74) || (temp_v1 == 0x77) || (var_v1 = 1, (temp_v1 == 0x70))) {
        var_v1 = M2C_FIELD(temp_a3, s16 *, 0x344) != 2;
    }
    var_v0 = 1;
    if ((var_a0 != 1) || (var_v1 != var_a0)) {
        var_v0 = 0;
    }
    return var_v0;
}
