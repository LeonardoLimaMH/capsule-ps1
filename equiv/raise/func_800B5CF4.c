#include "common.h"

s32 func_800B5CF4(s32 arg0) {
    extern u16 D_8006AF80[];
    extern u8 D_800EE5D0[];
    extern u8 D_800EEB9C[];
    extern u8 D_80100F38[];
    if (arg0 == 5) {
        return M2C_FIELD((((*D_8006AF80) * 0x79C) + D_80100F38), s32 *, 0x190);
    }
    return func_800B6D98(1, (s16) (((arg0 % 2) * 0x24) + 0x38), (s16) (((arg0 / 2) * 0xE) + 0x24), 7, 0, D_800EE5D0, M2C_FIELD(((arg0 * 4) + D_800EEB9C), s32 *, 0xB4), 1, 1, 0, 2, 1);
}
