#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;


s32 func_800CFC9C(s32 arg0) {
    extern u8 D_8008ED68[];
    extern u16 D_80118C18[];
    u8 *p = D_8008ED68;
    s32 i;

    switch (*(u16 *)(p + 0xEC)) {
    case 0:
        func_800CF2C8(arg0 & 0xFF);
        return 1;
    case 1:
        func_800CF450();
        return 1;
    case 2:
        for (i = 0; i < (u16)(D_80118C18[4] / 10); i++) {
            if (func_800CF960() == 0) {
                u8 *q = D_8008ED68;
                *(u16 *)(q + 0xEC) += 1;
                break;
            }
        }
        {
            u8 *r = D_8008ED68;
            if (*(u32 *)(r + 0xC4) < 0x1A0) {
                D_80118C18[4] += 1;
            }
            if (*(u32 *)(r + 0xC4) > 0x200) {
                D_80118C18[4] -= 10;
            }
        }
        return 1;
    case 3:
        *(u16 *)(p + 0xEC) = 0;
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

