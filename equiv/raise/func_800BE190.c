#include "common.h"

extern u8 D_800F05E8[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);

s32 func_800BE190(u8 *o) {
    return func_8001F1A8((s16)(*(u16 *)(o + 0x46) + 8), *(s16 *)(o + 0x4A), 0, 1, 0, D_800F05E8, 1, 0xE, 4);
}
