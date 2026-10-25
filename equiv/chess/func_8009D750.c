#include "common.h"

#include "ghidra.h"
void func_8009D750(undefined4 param_1,int param_2)

{
    extern u8 D_80018600[];
    extern u8 D_801010B0[];
    extern s32 D_801010D8[];
    extern int func_800161C4();
    extern int func_8009D2AC();
    extern int func_8009F820();
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)*(byte *)(param_2 + 0x5fa);
  uVar2 = func_800CA474();
  iVar3 = func_80015B3C(func_8009F820,&func_800161C4,2);
  func_80015EF8(iVar3);
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
  *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) & 0xffffff80;
  uVar4 = func_80019F30(0x60013,5);
  *(undefined4 *)(iVar3 + 0x18) = uVar4;
  *(undefined2 *)(iVar3 + 0x46) = 0xff3e;
  *(undefined2 *)(iVar3 + 0x4a) = 0xff5e;
  *(undefined2 *)(iVar3 + 0x6a) = 2;
  *(undefined2 *)(iVar3 + 0x6e) = 2;
  *(undefined2 *)(iVar3 + 0x4e) = 4;
  iVar3 = param_2 + uVar6 * 6;
  if (*(char *)(iVar3 + 0x5ed) != '\0') {
    iVar5 = func_80015B3C(func_8009D2AC,&func_800161C4,4);
    func_80015EF8(iVar5);
    *(uint *)(iVar5 + 0x38) = *(uint *)(iVar5 + 0x38) | 1;
    *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) & 0xffffff80 | 1;
    uVar4 = func_80019F30(0x60012,1);
    *(undefined4 *)(iVar5 + 0x18) = uVar4;
    *(undefined2 *)(iVar5 + 0x46) = 0xff72;
    *(undefined2 *)(iVar5 + 0x4a) = 0x41;
    *(undefined2 *)(iVar5 + 0x4e) = 5;
    *(undefined4 *)(iVar5 + 0x7c) =
         *(undefined4 *)(param_2 + (uint)*(byte *)(iVar3 + 0x5ec) * 0x7c + uVar6 * 0x2e8 + 0x8c);
    iVar5 = param_2 + (uint)*(byte *)(iVar3 + 0x5ec) * 0x7c + uVar6 * 0x2e8;
    if ((*(char *)(iVar3 + 0x5ee) != *(char *)(iVar5 + 0x2d)) ||
       (*(char *)(iVar3 + 0x5ef) != *(char *)(iVar5 + 0x2e))) {
      iVar3 = func_80015B3C(func_8009D2AC,D_80018600,4);
      func_80015EF8(iVar3);
      *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
      *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) & 0xffffff80 | 2;
      iVar3 = func_80015B3C(func_8009D2AC,&func_800161C4,4);
      func_80015EF8(iVar3);
      *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
      *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) & 0xffffff80 | 3;
    }
    if (*(char *)(param_2 + uVar6 * 6 + 0x5ed) == '\x02') {
      iVar3 = func_80015B3C(func_8009D2AC,&func_800161C4,4);
      func_80015EF8(iVar3);
      *(undefined4 *)(iVar3 + 0x7c) = uVar2;
      *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
      *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) & 0xffffff80 | 4;
      uVar1 = (undefined2)
              (0xc00000 / *(ushort *)(D_801010D8 + (uint)*(byte *)(param_2 + 9) * 0x34 + 8));
      *(undefined2 *)(iVar3 + 0x52) = uVar1;
      *(undefined2 *)(iVar3 + 0x50) = uVar1;
      iVar3 = func_80015B3C(func_8009D2AC,&func_800161C4,4);
      func_80015EF8(iVar3);
      *(undefined4 *)(iVar3 + 0x7c) = uVar2;
      *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
      *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) & 0xffffff80 | 5;
    }
  }
  return;
}
