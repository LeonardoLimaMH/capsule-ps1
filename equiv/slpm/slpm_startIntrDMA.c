#include "common.h"

u8 *slpm_startIntrDMA(void) {
    extern s32 * D_801332B4[];
    extern u8 D_801332B8[];
    extern int func_8011B770();
    extern int func_8011B8F0();
    func_8011B99C(D_801332B8, 8);
    *(*D_801332B4) = 0;
    slpm_InterruptCallback(3, &func_8011B770);
    return &func_8011B8F0;
}
