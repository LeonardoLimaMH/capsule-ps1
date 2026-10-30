#include "common.h"

s32 func_8009E23C(void) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_8008ED68[];
    extern s32 D_8008EDF0[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800ED87A[];
    extern M2C_UNK D_800EFF58[];
    extern M2C_UNK D_80103EDC[];
    func_800D1598(D_80103EDC);
    if ((M2C_FIELD(D_800EFF58, s32 *, 8) == 1) && ((*D_800ED87A) != M2C_FIELD(D_800EFF58, s32 *, 8))) {
        if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) {
            func_80034AB0(0x48);
            M2C_FIELD((((*D_8006AF80) * 0x1A8) + (u8 *)D_80091618), u16 *, 0x10) = (u16) M2C_FIELD(D_800EFF58, u16 *, 0x1C);
            func_8009DC78(0, D_80091618);
            return -1;
        }
        if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40) {
            func_80034AB0(0x5D);
            func_8009DC78(0);
            func_800BAD64(2);
            return -2;
        }
        if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x8000) {
            func_8009E3A8(1);
        } else if (M2C_FIELD(D_8008ED68, s32 *, 0xB0) != 0) {
            func_8009E508(1);
        }
        if ((*D_8008EDF0) & 0x2000) {
            func_8009E3A8(0);
            return 0;
        }
        if (M2C_FIELD(D_8008ED68, s32 *, 0xA8) != 0) {
            func_8009E508(0);
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
