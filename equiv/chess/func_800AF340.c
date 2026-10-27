#include "common.h"

#include "ghidra.h"
#define _D_8008EE50 (*(u16 *)0x8008EE50)
extern s32 func_800125D8();
extern s32 func_80019654();
extern s32 func_80019F30();
extern s32 func_8001A464();
extern s32 func_8001A49C();
extern s32 func_8009C278();
extern s32 func_8009C3BC();
extern s32 func_800A8954();
extern s32 func_800A8994();
extern s32 func_800A8A7C();
extern s32 func_800A8B14();
extern s32 func_800AED34();
extern s32 func_800AEDB8();
extern s32 func_800BC49C();
extern s32 func_800CA408();
extern s32 func_800CA574();
extern s32 func_800D2FA0();
extern s32 func_800DCE78();
void func_800AF340(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined2 *puVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ushort auStack_30 [7];
  undefined2 uStack_22;

  iVar18 = param_1 + 0x5d0;
  bVar1 = *(byte *)(param_1 + 0xbca);
  uVar19 = (uint)bVar1;
  iVar12 = iVar18 + uVar19 * 0x2e8 + 0x18;
  iVar16 = iVar12 + (uint)*(byte *)(param_1 + 0xce9) * 0x7c;
  bVar2 = *(byte *)(iVar18 + uVar19 + 0x5fb);
  uVar20 = (uint)bVar2;
  puVar17 = (undefined1 *)(iVar12 + uVar20 * 0x7c);
  if (_D_8008EE50 < 8) {
    func_800DCE78();
    func_800BC49C(param_1,iVar18,iVar16,puVar17,0);
  }
  switch(_D_8008EE50) {
  case 0:
    *(uint *)(iVar16 + 0x18) = *(uint *)(iVar16 + 0x18) | 0x2000000;
    *(uint *)(puVar17 + 0x18) = *(uint *)(puVar17 + 0x18) | 0x200;
    break;
  case 1:
    bVar3 = puVar17[0x2a];
    iVar12 = func_800A8A7C(param_1,uVar19,uVar20);
    iVar13 = 7;
    if (iVar12 == 0) {
      *(ushort *)(param_1 + 0xbce) = *(ushort *)(param_1 + 0xbce) ^ (ushort)(1 << (bVar3 & 0x1f));
    }
    puVar10 = &uStack_22;
    *(undefined1 *)(iVar16 + 0x2b) = 1;
    puVar17[0x2b] = 2;
    do {
      *puVar10 = 0;
      iVar13 = iVar13 + -1;
      puVar10 = puVar10 + -1;
    } while (-1 < iVar13);
    pcVar6 = (char *)(iVar16 + 8);
    iVar12 = 8;
    do {
      iVar13 = iVar12 + 1;
      if (*pcVar6 != '\0') break;
      iVar14 = iVar12 + -1;
      pcVar6 = (char *)(iVar16 + iVar14);
      iVar13 = iVar12;
      iVar12 = iVar14;
    } while (0 < iVar14);
    iVar13 = iVar13 / 2;
    pcVar6 = puVar17 + 8;
    iVar12 = 8;
    do {
      iVar14 = iVar12 + 1;
      if (*pcVar6 != '\0') break;
      iVar15 = iVar12 + -1;
      pcVar6 = puVar17 + iVar15;
      iVar14 = iVar12;
      iVar12 = iVar15;
    } while (0 < iVar15);
    iVar12 = 0;
    iVar14 = iVar14 / 2;
    if (0 < iVar13) {
      puVar11 = auStack_30;
      do {
        iVar15 = iVar16 + iVar12;
        iVar12 = iVar12 + 1;
        *puVar11 = (ushort)*(byte *)(iVar15 + 1);
        puVar11 = puVar11 + 1;
      } while (iVar12 < iVar13);
    }
    iVar15 = 0;
    iVar12 = iVar13;
    if (0 < iVar14) {
      do {
        iVar7 = iVar14 + iVar15;
        iVar15 = iVar15 + 1;
        auStack_30[iVar12] = (ushort)(byte)puVar17[iVar7 + 1];
        iVar12 = iVar13 + iVar15;
      } while (iVar15 < iVar14);
    }
    puVar11 = auStack_30;
    iVar12 = 0;
    do {
      iVar13 = iVar12 + 1;
      puVar17[iVar12 + 1] = (char)*puVar11;
      puVar11 = puVar11 + 1;
      iVar12 = iVar13;
    } while (iVar13 < 8);
    func_800AEDB8(param_1,*(undefined1 *)(param_1 + 0xceb),puVar17,iVar16);
    *puVar17 = *(undefined1 *)(param_1 + 0xceb);
    uVar4 = func_800D2FA0((uVar19 << 7 | uVar20 + 1) & 0xff);
    puVar17[0x12] = uVar4;
    puVar17[0xd] = uVar4;
    uVar4 = func_800CA408(puVar17);
    puVar17[0x13] = uVar4;
    puVar17[0x14] = uVar4;
    iVar12 = func_800A8B14(param_1,uVar19,uVar20,1);
    if (iVar12 != 0) {
      *(undefined2 *)(param_1 + 0xc) = 0;
      _D_8008EE50 = 6;
      return;
    }
    uVar9 = func_800A8994(param_1,uVar19,uVar20);
    iVar12 = uVar20 * 0x7c + uVar19 * 0x2e8;
    if (*(char *)(param_1 + iVar12 + 0x5e8) == '\\') {
      uVar8 = func_800A8954(*(undefined1 *)(iVar18 + iVar12 + 0x42));
      func_8001A464(0x174,uVar8);
      *(byte *)(param_1 + 0xd77) = bVar1;
      *(byte *)(param_1 + 0xd78) = bVar2;
      func_80019F30(0x174,func_8009C3BC);
    }
    uVar8 = func_800A8954(puVar17[0x2a]);
    func_8001A464(uVar9,uVar8);
    func_80019F30(uVar9,func_800AED34);
    break;
  default:
    goto L800AF7F0;
  case 3:
    *(uint *)(iVar16 + 0x18) = *(uint *)(iVar16 + 0x18) | 0x200;
    *(uint *)(puVar17 + 0x18) = *(uint *)(puVar17 + 0x18) ^ 0x200;
    func_800CA574(param_1);
    *(uint *)(iVar16 + 0x18) = *(uint *)(iVar16 + 0x18) ^ 0x200;
    *(uint *)(puVar17 + 0x18) = *(uint *)(puVar17 + 0x18) | 0x200;
    break;
  case 4:
    iVar12 = func_80019654();
    if (iVar12 == 0) {
      return;
    }
    uVar9 = func_800A8954(puVar17[0x2a]);
    func_8001A49C(uVar9);
    break;
  case 5:
    iVar12 = func_80019654();
    if (iVar12 == 0) {
      return;
    }
    _D_8008EE50 = 7;
    return;
  case 6:
    uVar5 = *(short *)(param_1 + 0xc) + 1;
    *(ushort *)(param_1 + 0xc) = uVar5;
    if (uVar5 < 0xfb) {
      return;
    }
    break;
  case 7:
    func_8009C278(param_1,uVar19,uVar20);
    *(undefined1 *)(iVar16 + 0x2b) = 1;
    *(undefined1 *)(iVar16 + 0x15) = 0xff;
    *(undefined1 *)(iVar16 + 0x16) = 0xff;
    *(undefined1 *)(iVar16 + 0xe) = 0;
    *(uint *)(iVar16 + 0x18) = *(uint *)(iVar16 + 0x18) ^ 0x2000000 | 0x200;
    break;
  case 8:
    func_800DCE78();
    iVar12 = func_800BC49C(param_1,iVar18,iVar16,puVar17,1);
    if (iVar12 != 0) {
      func_800125D8();
    }
    goto L800AF7F0;
  }
  _D_8008EE50 = _D_8008EE50 + 1;
L800AF7F0:
  return;
}
