#include "common.h"

extern u8 D_8008ED68[];

u8 *func_80012544(s16 value) {
    *(s16 *)(D_8008ED68 + 0xDC) = value;
    *(s16 *)(D_8008ED68 + 0xE0) = 0;
    *(s16 *)(D_8008ED68 + 0xDE) = 0;
    *(s16 *)(D_8008ED68 + 0xE2) = 0;
    *(s16 *)(D_8008ED68 + 0xE4) = 0;
    *(s16 *)(D_8008ED68 + 0xE6) = 0;
    *(s16 *)(D_8008ED68 + 0xE8) = 0;
    *(s16 *)(D_8008ED68 + 0xEA) = 0;
    *(s16 *)(D_8008ED68 + 0xEC) = 0;
    *(s16 *)(D_8008ED68 + 0xEE) = 0;
    return D_8008ED68;
}
