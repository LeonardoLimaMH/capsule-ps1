#include "common.h"

typedef struct { u8 pad[0x90]; u16 f90; u8 pad2[0x118]; } Rec_800E0A90;

s16 func_800E0A90(s32 ctx, s32 vec, u8 ***objp);

/* Entrada de 0x44 bytes, com a direção nos três bits baixos de cada slot. */
typedef struct {
    u16 dir : 3;
    u16 pad : 13;
} RaiseSlotB;

typedef struct {
    u32 f0 : 1;
    u32 f1 : 1;
    u32 f2 : 3;
    u32 f3 : 6;
    u32 idx : 6;
    u32 cnt : 6;
    u32 pad : 9;
    RaiseSlotB slots[32];
} RaiseEntB;

extern u8 D_80092008[];
extern u8 D_80092008[];

/* Máscara de flags em +0x798 de cada entrada de D_80100F38 */
typedef struct {
    u32 a : 2;
    u32 b : 1;
    u32 c : 1;
    u32 d : 1;
    u32 e : 1;
    u32 f : 2;
    u32 g : 2;
    u32 h : 2;
    u32 i : 2;
    u32 j : 6;
    u32 k : 6;
    u32 l : 5;
    u32 m : 1;
} Flags_800E0E8C;

void func_800DFB80(s32 unused, u16 idx) {
    RaiseEntB *e = (RaiseEntB *)(D_80092008 + idx * 0x44);
    s16 n;
    s16 i;
    s32 j;
    s32 k;
    RaiseSlotB tmp;

    n = e->idx;
    e->cnt = n;
    e->f3 = 0;
    for (i = 0; i < n / 2; i++) {
        tmp = e->slots[i];
        k = i + 1;
        j = n - k;
        e->slots[i] = e->slots[j];
        e->slots[j] = tmp;
        e->slots[i].dir = (e->slots[i].dir + 4) % 8;
        e->slots[j].dir = (e->slots[j].dir + 4) % 8;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DFB80", func_800DFCA0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DFB80", func_800E01C8);

#include "common.h"

extern u8 D_80100F38[];

void func_800E06A4(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E0A90(ctx, rec + 0x1EC, &obj);

    *(s16 *)(obj + 0x4E) = v;
}

#include "common.h"

extern u8 D_80100F38[];

void func_800E071C(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E0A90(ctx, rec + 0x1EC, &obj);

    *(s16 *)(obj + 0x4E) = v;
}

#include "common.h"

extern u8 D_80100F38[];

void func_800E0794(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E0A90(ctx, rec + 0x1EC, &obj);

    *(s16 *)(obj + 0x4E) = v;
}

#include "ghidra.h"
void func_800E080C(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_800B1260();
  func_800CECEC(param_1,param_2,param_3);
  return;
}

void func_800E085C(s32 arg0) {
    func_800CEF08();
    func_800B1260(arg0);
}

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern void func_800D0730(void *, s32, s32, s32);
INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DFB80", func_800E088C);

void func_800E0A50(void) {
    func_800CF1B4();
}

void func_800E0A70(void) {
    func_800CF2E4();
}
