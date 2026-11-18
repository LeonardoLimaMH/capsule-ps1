#include "common.h"

extern u8 D_800916E8[];
extern s16 D_800EC588[][17];
extern s16 D_800ECB84[][17];

extern s32 D_8008543C[], D_8008ED80[];
extern s16 D_800ED8EA, D_800ED8EC;
void func_80013920(void *);
void func_800A847C(void);
typedef struct {
    u8 pad0[0x8A];
    u16 unk8A;
    u8 pad8C[0x30];
    s16 unkBC;
    u8 padBE[0x14];
    s16 unkD2;
    u8 padD4[0x4];
    s16 unkD8;
    s16 unkDA;
    s16 unkDC;
    s16 unkDE;
    s16 unkE0;
    u8 padE2[0xC6];
} S_80091618_A8484;
extern S_80091618_A8484 D_80091618[];
extern u16 D_8006AF80[];
s32 func_800D1548(void);
s32 func_800E16AC(s32);
void func_800D1CC4(s32, s32, s32, s32);

void func_800A865C(u16 a0) {
    extern s16 D_800EC278[][17];
    s16 *e = (s16 *)(D_800916E8 + a0 * 0x1A8);
    s16 i = 1;
    register s16 (*tbl)[17] asm("v1") = D_800EC278;
    s16 *t = tbl[*(s16 *)(D_800916E8 + a0 * 0x1A8 - 0xC0)];
    for (; i < 17; i++, e++) {
        s16 v = *e;
        v += t[i];
        if (i >= 2) {
            v = (v < 0) ? 0 : ((v > 0xFF) ? 0xFF : v);
        }
        if (i >= 13) {
            v = (v < 0) ? 0 : ((v > 100) ? 100 : v);
        }
        *e = v;
    }
}
