#include "common.h"

extern u8 D_8008ED68[];

void func_8001264C(s16 value) {
    *(s16 *)(D_8008ED68 + 0xE8) = value;
    *(s16 *)(D_8008ED68 + 0xEA) = 0;
    *(s16 *)(D_8008ED68 + 0xEC) = 0;
    *(s16 *)(D_8008ED68 + 0xEE) = 0;
}
