#include "common.h"

extern u8 D_80072F28[];
extern void (*D_80094C0C)();
extern s32 D_80072F24;

typedef struct {
    u8 b[4];
} Blk4;

void func_80045128(s32 intr, s32 a1) {
    u8 *s = D_80072F28;
    u8 c;
    s32 v;

    if ((intr & 0xFF) == 2) {
        c = s[0];
        if (c == 0xE) {
            if ((s[0x29] ^ s[1]) & 0x80) {
                *(s32 *)(s + 0x20) = 0xF;
                *(s32 *)(s + 0x1C) = 2;
                *(s32 *)(s + 0x3C) = 3;
            } else {
                *(s32 *)(s + 0x1C) = 1;
                *(s32 *)(s + 0x20) = 0xB;
            }
            s[0x29] = s[1];
        } else {
            if (c == 3) {
                v = 0x10;
            } else if (c == 6 || c == 0x1B) {
                v = 0x11;
            } else {
                switch (s[0]) {
                case 2:
                    *(Blk4 *)(s + 0x2A) = *(Blk4 *)(s + 1);
                    break;
                case 21:
                case 22:
                    s[0x2E] = s[0];
                    break;
                case 3:
                case 6:
                case 27:
                    s[0x2F] = s[0];
                    break;
                }
                *(s32 *)(s + 0x1C) = 1;
                *(s32 *)(s + 0x20) = 0xB;
                goto done;
            }
            *(s32 *)(s + 0x20) = v;
            *(s32 *)(s + 0x1C) = 2;
            s[0x2F] = c;
            *(s32 *)(s + 0x48) = 0x4B0;
        }
    } else {
        if (s[0x14] & 0x10) {
            *(s32 *)(s + 0x1C) = 2;
            v = 0xC;
        } else {
            *(s32 *)(s + 0x1C) = 1;
            v = 0xB;
        }
        *(s32 *)(s + 0x20) = v;
    }
done:
    if (D_80094C0C != 0 && D_80072F24 != 0) {
        D_80094C0C(intr & 0xFF, a1);
    }
}
