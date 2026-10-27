#include "common.h"

#include "ghidra.h"
#define DAT_8008edf0 (*(s32 *)0x8008EDF0)
#define func_80012604 ((s32 (*)())0x80012604)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800AE1BC ((s32 (*)())0x800AE1BC)
#define func_800C9C9C ((s32 (*)())0x800C9C9C)
void func_8009E798(undefined4 param_1,int param_2)

{
  s8 cVar1;
  bool bVar2;
  int iVar3;
  s8 cVar4;
  undefined4 uVar5;
  uint uVar6;

  uVar6 = (uint)*(byte *)(param_2 + 0x5fa);
  if (*(s8 *)(param_2 + uVar6 + 0x10) != '\0') {
    func_800AE1BC(param_2,uVar6);
  }
  uVar6 = (&DAT_8008edf0)[uVar6 * 4];
  cVar1 = *(s8 *)(param_2 + 0x626);
  if ((uVar6 & 0x20) == 0) {
    if ((uVar6 & 0x40) == 0) {
      if ((uVar6 & 0x1000) == 0) {
        if ((uVar6 & 0x4000) != 0) {
          do {
            cVar4 = *(s8 *)(param_2 + 0x626) + '\x01';
            if ('\x04' < *(s8 *)(param_2 + 0x626)) {
              cVar4 = '\0';
            }
            *(s8 *)(param_2 + 0x626) = cVar4;
            if (cVar4 == '\x01') {
              bVar2 = true;
              if (*(s8 *)(param_2 + (uint)*(byte *)(param_2 + 0x5fa) + 0x16) == '\0') {
                bVar2 = false;
              }
            }
            else {
              bVar2 = true;
              if (cVar4 == '\x03') {
                iVar3 = func_800C9C9C(param_1);
                bVar2 = false;
                if (iVar3 != 0) {
                  bVar2 = true;
                }
              }
            }
          } while (!bVar2);
        }
      }
      else {
        do {
          cVar4 = *(s8 *)(param_2 + 0x626) + -1;
          if (*(s8 *)(param_2 + 0x626) == '\0') {
            cVar4 = '\x05';
          }
          *(s8 *)(param_2 + 0x626) = cVar4;
          if (cVar4 == '\x01') {
            bVar2 = true;
            if (*(s8 *)(param_2 + (uint)*(byte *)(param_2 + 0x5fa) + 0x16) == '\0') {
              bVar2 = false;
            }
          }
          else {
            bVar2 = true;
            if (cVar4 == '\x03') {
              iVar3 = func_800C9C9C(param_1);
              bVar2 = false;
              if (iVar3 != 0) {
                bVar2 = true;
              }
            }
          }
        } while (!bVar2);
      }
      goto LAB_8009e9d0;
    }
    func_80034AB0(0x5d);
    *(undefined1 *)(param_2 + 0x626) = 0xff;
switchD_8009e82c_default:
    uVar5 = 0xb;
  }
  else {
    func_80034AB0(0x48);
    switch(*(undefined1 *)(param_2 + 0x626)) {
    case 0:
      uVar5 = 2;
      *(undefined1 *)(param_2 + 0x624) = 2;
      *(undefined1 *)(param_2 + 0x627) = 0;
      break;
    case 1:
      *(undefined1 *)(param_2 + 0x624) = 9;
      uVar5 = 6;
      break;
    case 2:
      *(undefined1 *)(param_2 + 0x624) = 10;
      uVar5 = 7;
      break;
    case 3:
      *(undefined1 *)(param_2 + 0x624) = 0xb;
      uVar5 = 8;
      break;
    case 4:
      *(undefined1 *)(param_2 + 0x624) = 0xc;
      uVar5 = 9;
      break;
    case 5:
      *(undefined1 *)(param_2 + 0x624) = 0xd;
      uVar5 = 10;
      break;
    default:
      goto switchD_8009e82c_default;
    }
  }
  func_80012604(uVar5);
LAB_8009e9d0:
  if (cVar1 != *(s8 *)(param_2 + 0x626)) {
    func_80034AB0(0x84);
  }
  return;
}
