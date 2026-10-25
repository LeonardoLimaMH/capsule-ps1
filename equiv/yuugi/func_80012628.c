#include "common.h"

extern u8 D_8008ED68[];

u8 *func_80012628(void) {
    u16 v = *(u16 *)(D_8008ED68 + 0xE8);

    *(s16 *)(D_8008ED68 + 0xEA) = 0;
    *(s16 *)(D_8008ED68 + 0xEC) = 0;
    *(s16 *)(D_8008ED68 + 0xEE) = 0;
    *(u16 *)(D_8008ED68 + 0xE8) = v + 1;
    return D_8008ED68;
}
