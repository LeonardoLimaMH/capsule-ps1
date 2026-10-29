#include "common.h"
#include "yuugi.h"

extern u8 D_8008F7E0[];

u8 func_80019C20(void) {
    s32 cursor, rounded;
    u32 base;
    s32 offset;

    base = (u32)D_8008F7E0;
    cursor = *D_8008F7E0 + 0x1F;
    rounded = cursor;
    if (cursor < 0) {
        rounded = *D_8008F7E0 + 0x3E;
    }
    offset = (cursor - (rounded & 0x1E0)) << 5;
    return *((u8 *)(offset + base) + 4);
}
