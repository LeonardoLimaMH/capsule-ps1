#include "common.h"

typedef struct {
    u8 pad[0xDC];
    u16 unk_dc;
    u8 pad2[2];
    u16 unk_e0;
} ScreenGlobal;
extern ScreenGlobal D_8008ED68[];

void func_8009B738(void *arg0)
{
  extern u16 D_8008EE44[];
  s32 var_v0;
  int new_var;
  new_var = ~1;
  if (((u32) ((*D_8008EE44) - 8)) < 3U)
  {
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var;
  }
  else
  {
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
}

void func_8009B774(u8 *arg0) {
    typedef struct {
        u8 pad[0xDC];
        u16 unk_dc;
        u8 pad2[2];
        u16 unk_e0;
    } GlobalStruct;
    GlobalStruct *g = (GlobalStruct *)D_8008ED68;
    u32 v0;
    s32 count;

    if (g->unk_dc == 9 && g->unk_e0 == 0) {
        count = *(s32 *)(arg0 + 0x84) - 1;
        *(s32 *)(arg0 + 0x84) = count;
        if (count <= 0) {
            *(s32 *)(arg0 + 0x84) = 100;
        }
        if (*(s32 *)(arg0 + 0x84) >= 15) {
            v0 = *(u32 *)(arg0 + 0x38) & ~1;
            goto end;
        }
    }
    v0 = *(u32 *)(arg0 + 0x38) | 1;
end:
    *(u32 *)(arg0 + 0x38) = v0;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009B738", func_8009B7EC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009B738", func_8009B864);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009B738", func_8009BBD0);
