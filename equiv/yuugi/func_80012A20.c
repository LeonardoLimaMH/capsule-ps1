#include "common.h"

extern u8 D_8008ED68[];

s32 func_80012A20(u8 *p, s32 type, s16 a2, s16 a3) {
    u8 *e = D_8008ED68 + 0x158;
    s32 i;

    for (i = 0; i < 80; i++, e += 12) {
        if (*(u16 *)(e + 6) == 0) {
            *(u8 **)e = p;
            *(u16 *)(e + 6) = type;
            *(u16 *)(e + 4) = p[0];
            if ((u16)(type - 2) < 2) {
                *(s16 *)(e + 8) = a2;
                *(s16 *)(e + 0xA) = a3;
            }
            return 1;
        }
    }
    return 0;
}
