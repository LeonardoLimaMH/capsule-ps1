#include "common.h"

void func_800A0ACC(s32 arg0) {
    extern u8 D_8008ED68[];
    extern u8 D_800EEA78[];
    extern u8 D_800EFF58[];
    s32 temp_v0;
    s32 var_v1;
    s32 var_v1_2;

    temp_v0 = M2C_FIELD(((*((arg0 * 2) + D_800EEA78) * 4) + D_8008ED68), s32 *, 0xA4);
    if ((temp_v0 != 7) && ((temp_v0 & 7) == 7)) {
        func_80034AB0(0x84);
        func_800A0D88(2, 0);
        switch (arg0) {                             /* irregular */
        case 2:
            var_v1 = M2C_FIELD(D_800EFF58, s32 *, 0x344) - 1;
            if (M2C_FIELD(D_800EFF58, s32 *, 0x344) <= 0) {
                var_v1 = M2C_FIELD(D_800EFF58, s32 *, 0x348);
            }
            M2C_FIELD(D_800EFF58, s32 *, 0x344) = var_v1;
            break;
        case 3:
            var_v1_2 = 0;
            if (M2C_FIELD(D_800EFF58, s32 *, 0x344) < M2C_FIELD(D_800EFF58, s32 *, 0x348)) {
                var_v1_2 = M2C_FIELD(D_800EFF58, s32 *, 0x344) + 1;
            }
            M2C_FIELD(D_800EFF58, s32 *, 0x344) = var_v1_2;
            break;
        }
        func_800A0D88(1, 0);
    }
}
