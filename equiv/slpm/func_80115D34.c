#include "common.h"

s32 func_80115D34(void) {
    extern u8 D_80131B3C[];
    extern s32 D_80131B40[];
    extern s32 * D_80131C3C[];
    extern s32 * D_80131C48[];
    extern s32 D_80131C5C[];
    extern s32 D_80131C60[];
    extern s32 D_80131C68[];
    extern u8 D_80133690[];
    extern u8 D_80133694[];
    extern u8 D_80133698[];
    s32 var_v0;

    var_v0 = 1;
    if (!(*(*D_80131C48) & 0x01000000)) {
        (*D_80131C68) = slpm_SetIntrMask(0);
        if (((*D_80131C5C) != (*D_80131C60)) && !(*(*D_80131C48) & 0x01000000)) {
loop_4:
            if (((((*D_80131C60) + 1) & 0x3F) == (*D_80131C5C)) && ((*D_80131B40) == 0)) {
                slpm_DMACallback(2, 0);
            }
            if (!(*(*D_80131C3C) & 0x04000000)) {
                do {

                } while (!(*(*D_80131C3C) & 0x04000000));
            }
            (*(void (**)())(D_80133690 + ((*D_80131C60) * 0x60)))(*(D_80133694 + ((*D_80131C60) * 0x60)), *(D_80133698 + ((*D_80131C60) * 0x60)));
            (*D_80131C60) = ((*D_80131C60) + 1) & 0x3F;
            if (((*D_80131C5C) != (*D_80131C60)) && !(*(*D_80131C48) & 0x01000000)) {
                goto loop_4;
            }
        }
        slpm_SetIntrMask((*D_80131C68));
        if (((*D_80131C5C) == (*D_80131C60)) && !(*(*D_80131C48) & 0x01000000) && (M2C_FIELD(D_80131B3C, s32 *, 0) != 0) && (M2C_FIELD(D_80131B3C, M2C_UNK (**)(M2C_UNK), 4) != NULL)) {
            M2C_FIELD((D_80131B3C - 8), s32 *, 8) = 0;
            M2C_FIELD(D_80131B3C, M2C_UNK (**)(M2C_UNK), 4)(M2C_FIELD(D_80131B3C, M2C_UNK (**)(M2C_UNK), 4));
        }
        var_v0 = ((*D_80131C5C) - (*D_80131C60)) & 0x3F;
    }
    return var_v0;
}
