#include "common.h"

extern u8 D_800922F0[];

/* fila de comandos de 16 bytes; o índice é relido a cada campo, como no original */
#define SLOT (D_800922F0 + *(s16 *)(D_800922F0 + 0x110) * 16)

s32 func_80036DB0(u8 *s) {
    if (*(s16 *)(D_800922F0 + 0x110) >= 16) {
        return 0;
    }
    SLOT[0x10] = s[0];
    SLOT[0x11] = s[1];
    *(u16 *)(SLOT + 0x12) = *(u16 *)(s + 2);
    *(s32 *)(SLOT + 0x14) = *(s32 *)(s + 4);
    *(s32 *)(SLOT + 0x18) = *(s32 *)(s + 8);
    *(s32 *)(SLOT + 0x1C) = *(s32 *)(s + 0xC);
    (*(u16 *)(D_800922F0 + 0x110))++;
    return 1;
}
