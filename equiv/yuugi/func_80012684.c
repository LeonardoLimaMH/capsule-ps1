#include "common.h"

extern u8 D_8008ED68[];

void func_80012684(s16 value) {
    *(s16 *)(D_8008ED68 + 0xEC) = value;
    *(s16 *)(D_8008ED68 + 0xEE) = 0;
}
