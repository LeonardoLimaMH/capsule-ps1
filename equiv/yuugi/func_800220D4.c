#include "common.h"

extern u8 D_8008F702;
extern u8 D_8008ED68[];
extern u8 *func_80015B3C();
extern void func_800158C4(), func_80021BB4(), func_80015EF8(), func_80022700(), func_800161C4();
extern void func_8001E388(), func_8001E2BC(), func_80021EA8();
extern s32 func_80020458(), func_80020464(), func_80019F30(), func_8001E284();

s32 func_800220D4(u8 *p, s32 a1, s32 a2, s32 mode) {
    s32 ret = 0;
    s32 r;
    u8 *o;
    u32 v30, v38;
    u16 t;

    if (D_8008F702 == 1) {
        if (p[0x12] != 0 && mode != 3) {
            func_800158C4(*(s16 *)(p + 0x1C));
        }
        return 0;
    }
    switch (p[0x10]) {
    case 0:
        if (mode == 0 && func_80020458(p) == 0) {
            goto reset;
        }
        if (mode == 3 && func_80020464(p) == 0) {
            goto reset;
        }
        if (mode == 2 && func_80020458(p) == 0) {
            r = 0;
            if (*(s32 *)(p + 0x24) == 0x1A) {
                switch (*(u32 *)(p + 0x28)) {
                case 0:
                case 1:
                case 3:
                case 7:
                case 8:
                case 9:
                case 30:
                case 31:
                case 32:
                case 35:
                    r = 1;
                    break;
                }
            }
            if (r == 0) {
                goto reset;
            }
        }
        func_80021BB4(p, a1, a2, mode);
        if (mode == 3) {
            o = func_80015B3C(func_80022700, func_800161C4, 2);
            func_80015EF8(o);
            *(s32 *)(o + 0x18) = func_80019F30(0x6000E, 0x7E);
            *(s16 *)(o + 0x46) = 0x98;
            v30 = *(u32 *)(o + 0x30);
            *(s16 *)(o + 0x4E) = 4;
            v38 = *(u32 *)(o + 0x38) | 1;
            *(u32 *)(o + 0x38) = v38;
            *(u32 *)(o + 0x30) = (v30 & ~0x30) | 0x20;
            *(u32 *)(o + 0x38) = (v38 | 0x40) & ~0x30;
        }
        p[0x10]++;
        break;
    reset:
        *(s32 *)(p + 0x14) = 0;
        *(s32 *)(p + 0x24) = 0;
        *(s32 *)(p + 0x28) = 0;
        p[0x12] = 0;
        return 1;
    case 1:
        p[0x12] = 1;
        t = *(u16 *)(p + 0x1E);
        *(s16 *)(p + 0x1C) = t * 3;
        if (t == 0) {
            p[0x10]++;
            break;
        }
        if (D_8008ED68[0x103] < 2) {
            *(u16 *)(p + 0x1E) = t - 1;
        } else {
            *(u16 *)(p + 0x1E) = t - D_8008ED68[0x103];
        }
        break;
    case 2:
        func_8001E388();
        *(s32 *)(p + 0x20) = func_8001E284();
        func_8001E2BC(*(s32 *)(p + 0x20), *(s32 *)(p + 0x14), -0x50, 0x38, 0, 2);
        *(s16 *)(p + 0x1E) = 0;
        p[0x10]++;
        break;
    case 3:
        func_80021EA8(p, a1, a2, mode);
        break;
    case 4:
        p[0x12] = 1;
        t = *(u16 *)(p + 0x1E);
        *(s16 *)(p + 0x1C) = t * 3;
        if (t >= 0x20) {
            p[0x10]++;
            break;
        }
        if (D_8008ED68[0x103] < 2) {
            *(u16 *)(p + 0x1E) = *(u16 *)(p + 0x1E) + 1;
        } else {
            *(u16 *)(p + 0x1E) = *(u16 *)(p + 0x1E) + D_8008ED68[0x103];
        }
        break;
    case 5:
        ret = 1;
        *(s32 *)(p + 0x14) = 0;
        *(s32 *)(p + 0x24) = 0;
        *(s32 *)(p + 0x28) = 0;
        p[0x12] = 0;
        break;
    }
    if (p[0x12] != 0 && mode != 3) {
        func_800158C4(*(s16 *)(p + 0x1C));
    }
    return ret;
}
