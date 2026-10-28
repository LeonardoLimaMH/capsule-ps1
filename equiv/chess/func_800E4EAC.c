#include "common.h"

#include "common.h"

#include "common.h"

/* task-callback */
/* callee-contract: RotAverage4 */
/* rand-u16: 0x8008ED68 1 0 */
/* rand-u16: 0x8008ED6A 1 32786 */
/* rand-u16: 0x80121090 1 8192 */
/* rand-u16: 0x80121092 1 32786 */
/* rand-u16: 0x80130014 1 0 */
/* rand-u16: 0x80130016 1 32788 */
/* rand-u16: 0x80130038 1 4,5,8,12,16 */
/* rand-u16: 0x8013003A 1 8,16,32,64,128 */
/* rand-u16: 0x8013003C 1 8,16,32,64,128 */
/* rand-u16: 0x8013003E 1 0,1,2,15,255,4095 */
/* rand-u16: 0x80130042 1 0,1,2,255,65535 */
/* rand-u16: 0x8013004E 1 0,1,2,3,4,5,6,7,65535 */
/* rand-u16: 0x80130054 1 0,1,2,3,4,5,19,20,79,80,81,100 */
/* rand-u16: 0x80130056 1 0 */
/* rand-u16: 0x80130064 1 0,1,5,19,20,40,80,100 */
/* rand-u16: 0x80130066 1 0 */
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
/* real-callee: func_800DD428 */
/* real-callee: func_800DDA78 */
/* real-callee: func_800FE188 */
/* real-callee: func_800FE21C */
/* real-callee: func_800FE74C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FF460 */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* compiler: 2.8.1-psx */
/* rand-u16: 0x8013007A 1 0,1,2,3,4,5,6,7,8,9,10,15,31,65535 */
/* rand-u16: 0x8013003C 1 0,1,5,19,20,29,30,31,39,40,49,50,79,80,89,90,99,100,127,128,199 */
/* rand-u16: 0x8013003E 1 0 */
/* rand-u16: 0x80130070 1 4096 */
/* rand-u16: 0x80130072 1 32788 */
/* rand-u16: 0x80130074 1 8192 */
/* rand-u16: 0x80130076 1 32788 */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define D_80119718 (*(s32 *)0x80119718)
#define func_800F9E50 ((s32 (*)())0x800F9E50)
extern s32 rsin();
void func_800E4EAC(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;

  iVar10 = 0;
  iVar12 = 0;
  sVar1 = *(short *)(param_1 + 0x18);
  iVar11 = D_80119718 * 100;
  sVar2 = *(short *)(param_1 + 0x1a);
  sVar3 = *(short *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x4a) = 0x80;
  iVar9 = 0x80;
  do {
    iVar5 = rsin(iVar11);
    iVar5 = sVar1 * iVar5;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xfff;
    }
    iVar8 = iVar12 - (sVar3 + -0x80);
    sVar4 = (short)(iVar5 >> 0xc);
    *(short *)(param_1 + 0x34) = sVar4 + -0x800;
    *(short *)(param_1 + 0x38) = sVar4 + 0x800;
    uVar6 = (undefined2)((iVar10 * -0x1000) / 0x20);
    *(undefined2 *)(param_1 + 0x3a) = uVar6;
    *(undefined2 *)(param_1 + 0x36) = uVar6;
    if (iVar8 < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0x80;
      if (iVar8 < 0x81) {
        iVar5 = iVar8;
      }
    }
    if (iVar10 != 0) {
      *(short *)(param_1 + 0x46) = (short)(((0x20 - iVar10) * 0x1000) / 0x20);
      if (iVar5 < 0x80) {
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x2c) = 0;
      }
      uVar7 = (undefined1)iVar5;
      *(undefined1 *)(param_1 + 0x52) = uVar7;
      *(undefined1 *)(param_1 + 0x51) = uVar7;
      *(undefined1 *)(param_1 + 0x50) = uVar7;
      *(undefined1 *)(param_1 + 0x4e) = uVar7;
      *(undefined1 *)(param_1 + 0x4d) = uVar7;
      *(undefined1 *)(param_1 + 0x4c) = uVar7;
      uVar7 = (undefined1)iVar9;
      *(undefined1 *)(param_1 + 0x5a) = uVar7;
      *(undefined1 *)(param_1 + 0x59) = uVar7;
      *(undefined1 *)(param_1 + 0x58) = uVar7;
      *(undefined1 *)(param_1 + 0x56) = uVar7;
      *(undefined1 *)(param_1 + 0x55) = uVar7;
      *(undefined1 *)(param_1 + 0x54) = uVar7;
      func_800F9E50(param_1);
    }
    iVar12 = iVar12 + 10;
    iVar11 = iVar11 + (int)sVar2 / 0x20;
    iVar10 = iVar10 + 1;
    *(undefined2 *)(param_1 + 0x3e) = *(undefined2 *)(param_1 + 0x36);
    *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(param_1 + 0x36);
    *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_1 + 0x34);
    *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_1 + 0x38);
    iVar9 = iVar5;
  } while (iVar10 < 0x21);
  return;
}
