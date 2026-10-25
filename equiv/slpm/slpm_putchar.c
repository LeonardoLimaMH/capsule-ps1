#include "common.h"

void slpm_putchar(s8 arg0) {
    extern u8 D_801208C5[];
    extern s32 D_80120954[];
    extern s32 D_80120958[];
    extern u8 D_80133520[];
    if (arg0 != 9) {
        if (arg0 == 0xA) {
            slpm__putchar(0xD);
            (*D_80120954) = 0;
        } else if (*(D_801208C5 + (arg0 & 0xFF)) & 0x97) {
            (*D_80120954) += 1;
        }
        if ((*D_80120958) >= 0x20) {
            func_80112B74(1, D_80133520, (*D_80120958));
            (*D_80120958) = 0;
        }
        *(D_80133520 + (*D_80120958)) = arg0;
        (*D_80120958) += 1;
    } else {
loop_3:
        slpm__putchar(0x20);
        if ((*D_80120954) & 7) {
            goto loop_3;
        }
    }
    if ((*D_80120958) > 0) {
        func_80112B74(1, D_80133520, (*D_80120958));
        (*D_80120958) = 0;
    }
}
