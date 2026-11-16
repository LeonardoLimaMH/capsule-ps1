#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;


void func_800CF220(u8 *arg0, s32 arg1, s32 arg2, u32 arg3) {
    s32 u = 1;
    s32 v = 0x21;
    s32 h;
    s32 frame = (arg3 / 30) & 3;

    if (arg1 == 6) {
        v = 1;
    }
    h = 0x1E;
    if (arg1 == 6) {
        h = 0x0E;
    }
    if (arg2 != 0) {
        u = 0x41;
    }
    if (frame >= 2) {
        u += 0x20;
    }
    if (frame & 1) {
        v += h;
    }
    arg0[0x0C] = u;
    arg0[0x0D] = v;
    arg0[0x14] = u + 0x1E;
    arg0[0x15] = v;
    arg0[0x1C] = u;
    arg0[0x1D] = v + h;
    arg0[0x24] = u + 0x1E;
    arg0[0x25] = v + h;
}

#include "ghidra.h"

typedef struct {
    u32 pad0 : 15;
    u32 a : 2;
    u32 b : 4;
    u32 pad1 : 11;
} Flags76D8;

