#include "common.h"

extern u8 D_8008ED68[];
extern s32 D_8008ED64;
extern u8 D_80086298[];

void func_800127F4(void) {
    VSync(0);
    func_80012144(D_8008ED64);
    ClearOTagR(D_80086298, 0x408);
    ClearOTagR(D_80086298 + 0x4594, 0x408);
    SetDispMask(1);
    *(s32 *)(D_8008ED68 + 0x130) = 0;
    func_80012778();
}
