#include "common.h"

extern u16 D_800F1A58[];
extern void func_800C5B30(s32, s32, s32);
extern void func_800CB370(s32, s32);
extern void func_800C92B0(s32);
extern void func_800E6158(s32, s32);
extern void func_800D4CC4(s32);

s32 func_800CA818(s32 a0, s32 a1) {
    typedef struct {
        u8 pad[0x20];
        u32 unk20;
        u8 pad2[0x18];
    } Entry3C;
    extern u8 D_80100F38[];
    extern u8 D_80091618[];
    extern Entry3C D_80063940[];
    extern s32 D_800EE670[];
    extern s32 func_800B1260(s32);
    extern s32 func_80019F30(s32, s32);
    extern void func_80015CD0(void *, s32, s32);
    register u8 *base asm("v1");
    s32 new_var;
    u16 k;
    u8 *p;
    u8 *o;
    u16 id;
    u8 *slot;

    k = func_800B1260(a1);
    base = D_80091618;
    id = *(u16 *)(base + k * 0x1A8);
    p = D_80100F38 + k * 0x79C;
    *(s32 *)(p + 0x2BC) += 1;

    if (((D_80063940[id].unk20 >> 15) & 0xF) == 1) {
        slot = p + *(s16 *)(p + 0x2BA) * 4;
        o = *(u8 **)(slot + 0x258);
        func_80015CD0(o + 0x14, func_80019F30(D_800EE670[0] | 0x70000, D_800EE670[6] + 0xD), 0);
        *(s32 *)(o + 0x7C) = 0xD;
        new_var = *(s32 *)(o + 0x30) & ~0x1C0;
        *(s16 *)(o + 0x66) = 0;
        *(s32 *)(o + 0x30) = (new_var & ~0x30) | 0x10;
    }
    return *(s32 *)(p + 0x2BC);
}
