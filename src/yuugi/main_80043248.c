#include "common.h"
#include "yuugi.h"

#include "common.h"

extern volatile u32 *D_80072E5C;
extern void (*D_80072E60[])();
extern u8 *D_80072E80;
extern u8 D_80010D60[], D_80010D7C[];

void func_80043248(void) {
    u32 m;
    s32 i;

    while ((m = (*D_80072E5C >> 24) & 0x7F) != 0) {
        for (i = 0; m != 0 && i < 7; i++, m >>= 1) {
            if (m & 1) {
                *D_80072E5C &= (1 << (i + 24)) | 0xFFFFFF;
                if (D_80072E60[i] != 0) {
                    D_80072E60[i]();
                }
            }
        }
    }
    if ((*D_80072E5C & 0xFF000000) == 0x80000000 || (*D_80072E5C & 0x8000)) {
        printf(D_80010D60, *D_80072E5C);
        for (i = 0; i < 7; i++) {
            printf(D_80010D7C, i, *(s32 *)(D_80072E80 + i * 16));
        }
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80043248", func_800433C8);

#include "ghidra.h"
void func_80043474(undefined4 *param_1,int param_2)

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
