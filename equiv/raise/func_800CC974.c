#include "common.h"

extern s16 D_80078C20;
extern u16 D_8008EE44;

s32 func_800CC974(u8 *obj) {
    u32 w = *(u32 *)(obj + 0x34);
    s32 b9 = (w >> 9) & 1;
    s32 b10 = (w >> 10) & 3;

    if (((w >> 8) & 1) != D_80078C20 || D_8008EE44 == 0x41) {
        return func_80013920(obj, b9, b10);
    }
    return func_800CC5D4(obj, b9, b10);
}
