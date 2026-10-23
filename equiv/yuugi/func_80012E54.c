#include "common.h"

void func_80012E54(void *arg0) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    u16 sp16;

    if (!(M2C_FIELD(arg0, s32 *, 0) & 0x400)) {
        sp10 = M2C_FIELD(arg0, u16 *, 4);
        sp12 = M2C_FIELD(arg0, u16 *, 6);
        sp14 = M2C_FIELD(arg0, u16 *, 8);
        sp16 = M2C_FIELD(arg0, u16 *, 0xA);
        LoadImage(&sp10, arg0 + 0xC);
    }
}
