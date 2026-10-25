#include "common.h"

extern u8 *func_80015B3C();
extern void func_8003350C();
extern void func_80017CA4();
extern u8 D_80085428;

u8 *func_80033318(void) {
    u8 *o = func_80015B3C(func_8003350C, func_80017CA4, 2);
    u8 *p;

    func_80015EF8(o);
    func_8001611C(0x1000);
    p = o + 0x14;
    *(s16 *)(o + 0x4E) = 5;
    *(s16 *)p = -0xA0;
    *(s16 *)(o + 0x46) = 0;
    *(s16 *)(o + 0x4A) = 0;
    *(s16 *)(p + 2) = -0x70;
    *(s16 *)(p + 4) = 0x140;
    *(s16 *)(p + 6) = 0xE0;
    if (D_80085428 == 0) {
        p[8] = 0xA0;
        p[9] = 0xA0;
        p[0xA] = 0x10;
        p[0xB] = 0xC0;
        p[0xC] = 0x90;
        p[0xD] = 0x20;
        p[0x10] = 0x40;
        p[0xE] = 0xE0;
        p[0xF] = 0x80;
        p[0x11] = 0x80;
        p[0x12] = 0x80;
        p[0x13] = 0x70;
    } else {
        p[9] = 0x10;
        p[0xB] = 0x90;
        p[0xC] = 0x20;
        p[8] = 0xA0;
        p[0xA] = 0xA0;
        p[0xD] = 0xC0;
        p[0xF] = 0x40;
        p[0xE] = 0x80;
        p[0x10] = 0xE0;
        p[0x11] = 0x80;
        p[0x12] = 0x70;
        p[0x13] = 0x80;
    }
    return o;
}
