#include "common.h"

s32 slpm_CD_init(void) {
    extern s32 D_80131D1C[];
    extern s32 D_80131D20[];
    extern s32 D_80131D2C[];
    extern s32 D_80131D30[];
    extern s8 D_80131D3C[];
    extern s8 D_80131D3D[];
    extern s8 * D_80131FE4[];
    extern s8 * D_80131FEC[];
    extern u8 * D_80131FF0[];
    extern s32 * D_80131FF4[];
    extern u8 D_80131FFC[];
    extern u8 D_80132000[];
    extern int func_801188AC();
    slpm_puts("CD_init:");
    slpm_printf("addr=%08x\n", D_80132000);
    (*D_80131D3D) = 0;
    (*D_80131D3C) = 0;
    (*D_80131D20) = 0;
    (*D_80131D1C) = 0;
    (*D_80131D30) = 0;
    (*D_80131D2C) = 0;
    slpm_ResetCallback();
    slpm_InterruptCallback(2, &func_801188AC);
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
    slpm_CD_cw(1, 0, 0, 0);
    if ((*D_80131D2C) & 0x10) {
        slpm_CD_cw(1, 0, 0, 0);
    }
    if (slpm_CD_cw(0xA, 0, 0, 0) == 0) {
        if (slpm_CD_cw(0xC, 0, 0, 0) == 0) {
            if (slpm_CD_sync(0, 0) == 2) {
                return 0;
            }
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return -1;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}
