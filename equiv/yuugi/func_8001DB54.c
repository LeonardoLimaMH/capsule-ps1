#include "common.h"

extern u8 D_8008ED68[];

void func_8001DB54(void) {
    *(u8 **)(D_8008ED68 + 0x938) = D_8008ED68 + 0x538;
}
