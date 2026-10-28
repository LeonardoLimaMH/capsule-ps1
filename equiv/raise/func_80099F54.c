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

/* compiler: 2.8.1-psx */
/* real-callee: func_80015EF8 */
/* stub-ret: mixed */
/* rand-u32-strided: 0x8008F704 1 4 0,1,2,3,4,5 */
/* rand-u32-strided: 0x8008F708 1 4 0,1 */
/* rand-u16: 0x8006AF80 1 0,1,2,3,4,5 */
/* rand-u16: 0x80091628 1 0,1,3,99 */
/* rand-u16: 0x8009169C 1 0,1,99,168 */
/* rand-u16: 0x800917D0 1 0,1,3,99 */
/* rand-u16: 0x80091844 1 0,1,99,168 */
/* rand-u16: 0x80091978 1 0,1,3,99 */
/* rand-u16: 0x800919EC 1 0,1,99,168 */
/* rand-u16: 0x80091B20 1 0,1,3,99 */
/* rand-u16: 0x80091B94 1 0,1,99,168 */
/* rand-u16: 0x80091CC8 1 0,1,3,99 */
/* rand-u16: 0x80091D3C 1 0,1,99,168 */
/* rand-u16: 0x80091E70 1 0,1,3,99 */
/* rand-u16: 0x80091EE4 1 0,1,99,168 */
#include "ghidra.h"
#define DAT_8008f704 (*(s32 *)0x8008F704)
#define DAT_8008f708 (*(s32 *)0x8008F708)
#define DAT_80091628 (*(u16 *)0x80091628)
#define DAT_8009169c (*(u16 *)0x8009169C)
#define D_8006AF80 (*(u16 *)0x8006AF80)
#define D_800E8AA4 (*(u8 *)0x800E8AA4)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_8009B018 ((s32 (*)())0x8009B018)
#define func_800BE020 ((s32 (*)())0x800BE020)
int func_80099F54(void)
{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int task;
  short sVar5;
  short sVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  func_800BE020(4);
  iVar2 = func_80015B3C(-0x7ff66b04,-0x7ffe9e3c,2);
  func_80015EF8(iVar2);
  uVar8 = 0;
  uVar3 = func_80019F30(0x6000e,0xa9 - (uint)(ushort)(&DAT_8009169c)[(uint)D_8006AF80 * 0xd4]);
  *(undefined4 *)(iVar2 + 0x18) = uVar3;
  *(undefined2 *)(iVar2 + 0x46) = 0xfe68;
  *(undefined2 *)(iVar2 + 0x6a) = 10;
  *(undefined2 *)(iVar2 + 0x4a) = 0xff98;
  *(undefined2 *)(iVar2 + 0x4e) = 4;
  *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) & 0xffffff80;
  iVar2 = func_80015B3C(-0x7ff66b04,-0x7ffe9e3c,2);
  func_80015EF8(iVar2);
  uVar3 = func_80019F30(0x7000e,0xe);
  func_80015CD0(iVar2 + 0x14,uVar3,0);
  uVar9 = DAT_8008f704;
  *(undefined2 *)(iVar2 + 0x6a) = 0xfff6;
  *(undefined2 *)(iVar2 + 0x4a) = 0xffd8;
  *(undefined2 *)(iVar2 + 0x4e) = 4;
  *(undefined1 *)(iVar2 + 0x57) = 8;
  *(short *)(iVar2 + 0x46) = (short)uVar9 * 0x20 + 0x158;
  *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) & 0xffffff80 | 1;
  iVar2 = func_80015B3C(-0x7ff66364,-0x7ffe9e3c,2);
  func_80015EF8(iVar2);
  uVar3 = func_80019F30(0x7000e,0xd);
  func_80015CD0(iVar2 + 0x14,uVar3,0);
  uVar3 = DAT_8008f708;
  sVar6 = 0x158;
  *(undefined2 *)(iVar2 + 0x4a) = 0xffd8;
  *(undefined2 *)(iVar2 + 0x52) = 0;
  *(undefined2 *)(iVar2 + 0x76) = 0x200;
  *(undefined2 *)(iVar2 + 0x4e) = 4;
  *(undefined1 *)(iVar2 + 0x57) = 8;
  *(short *)(iVar2 + 0x46) = (short)uVar3 * 0x50 + -0x38;
  *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) & 0xffffff80 | 0xf;
  do {
    iVar2 = func_80015B3C(-0x7ff66b04,-0x7ffe9e3c,2);
    func_80015EF8(iVar2);
    uVar3 = func_80019F30(0x6000e,uVar8 + 0xdb);
    *(undefined4 *)(iVar2 + 0x18) = uVar3;
    *(undefined2 *)(iVar2 + 0x6a) = 0xfff6;
    *(undefined2 *)(iVar2 + 0x4a) = 0xffd8;
    *(undefined2 *)(iVar2 + 0x4e) = 4;
    *(short *)(iVar2 + 0x46) = sVar6;
    *(undefined1 *)(iVar2 + 0x57) = 8;
    iVar4 = func_8009B018(uVar8);
    if ((iVar4 == 0) && (uVar8 != D_8006AF80)) {
      *(undefined1 *)(iVar2 + 0x5a) = 0x30;
      *(undefined1 *)(iVar2 + 0x59) = 0x30;
      *(undefined1 *)(iVar2 + 0x58) = 0x30;
    }
    *(uint *)(iVar2 + 0x7c) = uVar8;
    uVar8 = uVar8 + 1;
    *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) & 0xffffff80 | 8;
    sVar6 = sVar6 + 0x20;
  } while ((int)uVar8 < 6);
  iVar2 = 0;
  sVar6 = -0x38;
  do {
    iVar4 = func_80015B3C(-0x7ff66364,-0x7ffe9e3c,2);
    func_80015EF8(iVar4);
    uVar3 = func_80019F30(0x6000e,iVar2 + 0xeb);
    *(short *)(iVar4 + 0x46) = sVar6;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(iVar4 + 0x18) = uVar3;
    *(undefined2 *)(iVar4 + 0x4a) = 0xffd8;
    *(undefined1 *)(iVar4 + 0x57) = 8;
    *(undefined2 *)(iVar4 + 0x76) = 0x200;
    *(undefined2 *)(iVar4 + 0x4e) = 4;
    *(undefined2 *)(iVar4 + 0x52) = 0;
    *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) & 0xffffff80 | 0xe;
    sVar6 = sVar6 + 0x50;
  } while (iVar2 < 2);
  for (uVar9 = 0; uVar9 < 5; uVar9++) {
    if (uVar9 == 2 || uVar9 == 4) {
      iVar4 = func_80015B3C((s32)0x80099C9C, (s32)0x800161C4, 2);
      func_80015EF8(iVar4);
      *(u32 *)(iVar4 + 0x18) = func_80019F30(0x6000E, uVar9 == 2 ? 0xFA : 0xEA);
      *(u16 *)(iVar4 + 0x46) = -0x90;
      *(u16 *)(iVar4 + 0x4A) = -0x70;
      *(u8 *)(iVar4 + 0x57) = uVar9 == 2 ? 0x30 : 0x50;
      *(u16 *)(iVar4 + 0x52) = 0;
      *(u16 *)(iVar4 + 0x76) = 0x200;
    } else {
      iVar4 = func_80015B3C((s32)0x800994FC, (s32)0x800161C4, 2);
      func_80015EF8(iVar4);
      *(u32 *)(iVar4 + 0x18) = func_80019F30(0x6000E, uVar9 == 3 ? 0xF9 : uVar9 + 0xE5);
      *(u16 *)(iVar4 + 0x46) = uVar9 == 3 ? 0x100 : -0x220;
      *(u16 *)(iVar4 + 0x6A) = uVar9 == 3 ? -10 : 10;
      *(u16 *)(iVar4 + 0x4A) = -0x70;
      *(u8 *)(iVar4 + 0x57) = uVar9 == 1 ? 0x30 : 0x50;
    }
    *(u16 *)(iVar4 + 0x4E) = 4;
    *(u32 *)(iVar4 + 0x34) = (*(u32 *)(iVar4 + 0x34) & ~0x7F) | (uVar9 + 2);
  }
  iVar2 = 0;
  do {
    iVar4 = 0;
    do {
      uVar9 = DAT_8008f704;
      if (iVar2 == 0) {
        uVar9 = (uint)D_8006AF80;
      }
      task = func_80015B3C(-0x7ff66b04,-0x7ffe9e3c,2);
      func_80015EF8(task);
      if (iVar2 == 0) {
        *(undefined2 *)(task + 0x46) = 65000;
        uVar1 = 10;
      }
      else {
        *(undefined2 *)(task + 0x46) = 0x1b8;
        uVar1 = 0xfff6;
      }
      *(undefined2 *)(task + 0x6a) = uVar1;
      *(undefined2 *)(task + 0x4a) = 0xfff0;
      *(undefined2 *)(task + 0x4e) = 4;
      if (iVar4 == 1) {
        *(uint *)(task + 0x34) = *(uint *)(task + 0x34) & 0xffffff80 | iVar2 + 9U & 0x7f;
        uVar3 = func_80019F30(0x6000e,uVar9 + 0xdb);
        *(undefined4 *)(task + 0x18) = uVar3;
        sVar6 = *(short *)(task + 0x46);
        *(uint *)(task + 0x7c) = uVar9;
        sVar5 = *(short *)(task + 0x4a) + 8;
LAB_8009a548:
        *(short *)(task + 0x46) = sVar6 + 8;
        *(short *)(task + 0x4a) = sVar5;
      }
      else if (iVar4 < 2) {
        if (iVar4 == 0) {
          *(uint *)(task + 0x34) = *(uint *)(task + 0x34) & 0xffffff80 | iVar2 + 0xbU & 0x7f;
          uVar3 = func_80019F30(0x6000e,(byte)(&D_800E8AA4)[(ushort)(&DAT_80091628)[uVar9 * 0xd4]] +
                                        0x83);
          *(undefined4 *)(task + 0x18) = uVar3;
          sVar6 = *(short *)(task + 0x46);
          sVar5 = *(short *)(task + 0x4a) + 0x30;
          goto LAB_8009a548;
        }
      }
      else if (iVar4 == 2) {
        *(uint *)(task + 0x34) = *(uint *)(task + 0x34) & 0xffffff80 | 7;
        uVar3 = func_80019F30(0x6000e,0xee);
        *(undefined4 *)(task + 0x18) = uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    iVar2 = iVar2 + 1;
    if (1 < iVar2) {
      iVar2 = func_80015B3C(-0x7ff66b04,-0x7ffe9e3c,2);
      func_80015EF8(iVar2);
      *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) & 0xfffffe3f | 0x40;
      uVar3 = func_80019F30(0x7000e,0xf);
      func_80015CD0(iVar2 + 0x14,uVar3,0);
      *(undefined2 *)(iVar2 + 0x46) = 0xffe8;
      *(undefined2 *)(iVar2 + 0x4a) = 0x1b8;
      *(undefined2 *)(iVar2 + 0x6e) = 0xfff6;
      *(undefined2 *)(iVar2 + 0x4e) = 4;
      uVar9 = *(uint *)(iVar2 + 0x34) & 0xffffff80 | 0xd;
      *(uint *)(iVar2 + 0x34) = uVar9;
      return uVar9;
    }
  } while( true );
}
