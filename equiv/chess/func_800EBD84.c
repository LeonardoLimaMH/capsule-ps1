#include "common.h"

/* real-callee: func_80015B3C */
/* real-callee: func_800136C8 */
/* real-callee: func_80013C14 */
/* rand-u16: 0x80078B7C 1 0 */
/* rand-u16: 0x80078B7E 1 32786 */
/* rand-u16: 0x8012C554 1 0 */
/* rand-u16: 0x8012C556 1 0 */
/* rand-u16: 0x8012C578 1 4096 */
/* rand-u16: 0x8012C57A 1 32786 */
/* rand-u16: 0x8012C57C 1 0 */
/* rand-u16: 0x8012C57E 1 0 */
/* rand-u16: 0x80121008 1 0 */
/* rand-u16: 0x8012100A 1 0 */
/* rand-u16: 0x8012C558 16 0 */
/* rand-u16: 0x80121000 1 144 */
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008ee6a (*(s8 *)0x8008EE6A)
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
#define DAT_8008f754 (*(s16 *)0x8008F754)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800C94DC ((s32 (*)())0x800C94DC)
#define func_800DD428 ((s32 (*)())0x800DD428)
#define func_800EB6CC ((s32 (*)())0x800EB6CC)
#define func_800EBBBC ((s32 (*)())0x800EBBBC)
#define func_800FBB90 ((s32 (*)())0x800FBB90)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FEC2C ((s32 (*)())0x800FEC2C)
undefined4 func_800EBD84(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  uchar uVar1;
  undefined1 uVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  SVECTOR local_38;
  SVECTOR SStack_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;

  if (DAT_8008ee54 == 3) {
    if (D_80119714 < 0xf1) {
      if (DAT_8008ee6b < 2) {
        sVar3 = -1;
      }
      else {
        sVar3 = -(ushort)DAT_8008ee6b;
      }
      DAT_8008f754 = DAT_8008f754 + sVar3;
      if (DAT_8008f754 < 1) {
        iVar8 = func_80015B3C(func_800EB6CC,func_80018600,1);
        iVar5 = func_800202A4(4);
        iVar6 = func_80015B3C(func_80018600,func_80018600,5);
        func_80015EF8(iVar6);
        uVar7 = func_80019F30(0x60013,0x10);
        *(undefined4 *)(iVar6 + 0x18) = uVar7;
        *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) & 0xffffffcf | 0x50;
        *(int *)(iVar8 + 0x28) = iVar6;
        sVar3 = func_800202A4(0x65);
        *(short *)(iVar8 + 0x2c) = sVar3 + -0x32;
        sVar3 = func_800202A4(100);
        *(short *)(iVar8 + 0x2e) = -sVar3;
        *(undefined2 *)(iVar8 + 0x30) = 0;
        uVar2 = func_800202A4(5);
        *(undefined1 *)(iVar8 + 0x32) = uVar2;
        if (iVar5 == 0) {
          *(undefined1 *)(iVar8 + 0x33) = 6;
          *(undefined1 *)(iVar8 + 0x34) = 4;
          sVar3 = func_800202A4(400);
          *(short *)(iVar8 + 0x38) = sVar3 + -200;
          sVar3 = func_800202A4(10);
          DAT_8008f754 = sVar3 + 0x1e;
        }
        else {
          *(undefined1 *)(iVar8 + 0x33) = 0x14;
          *(undefined1 *)(iVar8 + 0x34) = 1;
          uVar4 = func_800202A4(0x1000);
          *(undefined2 *)(iVar8 + 0x38) = uVar4;
          sVar3 = func_800202A4(5);
          DAT_8008f754 = sVar3 + 8;
        }
        sVar3 = func_800202A4(0x32);
        *(short *)(iVar8 + 0x3a) = sVar3 + 0x32;
        sVar3 = func_800202A4(0x14);
        uVar7 = 2;
        *(short *)(iVar8 + 0x3c) = sVar3 + 0x28;
        if (iVar5 == 0) {
          uVar7 = 10;
        }
        func_800FBB90(uVar7);
        func_80034AB0(0x40);
        return 0;
      }
      return 0;
    }
    DAT_8008ee54 = 4;
  }
  else {
    if (DAT_8008ee54 < 4) {
      if (DAT_8008ee54 == 1) {
        if (param_3[0x22] != param_3[0x17]) {
          return 0;
        }
        if (*(uint *)(*(int *)(param_3 + 0x70) + 0x20) < 6) {
          return 0;
        }
        param_3[0x24] = 'E';
        *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x10000;
        func_80034AB0(0x1c);
        local_48 = 0x60;
        local_47 = 0x60;
        local_46 = 0x60;
        local_40 = 0x10;
        local_3f = 0x10;
        local_3e = 0x10;
        func_800DD428(&local_48,&local_40,0x3c);
      }
      else if (DAT_8008ee54 < 2) {
        if (DAT_8008ee54 != 0) {
          return 0;
        }
        uVar1 = func_800C94DC(param_1,0);
        param_3[0x25] = uVar1;
        param_3[0x17] = 0x88;
        param_3[0x23] = '\x01';
      }
      else {
        iVar8 = *(int *)(param_3 + 0x78);
        *(undefined4 *)(iVar8 + 0x84) = 1;
        *(undefined4 *)(iVar8 + 0x88) = 1;
        func_800FE188(param_3,&local_38);
        local_38.vy = local_38.vy - (short)((D_80119714 * 400) / 0x3c);
        *(short *)(iVar8 + 0x6a) = local_38.vx;
        *(short *)(iVar8 + 0x6e) = local_38.vy + -2;
        *(short *)(iVar8 + 0x72) = local_38.vz;
        func_800FEC2C(&local_38);
        if (D_80119714 < 0x3c) {
          return 0;
        }
        *(undefined4 *)(iVar8 + 0x84) = 2;
        DAT_8008ee6a = 2;
        DAT_8008f754 = 0;
      }
    }
    else if (DAT_8008ee54 == 5) {
      if (D_80119714 == 0x28) {
        func_80034AB0(0x801a);
      }
      if (D_80119714 < 0xb4) {
        return 0;
      }
      local_28 = 0x10;
      local_27 = 0x10;
      local_26 = 0x10;
      local_20 = 0x60;
      local_1f = 0x60;
      local_1e = 0x60;
      func_800DD428(&local_28,&local_20,0x3c);
    }
    else {
      if (4 < DAT_8008ee54) {
        if (DAT_8008ee54 == 6) {
          if (D_80119714 < 0x3c) {
            return 0;
          }
        }
        else if (DAT_8008ee54 != 99) {
          return 0;
        }
        DAT_8008ee6a = 0;
        return 1;
      }
      if (D_80119714 < 0x1e) {
        return 0;
      }
      func_800FE188(param_3,&SStack_30);
      SStack_30.vy = SStack_30.vy + -0x21c;
      func_800EBBBC(&SStack_30,0);
    }
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  D_80119714 = 0;
  return 0;
}
