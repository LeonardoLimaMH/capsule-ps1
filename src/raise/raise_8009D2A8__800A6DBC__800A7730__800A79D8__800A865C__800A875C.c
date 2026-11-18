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

extern u16 D_800EC368[][17];

typedef struct {
    u8 unk0[0x12];
    u16 count;
    s16 ids[1];
    u8 unk16[0xBA];
    u16 vals[16];
    u8 unkF0[0xB8];
} Ent80091618_A875C;

void func_800A875C(s32 a0) {
    s16 t;
    for (t = 0; t < ((Ent80091618_A875C *)D_80091618)[(u16)a0].count; t++) {
        u8 *p = (u8 *)((Ent80091618_A875C *)D_80091618 + (u16)a0);
        u16 *v = (u16 *)((u8 *)D_80091618 + 0xD0 + (u16)a0 * 0x1A8);
        u16 *T = D_800EC368[((Ent80091618_A875C *)p)->ids[t]];
        s16 i;
        for (i = 1; i < 17; i++, v++) {
            s16 x = *v;
            x += T[i];
            if (i >= 2) {
                x = (x < 0) ? 0 : ((x > 0xFF) ? 0xFF : x);
            }
            if (i >= 13) {
                x = (x < 0) ? 0 : ((x > 100) ? 100 : x);
            }
            *v = x;
        }
    }
}

