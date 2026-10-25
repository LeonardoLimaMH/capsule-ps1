#include "common.h"

void func_80012074(s32 a0, s32 i) {
    u8 *t = (u8 *)0x801CC000 + i * 0xBC8 + 0x1378;
    u8 *s = (u8 *)0x801CC040 + i * 0x668;
    s32 k;

    for (k = 0; k < 50; k++) {
        s[k * 14] = 0xFF;
    }
    for (k = 0x66; k >= 0; k--) {
        s[0x2BC + k] = 0;
    }
    s[0x32D] = 1;
    t[0] = 0xF;
    t[2] = 0x1A;
    t[1] = 1;
    *(u16 *)(t + 4) = 0x9BA8;
    func_800260F4(t, i, 0x801CC000, -1);
    func_800264BC(s);
}
