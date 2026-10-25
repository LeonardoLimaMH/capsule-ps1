#include "common.h"

extern u8 D_80091618[];
extern u8 D_800F2D30[];

/* o laço sempre olha a mesma entrada (a de índice a), como no original */
s32 func_80027E04(s32 a) {
    u8 *e;
    u16 key;
    u16 i;

    a &= 0xFFFF;
    e = D_80091618 + a * 0x1A8;
    key = *(u16 *)e;
    for (i = 0; i < 6; i++) {
        if (i == a || *(u16 *)(e + 0x10) == 0xFFFF) {
            continue;
        }
        if (*(u16 *)e == key) {
            break;
        }
    }
    if (i == 6) {
        D_800F2D30[key] = 0xFF;
        return 0;
    }
    return 1;
}
