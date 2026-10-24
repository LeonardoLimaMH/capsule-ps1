#include "common.h"

extern s16 D_800EEA78[];
extern u8 D_8008ED68[];

void func_8009E508(s32 slot) {
    s32 v = *(s32 *)(D_8008ED68 + D_800EEA78[slot] * 4 + 0xA4);

    if (v != 7 && (v & 7) == 7) {
        func_8009E3A8(slot, slot);
    }
}
