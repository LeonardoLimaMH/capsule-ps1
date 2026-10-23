#include "common.h"

void slpm_SpuStart(void) {
    extern s32 D_8013335C;
    extern s32 D_801333C4;
    extern M2C_UNK slpm__spu_FiDMA[];
    s32 temp_v0;

    if (D_801333C4 == 0) {
        D_801333C4 = 1;
        func_80112014();
        slpm__SpuDataCallback(slpm__spu_FiDMA);
        temp_v0 = func_8011E9E4(0xF0000009, 0x20, 0x2000, 0);
        D_8013335C = temp_v0;
        func_8011E9F4(temp_v0);
        func_80112024();
    }
}
