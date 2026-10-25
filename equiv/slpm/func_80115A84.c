#include "common.h"

s32 func_80115A84(M2C_UNK (*arg0)(s32 *, s32), s32 *arg1, s32 arg2, s32 arg3) {
    extern u8 D_80131B34[];
    extern s32 * D_80131C3C[];
    extern s32 * D_80131C48[];
    extern s32 D_80131C5C[];
    extern s32 D_80131C60[];
    extern s32 D_80131C64[];
    extern u8 D_80133690[];
    extern u8 D_80133694[];
    extern u8 D_80133698[];
    extern u8 D_8013369C[];
    extern int func_80115D34();
    s32 *var_a3;
    s32 temp_a0;
    s32 temp_a1;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;

    func_80116220();
loop_3:
    if ((((*D_80131C5C) + 1) & 0x3F) != (*D_80131C60)) {
        (*D_80131C64) = slpm_SetIntrMask(0);
        M2C_FIELD(D_80131B34, s32 *, 8) = 1;
        if ((M2C_FIELD(D_80131B34, u8 *, 1) == 0) || (((*D_80131C5C) == (*D_80131C60)) && !(*(*D_80131C48) & 0x01000000) && (M2C_FIELD(D_80131B34, s32 *, 0xC) == 0))) {
            do {

            } while (!(*(*D_80131C3C) & 0x04000000));
            arg0(arg1, arg3);
            slpm_SetIntrMask((*D_80131C64));
            return 0;
        }
        slpm_DMACallback(2, func_80115D34);
        var_a2 = 0;
        if (arg2 != 0) {
            var_a3 = arg1;
            var_v0_2 = arg2;
loop_13:
            if (var_v0_2 < 0) {
                var_v0_2 += 3;
            }
            temp_a0 = var_a2 * 4;
            if (var_a2 < (var_v0_2 >> 2)) {
                temp_a1 = *var_a3;
                var_a3 += 4;
                var_a2 += 1;
                *(s16 *)(temp_a0 + (((*D_80131C5C) * 0x60) + D_8013369C)) = temp_a1;
                var_v0_2 = arg2;
                goto loop_13;
            }
            *(s16 *)(D_80133694 + ((*D_80131C5C) * 0x60)) = ((*D_80131C5C) * 0x60) + D_8013369C;
        } else {
            *(s16 *)(D_80133694 + ((*D_80131C5C) * 0x60)) = arg1;
        }
        *(s16 *)(D_80133698 + ((*D_80131C5C) * 0x60)) = arg3;
        *(s16 *)(D_80133690 + ((*D_80131C5C) * 0x60)) = arg0;
        (*D_80131C5C) = ((*D_80131C5C) + 1) & 0x3F;
        slpm_SetIntrMask((*D_80131C64));
        func_80115D34();
        var_v0 = ((*D_80131C5C) - (*D_80131C60)) & 0x3F;
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = -1;
    if (func_80116254() == 0) {
        func_80115D34();
        goto loop_3;
    }
    return var_v0;
}
