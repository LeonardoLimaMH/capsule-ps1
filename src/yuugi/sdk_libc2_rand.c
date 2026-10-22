#include "common.h"
#include "yuugi.h"

s32 rand(void) {
    extern u32 D_80096600;
    u32 temp_v0;

    temp_v0 = (D_80096600 * 0x41C64E6D) + 0x3039;
    D_80096600 = temp_v0;
    return (temp_v0 >> 0x10) & 0x7FFF;
}

extern s32 D_80096600;

void srand(unsigned int arg0) {
    D_80096600 = arg0;
}
