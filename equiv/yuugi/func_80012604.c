#include "common.h"

extern u8 D_8008ED68[];

void func_80012604(s16 value) {
    *(s16 *)(D_8008ED68 + 0xE4) = value;
    *(s16 *)(D_8008ED68 + 0xE6) = 0;
    *(s16 *)(D_8008ED68 + 0xE8) = 0;
    *(s16 *)(D_8008ED68 + 0xEA) = 0;
    *(s16 *)(D_8008ED68 + 0xEC) = 0;
    *(s16 *)(D_8008ED68 + 0xEE) = 0;
}
