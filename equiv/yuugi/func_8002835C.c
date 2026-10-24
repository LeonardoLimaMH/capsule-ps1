#include "common.h"

void func_8002835C(void) {
    extern s32 D_80069EA0[];
    extern s32 D_800EF360[];
    extern M2C_UNK D_800EF524[];
    M2C_UNK *var_s1;
    s32 temp_v0;
    s32 var_s0;

    temp_v0 = M2C_FIELD(D_800EF524, s32 *, 0x40) != 0;
    (*D_80069EA0) = temp_v0;
    if (temp_v0 != 0) {
        if ((*D_800EF360) == -1) {
            (*D_800EF360) = 0;
        }
        var_s0 = 0;
        if (M2C_FIELD(D_800EF524, s32 *, 0x40) > 0) {
            var_s1 = D_800EF524;
            do {
                if (M2C_FIELD(var_s1, s32 *, 0x44) != -1) {
                    func_8002840C(0xF, var_s0 + 7);
                }
                var_s0 += 1;
                var_s1 += 4;
            } while (var_s0 < M2C_FIELD(D_800EF524, s32 *, 0x40));
        }
    }
}
