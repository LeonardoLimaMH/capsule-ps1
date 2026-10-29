#include "common.h"

#include "common.h"

u8 *slpm_startIntrVSync(void) {
    extern u8 D_80133284[];
    extern s32 D_801332A4[];
    extern s32 * D_801332A8[];
    extern int func_8011B65C();
    extern int func_8011B6C8();
    *(*D_801332A8) = 0x107;
    (*D_801332A4) = 0;
    func_8011B6F4(D_80133284, 8);
    slpm_InterruptCallback(0, &func_8011B65C);
    return &func_8011B6C8;
}
