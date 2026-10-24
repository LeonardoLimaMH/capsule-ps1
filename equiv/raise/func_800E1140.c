#include "common.h"

extern u8 D_80100F38[];

s32 func_800E1140(s32 idx) {
    u8 *obj = D_80100F38 + (idx & 0xFFFF) * 0x79C;

    if (*(s16 *)(obj + 0x228) == 1) {
        return 0;
    }
    return ((*(u32 *)(obj + 0x798) >> 5) & 1) ^ 1;
}
