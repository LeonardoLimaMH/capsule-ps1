#include "common.h"

void func_80042984(s32 arg0, s32 arg1) {
    extern s32 D_80072E4C[];
    s32 sp10;
    s32 temp_a1;
    s32 temp_v0;

    temp_a1 = arg1 << 0xF;
    sp10 = temp_a1;
    if ((*D_80072E4C) < arg0) {
loop_2:
        temp_v0 = sp10 - 1;
        sp10 = temp_v0;
        if (temp_v0 == -1) {
            puts("VSync: timeout\n\0$Id: intr.c,v 1.76 1997/02/12 12:45:05 makoto Exp $", temp_a1);
            func_8004FF7C(0);
            func_8004FF8C(3, 0);
            return;
        }
        if ((*D_80072E4C) >= arg0) {

        } else {
            goto loop_2;
        }
    }
}
