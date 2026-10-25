#include "common.h"

extern u8 D_8008ED68[];
extern u8 D_8006D60C[];

void func_8001F7A4(s32 x, s32 y, s32 z, s32 a3, s32 idx, s32 e6) {
    u16 *p = (u16 *)(D_8006D60C + idx * 10);
    u32 i;
    s32 off = 0;
    u16 c;

    for (i = 0; i < 5; i++, off += 10, p++) {
        c = *p;
        if (c == 0 || c == 0xFFFF) {
            continue;
        }
        func_8001EC74((s16)(x + *(s32 *)(D_8008ED68 + 0x108) / 2 + off),
                      (s16)(y + *(s32 *)(D_8008ED68 + 0x10C) / 2), (s16)z, c, 0, e6);
    }
}
