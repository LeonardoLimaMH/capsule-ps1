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

void func_800A8AE0(u16 a0, s32 arg1, s32 a2) {
    extern u8 D_800ECBEC[];
    s16 *e = (s16 *)(D_800916E8 + a0 * 0x1A8);
    s16 i = 1;
    s16 *q = (s16 *)(D_800916E8 - 0xD0 + a0 * 0x1A8);
    register u32 a1 asm("a1") = (u16)arg1;
    register u8 *base asm("v0") = D_800ECBEC;
    u8 *table = base;
    for (i = 1; i < 17; i++, e++) {
        register s16 v asm("a0") = *e;
        if (i != 16 || q[0xEE / 2] != 0) {
            register s32 offset asm("v0") = a1 << 4;
            register s32 value asm("v0");
            u8 *row;
            register s32 product asm("t3");
            offset += a1;
            offset <<= 1;
            offset += (s32)table;
            row = (u8 *)offset;
            value = *(u16 *)(row + i * 2);
            product = value * a2;
            v += product;
        }
        if (i >= 2) {
            register s16 r asm("v1") = (v < 0) ? 0 : ((v > 0xFF) ? 0xFF : v);
            v = r;
        }
        if (i >= 13) {
            register s16 r asm("v1") = (v < 0) ? 0 : ((v > 100) ? 100 : v);
            v = r;
        }
        *e = v;
    }
}

