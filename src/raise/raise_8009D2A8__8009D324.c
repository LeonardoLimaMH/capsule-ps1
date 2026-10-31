#include "common.h"

void func_8009D324(void) {
    extern s16 D_8006AFFE[];
    (*D_8006AFFE) = 0;
}

#include "common.h"

#include "ghidra.h"
void func_8009D330(int param_1)

{
    extern s16 D_8006AFFE[];
    extern void * D_8008F724[];
  int iVar1;
  
  iVar1 = (*D_8008F724);
  *(undefined2 *)(param_1 + 0x46) = *(undefined2 *)((*D_8008F724) + 0x46);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(iVar1 + 0x4a);
  *(short *)(param_1 + 0x4e) = *(short *)(iVar1 + 0x4e) + -1;
  if (*(unsigned short *)(param_1 + 0x7a) == *(unsigned short *)(param_1 + 0x26)) {
    func_80034AB0(2);
    *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
  }
  if ((*(unsigned short *)(param_1 + 0x26) == 3) && (iVar1 = func_80015E60(param_1), iVar1 != 0)) {
    (*D_8006AFFE) = 0;
    func_800185F8(param_1);
  }
  return;
}

void func_8009D3D0(void) {
    extern u16 D_8008EE44[];
    switch ((*D_8008EE44)) {
    case 0:
        func_8009D460();
        return;
    case 1:
        func_8009D568();
        return;
    case 2:
        func_8009D570();
        return;
    case 3:
        func_8009D5E8();
        return;
    case 4:
        func_8009D678();
        /* fallthrough */
    default:
        return;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009D324", func_8009D460);
