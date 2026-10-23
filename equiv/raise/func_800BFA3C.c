#include "common.h"

s32 func_800BFA3C(void) {
    extern s16 D_800F066A[];
    extern s16 D_800F067C[];
    extern s16 D_800F067E[];
    extern s16 D_800F0680[];
    extern s16 D_800F0682[];
    extern s16 D_800F0684[];
    extern s16 D_800F0708[];
    extern s32 D_800F070C[];
    extern s16 D_80100DBA[];
    extern s16 D_80100DBC[];
    s16 temp_v0;
    s16 var_v0;
    u16 var_v1;

    if ((*D_800F0680) == 1) {
        if ((*D_800F0682) == (*D_800F0680)) {
            var_v0 = (*D_800F0684) + 8;
        } else {
            var_v0 = (*D_800F0684) - 8;
        }
        (*D_800F0684) = var_v0;
        var_v1 = (u16) (*D_800F0684);
        if ((*D_800F0684) >= 0) {
            if ((*D_800F0684) >= 0x191) {
                var_v1 = 0x190;
            }
        } else {
            var_v1 = 0;
        }
        (*D_800F0684) = (s16) var_v1;
        func_800BFBD8((*D_80100DBA), (*D_80100DBC), 3);
        if ((*D_800F0682) == 1) {
            if ((*D_800F0684) == 0x190) {
                (*D_800F0682) = 0;
                if ((*D_800F0708) == 0) {
                    if (((*D_800F067C) == 1) && ((*D_800F070C) == 0)) {
                        (*D_800F070C) = 1;
                        return 0;
                    }
                    /* Duplicate return node #23. Try simplifying control flow for better match */
                    return 0;
                }
                goto block_22;
            }
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return 0;
        }
        if ((*D_800F0684) == 0) {
            (*D_800F0682) = 1;
            if ((*D_800F066A) == 0) {
                temp_v0 = (u16) (*D_800F067C) - 1;
                if ((*D_800F067C) != 0) {
                    (*D_800F067C) = temp_v0;
                    if (((temp_v0 << 0x10) == 0) && ((*D_800F067E) == 0)) {
                        (*D_800F067E) = 1;
                        return 1;
                    }
                    /* Duplicate return node #23. Try simplifying control flow for better match */
                    return 0;
                }
                goto block_22;
            }
            if ((*D_800F0708) == 0) {
                (*D_800F066A) = 0;
                return 2;
            }
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return 0;
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return 0;
    }
block_22:
    return 0;
}
