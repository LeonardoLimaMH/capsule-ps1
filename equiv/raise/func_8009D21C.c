#include "common.h"

extern u8 D_8008ED68[];

void func_8009D21C(void) {
    func_80012A20(func_80019F30(0x2000E, 0x2C), 1, 0, 0);
    *(s32 *)(D_8008ED68 + 0x9B8) = func_8009D11C();
}
