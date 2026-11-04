#include "common.h"

extern volatile u32 *D_801332B4[];
extern void (*D_801332B8[])(void);
extern u8 *D_801332D8[];
extern char D_80110B48[], D_80110B64[];
extern s32 slpm_printf();
void func_8011B770(void) {
    u32 m;
    s32 i;

    while ((m = (*D_801332B4[0] >> 24) & 0x7F) != 0) {
        for (i = 0; m != 0 && i < 7; i++, m >>= 1) {
            if (m & 1) {
                *D_801332B4[0] &= (1 << (i + 24)) | 0xFFFFFF;
                if (D_801332B8[i] != 0) {
                    D_801332B8[i]();
                }
            }
        }
    }
    if ((*D_801332B4[0] & 0xFF000000) == 0x80000000 || (*D_801332B4[0] & 0x8000)) {
        slpm_printf(D_80110B48, *D_801332B4[0]);
        for (i = 0; i < 7; i++) {
            slpm_printf(D_80110B64, i, *(s32 *)(D_801332D8[0] + i * 16));
        }
    }
    return;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011B770", func_8011B8F0);

#include "ghidra.h"
void func_8011B99C(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}
