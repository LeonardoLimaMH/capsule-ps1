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

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern u8 D_80100F38[];
extern u8 D_80100F38[];
extern u8 D_80100F38[];
extern void func_800D0730(void *, s32, s32, s32);

s32 func_800E0C08(s32 a0, s32 a1, s32 a2, s32 a3) {
    typedef struct {
        u8 pad0[0x10];
        u16 unk10;
        u8 pad12[0x8A - 0x12];
        u16 unk8A;
        u8 pad8C[0x1A8 - 0x8C];
    } S_80091618;
    typedef struct {
        u8 pad0[0x10];
        u8 *unk10;
        u8 pad14[0x1C - 0x14];
    } S_80069EC4;
    extern S_80091618 D_80091618[];
    extern u8 D_800EF364[][8][8];
    extern S_80069EC4 D_80069EC4[][26];
    extern u16 D_8006AF80[], D_80078C20[];
    extern s32 func_800E36E4();
    s32 n = 4;
    s32 c;
    u16 idx, m;
    u8 b;

    if (a0 == 1) {
        n = 1;
    }
    if (a3 > 0) {
        if (a3 < 9) {
            c = a3;
        } else {
            c = 8;
        }
    } else {
        c = 1;
    }
    a3 = c;
    if (func_800E36E4() == 1) {
        idx = D_8006AF80[0];
        m = D_80078C20[0];
    } else {
        m = 1 - D_80078C20[0];
        idx = D_80091618[D_8006AF80[0]].unk8A;
    }
    b = D_800EF364[D_80091618[idx].unk10][a2][a3 - 9];
    return (s16)(*(u16 *)(D_80069EC4[(s16)m][n].unk10 + b * 8 + 4) - 4);
}

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

void func_800E0E8C(s32 arg0) {
    extern u8 D_80091618[];
    extern u8 D_80100F38[];
    s32 temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    Flags_800E0E8C *fl;
    union {
        Flags_800E0E8C bits;
        u32 word;
    } flags;

    temp_a0 = arg0 & 0xFFFF;
    temp_s0 = (temp_a0 * 0x79C) + D_80100F38;
    fl = (Flags_800E0E8C *)(temp_s0 + 0x798);
    *(s16 *)(temp_s0 + 0x228) = 0;
    *(s16 *)(temp_s0 + 0x37E) = 0;
    *(s16 *)(temp_s0 + 0x38A) = 0;
    flags.word = *(u32 *)fl;
    flags.bits.e = 0;
    *(volatile u32 *)fl = flags.word;
    flags.bits.c = 0;
    flags.bits.d = 0;
    flags.bits.b = 0;
    flags.bits.a = 0;
    *(volatile u32 *)fl = flags.word;
    flags.bits.f = 0;
    flags.bits.g = 0;
    flags.bits.h = 0;
    flags.bits.i = 0;
    flags.bits.j = 0;
    flags.bits.k = 2;
    flags.bits.l = 0;
    *(u32 *)fl = flags.word;
    temp_s1 = (temp_a0 * 0x1A8) + D_80091618;
    if (func_800E16AC(temp_a0) == 1) {
        *(s16 *)(temp_s0 + 0x388) = 2;
    } else {
        *(s16 *)(temp_s0 + 0x388) = 0;
    }
    *(s16 *)(temp_s1 + 0x110) = 0;
}

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

void func_800E11A0(s32 arg0, s32 arg1) {
    extern u16 D_8008EE44[];
    extern u8 D_80091618[];
    extern s32 D_800EE9B8[];
    extern u8 D_800F07E4[];
    extern u8 D_800F07F4[];
    extern u8 D_80100F38[];
    extern s32 func_800E16AC(s32);
    extern s32 func_800A1F44(s32, s32, s32);
    extern s32 func_800E14C4(s32);
    extern s32 func_800C0E1C(s32, s32, s32);
    extern void func_800E0E8C(s32);
    extern void func_800E1720(s32);

    register s32 one asm("s2") = 1;
    s32 temp_s0;
    s32 var_s0;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u32 mbase;
    u8 *temp_v0_3;

    temp_s0 = arg1 & 0xFFFF;
    D_800EE9B8[one - arg0] = 0;
    temp_v0 = (temp_s0 * 0x79C) + D_80100F38;
    *(u8 **)(temp_v0 + 0x2BC) = D_800F07F4;
    *(s16 *)(temp_v0 + 0x2B8) = 0;
    *(s16 *)(temp_v0 + 0x2BA) = 0;
    *(s16 *)(temp_v0 + 0x2C8) = 0;
    *(s16 *)(temp_v0 + 0x2C0) = 0;
    *(s16 *)(temp_v0 + 0x2C2) = 0;
    *(u8 **)(temp_v0 + 0x2C4) = D_800F07E4;
    *(s16 *)(temp_v0 + 0x2CA) = 0;
    if (func_800E16AC(temp_s0) == one) {
        func_800A1F44(arg0, one, 0);
    } else if (func_800E14C4(temp_s0) == one && (*D_8008EE44 < 0x35 || *D_8008EE44 >= 0x3D)) {
        func_800C0E1C(arg0, 6, 2);
    } else {
        func_800C0E1C(arg0, 0, 0);
    }
    var_s0 = arg1 & 0xFFFF;
    temp_v0_2 = (var_s0 * 0x79C) + D_80100F38;
    *(s32 *)(*(u8 **)(temp_v0_2 + 0x184) + 0x38) |= 1;
    *(s32 *)(temp_v0_2 + 0x188) = 4;
    mbase = (u32)D_80091618;
    temp_v0_3 = (u8 *)(mbase + (var_s0 * 0x1A8));
    *(s16 *)(temp_v0_3 + 0x19A) = -1;
    *(s16 *)(temp_v0_3 + 0x198) = -1;
    func_800E0E8C(var_s0);
    func_800E1720(var_s0);
}

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
