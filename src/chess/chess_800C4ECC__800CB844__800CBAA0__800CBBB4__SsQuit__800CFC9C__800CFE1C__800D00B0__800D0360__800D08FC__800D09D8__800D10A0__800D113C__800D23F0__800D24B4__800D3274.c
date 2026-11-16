#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;


#include "ghidra.h"

u8 func_800D3274(u8 dir, u8 *px, u8 *py)
{
    extern s32 D_80118C18[];
    u32 v;
    s32 n;

    switch (dir) {
    case 0:
        *px = *px + 1;
        break;
    case 1:
        *px = *px + 1;
        *py = *py + 1;
        break;
    case 2:
        *py = *py + 1;
        break;
    case 3:
        *px = *px - 1;
        *py = *py + 1;
        break;
    case 4:
        *px = *px - 1;
        break;
    case 5:
        *px = *px - 1;
        *py = *py - 1;
        break;
    case 6:
        *py = *py - 1;
        break;
    case 7:
        *px = *px + 1;
        *py = *py - 1;
        break;
    default:
        return 2;
    }
    if (*px >= 0xd || *py >= 0xd) {
        return 2;
    }
    v = *(u32 *)(D_80118C18[0] + (u32)*px * 0x34 + (u32)*py * 4);
    n = (v >> 6) & 0x1fff;
    if (n == 0) {
        return 2;
    }
    if (n >= 3) {
        return 1;
    }
    return (s32)(v & 0x3f) < 2;
}

typedef struct {
    u32 pad0 : 15;
    u32 a : 2;
    u32 b : 4;
    u32 pad1 : 11;
} Flags76D8;

