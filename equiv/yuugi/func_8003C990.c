#include "common.h"

extern s32 D_80078CD0;
extern u8 D_800947E8[];

s32 func_8003C990(u8 *p, s32 slot, s32 a2) {
    s32 i;
    u8 *e;

    D_80078CD0 = 0;
    if ((s16)slot == -1) {
        for (i = 0; (s16)i < 16; i++) {
            if (*(s16 *)(D_800947E8 + (s16)i * 0x1C) == -1) {
                goto found;
            }
        }
        return -1;
    }
    i = slot;
    if ((s16)i >= 16) {
        return -1;
    }
found:
    e = D_800947E8 + (s16)i * 0x1C;
    *(s16 *)e = i;
    *(u8 **)(e + 4) = p;
    *(s32 *)(e + 0x10) = a2;
    *(s32 *)(e + 8) = *(u16 *)(p + 0x12) * 512 + 0xA20;
    *(s32 *)(e + 0x14) = *(s32 *)(p + 0xC) - *(s32 *)(e + 8);
    e[0x18] = p[0x18];
    e[0x1B] = p[0x19];
    return (s16)i;
}
