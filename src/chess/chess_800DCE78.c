#include "common.h"

void func_800DCE78(void) {
    extern u8 D_8008ED68[];
    extern s32 D_80119710[];
    extern u8 D_8011974D[];
    extern void func_800FE98C(void);

    D_80119710[0] += (D_8008ED68[0x103] >= 2U) ? D_8008ED68[0x103] : 1;
    D_80119710[1] += (D_8008ED68[0x103] >= 2U) ? D_8008ED68[0x103] : 1;
    D_80119710[2] += (D_8008ED68[0x103] >= 2U) ? D_8008ED68[0x103] : 1;
    func_800FE98C();
    D_8011974D[0] = 0;
}
