#include "common.h"

void func_8011B6C8(s32 arg0, s32 arg1) {
    extern u8 D_80133284[];
    s32 *temp_a0;

    temp_a0 = (arg0 * 4) + D_80133284;
    if (arg1 != *temp_a0) {
        *temp_a0 = arg1;
    }
}
