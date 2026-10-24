#include "common.h"

extern void func_80099480();

void func_80098FB4(u8 *arg0) {
    u8 *obj = (u8 *)func_80020CE4(arg0, func_80099480, *(u16 *)(arg0 + 2) + 1);

    *(s32 *)(obj + 0x3C) = 0;
    *(s32 *)(obj + 0x38) |= 0x40;
}
