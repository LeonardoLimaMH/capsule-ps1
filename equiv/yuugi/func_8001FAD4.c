#include "common.h"

extern u8 D_800637AC[];
extern s8 D_80085429;

s32 func_8001FAD4(s32 i) {
    D_80085429 = 0;
    return func_80012200(*(s32 *)(D_800637AC + i * 0x18 + 4));
}
