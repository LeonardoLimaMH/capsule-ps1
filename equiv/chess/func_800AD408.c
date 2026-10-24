#include "common.h"

void func_800AD408(void) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_8008ED68[];
    s16 var_v0_2;
    s16 var_v0_3;
    u32 temp_v0;
    u32 temp_v1;
    s32 var_v0;

    if (func_800C9414() == 0) {
        temp_v1 = M2C_FIELD(D_80069AD4, s16 *, 0x14A) - (M2C_FIELD(D_80069AD4, s16 *, 0xEA) - 0x1000);
        var_v0 = temp_v1;
        if (temp_v1 < 0) {
            var_v0 = temp_v1 + 0xFFF;
        }
        temp_v0 = temp_v1 - ((var_v0 >> 0xC) << 0xC);
        if (temp_v0 == 0) {
            func_800125D8((u16) M2C_FIELD(D_80069AD4, s16 *, 0xEA), D_80069AD4);
        } else {
            if (temp_v0 >= 0x801) {
                var_v0_2 = (u16) M2C_FIELD(D_80069AD4, s16 *, 0xEA) + 0xFC0;
            } else {
                var_v0_2 = (u16) M2C_FIELD(D_80069AD4, s16 *, 0xEA) + 0x40;
            }
            M2C_FIELD(D_80069AD4, s16 *, 0xEA) = var_v0_2;
            var_v0_3 = var_v0_2;
            if (var_v0_2 < 0) {
                var_v0_3 = var_v0_2 + 0xFFF;
            }
            M2C_FIELD(D_80069AD4, s16 *, 0xEA) = (s16) (var_v0_2 - ((var_v0_3 >> 0xC) << 0xC));
            M2C_FIELD(D_8008ED68, s8 *, 0xA66) = 1;
        }
        func_8002CC74();
        func_8002CD50();
    }
}
