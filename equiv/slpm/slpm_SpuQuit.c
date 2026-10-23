#include "common.h"

void slpm_SpuQuit(void) {
    extern s32 D_8013335C;
    extern s32 D_801333C4;
    extern s32 D_8013340C;
    extern s32 D_80133410;
    if (D_801333C4 == 1) {
        D_801333C4 = 0;
        func_80112014();
        D_8013340C = 0;
        D_80133410 = 0;
        slpm__SpuDataCallback(0);
        func_8011F5F4(D_8013335C);
        func_8011F604(D_8013335C);
        func_80112024();
    }
}
