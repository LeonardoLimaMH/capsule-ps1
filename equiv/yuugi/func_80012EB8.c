#include "common.h"

void func_80012EB8(void *arg0, s16 arg1, s16 arg2) {
    s16 sp10;
    s16 sp12;
    u16 sp14;
    u16 sp16;

    if (!(M2C_FIELD(arg0, s32 *, 0) & 0x400)) {
        sp10 = arg1;
        sp12 = arg2;
        sp14 = M2C_FIELD(arg0, u16 *, 8);
        sp16 = M2C_FIELD(arg0, u16 *, 0xA);
        LoadImage(&sp10, arg0 + 0xC);
    }
}
