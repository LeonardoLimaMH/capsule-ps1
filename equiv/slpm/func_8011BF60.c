#include "common.h"

void func_8011BF60(void) {
    extern M2C_UNK (*D_8013333C)();
    extern s32 D_80133348;
    if (D_80133348 == 0) {
        D_80133348 = 1;
        return;
    }
    D_80133348 = 0;
    D_8013333C();
}
