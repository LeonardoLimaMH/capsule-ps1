#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011854C", slpm_CD_datasync);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011854C", slpm_CD_getsector);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011854C", slpm_CD_getsector2);

extern s32 D_80131FC8;

void slpm_CD_set_test_parmnum(s32 arg0) {
    D_80131FC8 = arg0;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011854C", func_801188AC);
