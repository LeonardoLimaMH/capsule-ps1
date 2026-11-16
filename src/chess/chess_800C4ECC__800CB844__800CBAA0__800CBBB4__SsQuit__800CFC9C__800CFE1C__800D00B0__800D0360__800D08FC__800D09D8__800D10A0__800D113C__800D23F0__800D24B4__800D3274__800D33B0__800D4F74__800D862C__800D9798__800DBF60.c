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

s32 func_800DBF60(s32 arg0) {
    extern u8 D_80085428[];
    extern u8 D_80118C18[];
    extern u8 D_80119660[];
    extern u8 D_8011970A[];
    register u8 *base asm("v0") = D_80118C18;
    u32 s1;
    u8 *s0;
    u8 *a1;
    u8 a2;

    s1 = arg0 & 0xFF;
    s0 = (s1 >> 7) + base;
    if (s0[0x39E] != 0) {
        if ((func_800D7328(s1, D_80119660) & 0xFF) != 0 &&
            func_800202A4(0x64) < s0[0x39E] * 0x28) {
            register u8 *d80085428 asm("a3");
            func_800D90C0(s1);
            d80085428 = D_80085428;
            s0[0x5BA]--;
            a2 = *D_80119660;
            a1 = (((a2 & 0x7F) - 1) * 0x7C) + ((a2 >> 7) * 0x2E8) + d80085428;
            D_8011970A[0] = a1[0x5FD];
            D_8011970A[1] = a1[0x5FE];
            return 1;
        }
    }
    return 0;
}

