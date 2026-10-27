#include "common.h"

#include "ghidra.h"
#define DAT_80085428 (*(s32 *)0x80085428)
#define DAT_8008543c (*(s32 *)0x8008543C)
#define DAT_800859f3 (*(u8 *)0x800859F3)
#define DAT_800859f8 (*(s32 *)0x800859F8)
#define DAT_80085a08 (*(s32 *)0x80085A08)
#define DAT_80085ff2 (*(u8 *)0x80085FF2)
#define DAT_80085ff3 (*(s32 *)0x80085FF3)
#define DAT_80086008 (*(u8 *)0x80086008)
#define DAT_800860d3 (*(s32 *)0x800860D3)
extern s32 func_80019F30();
extern s32 func_800A8E34();
extern s32 func_800A9A78();
extern s32 func_800A9C9C();
extern s32 func_800AAAA0();
extern s32 func_800CA730();
extern s32 func_800CAE6C();
void func_800A6DA8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_20;
  uint local_1c;

  uVar3 = *(uint *)(param_1 + 0x7c);
  iVar1 = func_800CAE6C(&DAT_800859f8);
  if (((2 < iVar1) || (DAT_8008543c != 0)) || (DAT_800859f3 - 1 < 2)) goto switchD_800a6e38_caseD_0;
  switch(DAT_80086008) {
  case '\0':
    goto switchD_800a6e38_caseD_0;
  case '\x01':
  case '\x02':
    func_800CA730(&DAT_80085428,DAT_80085ff2,&local_20,&local_1c);
    if ((local_1c == 0xffffffff) || (uVar3 != local_20)) goto switchD_800a6e38_caseD_0;
    iVar1 = func_800A8E34(&DAT_800859f8,uVar3);
    break;
  case '\x03':
  case '\x04':
    if (uVar3 == DAT_80085ff2) {
      local_1c = (uint)(byte)(&DAT_80085ff3)[uVar3];
      local_20 = uVar3;
    }
    else if (((DAT_80086008 != '\x03') ||
             (func_800CA730(&DAT_80085428,(uint)DAT_80085ff2,&local_20,&local_1c),
             local_1c == 0xffffffff)) || (uVar3 != local_20)) goto switchD_800a6e38_caseD_0;
    iVar1 = func_800A8E34(&DAT_800859f8,local_20,local_1c);
    break;
  case '\x05':
    if (uVar3 == DAT_80085ff2) {
      local_1c = (uint)(byte)(&DAT_800860d3)[uVar3];
      local_20 = uVar3;
      goto switchD_800a6e38_default;
    }
    goto switchD_800a6e38_caseD_0;
  default:
    goto switchD_800a6e38_default;
  }
  if (iVar1 == 0) {
switchD_800a6e38_default:
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
    if (local_1c == 5) {
      *(undefined2 *)(param_1 + 0x46) = 0xff68;
      *(undefined2 *)(param_1 + 0x4a) = 0x2a;
      if (uVar3 != 0) {
        *(short *)(param_1 + 0x46) = *(short *)(param_1 + 0x46) + 0xcc;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x46) = 0xff68;
      *(undefined2 *)(param_1 + 0x4a) = 0x2c;
      if (uVar3 != 0) {
        *(short *)(param_1 + 0x46) = *(short *)(param_1 + 0x46) + 0xb4;
      }
      if (DAT_80086008 == '\x01') {
        *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x18;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x34) & 0x7f;
    if (uVar3 == 0) {
      if (local_1c == 5) {
        iVar1 = 0x1f;
        if ((&DAT_80085a08)[local_20] == '\0') {
          iVar1 = local_20 + 0x1d;
        }
      }
      else {
        iVar1 = 0x1a;
        if ((&DAT_80085a08)[local_20] == '\0') {
          iVar1 = local_20 + 0x18;
        }
      }
    }
    else {
      if (uVar3 != 1) {
        return;
      }
      if (local_1c == 5) {
        iVar1 = 0x1c;
        func_800AAAA0(&DAT_80085428,local_20,(int)*(short *)(param_1 + 0x46),
                      (int)*(short *)(param_1 + 0x4a));
      }
      else {
        iVar1 = 0x17;
        if (DAT_80086008 == '\x01') {
          iVar1 = 0x24;
          func_800A9A78(&DAT_80085428,local_20,local_1c,(int)*(short *)(param_1 + 0x46),
                        (int)*(short *)(param_1 + 0x4a));
        }
        else {
          func_800A9C9C(&DAT_80085428,local_20,local_1c,(int)*(short *)(param_1 + 0x46),
                        (int)*(short *)(param_1 + 0x4a));
        }
      }
    }
    uVar2 = func_80019F30(0x60012,iVar1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    return;
  }
switchD_800a6e38_caseD_0:
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
  return;
}
