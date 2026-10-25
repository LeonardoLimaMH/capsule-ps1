#include "common.h"

extern u8 D_8008ED68[];

void func_8001DB68(void) {
    *(u8 **)(D_8008ED68 + 0x938) = D_8008ED68 + 0x538;
    *(s32 *)(D_8008ED68 + 0x93C) = 0;
}
