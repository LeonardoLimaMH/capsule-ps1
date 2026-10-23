#include "common.h"

void func_800E334C(s32 arg0, s16 *arg1, s16 *arg2) {
    extern s16 D_800F1EE0[];
    s16 temp_a1;
    s16 temp_a2;

    do {
        (*D_800F1EE0) = 1;
        func_800A4984(arg0, arg1, arg2);
        (*D_800F1EE0) = 0;
        temp_a1 = *arg1;
        temp_a2 = *arg2;
    } while ((temp_a1 + temp_a2) < 0xA);
    func_80025CEC(arg0, temp_a1, temp_a2, 1);
    func_80025E54(arg0, *arg1, *arg2);
}
