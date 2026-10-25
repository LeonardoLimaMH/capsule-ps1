#include "common.h"

s32 slpm_CD_getsector(s32 arg0, s32 arg1) {
    extern u8 * D_80131FE4[];
    extern s8 * D_80131FF0[];
    extern s32 * D_80131FF4[];
    extern s32 * D_80132018[];
    extern s32 * D_8013201C[];
    extern s32 * D_80132020[];
    extern s32 * D_80132024[];
    extern s32 * D_80132028[];
    *(*D_80131FE4) = 0;
    *(*D_80131FF0) = 0x80;
    *(*D_80132018) = 0x20943;
    *(*D_80131FF4) = 0x1323;
    *(*D_8013201C) |= 0x8000;
    *(*D_80132020) = arg0;
    *(*D_80132024) = arg1 | 0x10000;
    do {

    } while (!(*(*D_80131FE4) & 0x40));
    *(*D_80132028) = 0x11000000;
    if (*(*D_80132028) & 0x01000000) {
        do {

        } while (*(*D_80132028) & 0x01000000);
    }
    *(*D_80131FF4) = 0x1325;
    return 0;
}
