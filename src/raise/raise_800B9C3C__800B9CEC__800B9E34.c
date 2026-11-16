#include "common.h"

s32 func_800B9E34(void) {
    extern u16 D_8006AF80[];
    extern u8 D_80091618[];
    extern s32 func_800ACDE0(void);
    extern s32 func_800E0DF8(void);
    typedef struct {
        u8 _p0[0x10];
        u16 f10;
        u8 _p12[0x86 - 0x12];
        u16 f86;
        u16 _p88;
        u16 f8a;
        u8 _p8c[0x1A8 - 0x8C];
    } RSlot;
    if (*(volatile u16 *)D_8006AF80 != 0xFFFF) {
        RSlot *r = (RSlot *)D_80091618;
        RSlot *s = &r[D_8006AF80[0]];
        if (s->f10 == 0xFFFF || s->f8a == 0xFFFF || s->f86 > 2) {
            return 0;
        }
        if (func_800ACDE0() == 1) {
            return 0;
        }
        return func_800E0DF8() != 1;
    }
    return 0;
}
