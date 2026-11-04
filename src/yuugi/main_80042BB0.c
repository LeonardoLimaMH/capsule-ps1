#include "common.h"
#include "yuugi.h"

u8 *func_80042BB0(void) {
    extern u8 D_80071D84[];
    extern volatile u16 *D_80072E10[];
    extern volatile u16 *D_80072E14[];
    extern volatile u32 *D_80072E18[];
    extern u8 *D_80072E0C[];
    if (*(u16 *)D_80071D84 != 0) return 0;
    **D_80072E14 = 0;
    **D_80072E10 = **D_80072E14;
    **D_80072E18 = 0x33333333;
    func_800430B8(D_80071D84, 0x41A);
    if (setjmp(D_80071D84 + 0x38) != 0) func_80042C88();
    *(u8 **)(D_80071D84 + 0x3C) = D_80071D84 + 0x3C + 0xFDC;
    func_8004FECC(D_80071D84 + 0x38);
    *(u16 *)D_80071D84 = 1;
    *(s32 *)(*D_80072E0C + 0x14) = startIntrVSync();
    *(s32 *)(*D_80072E0C + 4) = startIntrDMA();
    _96_remove(*D_80072E0C);
    func_8004FEEC();
    return D_80071D84;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80042BB0", func_80042C88);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80042BB0", func_80042E58);

u8 *func_80042FA0(void) {
    extern u8 D_80071D84[];
    extern volatile u16 *D_80072E10[];
    extern volatile u16 *D_80072E14[];
    extern volatile u32 *D_80072E18[];
    u8 *ret = 0;
    if (*(u16 *)D_80071D84 != 0) {
        func_8004FEDC();
        *(u16 *)(D_80071D84 + 0x32) = **D_80072E14;
        *(s32 *)(D_80071D84 + 0x34) = **D_80072E18;
        **D_80072E14 = 0;
        **D_80072E10 = **D_80072E14;
        **D_80072E18 &= 0x77777777;
        func_8004FEBC(*D_80072E18);
        ret = D_80071D84;
        *(u16 *)ret = 0;
    }
    return ret;
}

u8 *func_80043040(void) {
    extern u8 D_80071D84[];
    extern volatile u16 *D_80072E14[];
    extern volatile u32 *D_80072E18[];
    if (*(u16 *)D_80071D84 == 0) {
        func_8004FECC(D_80071D84 + 0x38);
        *(u16 *)D_80071D84 = 1;
        **D_80072E14 = *(u16 *)(D_80071D84 + 0x32);
        **D_80072E18 = *(s32 *)(D_80071D84 + 0x34);
        func_8004FEEC(*D_80072E14);
        return D_80071D84;
    }
    return 0;
}

#include "ghidra.h"
void func_800430B8(undefined4 *param_1,int param_2)

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
