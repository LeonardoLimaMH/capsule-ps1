#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;


#include "ghidra.h"

s32 func_800D3128(s32 mode, s32 d, u32 *px, s32 *py) {
    extern s32 D_80118C18[];
    u32 cell;
    s32 n;

    switch (mode) {
    case 0:
        *py = *py - d;
        break;
    case 1:
        *px = *px - d;
        *py = *py - d;
        break;
    case 2:
        *px = *px - d;
        break;
    case 3:
        *px = *px - d;
        *py = *py + d;
        break;
    case 4:
        *py = *py + d;
        break;
    case 5:
        *px = *px + d;
        *py = *py + d;
        break;
    case 6:
        *px = *px + d;
        break;
    case 7:
        *px = *px + d;
        *py = *py - d;
        break;
    }
    if (*px < 13) {
        if (*py >= 0) {
            if (*py < 13) {
                cell = *(u32 *)(D_80118C18[0] + *px * 0x34 + *py * 4);
                n = (cell >> 6) & 0x1FFF;
                if (n == 0) {
                    return 2;
                }
                if ((s32)(cell & 0x3F) >= 2) {
                    return n > 2;
                }
            }
        }
    }
    return 2;
}

typedef struct {
    u32 pad0 : 15;
    u32 a : 2;
    u32 b : 4;
    u32 pad1 : 11;
} Flags76D8;

