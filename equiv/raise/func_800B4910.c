#include "common.h"

extern s16 D_800EEB90;
extern u8 D_800EEB94[];

s16 func_800B4910(s32 side, s32 idx) {
    return *(s16 *)(D_800EEB94 + (side != D_800EEB90) * 4 + idx * 2);
}
