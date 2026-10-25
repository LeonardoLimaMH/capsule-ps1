#include "common.h"

s32 func_8011B8F0(s32 arg0, s32 arg1) {
    extern s32 * D_801332B4[];
    extern u8 D_801332B8[];
    s32 *temp_v1;
    s32 temp_a3;

    temp_v1 = (arg0 * 4) + D_801332B8;
    temp_a3 = *temp_v1;
    if (arg1 != temp_a3) {
        if (arg1 != 0) {
            *temp_v1 = arg1;
            *(*D_801332B4) = (*(*D_801332B4) & 0xFFFFFF) | ((1 << (arg0 + 0x10)) | 0x800000);
            return temp_a3;
        }
        *temp_v1 = 0;
        *(*D_801332B4) = ((*(*D_801332B4) & 0xFFFFFF) | 0x800000) & ~(1 << (arg0 + 0x10));
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return temp_a3;
    }
    return temp_a3;
}
