#include "common.h"

void func_80012FB8(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s16 sp16;

    sp10 = arg1;
    sp12 = arg2;
    sp14 = arg3;
    sp16 = (s16) arg4;
    LoadImage(&sp10, arg0 + 0xC);
}
