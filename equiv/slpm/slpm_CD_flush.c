#include "common.h"

void slpm_CD_flush(void) {
    extern s8 * D_80131FE4[];
    extern s8 * D_80131FEC[];
    extern u8 * D_80131FF0[];
    extern s32 * D_80131FF4[];
    extern M2C_UNK D_80131FFC[];
    *(*D_80131FE4) = 1;
    if (*(*D_80131FF0) & 7) {
        do {
            *(*D_80131FE4) = 1;
            *(*D_80131FF0) = 7;
            *(*D_80131FEC) = 7;
        } while (*(*D_80131FF0) & 7);
    }
    M2C_FIELD(D_80131FFC, u8 *, 2) = 0U;
    M2C_FIELD(D_80131FFC, u8 *, 1) = (u8) M2C_FIELD(D_80131FFC, u8 *, 2);
    M2C_FIELD(D_80131FFC, s8 *, 0) = 2;
    *(*D_80131FE4) = 0;
    *(*D_80131FF0) = 0;
    *(*D_80131FF4) = 0x1325;
}
