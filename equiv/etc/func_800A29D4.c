#include "common.h"

extern u8 D_800B3B38[];

#define S(o) (*(u16 *)(D_800B3B38 + (o)))
#define F (*(volatile u16 *)(p + 0x5CC))

void func_800A29D4(u8 *p) {
    u32 m;
    S(0x28) = F & 7;
    S(0x2A) = (F >> 3) & 7;
    S(0x2C) = p[0x5C9];
    S(0x2E) = (F >> 12) & 3;
    S(0x30) = F >> 15;
    m = (F >> 8) & 7;
    S(0x32) = m;
    S(0x34) = (F >> 7) & 1;
    S(0x36) = (F >> 11) & 1;
    if (m == 7) S(0x32) = m - 1;
}
