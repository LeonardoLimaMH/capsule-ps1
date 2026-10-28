#include "common.h"

/* real-callee: func_80117224 */
/* arg0: small */
/* arg1: 0x80150000 */
/* rand-u16: 0x80131FFC 1 0,1,2,3,4,255 */
/* rand-u16: 0x80131FFD 1 0,1,2,3,4,255 */
/* rand-u16: 0x80131FFE 1 0,1,2,3,4,255 */
/* rand-mem: 0x80134ED8 24 256 */
#include "ghidra.h"
#define DAT_80131d3d (*(u8 *)0x80131D3D)
#define D_80110744 (*(u8 (*)[16])0x80110744)
#define D_80110754 (*(u8 (*)[27])0x80110754)
#define D_801107CC (*(s32 *)0x801107CC)
#define D_80131D1C (*(code **)0x80131D1C)
#define D_80131D20 (*(code **)0x80131D20)
#define D_80131D44 (*(s32 *)0x80131D44)
#define D_80131DC4 (*(s32 *)0x80131DC4)
#define D_80131FE4 (*(volatile u8 **)0x80131FE4)
#define D_80131FFC (*(u8 *)0x80131FFC)
#define D_80134ED8 (*(u8 *)0x80134ED8)
#define D_80134EE0 (*(s32 *)0x80134EE0)
#define UNK_80131ffd (*(u8 *)0x80131FFD)
#define _D_80134EF0 (*(s32 *)0x80134EF0)
#define _D_80134EF4 (*(s32 *)0x80134EF4)
#define _D_80134EF8 (*(volatile u8 **)0x80134EF8)
#define func_80117224 ((s32 (*)())0x80117224)
extern s32 slpm_CD_flush();
extern s32 slpm_CheckCallback();
extern s32 slpm_VSync();
extern s32 slpm_printf();
extern s32 slpm_puts();
uint slpm_CD_sync(int param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;

  _D_80134EF0 = slpm_VSync(0xffffffff);
  _D_80134EF0 = _D_80134EF0 + 0x3c0;
  _D_80134EF4 = 0;
  _D_80134EF8 = ((u8 *)0x801107CC);
  while( true ) {
    iVar4 = slpm_VSync(0xffffffff);
    if ((_D_80134EF0 < iVar4) ||
       (iVar4 = _D_80134EF4 + 1, bVar3 = 0x3c0000 < _D_80134EF4, _D_80134EF4 = iVar4, bVar3)) {
      slpm_puts(D_80110744);
      slpm_printf
                (D_80110754,_D_80134EF8,
                 *(undefined4 *)(((u8 *)0x80131D44) + (uint)DAT_80131d3d * 4),
                 *(undefined4 *)(((u8 *)0x80131DC4) + (uint)D_80131FFC * 4),
                 *(undefined4 *)(((u8 *)0x80131DC4) + (uint)UNK_80131ffd * 4));
      slpm_CD_flush();
      iVar4 = -1;
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = slpm_CheckCallback();
    if (iVar4 != 0) {
      bVar1 = *D_80131FE4;
      while( true ) {
        uVar5 = func_80117224();
        if (uVar5 == 0) break;
        if (((uVar5 & 4) != 0) && ((code *)D_80131D20 != (code *)0x0)) {
          (*(code *)D_80131D20)(UNK_80131ffd,&D_80134EE0);
        }
        if (((uVar5 & 2) != 0) && (D_80131D1C != (code *)0x0)) {
          (*D_80131D1C)(D_80131FFC,&D_80134ED8);
        }
      }
      *D_80131FE4 = bVar1 & 3;
    }
    uVar5 = (uint)D_80131FFC;
    if ((uVar5 == 2) || (uVar5 == 5)) break;
    if (param_1 != 0) {
      return 0;
    }
  }
  D_80131FFC = 2;
  puVar6 = &D_80134ED8;
  iVar4 = 7;
  if (param_2 == (undefined1 *)0x0) {
    D_80131FFC = 2;
    return uVar5;
  }
  do {
    uVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    iVar4 = iVar4 + -1;
    *param_2 = uVar2;
    param_2 = param_2 + 1;
  } while (iVar4 != -1);
  return uVar5;
}
