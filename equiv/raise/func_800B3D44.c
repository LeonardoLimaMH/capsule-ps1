#include "common.h"

s32 func_800B3D44(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern M2C_UNK D_8006AFCC[];
    s32 temp_s0;
    s32 temp_s0_2;

    switch (M2C_FIELD(D_8006AFCC, u16 *, 0x34)) {  /* irregular */
    case 0:
        if ((M2C_FIELD(D_8006AFCC, u16 *, 0x32) == 1) && (((*D_8006AF84) - M2C_FIELD(D_8006AFCC, s32 *, 0x4C)) >= 0x13B)) {
            if (func_800202A4(0x10, 1) == 8) {
                M2C_FIELD(D_8006AFCC, u16 *, 0x34) = 2U;
                func_800DC718(arg0 & 0xFFFF, 0x12);
                return 1;
            }
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return 0;
        }
    default:
        return 0;
    case 1:
        temp_s0 = (*D_8006AF84) - M2C_FIELD(D_8006AFCC, s32 *, 0x50);
        if (temp_s0 >= func_800B46EC(3, 1)) {
            temp_s0_2 = arg0 & 0xFFFF;
            func_800DC8C8(temp_s0_2, 0x24);
            func_8003422C(0x1F);
            func_800DC640(temp_s0_2, arg1 & 0xFFFF);
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return 0;
    }
}
