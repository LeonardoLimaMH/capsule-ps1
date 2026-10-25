#include "common.h"

extern u8 D_8008ED68[];
extern void func_8001EA24(s16, s16, s32, s32, s32, s32);

#define SCRW (*(s32 *)(D_8008ED68 + 0x108))
#define SCRH (*(s32 *)(D_8008ED68 + 0x10C))

s32 func_800A7754(u16 *s, u8 sel) {
    u32 i;
    s32 x = 0, y = 0x40;
    u16 c;
    for (i = 0; i < 0x20; x += 0xE) {
        c = *s;
        if (i == sel) {
            x = 0;
            y += 0x10;
        }
        s++;
        i++;
        func_8001EA24(-0x80 + SCRW / 2 + x, y + SCRH / 2, 3, c, 0, 3);
    }
    return 0;
}
