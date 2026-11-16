#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;


s32 func_800CFB1C(void) {
    typedef struct {
        u8 pad0[0xC4];
        u32 unkC4;
        u8 pad1[0x24];
        u16 state;
    } S;
    extern S D_8008ED68[];
    extern u16 D_80118C18[];
    s32 i;
    s32 t;

    switch (D_8008ED68[0].state) {
    case 0:
        func_800CF2C8(0);
        return 1;
    case 1:
        func_800CF450(D_8008ED68);
        return 1;
    next:
        t = D_8008ED68[0].state + 1;
        D_8008ED68[0].state = t;
        goto done;
    case 2:
        for (i = 0; i < (u16)(D_80118C18[4] / 10);) {
            if (func_800CF960() == 0) {
                goto next;
            }
            i++;
        }
    done:
        if (D_8008ED68[0].unkC4 < 0x1A0) {
            D_80118C18[4] += 1;
        }
        if (D_8008ED68[0].unkC4 > 0x200) {
            D_80118C18[4] -= 10;
        }
        return 1;
    case 3:
        D_8008ED68[0].state = 0;
        return 0;
    default:
        return 0;
    }
}

#include "ghidra.h"

typedef struct {
    u32 pad0 : 15;
    u32 a : 2;
    u32 b : 4;
    u32 pad1 : 11;
} Flags76D8;

