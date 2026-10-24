#include "common.h"

s32 func_800C7104(s32 arg0, s32 arg1) {
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800F0734[];
    extern M2C_UNK D_80100F38[];
    extern M2C_UNK D_80103CE0[];
    M2C_UNK var_a3;
    s16 temp_v1;
    s32 temp_v0;
    s32 var_v1;
    void *temp_s0;

    temp_v0 = func_800B1260(arg1);
    temp_s0 = ((temp_v0 & 0xFFFF) * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_s0, s16 *, 0x344);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
        break;
    case 1:
        var_v1 = 8;
        if (func_800202A4(2) != 0) {
            var_v1 = 7;
        }
        *(((temp_v1 - arg1) * 4) + D_80103CE0) = var_v1;
        func_800CE4B8(arg1, arg0, M2C_FIELD(((var_v1 * 8) + D_800F0734), s16 *, 4), 1);
        M2C_FIELD(temp_s0, s16 *, 0x344) = 2;
        /* fallthrough */
    case 2:
        if (func_80015E60(arg0) == 1) {
            M2C_FIELD(temp_s0, s16 *, 0x344) = 3;
        } else {
            var_a3 = 0x58;
            if (*(((1 - arg1) * 4) + D_80103CE0) == 7) {
                var_a3 = 0x57;
            }
            func_800CB438(M2C_FIELD(temp_s0, s16 *, 0x372), arg0, *(((temp_v0 & 0xFFFF) * 0x1A8) + D_80091618), var_a3);
        }
        break;
    default:
        M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1);
        break;
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
