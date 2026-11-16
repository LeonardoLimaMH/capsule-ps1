#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;

void func_800CBA14(u8 *task) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    u8 *base = D_80085428;
    u8 *frames = D_8008ED68;
    u32 multiplier = *(u32 *)(task + 0x80);
    u32 count = *(u32 *)(task + 0x3C);
    u32 product;
    u32 next;

    if (frames[0x103] >= 2) {
        next = count + frames[0x103];
    } else {
        next = count + 1;
    }
    product = multiplier * next;
    *(u32 *)(task + 0x3C) = next;
    *(u16 *)(base + 0xCEC) = product;
    if (product > 0xFFFF) {
        base[0xCF0] = 1;
        func_800CBA04(base + 0x5D0);
        func_800185F8(task);
    }
}


#include "ghidra.h"

typedef struct {
    u32 pad0 : 15;
    u32 a : 2;
    u32 b : 4;
    u32 pad1 : 11;
} Flags76D8;

