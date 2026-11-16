#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;


s16 func_800D10A0(u8 *arg0, s16 arg1) {
    extern u16 *D_80118C1C[];
    typedef struct { u8 b[7]; } Slot7;
    s16 ret = 0;
    s32 i;

    if (arg1 > 4000) {
        for (i = 0; i < 5; i++) {
            ret += D_80118C1C[0][8] * ((Slot7 *)arg0)[i].b[0x12];
        }
    } else if (arg1 < -4000) {
        for (i = 0; i < 5; i++) {
            ret -= D_80118C1C[0][8] * ((Slot7 *)arg0)[i].b[0x3C];
        }
    }
    return ret;
}

#include "ghidra.h"

typedef struct {
    u32 pad0 : 15;
    u32 a : 2;
    u32 b : 4;
    u32 pad1 : 11;
} Flags76D8;

