#include "common.h"

#include "common.h"
#include "yuugi.h"

void slpm__putchar_flash(void) {
    extern s32 D_80120958;
    extern u8 D_80133520[];
    if (D_80120958 > 0) {
        func_80112B74(1, D_80133520, D_80120958);
        D_80120958 = 0;
    }
}
