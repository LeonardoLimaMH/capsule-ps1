#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;


u32 func_800D2340(u32 arg0) {
    extern u8 D_80085994[];
    extern D63940_t D_80063940[];
    u8 *q = D_80085994 + ((arg0 & 0xFF) >> 7) * 0x2E8;
    u8 *p = q + (arg0 & 0x7F) * 0x7C;
    if (p[0] == 0x63) {
        switch (*(s16 *)(*(u8 **)(p + 0x70) + 0x64)) {
        case 0:
            return 1;
        case -2:
            return 0;
        case -1:
            return 2;
        default:
            return 1;
        }
    }
    return (D_80063940[p[0]].unk8 >> 12) & 3;
}

#include "ghidra.h"

typedef struct {
    u32 pad0 : 15;
    u32 a : 2;
    u32 b : 4;
    u32 pad1 : 11;
} Flags76D8;

