#include "common.h"

void func_80033998(s32 arg0, s16 arg1) {
    s32 temp_a0;

    temp_a0 = arg0 & 0x8000;
    if (temp_a0 != 0) {
        func_800373A0(temp_a0);
        return;
    }
    func_80034DA0(-1, arg1);
}
