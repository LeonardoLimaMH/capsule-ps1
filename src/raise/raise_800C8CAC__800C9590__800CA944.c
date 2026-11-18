#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC__800C9590__800CA944", func_800CA944);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC__800C9590__800CA944", func_800CAB94);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC__800C9590__800CA944", func_800CAF40);

void func_800CB29C(void) {

}

void func_800CB2A4(void) {

}

s32 func_800CB2AC(void) {
    return 0;
}

u16 func_800CB2B4(s32 a0, s32 a1) {
    struct S { u8 _p0[0x112]; u16 last; u16 cnt[8]; u16 val[8]; u8 _p1[0x74]; };
    struct E { u8 _p0[0x114]; u16 cnt; u8 _p1[0xE]; u16 val; };
    extern u8 D_80091618[];
    extern s32 func_800B1260(s32);
    struct S *p = &((struct S *)D_80091618)[func_800B1260(a0) & 0xFFFF];
    u16 l = p->last;
    struct E *e = (struct E *)((a1 << 1) + (u32)p);
    e->cnt++;
    if ((s16)l == -1) {
        p->last = a1;
        e->val = 1;
    } else if ((s16)l == (s16)a1) {
        e->val++;
    } else {
        p->val[(s16)l] = 0;
        p->last = a1;
        e->val = 1;
    }
    return p->val[a1];
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC__800C9590__800CA944", func_800CB370);
