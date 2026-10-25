/* arg0: 0x80150000 */
/* rand-u16: 0x80150000 64 0x10,0x22,0x8140,0xFFF0,0xFFF0,0xFFEE */
#include "common.h"

extern u8 D_8008ED68[];
extern void func_8001EA24(s16, s16, s32, s32, s32, s32);

#define SCRW (*(s32 *)(D_8008ED68 + 0x108))
#define SCRH (*(s32 *)(D_8008ED68 + 0x10C))

s32 func_800A7680(u16 *s) {
    s32 x = 0, y = 0;
    u16 c;
    for (;; s++) {
        c = *s;
        if (c == 0xFFEE) return 0xFFF0;
        if (c == 0xFFF0) {
            x = 0;
            y += 0x10;
            continue;
        }
        func_8001EA24(-0x90 + SCRW / 2 + x, y + SCRH / 2, 0, c, 0, 3);
        x += 0xE;
    }
}
