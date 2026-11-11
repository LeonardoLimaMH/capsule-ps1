#include "common.h"

extern u8 D_80092008[];

/* Entrada de 0x44 bytes de D_80092008 (ver raise_800DEA54__800DEB28__800DEBA0.c). */
typedef struct {
    u16 dir : 3;
    u16 rest : 13;
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

/* Inverte a ordem dos n slots e gira a direção de cada um em 180 graus. */
static inline void RaiseEnt_Reverse(RaiseEntB *e, s16 n) {
    s16 i;
    s32 j;
    s32 k;
    u32 half = (u32)n >> 1;
    RaiseSlotB tmp;

    for (i = 0; i < (s32)half; i++) {
        tmp = e->slots[i];
        k = i + 1;
        j = n - k;
        e->slots[i] = e->slots[j];
        e->slots[j] = tmp;
        e->slots[i].dir = (e->slots[i].dir + 4) % 8;
        e->slots[j].dir = (e->slots[j].dir + 4) % 8;
    }
}

void func_800DFB80(s32 unused, u16 idx) {
    RaiseEntB *e = (RaiseEntB *)(D_80092008 + idx * 0x44);
    s16 n;

    n = e->idx;
    e->cnt = n;
    e->f3 = 0;
    RaiseEnt_Reverse(e, n);
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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DFB80", func_800E088C);

void func_800E0A50(void) {
    func_800CF1B4();
}

void func_800E0A70(void) {
    func_800CF2E4();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DFB80", func_800E0A90);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DFB80", func_800E0C08);

s32 func_800E0D84(void) {
    s32 i;
    s32 k;

    for (i = 1; i >= 0; i--) {
        k = func_800B1260(i) & 0xFFFF;
        if (k != 0xFFFF && func_800E1624(k) == 1) {
            return 1;
        }
    }
    return 0;
}

#include "common.h"

#include "ghidra.h"
typedef struct { u8 pad_0[0x110]; ushort field_110; u8 tail[0x96]; } Record_800E0DF8;
ushort func_800E0DF8(void)

{
    extern u8 D_80091618[];
  uint uVar1;
  int iVar2;
  ushort uVar3;

  uVar3 = 0;
  iVar2 = 1;
  do {
    uVar1 = func_800B1260(iVar2);
    if ((uVar1 & 0xffff) != 0xffff) {
      uVar3 = uVar3 | ((Record_800E0DF8 *)((u32)D_80091618 + ((uVar1 & 0xffff) * 0x1a8)))->field_110;
    }
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar3 & 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DFB80", func_800E0E8C);

#include "common.h"

extern u8 D_80091618[];

s32 func_800E0FB8(s32 idx)
{
  u8 *new_var;
  u8 *rec;
  s32 k;
  idx &= 0xFFFF;
  if (idx == 0xFFFF)
  {
    return 0;
  }
  new_var = D_80091618;
  rec = new_var + (idx * 0x1A8);
  for (k = 0; k < 4; k++)
  {
    if ((*((u16 *) ((rec + 0x62) + (k * 2)))) == 1)
    {
      return 1;
    }
  }

  return 0;
}

typedef struct { u8 pad[0x30]; u16 f[11]; } D_8006AFCC_t;
extern D_8006AFCC_t D_8006AFCC;
extern s32 func_800E1624(s32);
s32 func_800E102C(void) {
    s32 i;

    for (i = 0; i < 11; i++) {
        if (D_8006AFCC.f[i] == 1) {
            return 1;
        }
    }
    return 0;
}

void func_800E1068(s32 arg0) {
    s32 var_s0;

    func_800B1260();
    var_s0 = 0;
    do {
        func_800C5B30(arg0, 0, var_s0);
        var_s0 += 1;
    } while (var_s0 < 7);
}

typedef struct {
    u8 pad[0x38];
    u32 flags;
} Task_800E10BC;
typedef struct {
    u8 pad[0x184];
    Task_800E10BC *task;
    u32 state;
    u8 tail[0x608];
    u32 flags;
} Work_800E10BC;
typedef struct {
    u8 pad[0x198];
    s16 a;
    s16 b;
    s16 value;
    u8 tail[0xA];
} Monster_800E10BC;
void func_800E10BC(u32 player) {
    extern u8 D_80091618[];
    extern u8 D_80100F38[];
    u32 index=player & 0xFFFF;
    u32 offset=index*0x79C;
    u32 wbase=(u32)D_80100F38;
    Work_800E10BC *work=(Work_800E10BC *)(wbase+offset);
    u32 mbase=(u32)D_80091618;
    Monster_800E10BC *monster=(Monster_800E10BC *)(mbase+index*0x1A8);
    work->task->flags |= 1;
    work->state = 4;
    monster->b=-1;
    monster->a=-1;
}


extern u8 D_80100F38[];

s32 func_800E1140(s32 idx) {
    u8 *obj = D_80100F38 + (idx & 0xFFFF) * 0x79C;

    if (*(s16 *)(obj + 0x228) == 1) {
        return 0;
    }
    return ((*(u32 *)(obj + 0x798) >> 5) & 1) ^ 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DFB80", func_800E11A0);

#include "ghidra.h"
void func_800E134C(int param_1)

{
    extern s32 D_800EEBAC[];
  undefined4 uVar1;
  
  if ((*D_800EEBAC) == 0) {
    uVar1 = 3;
    if (param_1 == 0) {
      uVar1 = 2;
    }
    func_800AC34C(uVar1);
  }
  return;
}
