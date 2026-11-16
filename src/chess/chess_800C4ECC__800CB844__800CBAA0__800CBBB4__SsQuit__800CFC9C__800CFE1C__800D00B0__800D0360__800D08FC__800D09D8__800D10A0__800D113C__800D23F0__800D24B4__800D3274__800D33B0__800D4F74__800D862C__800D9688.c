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

s32 func_800D9688(s32 arg0) {
    extern u8 D_80085428[];
    extern u8 D_80119660[];
    extern u8 D_8011970A[];
    u32 s1;
    u32 a0;
    u32 r;
    u8 *s0;
    u8 *p;
    register u8 *q asm("a1");
    register u8 b1 asm("a1");
    register u8 b2 asm("a2");
    register u8 *base asm("t0");

    s1 = arg0 & 0xFF;
    a0 = func_800D7328(s1, D_80119660) & 0xFF;
    if (a0 != 0) {
        r = func_800202A4(a0);
        func_800D90C0(s1);
        s0 = D_80119660 + (r & 0xFF);
        func_800D943C(s1, *s0);
        base = D_80085428;
        b1 = *s0;
        p = (((b1 & 0x7F) - 1) * 0x7C) + ((b1 >> 7) * 0x2E8) + base;
        D_8011970A[0] = p[0x5FD];
        b2 = *s0;
        q = (((b2 & 0x7F) - 1) * 0x7C) + ((b2 >> 7) * 0x2E8) + base;
        D_8011970A[1] = q[0x5FE];
        return 1;
    }
    return 0;
}

