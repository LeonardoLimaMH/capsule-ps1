#include "common.h"

void func_800BBC28(s32 arg0)
{
  s8 *new_var;
  extern M2C_UNK D_800EFF58[];
  new_var = (s8 *) D_800EFF58;
  *((s32 *) (new_var + 0x84)) = arg0;
  *((s32 *) (new_var + 0x88)) = 0x20;
}

void func_800BBC40(s32 arg0) {
    typedef struct {
        u8 _p00[0x46];
        s16 unk46;
        u8 _p48[2];
        s16 unk4A;
    } S_BBC40_Sub;
    typedef struct {
        u8 _p000[0x14];
        S_BBC40_Sub *unk14;
        u8 _p018[0x100];
        S_BBC40_Sub *unk118;
        u8 _p11C[4];
        S_BBC40_Sub *unk120[14];
        u8 _p158[0xC4];
        s32 unk21C[14];
        u8 _p254[0x3C];
        S_BBC40_Sub *unk290[4];
        S_BBC40_Sub *unk2A0[9][3];
        S_BBC40_Sub *unk30C;
        u8 _p310[4];
        S_BBC40_Sub *unk314;
        u8 _p318[4];
        S_BBC40_Sub *unk31C[2];
        u8 _p324[0x2D4];
        S_BBC40_Sub *unk5F8;
    } S_EFF58_BBC40;
    extern s16 D_800ED88C[];
    extern u8 D_800EFF58[];
    extern S_BBC40_Sub *D_800EFF6C[];
    s32 i;
    s32 j;

    switch (arg0) {
    case 0:
        break;
    case 1:
        if (*D_800ED88C == 1) {
            (*D_800EFF6C)->unk4A += 2;
        }
        ((S_EFF58_BBC40 *)D_800EFF58)->unk118->unk46 += 8;
        for (i = 0; i < 14; i++) {
            ((S_EFF58_BBC40 *)D_800EFF58)->unk120[i]->unk46 += 8;
            if (((S_EFF58_BBC40 *)D_800EFF58)->unk21C[i] != -1) {
                ((S_EFF58_BBC40 *)D_800EFF58)->unk290[i]->unk46 += 8;
                for (j = 0; j < ((S_EFF58_BBC40 *)D_800EFF58)->unk21C[i]; j++) {
                    ((S_EFF58_BBC40 *)D_800EFF58)->unk2A0[i][j]->unk46 += 8;
                }
            }
        }
        for (i = 0; i < 2; i++) {
            ((S_EFF58_BBC40 *)D_800EFF58)->unk31C[i]->unk46 += 8;
        }
        ((S_EFF58_BBC40 *)D_800EFF58)->unk30C->unk4A -= 3;
        ((S_EFF58_BBC40 *)D_800EFF58)->unk314->unk46 += 8;
        ((S_EFF58_BBC40 *)D_800EFF58)->unk5F8->unk4A -= 3;
        break;
    case 2:
        if (*D_800ED88C == 1) {
            (*D_800EFF6C)->unk4A -= 2;
        }
        ((S_EFF58_BBC40 *)D_800EFF58)->unk118->unk46 -= 8;
        for (i = 0; i < 14; i++) {
            ((S_EFF58_BBC40 *)D_800EFF58)->unk120[i]->unk46 -= 8;
            if (((S_EFF58_BBC40 *)D_800EFF58)->unk21C[i] != -1) {
                ((S_EFF58_BBC40 *)D_800EFF58)->unk290[i]->unk46 -= 8;
                for (j = 0; j < ((S_EFF58_BBC40 *)D_800EFF58)->unk21C[i]; j++) {
                    ((S_EFF58_BBC40 *)D_800EFF58)->unk2A0[i][j]->unk46 -= 8;
                }
            }
        }
        for (i = 0; i < 2; i++) {
            ((S_EFF58_BBC40 *)D_800EFF58)->unk31C[i]->unk46 -= 8;
        }
        ((S_EFF58_BBC40 *)D_800EFF58)->unk30C->unk4A += 3;
        ((S_EFF58_BBC40 *)D_800EFF58)->unk314->unk46 -= 8;
        ((S_EFF58_BBC40 *)D_800EFF58)->unk5F8->unk4A += 3;
        break;
    }
}

#include "common.h"

extern s16 D_800ED88E[];
extern u8 D_800EFF58[];

void func_800BBF3C(void)
{
  struct 
  {
    u8 _p[0x90];
    s32 v;
  } *new_var;
  s16 *new_var2;
  ((struct 
  {
    u8 _p[0x84];
    s32 v;
  } *) D_800EFF58)->v = 0;
  ((struct 
  {
    u8 _p[0x88];
    s32 v;
  } *) D_800EFF58)->v = 0x20;
  ((struct 
  {
    u8 _p[0x8C];
    s32 v;
  } *) D_800EFF58)->v = 0;
  if ((*(new_var2 = &(*D_800ED88E))) == 0)
  {
    (new_var = (struct 
    {
      u8 _p[0x90];
      s32 v;
    } *) D_800EFF58)->v = 0;
    func_8001A998(D_800EFF58 + 0x94, 0x80);
  }
  ((struct 
  {
    u8 _p[0x32C];
    s32 v;
  } *) D_800EFF58)->v = 0;
  ((struct 
  {
    u8 _p[0x330];
    s32 v;
  } *) D_800EFF58)->v = 4;
  return 4;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BBC28", func_800BBF9C);

#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BC31C(void) {
    s32 r = func_800BC8FC(0x1A, -0xF8, 0x10, 5, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x11C), 1, 0, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x118) = r;
    return r;
}

#include "common.h"

void func_800BC394(s32 arg0, s32 arg1) {
    extern u8 D_800EE5F0[];
    extern u8 D_800EFF58[];
    extern u8 D_800F0604[];
    void *temp_s0;

    temp_s0 = (arg0 * 4) + D_800EFF58;
    M2C_FIELD(temp_s0, s32 *, 0x120) = func_800BC8FC(0x19, -0xF0, (s16) ((arg0 * 0x10) + 0x40), 4, M2C_FIELD(D_800EFF58, s32 *, 0x114) == arg0, D_800EE5F0, M2C_FIELD(temp_s0, s32 *, 0x158), 1, 1, arg1, 2, 1, D_800F0604);
}

#include "common.h"

void func_800BC438(s32 arg0)
{
  extern u8 D_8008ED68[];
  s32 new_var;
  extern u8 D_800EE5F0[];
  int new_var2;
  extern u8 D_800EFF58[];
  void *temp_s0;
  if (D_800EFF58)
  {
  }
  new_var = (s32) ((struct 
  {
    u8 _p[0x108];
    s32 v;
  } *) D_8008ED68)->v;
  temp_s0 = ((arg0 * 2) * 2) + D_800EFF58;
  new_var2 = 0x30;
  *((s32 *) (((s8 *) temp_s0) + 0x290)) = func_800BC8FC(0x1B, (s16) ((*((u16 *) (((s8 *) (*((void **) (((s8 *) D_800EFF58) + 0x118)))) + 0x46))) + ((new_var / 2) + new_var2)), (s16) (((*((u16 *) (((s8 *) (*((void **) (((s8 *) D_800EFF58) + 0x118)))) - -0x4A))) + ((((s32) ((struct 
  {
    u8 _p[0x10C];
    s32 v;
  } *) D_8008ED68)->v) / 2) + new_var2)) + (arg0 * 0x10)), 4, 0, D_800EE5F0, *((s32 *) (((s8 *) temp_s0) + 0x298)), 1, 1, 0, 2, 0, 0);
}

void func_800BC50C(s32 arg0, s32 arg1, s32 arg2) {
    typedef struct {
        u8 _p00[0x46];
        u16 unk46;
        u8 _p48[2];
        u16 unk4A;
    } S_BC50C_Sub;
    typedef struct {
        u8 _p000[0x290];
        S_BC50C_Sub *unk290[4];
        s32 unk2A0[2][3];
        s32 unk2B8[2][3];
    } S_EFF58_BC50C;
    typedef struct {
        u8 _p000[0x108];
        s32 unk108;
        s32 unk10C;
    } S_8ED68_BC50C;
    extern S_8ED68_BC50C D_8008ED68[];
    extern u8 D_800EE5F0[];
    S_EFF58_BC50C *eff = (S_EFF58_BC50C *)D_800EFF58;
    S_BC50C_Sub *p = eff->unk290[arg0];

    eff->unk2A0[arg0][arg1] = func_800BC8FC(
        0x1C,
        (s16)(p->unk46 + ((u32)(D_8008ED68[0].unk108 / 2 + 8))),
        (s16)(p->unk4A + ((u32)(D_8008ED68[0].unk10C / 2 + 8))),
        3,
        0,
        D_800EE5F0,
        eff->unk2B8[arg0][arg1],
        1,
        1,
        arg2,
        2,
        0,
        0
    );
}

#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];

s32 func_800BC5FC(void) {
    s32 r = func_800BC8FC(0x1A, 0x38, 0x118, 5, 0, D_800EE5F0, M2C_GFIELD(D_800EFF58, s32, 0x310), 1, 0, 0, 2, 0, 0);

    M2C_GFIELD(D_800EFF58, s32, 0x30C) = r;
    return r;
}

/* rand-u16: 0x8006AF80 1 0,1,2,3,5,9 */
#include "common.h"

extern u8 D_800EE5F0[], D_800EFF58[], D_80091618[];
extern u16 D_8006AF80[];
extern s32 func_800BC8FC(s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32, s32);

s32 func_800BC674(void)
{
  u8 *p = D_800EFF58;
  s32 *new_var;
  u8 *new_var4;
  int new_var3;
  s32 *new_var2;
  new_var = (s32 *) (p + 0x318);
  new_var2 = new_var;
  new_var3 = (*new_var2) + 3;
  new_var4 = D_80091618;
  new_var4 = (new_var4 + ((*D_8006AF80) * 0x1A8)) + 0x12;
  return *((s32 *) (p + 0x314)) = func_800BC8FC(0x19, -0xD4, 0x1A, 4, 0, D_800EE5F0, new_var3 - (*((u16 *) new_var4)), 1, 0, 0, 2, 0, 0);
}
