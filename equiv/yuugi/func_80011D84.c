#include "common.h"

extern u8 D_80085428[], D_80063940[], D_8006B1FC[];
extern void func_8001A998();
extern void func_800267F0();

void func_80011D84(void) {
    u8 *s0 = D_80085428;
    u8 *p;
    s32 i;

    func_8001A998(s0, 0xD84);
    func_800267F0();
    s0[0x5D6] = 1;
    s0[0x5D7] = 1;
    s0[1] = 1;
    s0[4] = 6;
    s0[5] = 6;
    for (i = 0; i < 0x32; i++) {
        s0[0x50 + i * 0xE] = 0xFF;
        s0[0x30C + i * 0xE] = 0xFF;
    }
    s0[0] = 3;
    s0[0x5C8] = 0xF;
    s0[0x5C9] = 1;
    s0[0x5CA] = 0x1A;
    *(u16 *)(s0 + 0x5CC) = 0x9BA8;
    s0[0x5CB] = 4;
    for (i = 0; i < 0x67; i++) {
        *(u32 *)(D_80063940 + i * 0x3C + 0x14) &= ~0x20 & ~0x40;
    }
    for (i = 0; i < 6; i++) {
        p = D_80063940 + D_8006B1FC[i * 0xE] * 0x3C;
        *(u32 *)(p + 0x14) |= 0x20;
        p = D_80063940 + D_8006B1FC[i * 0xE] * 0x3C;
        *(u32 *)(p + 0x14) |= 0x40;
    }
}
