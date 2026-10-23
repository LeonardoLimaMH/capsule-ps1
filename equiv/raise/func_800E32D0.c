#include "common.h"

void func_800E32D0(s32 arg0, s16 *arg1, s16 *arg2) {
    extern s16 D_800F1EE0[];
    (*D_800F1EE0) = 1;
    func_800A4984();
    (*D_800F1EE0) = 0;
    func_80025CEC(arg0, *arg1, *arg2, 1);
    func_80025E54(arg0, *arg1, *arg2);
}
