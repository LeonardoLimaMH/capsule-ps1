#include "common.h"

extern u8 D_8008F7E0[], D_8008ED68[];
extern void func_8001AA70();

#define Q D_8008F7E0
#define ENT (Q + Q[1] * 32)

static s32 full(void) {
    return (Q[1] + 1) % 32 == (Q[0] & 0x1F);
}

static void inc(void) {
    Q[1] = Q[1] + 1;
    if (Q[1] >= 0x20) {
        Q[1] = 0;
    }
}

static void put(u8 c, s32 tag, u32 arg) {
    ENT[4] = c;
    *(s32 *)(ENT + 8) = tag;
    *(u32 *)(ENT + 0xC) = arg;
    ENT[0x23] = 0;
}

s32 func_800190F4(u8 cmd, u32 arg, u8 *ext, s32 tag) {
    if (cmd != 0xFF && cmd != 0xFD && cmd != 0xFE && arg > 0x4AB50) {
        arg = 0x4AB50;
    }
    switch (cmd) {
    case 0:
        if (full()) {
            return -1;
        }
        put(0, tag, 0);
        inc();
        return 1;
    case 2:
    case 0xFD:
    case 0xFE:
    case 0xFF:
        if (full()) {
            return -1;
        }
        put(cmd, tag, arg);
        inc();
        return 1;
    case 6:
        *(s32 *)(D_8008ED68 + 0xF8) = 1;
        if (!full()) {
            put(0, tag, 0);
            inc();
        }
        *(u32 *)(Q + 0x414) = arg;
        if (full()) {
            return -1;
        }
        put(6, tag, arg);
        if ((s32)ext == 1) {
            ENT[0x23] = 0xFF;
        } else if (ext != 0) {
            func_8001AA70(ENT + 4 + 0x10, ext, 0x10);
        }
        inc();
        return 1;
    case 0x15:
        if (!full()) {
            put(2, tag, arg);
            inc();
        }
        if (full()) {
            return -1;
        }
        put(0x15, tag, arg);
        inc();
        return 1;
    }
    return -1;
}
