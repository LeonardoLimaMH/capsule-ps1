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
s32 func_800A8484(u16 a0) {
    S_80091618_A8484 *base = D_80091618;
    S_80091618_A8484 *q = &base[a0];
    s16 old_bc;
    s16 sum;

    old_bc = q->unkBC;
    sum = q->unkD2 + q->unkDA;
    sum += q->unkDC;
    sum += q->unkDE;
    sum += q->unkE0;
    sum += q->unkD8;
    q->unkBC = sum / 367 + 1;
    base[a0].unkBC = (base[a0].unkBC < 1) ? 1 : ((base[a0].unkBC > 5) ? 5 : base[a0].unkBC);

    if (func_800D1548() != 0) {
        return 0;
    }
    if (func_800E16AC(a0) == 1) {
        return 0;
    }
    if (D_80091618[*D_8006AF80].unk8A != 0xFFFF) {
        if (a0 != *D_8006AF80 && a0 != D_80091618[*D_8006AF80].unk8A) {
            return 0;
        }
    } else {
        if (a0 != *D_8006AF80) {
            return 0;
        }
    }
    if (old_bc > D_80091618[a0].unkBC) {
        func_800D1CC4(a0, 6, 1, 0);
        return -1;
    } else if (old_bc < D_80091618[a0].unkBC) {
        func_800D1CC4(a0, 5, 1, 0);
        return 1;
    } else {
        return 0;
    }
}

