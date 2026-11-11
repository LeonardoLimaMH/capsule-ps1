#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_80098FEC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_800991D4);

#include "common.h"

void func_80099370(void *arg0)
{
  extern M2C_UNK D_8008ED68[];
  u8 temp_v1_2;
  u32 temp_v1;
  u32 temp_v1_4;
  u32 var_v0;
  void *temp_v1_3;
  temp_v1 = *((u32 *) (((s8 *) arg0) + 0x3C));
  if (temp_v1 < 2U)
  {
    *((u8 *) (((s8 *) arg0) + 0x5A)) = 0xFF;
    *((u8 *) (((s8 *) arg0) + 0x59)) = 0xFF;
    *((u8 *) (((s8 *) arg0) + 0x58)) = 0xFF;
    *((s32 *) (((s8 *) arg0) + 0x38)) = (s32) ((((*((s32 *) (((s8 *) arg0) + 0x38))) | 0x40) & (~0x30)) | 0x10);
  }
  else
    if (temp_v1 < 0xAU)
  {
    temp_v1_2 = 0xFF - (temp_v1 * 0x19);
    *((u8 *) (((s8 *) arg0) + 0x5A)) = temp_v1_2;
    *((u8 *) (((s8 *) arg0) + 0x59)) = temp_v1_2;
    *((u8 *) (((s8 *) arg0) + 0x58)) = temp_v1_2;
  }
  else
  {
    func_800185F8(arg0);
  }
  ;
  *((u16 *) (((s8 *) arg0) + 0x46)) = (u16) (*((u16 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x40)))) + 0x46)));
  *((u16 *) (((s8 *) arg0) + 0x4A)) = (u16) (*((u16 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x40)))) + 0x4A)));
  *((s16 *) (((s8 *) arg0) + 0x4E)) = (s16) ((*((u16 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x40)))) + 0x4E))) - 1);
  *((u16 *) (((s8 *) arg0) + 0x50)) = (u16) (*((u16 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x40)))) + 0x50)));
  *((u16 *) (((s8 *) arg0) + 0x52)) = (u16) (*((u16 *) (((s8 *) (*((void **) (((s8 *) arg0) + 0x40)))) + 0x52)));
  temp_v1_4 = *((u32 *) (((s8 *) arg0) + 0x3C));
  if (((u8) ((struct 
  {
    u8 _p[0x103];
    u8 v;
  } *) D_8008ED68)->v) >= 2U)
  {
    var_v0 = temp_v1_4 + ((struct 
    {
      u8 _p[0x103];
      u8 v;
    } *) D_8008ED68)->v;
  }
  else
  {
    var_v0 = temp_v1_4 + 1;
  }
  *((u32 *) (((s8 *) arg0) + 0x3C)) = var_v0;
}

void func_80099480(void *arg0) {
    extern u8 D_8008ED68[];
    extern void func_800185F8(void *);
    u32 n;
    s32 i;

    n = (D_8008ED68[0x103] < 2) ? 1 : D_8008ED68[0x103];
    i = 0;
    if (n != 0) {
        do {
            *(u32 *)((u8 *)arg0 + 0x3C) += 1;
            if (*(u32 *)((u8 *)arg0 + 0x3C) >= 7) {
                func_800185F8(arg0);
                return;
            }
            i++;
        } while (i < (s32)n);
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_800994FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_80099C9C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_80099F54);

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_8009A64C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC", func_8009AA50);

#include "common.h"

extern u8 D_8008ED68[];
extern s32 func_800994FC(u8 *);

s32 func_8009AEC8(u8 *o)
{
  u8 *w = D_8008ED68;
  int new_var;
  if ((w[0x99A] != 1) && ((*((u16 *) (o + 0x7A))) == 0))
  {
    *((s32 *) (o + 0x34)) = ((*((s32 *) (o + 0x34))) & (~0x7F)) | 0x10;
    *((s16 *) (o + 0x46)) = 0x2C - ((*((s32 *) (w + 0x108))) / 2);
    new_var = (*((s32 *) (D_8008ED68 + 0x10C))) / 2;
    *((s16 *) (o + 0x6E)) = -10;
    *((s16 *) (o + 0x4E)) = 5;
    *((s16 *) (o + 0x4A)) = 0x268 - new_var;
  }
  return func_800994FC(o);
}

#include "common.h"

extern u8 D_8008ED68[];
extern s32 func_8009A64C(u8 *);

s32 func_8009AF70(u8 *o)
{
  u8 *w = D_8008ED68;
  int new_var;
  if ((w[0x99A] != 1) && ((*((u16 *) (o + 0x7A))) == 0))
  {
    *((s32 *) (o + 0x34)) = ((*((s32 *) (o + 0x34))) & (~0x7F)) | 0x10;
    *((s16 *) (o + 0x46)) = 0x2C - ((*((s32 *) (w + 0x108))) / 2);
    new_var = (*((s32 *) (w + 0x10C))) / 2;
    *((s16 *) (o + 0x6E)) = -10;
    *((s16 *) (o + 0x4E)) = 5;
    *((s16 *) (o + 0x4A)) = 0x268 - new_var;
  }
  return func_8009A64C(o);
}

#include "common.h"

#include "ghidra.h"
typedef struct { u8 pad_0[0x10]; ushort field_10; u8 pad_12[0x72]; ushort field_84; u8 pad_86[0x4]; ushort field_8A; u8 tail[0x11C]; } Record_8009B018;
bool func_8009B018(uint param_1)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
    u32 base_D_80091618=(u32)D_80091618;

  int iVar1;

  iVar1 = param_1 * 0x1a8;
  if (((Record_8009B018 *)(base_D_80091618 + (iVar1)))->field_10 != 0xFFFF) {
    if (param_1 == (*D_8006AF80)) {
      return false;
    }
    if (((Record_8009B018 *)(base_D_80091618 + (iVar1)))->field_8A == 0xFFFF) {
      return ((Record_8009B018 *)(base_D_80091618 + (iVar1)))->field_84 < 3;
    }
  }
  return false;
}
