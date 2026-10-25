#include "common.h"

extern u8 D_8008ED68[];

s32 func_8001F160(void) {
    s32 r = func_8001A998(D_8008ED68 + 0x96C, 0x18);

    *(s32 *)(D_8008ED68 + 0x988) = 0;
    *(s32 *)(D_8008ED68 + 0x98C) = 0;
    *(s16 *)(D_8008ED68 + 0x986) = 0;
    *(s16 *)(D_8008ED68 + 0x984) = 0;
    *(s16 *)(D_8008ED68 + 0x994) = 0;
    return r;
}
