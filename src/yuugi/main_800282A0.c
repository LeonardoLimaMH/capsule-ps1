#include "common.h"
#include "yuugi.h"

s32 func_800282A0(s32 arg0) {
    extern s32 D_80078C34;
    extern s32 D_80078C38;
    extern s32 D_80078C3C;
    extern s32 D_80078C40;
    extern s16 D_80085430[];
    D_80078C40 = 0;
    D_80078C34 = arg0;
    if (arg0 != 0x7006) {
        D_80078C38 = arg0;
    }
    (*D_80085430) = (s16) arg0;
    D_80078C3C = 1;
    return 0;
}
