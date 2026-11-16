#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;


#include "ghidra.h"

typedef struct {
    u32 pad0 : 15;
    u32 a : 2;
    u32 b : 4;
    u32 pad1 : 11;
} Flags76D8;

s32 func_800D8580(u8 arg0, u32 arg1) {
    extern u8 D_80085428[];
    u8 *base = D_80085428;
    u8 *p = base + (((arg1 & 0x7F) - 1) * 0x7C + ((arg1 & 0xFF) >> 7) * 0x2E8);
    u8 val = p[0x5F9];
    u32 t;
    u8 r;

    if (val == 0) {
        return 0;
    }
    t = func_800D7B80(arg0 & 0xFF, val);
    if ((t & 0xFF) != 0) {
        r = t;
        if ((t & 0xFF) >= 10) {
            r = 9;
        }
    } else {
        r = 1;
    }
    return r - val;
}

