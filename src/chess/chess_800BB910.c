#include "ghidra.h"
#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BB910);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BBACC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BBB54);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BBD20);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BC49C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BCE0C);

#include "common.h"

#include "ghidra.h"
void func_800BCEEC(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;

  if (*(int *)(param_1 + 0x20) == 5) {
    *(undefined4 *)(param_1 + 0x20) = 2;
  }
  uVar1 = (undefined1)((int)((0x4b - (uint)*(ushort *)(param_1 + 0x7a)) * 0xff) / 0x4b);
  *(undefined1 *)(param_1 + 0x58) = uVar1;
  *(undefined1 *)(param_1 + 0x5a) = uVar1;
  *(undefined1 *)(param_1 + 0x59) = uVar1;
  uVar2 = (undefined2)((int)((100 - (uint)*(ushort *)(param_1 + 0x7a)) * 0x1000) / 100);
  *(undefined2 *)(param_1 + 0x52) = uVar2;
  *(undefined2 *)(param_1 + 0x50) = uVar2;
  if (*(byte *)(param_1 + 0x58) < 10) {
    func_80013920(param_1);
  }
  *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BCFB8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BD080);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BD1B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BD3D4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BD51C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BD654);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BD8EC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BDBC0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BE244);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BE408);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BE46C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BE8F4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BEC20);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BEE98);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BF0D0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BF39C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BF6A0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BF86C);

#include "common.h"

void func_800BF9B0(void *arg0) {
    extern u16 D_8008EE50[];
    switch ((*D_8008EE50)) {                           /* irregular */
    case 0:
        if (func_800A1330(arg0, M2C_FIELD(arg0, u8 *, 0xBCA)) != 0) {
            func_800220B8(arg0);
            func_80012628();
            return;
        }
        func_8001264C(2);
        return;
    case 1:
        if (func_800220D4(arg0, 1, M2C_FIELD(arg0, u8 *, 0xBCA), 0) != 0) {
            func_80012628();
            return;
        }
        return;
    case 2:
        func_800125D8();
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BFA84);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BFC70);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BFD34);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BFE18);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BFFAC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C01F4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C0440);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C0658);

#include "ghidra.h"
void func_800C087C(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_800B3338(param_1,1);
  if (iVar1 != 0) {
    func_800125D8();
  }
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C08AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C0A94);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C0BEC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C0E6C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C11F8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C13F0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C1528);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C1658);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C1890);

void func_800C1A50(void) {
    func_800CAE14();
    func_800125AC(0xA);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C1A78);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C1CA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C1F84);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C202C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C20E8);
