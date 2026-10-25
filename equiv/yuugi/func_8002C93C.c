#include "common.h"

extern u8 D_8008ED68[];
extern u8 D_800859F3;
extern s32 func_800248C8();
extern void func_80029784();
extern void func_8002453C();

void func_8002C93C(u8 *p) {
    u8 *s2 = D_8008ED68;
    s32 s1 = *(s32 *)(p + 0x18);
    u8 m = D_800859F3;

    if (m == 1) {
        *(u32 *)(p + 0x50) |= 1;
    } else if (m == 3) {
        *(u32 *)(p + 0x50) &= ~1;
    }
    if ((*(u32 *)(p + 0x50) & 1) == 1) {
        return;
    }
    if (s2[0x99A] == 0 && *(u16 *)(p + 0x4E) != 0) {
        if (func_800248C8(p) != 0) {
            return;
        }
    }
    if (s2[0xA66] != 0) {
        *(u16 *)(p + 0x4E) = 1;
    }
    switch (*(u16 *)(p + 0x4E)) {
    case 1:
    case 2:
        func_80029784(0, s1, s2, func_8002453C);
    case 0:
        *(u16 *)(p + 0x4E) += 1;
        break;
    case 3:
        func_80029784(1, s1, s2, 0);
        break;
    case 4:
        break;
    }
}
