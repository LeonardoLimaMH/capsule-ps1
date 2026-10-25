#include "common.h"

s32 func_8004B9CC(M2C_UNK (*arg0)(s32 *, s32), s32 *arg1, s32 arg2, s32 arg3) {
    extern u8 D_8007891C[];
    extern s32 * D_80078A24[];
    extern s32 * D_80078A30[];
    extern s32 D_80078A44[];
    extern s32 D_80078A48[];
    extern s32 D_80078A4C[];
    extern u8 D_80094DC0[];
    extern u8 D_80094DC4[];
    extern u8 D_80094DC8[];
    extern u8 D_80094DCC[];
    extern int func_8004BC7C();
    s32 *var_a3;
    s32 temp_a0;
    s32 temp_a1;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;

    func_8004C168();
loop_3:
    if ((((*D_80078A44) + 1) & 0x3F) != (*D_80078A48)) {
        (*D_80078A4C) = SetIntrMask(0);
        M2C_FIELD(D_8007891C, s32 *, 8) = 1;
        if ((M2C_FIELD(D_8007891C, u8 *, 1) == 0) || (((*D_80078A44) == (*D_80078A48)) && !(*(*D_80078A30) & 0x01000000) && (M2C_FIELD(D_8007891C, s32 *, 0xC) == 0))) {
            do {

            } while (!(*(*D_80078A24) & 0x04000000));
            arg0(arg1, arg3);
            SetIntrMask((*D_80078A4C));
            return 0;
        }
        DMACallback(2, func_8004BC7C);
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
                *(s8 *)(temp_a0 + (((*D_80078A44) * 0x60) + D_80094DCC)) = temp_a1;
                var_v0_2 = arg2;
                goto loop_13;
            }
            *(s8 *)(D_80094DC4 + ((*D_80078A44) * 0x60)) = ((*D_80078A44) * 0x60) + D_80094DCC;
        } else {
            *(s8 *)(D_80094DC4 + ((*D_80078A44) * 0x60)) = arg1;
        }
        *(s8 *)(D_80094DC8 + ((*D_80078A44) * 0x60)) = arg3;
        *(s8 *)(D_80094DC0 + ((*D_80078A44) * 0x60)) = arg0;
        (*D_80078A44) = ((*D_80078A44) + 1) & 0x3F;
        SetIntrMask((*D_80078A4C));
        func_8004BC7C();
        var_v0 = ((*D_80078A44) - (*D_80078A48)) & 0x3F;
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = -1;
    if (func_8004C19C() == 0) {
        func_8004BC7C();
        goto loop_3;
    }
    return var_v0;
}
