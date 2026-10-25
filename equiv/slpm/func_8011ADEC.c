#include "common.h"

void func_8011ADEC(s32 arg0, s32 arg1) {
    extern s32 D_801332A4[];
    s32 sp10;
    s32 temp_a1;
    s32 temp_v0;

    temp_a1 = arg1 << 0xF;
    sp10 = temp_a1;
    if ((*D_801332A4) < arg0) {
loop_2:
        temp_v0 = sp10 - 1;
        sp10 = temp_v0;
        if (temp_v0 == -1) {
            slpm_puts("VSync: timeout\n\0$Id: intr.c,v 1.76 1997/02/12 12:45:05 makoto Exp $", temp_a1);
            func_80111B54(0);
            func_8011AE84(3, 0);
            return;
        }
        if ((*D_801332A4) >= arg0) {

        } else {
            goto loop_2;
        }
    }
}
