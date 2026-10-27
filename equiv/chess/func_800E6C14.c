#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "ghidra.h"
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define D_80118C18 (*(s32 *)0x80118C18)
#define D_80119714 (*(s32 *)0x80119714)
extern s32 func_80034AB0();
extern s32 func_800D862C();
extern s32 func_800DD274();
extern s32 func_800DD824();
extern s32 func_800FBB90();
extern s32 func_800FED90();
undefined4 func_800E6C14(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  iVar3 = *(int *)(param_3 + 0x78);
  if (DAT_8008ee54 == 2) {
    iVar2 = *(int *)(param_4 + 0x70);
    *(undefined4 *)(iVar3 + 0x84) = 1;
    *(undefined4 *)(iVar3 + 0x88) = 3;
    *(undefined2 *)(iVar3 + 0x6a) = *(undefined2 *)(iVar2 + 0x46);
    *(undefined2 *)(iVar3 + 0x6e) = *(undefined2 *)(iVar2 + 0x4a);
    *(short *)(iVar3 + 0x72) = *(short *)(iVar2 + 0x4e) + -2;
    *(undefined2 *)(iVar3 + 0x74) = *(undefined2 *)(iVar2 + 0x50);
    *(undefined2 *)(iVar3 + 0x76) = *(undefined2 *)(iVar2 + 0x52);
    if (*(uint *)(iVar3 + 0x20) < 0xd) {
      return 0;
    }
    func_800FBB90(10);
    uVar5 = (uint)*(byte *)(param_4 + 0x15);
    uVar4 = (uint)*(byte *)(param_4 + 0x16);
    uVar1 = func_800D862C(*(undefined1 *)
                           ((uint)*(byte *)(param_3 + 0x16) * 4 +
                            (uint)*(byte *)(param_3 + 0x15) * 0x34 + D_80118C18 + 3),
                          *(undefined1 *)(uVar4 * 4 + uVar5 * 0x34 + D_80118C18 + 3));
    uVar1 = uVar1 & 0xff;
    if (uVar1 != 0xff) {
      uVar5 = uVar1 / 0xd;
      uVar4 = uVar1 % 0xd;
    }
    func_800DD824(param_4,uVar5,uVar4,1,1);
    func_800DD274(param_4,uVar5,uVar4);
    *(char *)(param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2 + 0x601) = (char)uVar5;
    *(char *)(param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2 + 0x602) = (char)uVar4;
  }
  else {
    if (2 < DAT_8008ee54) {
      if (DAT_8008ee54 == 3) {
        if (D_80119714 < 0x78) {
          return 0;
        }
      }
      else if (DAT_8008ee54 != 99) {
        return 0;
      }
      *(undefined1 *)(param_2 + 0x60d) = 2;
      return 1;
    }
    if (DAT_8008ee54 == 0) {
      iVar3 = func_800FED90(param_4);
      if (iVar3 == 0) {
        return 0;
      }
      *(undefined1 *)(param_3 + 0x17) = 0x88;
      *(undefined1 *)(param_3 + 0x23) = 1;
      *(undefined1 *)(param_3 + 0x24) = 0x45;
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x8000;
    }
    else {
      if (DAT_8008ee54 != 1) {
        return 0;
      }
      if (*(uint *)(*(int *)(param_3 + 0x70) + 0x20) < 3) {
        return 0;
      }
      iVar2 = *(int *)(param_4 + 0x70);
      *(undefined4 *)(iVar3 + 0x84) = 1;
      *(undefined4 *)(iVar3 + 0x88) = 3;
      *(undefined2 *)(iVar3 + 0x6a) = *(undefined2 *)(iVar2 + 0x46);
      *(undefined2 *)(iVar3 + 0x6e) = *(undefined2 *)(iVar2 + 0x4a);
      *(short *)(iVar3 + 0x72) = *(short *)(iVar2 + 0x4e) + -2;
      *(undefined2 *)(iVar3 + 0x74) = *(undefined2 *)(iVar2 + 0x50);
      *(undefined2 *)(iVar3 + 0x76) = *(undefined2 *)(iVar2 + 0x52);
      func_80034AB0(0x8008);
    }
  }
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
  return 0;
}
