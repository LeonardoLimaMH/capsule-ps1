#include "common.h"

void func_800AC4A4(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_800B39C0[];
    extern u8 D_800B3D20[];
    s16 var_v1;
    s32 var_v0;

    if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 5) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        switch (M2C_FIELD(D_8008ED68, u16 *, 0xE0)) { /* irregular */
        case 1:
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~8);
            M2C_FIELD(arg0, u16 *, 0x46) = (u16) *((M2C_FIELD(arg0, s32 *, 0x80) * 2) + D_800B39C0);
            return;
        case 4:
            if ((*D_800B3D20) == 0) {
                var_v1 = -2;
                if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
                    var_v1 = 2;
                }
                M2C_FIELD(arg0, s16 *, 0x6A) = var_v1;
                var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 8;
                goto block_10;
            }
            break;
        }
    } else if ((u16) M2C_FIELD(D_8008ED68, u16 *, 0xDC) < 7U) {
        var_v0 = (M2C_FIELD(arg0, s32 *, 0x38) | 1) & ~8;
block_10:
        M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
    }
}
