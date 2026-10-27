/* stub-ret: mixed */
#include "common.h"

extern u8 D_80091618[], D_800EF364[], D_800EFF58[], D_8008ED68[];
extern s16 D_800F1EE0;
extern s32 func_800B1260(s32), rand(void), func_800A366C(s32, s32, s32, s32);

void func_800A4984(s32 a0, s16 *px, s16 *py) {
    s32 s5 = a0 != 1;
    u16 t = *(u16 *)(D_80091618 + (func_800B1260(a0) & 0xFFFF) * 0x1A8 + 0x10);
    u8 *base = D_800EF364 + t * 64;
    u16 n;
    s32 x, y;
    __asm__("" :: "r"(&px), "r"(&py)); /* o original guarda a1/a2 nos slots de argumento */
    for (n = 0; n < 50; n++) {
        x = ((*(u16 *)(D_8008ED68 + 0x18) + rand()) & 7) + 1;
        y = ((*(u16 *)(D_8008ED68 + 0x18) + rand()) & 7) + 1;
        if (D_800F1EE0 == 1 && x + y < 10) continue;
        if (base[(u16)x * 8 + (u16)y - 9] == 0xFF) continue;
        if (D_800EFF58[s5 * 64 + (u16)x * 8 + (u16)y + 0x8B] == 1) continue;
        if (func_800A366C(t, (u16)s5, (u16)x, (u16)y) == 0) {
            *px = x;
            *py = y;
            return;
        }
    }
    for (x = 8; (u16)x != 0; x--) {
        for (y = 8; (u16)y != 0; y--) {
            if (base[(u16)x * 8 + (u16)y - 9] == 0xFF) continue;
            if (D_800EFF58[s5 * 64 + (u16)x * 8 + (u16)y + 0x8B] == 1) continue;
            if (func_800A366C(t, (u16)s5, (u16)x, (u16)y) == 0) {
                *px = x;
                *py = y;
                return;
            }
        }
    }
}
