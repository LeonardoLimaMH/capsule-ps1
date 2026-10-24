#include "common.h"

void _putchar_flash(void) {
    extern s32 D_80078B10;
    extern M2C_UNK D_80096610;
    if (D_80078B10 > 0) {
        func_8004FF2C(1, D_80096610, D_80078B10);
        D_80078B10 = 0;
    }
}
