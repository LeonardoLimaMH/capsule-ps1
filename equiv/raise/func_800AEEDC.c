#include "common.h"

extern u8 D_80091618[];

s32 func_800AEEDC(s32 idx) {
    u8 *rec = D_80091618 + (idx & 0xFFFF) * 0x1A8;

    if (*(u16 *)(rec + 0x10) == 0xFFFF) {
        return 1;
    }
    return *(u16 *)rec == 0xFFFF;
}
