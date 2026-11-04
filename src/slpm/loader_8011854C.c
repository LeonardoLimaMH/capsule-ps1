#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011854C", slpm_CD_datasync);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011854C", slpm_CD_getsector);

extern volatile u8 *D_80131FE4, *D_80131FF0;
extern volatile u32 *D_80131FF4, *D_80132018, *D_8013201C, *D_80132020, *D_80132024, *D_80132028;
s32 slpm_CD_getsector2(u32 arg0, u32 arg1) {
    volatile u32 status;
    *D_80131FE4 = 0;
    *D_80131FF0 = 0x80;
    *D_80132018 = 0x21020843;
    *D_80131FF4 = 0x1325;
    *D_8013201C |= 0x8000;
    *D_80132020 = arg0;
    *D_80132024 = arg1 | 0x10000;
    while (!(*D_80131FE4 & 0x40)) {
    }
    *D_80132028 = 0x11400100;
    status = *D_80132028;
    return 0;
}

extern s32 D_80131FC8;

void slpm_CD_set_test_parmnum(s32 arg0) {
    D_80131FC8 = arg0;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011854C", func_801188AC);
