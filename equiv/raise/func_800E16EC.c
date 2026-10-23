#include "common.h"

s32 func_800E16EC(void) {
    extern s16 D_80078C28[];
    extern u16 D_80078C2C[];
    if ((*D_80078C28) == 1) {
        return (u32) ((*D_80078C2C) - 5) < 8U;
    }
    return 0;
}
