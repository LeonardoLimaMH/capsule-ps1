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
/* rand-u16: 0x80119714 1 0,1,5,19,20,29,30,31,199 */
/* rand-u16: 0x80119716 1 0 */
/* rand-ptr: 0x8008F760 3 */
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
/* real-callee: __adddf3 */
/* real-callee: __divdf3 */
/* real-callee: __fixdfsi */
/* real-callee: __floatsidf */
/* real-callee: __muldf3 */
/* real-callee: __negdf2 */
/* real-callee: __subdf3 */
/* real-callee: _add_mant_d */
/* real-callee: _comp_mant */
/* real-callee: _dbl_shift */
/* real-callee: _dbl_shift_us */
/* real-callee: _err_math */
/* real-callee: _mainasu */
/* real-callee: _mul_mant_d */
/* real-callee: func_80015D14 */
/* real-callee: func_8004FE2C */
/* real-callee: func_800459CC */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FE21C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FF460 */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FE74C */
/* real-callee: func_800DD428 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800DDA78 */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
extern s32 GetTPage();
extern s32 SetPolyF4();
extern s32 SetSemiTrans();
#define func_80018610 ((s32 (*)())0x80018610)
int func_800A95F8(undefined4 param_1,undefined4 param_2,int param_3,short param_4,short param_5,
                 int param_6)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  short sVar11;

  if (param_6 < 2) {
    sVar8 = param_4 + 0x35 + (short)(DAT_8008ee70 / 2);
    if (param_6 == 0) {
      sVar1 = param_5 + 0x10;
    }
    else {
      sVar1 = param_5 + 0x28;
    }
    sVar1 = sVar1 + (short)(DAT_8008ee74 / 2);
    iVar4 = param_3 * 0x34;
    sVar11 = 6;
    iVar10 = 5;
    iVar9 = iVar4;
  }
  else {
    iVar9 = param_3 * 0x5d;
    sVar11 = 8;
    iVar10 = 3;
    sVar8 = param_4 + 0x2c + (short)(DAT_8008ee70 / 2);
    iVar4 = DAT_8008ee74 / 2;
    sVar1 = param_5 + 0x72 + (short)iVar4;
  }
  iVar9 = iVar9 >> 0x10;
  if ((iVar9 != 0) || (iVar9 = 1, param_3 != 0)) {
    puVar7 = *(uint **)(DAT_8008ed68 + 0x1090);
    puVar5 = (uint *)0x0;
    if ((puVar7 == (uint *)0x0) ||
       (puVar5 = puVar7 + 6, puVar6 = (uint *)0x0, puVar5 <= (uint *)(DAT_8008ed68 + 0x4594U))) {
      puVar6 = puVar5;
    }
    *(uint **)(DAT_8008ed68 + 0x1090) = puVar6;
    SetPolyF4(puVar7);
    SetSemiTrans(puVar7,0);
    sVar2 = sVar8 + (short)iVar9;
    *(short *)(puVar7 + 5) = sVar2;
    *(short *)(puVar7 + 3) = sVar2;
    *(short *)((int)puVar7 + 0x16) = sVar1 + sVar11;
    *(short *)((int)puVar7 + 0x12) = sVar1 + sVar11;
    *(undefined1 *)(puVar7 + 1) = 0xaf;
    *(undefined1 *)((int)puVar7 + 5) = 0xaf;
    *(short *)(puVar7 + 4) = sVar8;
    *(short *)(puVar7 + 2) = sVar8;
    *(short *)((int)puVar7 + 0xe) = sVar1;
    *(short *)((int)puVar7 + 10) = sVar1;
    *(undefined1 *)((int)puVar7 + 6) = 0x20;
    *puVar7 = *puVar7 & 0xff000000 | *(uint *)(iVar10 * 4 + DAT_8008ed68 + 0x70) & 0xffffff;
    iVar9 = iVar10 * 4 + DAT_8008ed68;
    *(uint *)(iVar9 + 0x70) = *(uint *)(iVar9 + 0x70) & 0xff000000 | (uint)puVar7 & 0xffffff;
    uVar3 = GetTPage(0,0,0,0);
    iVar4 = func_80018610(uVar3,iVar10);
  }
  return iVar4;
}

/* arg2: 0x00010000 */
/* rand-u16: 0x8008ED68 1 0 */
/* rand-u16: 0x8008ED6A 1 32786 */
/* rand-u16: 0x80121090 1 8192 */
/* rand-u16: 0x80121092 1 32786 */
/* rand-u16: 0x8008EE70 1 320 */
/* rand-u16: 0x8008EE72 1 0 */
/* rand-u16: 0x8008EE74 1 240 */
/* rand-u16: 0x8008EE76 1 0 */
