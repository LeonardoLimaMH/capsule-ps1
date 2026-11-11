#include "common.h"

extern u16 D_8006AF80[];
extern u8 D_80091618[];
s32 func_800E16AC();
s32 func_800ACDE0();
s32 func_800E0DF8();

extern s32 D_800FDE08[];
extern s32 D_800FAE10[];
s32 func_800B1260();
s32 func_800E2D7C();
void func_800E355C();
s32 func_800E3090();
void func_800E4158();
void func_800BA3A8(s32 a0) {
    typedef struct { u8 _p0[0x178]; s32 f178; s32 f17c; u8 _p180[0x1A8 - 0x180]; } RSlot;
    s32 i = a0 != 1;
    u32 id = (u16)func_800B1260(a0);
    if ((D_800FDE08[i] = func_800E2D7C(a0)) != 0) {
        func_800E355C(a0);
        {
            RSlot *s = (RSlot *)D_80091618;
            register RSlot *p asm("v1") = &s[id];
            p->f178 = D_800FDE08[i];
        }
    }
    if ((D_800FAE10[i] = func_800E3090(a0)) != 0) {
        func_800E4158(a0);
        {
            RSlot *s = (RSlot *)D_80091618;
            register RSlot *p asm("v1") = &s[id];
            p->f17c = D_800FAE10[i];
        }
    }
}

extern u16 D_8008EE44[];
extern s32 D_800ED890[];
extern u8 D_80063940[];
