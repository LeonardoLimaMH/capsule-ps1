#include "common.h"

extern u16 D_800F1A58[];
extern void func_800C5B30(s32, s32, s32);
extern void func_800CB370(s32, s32);
extern void func_800C92B0(s32);
extern void func_800E6158(s32, s32);
extern void func_800D4CC4(s32);
s32 func_800C9478(s32 a0, s32 a1) {
    typedef struct {
        u8 _p0[0x2BA];
        s16 f_2BA;
        u8 *f_2BC;
        u8 _p2C0[0x4DC];
    } S_80100F38;
    extern S_80100F38 D_80100F38[];
    s32 k = func_800B1260(a1);
    S_80100F38 *p = &D_80100F38[(u16)k];
    u8 *pc = p->f_2BC;
    u16 kk;

    p->f_2BC = pc + 1;
    switch (pc[1]) {
    case 0:
        func_800C5B30(a1, 0, p->f_2BA - 8);
        func_800CB370(a1, p->f_2BA);
        func_800C92B0(a1);
        break;
    case 1:
        func_800C5B30(a1, 1, p->f_2BA - 8);
        break;
    }
    kk = k;
    func_800E6158(kk, (u16)p->f_2BA);
    D_800F1A58[kk] = 0;
    func_800D4CC4(a1);
    return (s32)(p->f_2BC += 1);
}
