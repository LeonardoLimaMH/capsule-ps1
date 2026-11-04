#include "common.h"
#include "yuugi.h"

void SetDrawMode(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s8 *, 3) = 2;
    M2C_FIELD(arg0, s32 *, 4) = func_8004AEE8(arg1, arg2, arg3 & 0xFFFF);
    M2C_FIELD(arg0, s32 *, 8) = func_8004B054(arg4);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__DrawMode", SetDrawEnv);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__DrawMode", func_8004AC78);

u32 func_8004AEE8(s32 dfe, s32 dtd, s32 tpage) {
    register u32 v1 asm("v1");
    register u32 v0 asm("v0");

    if (dtd) {
        v1 = 0xE1000200;
    } else {
        v1 = 0xE1000000;
    }
    v0 = tpage & 0x9FF;
    if (dfe) {
        v0 |= 0x400;
    }
    return v1 | v0;
}

u32 func_8004AF08(s16 x, s16 y) {
    extern s16 D_80078920[];
    extern s16 D_80078922[];
    s32 a, b;
    x = x < 0 ? 0 : x > (a = D_80078920[0] - 1) ? (u16)D_80078920[0] - 1 : x;
    y = y < 0 ? 0 : y > (b = D_80078922[0] - 1) ? (u16)D_80078922[0] - 1 : y;
    return ((y & 0x3FF) << 10) | ((x & 0x3FF) | 0xE3000000);
}

u32 func_8004AFA0(s16 x, s16 y) {
    extern s16 D_80078920;
    extern s16 D_80078922;
    x = x < 0 ? 0 : x > D_80078920 - 1 ? (u16)D_80078920 - 1 : x;
    y = y < 0 ? 0 : y > D_80078922 - 1 ? (u16)D_80078922 - 1 : y;
    return ((y & 0x3FF) << 10) | ((x & 0x3FF) | 0xE4000000);
}
