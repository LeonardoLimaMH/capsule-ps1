#include "common.h"

extern u8 D_80063940[];
extern u8 D_80091618[];

void func_800BF220(s32 idx) {
    u8 *rec = D_80091618 + (idx & 0xFFFF) * 0x1A8;
    u16 count = *(u16 *)(rec + 0xD0);
    s32 prev = *(s32 *)(rec + 0xC8);
    u16 kind = *(u16 *)(rec + 4);

    *(s32 *)(rec + 0xCC) = prev;
    *(u16 *)(rec + 0xD0) = count - 1;
    *(s16 *)(rec + 0xA0) = (*(u32 *)(D_80063940 + kind * 0x3C + 8) >> 12) & 3;
}
