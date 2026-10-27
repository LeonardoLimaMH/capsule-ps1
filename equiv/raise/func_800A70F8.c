#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3,0xFFFF */
extern u8 D_80091618[];
extern u16 D_8006AF80;
extern s32 D_8008EE00;
extern s16 D_800ED8E8;
extern char D_80097EC8[], D_80097EE8[], D_80097EF0[], D_80097EF8[], D_80097F00[], D_80097F08[];
extern char D_80097F14[], D_80097F20[], D_80097F2C[], D_80097F38[], D_80097F50[], D_80097F74[];
extern s32 func_8001DB8C(char *, ...);

#define E(o) (*(s16 *)(e + (o)))

s32 func_800A70F8(void) {
    u16 k = D_8006AF80;
    u8 *e;
    if (k == 0xFFFF) return 0xFFFF;
    if (D_8008EE00 & 0x40) D_800ED8E8 = D_800ED8E8 == 0;
    if (D_800ED8E8 == 0) return 0;
    e = D_80091618 + k * 0x1A8;
    func_8001DB8C(D_80097EC8, E(0xE6), E(0xD4), E(0xD6), E(0xC2));
    func_8001DB8C(D_80097EE8, E(0xD2));
    func_8001DB8C(D_80097EF0, E(0xDA));
    func_8001DB8C(D_80097EF8, E(0xDC));
    func_8001DB8C(D_80097F00, E(0xDE));
    func_8001DB8C(D_80097F08, E(0xE0));
    func_8001DB8C(D_80097F14, E(0xD8));
    func_8001DB8C(D_80097F20, E(0xE2));
    func_8001DB8C(D_80097F2C, E(0xE4));
    func_8001DB8C(D_80097F38, *(u16 *)(e + 0x9E), E(0xC0), E(0xBE));
    func_8001DB8C(D_80097F50, E(0xB4), E(0xB6), E(0xB8), E(0xBA), E(0xBC));
    return func_8001DB8C(D_80097F74, E(0xE8), E(0xEA), E(0xEC));
}
