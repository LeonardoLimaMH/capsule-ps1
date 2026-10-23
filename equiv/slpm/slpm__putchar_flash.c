#include "common.h"

void slpm__putchar_flash(void) {
    extern s32 D_80120958;
    extern M2C_UNK D_80133520;
    if (D_80120958 > 0) {
        func_80112B74(1, D_80133520, D_80120958);
        D_80120958 = 0;
    }
}
