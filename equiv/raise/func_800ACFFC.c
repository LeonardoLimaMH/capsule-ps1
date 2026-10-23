#include "common.h"

s32 func_800ACFFC(void) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C28[];
    extern s32 D_8008EDF0[];
    extern M2C_UNK D_800EEB9C[];
    void *temp_a1;

    if ((*D_8006AF80) != 0xFFFF) {
        if (func_800AEEDC((*D_8006AF80)) == 0) {
            if ((func_800D1548() != 1) && ((*D_8008EDF0) & 0x80)) {
                if ((M2C_FIELD((*D_800EEB9C), s32 *, 8) == 0) && ((*D_80078C28) == 0)) {
                    if (M2C_FIELD((*D_800EEB9C), s32 *, 0x10) != 0) {
                        M2C_FIELD((*D_800EEB9C), s32 *, 0x24) = 5;
                        if (M2C_FIELD((*D_800EEB9C), s32 *, 0x18) != 1) {
                            func_80034AB0(0x48);
                            M2C_FIELD((*D_800EEB9C), s32 *, 0x18) = 1;
                            temp_a1 = M2C_FIELD(((M2C_FIELD((*D_800EEB9C), s32 *, 0x24) * 4) + (*D_800EEB9C)), void **, 0x98);
                            M2C_FIELD(temp_a1, s32 *, 0x38) = (s32) (M2C_FIELD(temp_a1, s32 *, 0x38) & ~1);
                            func_800B5BA0(1, temp_a1);
                            func_800B70A0(0);
                        }
                        return 1;
                    }
                    goto block_10;
                }
                /* Duplicate return node #11. Try simplifying control flow for better match */
                return 0;
            }
            goto block_10;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return 0;
    }
block_10:
    return 0;
}
