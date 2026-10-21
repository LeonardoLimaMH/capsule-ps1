#include "common.h"

void func_800C0020(s16 arg0) {
    extern s16 D_800F0670[];
    extern s16 D_800F0672[];
    (*D_800F0670) = 1;
    (*D_800F0672) = arg0;
}
