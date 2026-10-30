#include "common.h"

void func_800ACA14(s16 arg0) {
    extern M2C_UNK D_800EEA80[];
    extern M2C_UNK D_800EEB9C[];
    extern u16 D_800F2DA8[];
    extern s16 D_800F2DAA[];
    if (M2C_FIELD(D_800EEB9C, s32 *, 0x18) == 1) {
        if (M2C_FIELD(D_800EEB9C, s32 *, 0x24) == 5) {
            if (arg0 < 2) {
                if (arg0 >= 0) {
                    func_800B4944(arg0, D_800EEB9C);
                }
            }
        } else {
            goto block_6;
        }
    } else {
block_6:
        if (M2C_FIELD(D_800EEB9C, s32 *, 0x14) == 1) {
            (*D_800F2DAA) = 7;
            (*D_800F2DA8) = (u16) M2C_FIELD(D_800EEB9C, s32 *, 0x24);
            func_800AEB5C(2, 0, D_800EEB9C);
            (*D_800F2DA8) = func_800AC1A4((s16) (*D_800F2DA8), (*D_800F2DAA), *(s16 *)(((s32) (arg0 << 0x10) >> 0xF) + (u8 *)D_800EEA80));
            func_800AEB5C(1, 0);
        }
    }
}
