#include "common.h"

extern u8 D_8008ED68[];

void func_8001611C(u32 value) {
    u8 *g = D_8008ED68;

    if (value < 0x2001) {
        *(u32 *)(g + 0xA6C) = value;
        *(u32 *)(g + 0xA70) = value;
        *(u32 *)(g + 0xA74) = value;
    }
}
