#include "common.h"

u16 func_800CB370(s32 a0, s32 a1) {
    struct S { u8 _p0[0x134]; u16 last; u16 cnt[7]; u16 val[7]; u8 _p1[0x1A8 - 0x152]; };
    struct E { u8 _p0[0x136]; u16 cnt; u8 _p1[0xC]; u16 val; };
    extern u8 D_80091618[];
    extern s32 func_800B1260(s32);
    s32 i = a1 - 8;
    struct S *p = &((struct S *)D_80091618)[func_800B1260(a0) & 0xFFFF];
    u16 l = p->last;
    struct E *e = (struct E *)((i << 1) + (u32)p);
    e->cnt++;
    if ((s16)l == -1) {
        p->last = a1;
        e->val = 1;
    } else if ((s16)l == (s16)a1) {
        e->val++;
    } else {
        p->val[(s16)l - 8] = 0;
        p->last = a1;
        e->val = 1;
    }
    return p->val[i];
}
