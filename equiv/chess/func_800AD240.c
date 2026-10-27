#include "common.h"

#include "ghidra.h"
#define _D_80069C1E (*(u16 *)0x80069C1E)
#define _D_8008EE50 (*(u16 *)0x8008EE50)
#define _D_801187D4 (*(s32 *)0x801187D4)
#define bRam8008ee6b (*(u8 *)0x8008EE6B)
#define cRam8008f7ce (*(u8 *)0x8008F7CE)
extern s32 func_800125D8();
extern s32 func_80012628();
extern s32 func_8001264C();
extern s32 func_8002CC74();
extern s32 func_8002CD50();
extern s32 func_800B077C();
extern s32 func_800C9414();
void func_800AD240(int param_1)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;

  iVar8 = param_1 + 0x5d0;
  uVar7 = (uint)*(byte *)(param_1 + 0xbca);
  if (_D_8008EE50 != 1) {
    if (1 < _D_8008EE50) {
      if (_D_8008EE50 != 2) {
        return;
      }
      iVar5 = func_800C9414();
      if (iVar5 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0xc) = 0;
      _D_80069C1E = (ushort)*(byte *)(iVar8 + uVar7 + 0x605) << 9;
      func_800125D8();
      return;
    }
    iVar5 = 0;
    if (_D_8008EE50 != 0) {
      return;
    }
    iVar4 = 0;
    pbVar6 = (byte *)(uVar7 * 2 + iVar8 + 0x601);
    pbVar3 = pbVar6;
    do {
      iVar2 = (uint)*pbVar3 - (uint)*(byte *)((1 - uVar7) * 2 + iVar8 + 0x601 + iVar4);
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar5 < iVar2) {
        iVar5 = iVar2;
      }
      iVar4 = iVar4 + 1;
      pbVar3 = pbVar6 + iVar4;
    } while (iVar4 < 2);
    if (iVar5 < 9) {
      if (iVar5 < 5) {
        if (iVar5 < 3) {
          _D_801187D4 = 10;
        }
        else {
          _D_801187D4 = 0x14;
        }
      }
      else {
        _D_801187D4 = 0x19;
      }
    }
    else {
      _D_801187D4 = 0x32;
    }
    if (bRam8008ee6b != 0) {
      _D_801187D4 = _D_801187D4 / bRam8008ee6b;
    }
    func_80012628();
  }
  cVar1 = func_800B077C(param_1,_D_801187D4);
  cRam8008f7ce = cRam8008f7ce + cVar1;
  func_8002CC74();
  func_8002CD50();
  func_8001264C(2);
  return;
}
