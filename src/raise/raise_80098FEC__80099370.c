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

INCLUDE_ASM("asm/raise/nonmatchings/raise_80098FEC__80099370", func_800994FC);
