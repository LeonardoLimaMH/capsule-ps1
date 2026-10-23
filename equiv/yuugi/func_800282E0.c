#include "common.h"

s32 func_800282E0(void) {
    extern u16 D_80078C34;
    extern s32 D_80078C3C;
    extern s32 D_80078C40;
    switch (D_80078C40) {                           /* irregular */
    case 0:
        func_800338DC(D_80078C34);
        D_80078C40 += 1;
        return 0;
    case 1:
        if (func_80019654() != 0) {
            D_80078C40 = 0;
            D_80078C3C = 0;
            return 1;
        }
        return 0;
    default:
        return 0;
    }
}
