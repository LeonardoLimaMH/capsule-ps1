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
#define func_8001F1A8 ((s32 (*)())0x8001F1A8)
#define func_80020844 ((s32 (*)())0x80020844)
int func_8009FF58(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  if (6 < param_4) {
    param_4 = 6;
  }
  if (param_4 == 6) {
    if (param_3 < 0xf) {
      iVar2 = param_3 * -0x70000 >> 0x10;
      uVar4 = 0xfffffff9;
      iVar1 = param_3;
    }
    else {
      if (param_3 < 0x1d) {
        func_8001F1A8(0xffffff9e,0xfffffff2,1,1,0,param_2,1,0xe,3);
        uVar4 = 0;
        param_2 = param_2 + 0x1c;
        iVar1 = param_3 + -0xe;
      }
      else {
        func_8001F1A8(0xffffff9e,0xffffffeb,1,1,0,param_2,1,0xe,3);
        func_8001F1A8(0xffffff9e,0xfffffff9,1,1,0,param_2 + 0x1c,1,0xe,3);
        uVar4 = 7;
        param_2 = param_2 + 0x38;
        iVar1 = param_3 + -0x1c;
      }
      iVar2 = -0x62;
    }
    func_8001F1A8(iVar2,uVar4,1,1,0,param_2,1,iVar1,3);
  }
  if (param_3 < 0xf) {
    iVar3 = (param_3 * -7 + -8) * 0x10000 >> 0x10;
    uVar4 = 0xfffffff1;
    iVar1 = ((param_3 * 0xe + 0x10) * param_4) / 6;
    iVar2 = param_4 * 0x50000;
  }
  else {
    if (param_3 < 0x1d) {
      iVar1 = (param_4 * 0xd4) / 6 + (param_4 * 0xd4 >> 0x1f);
      uVar4 = 0xffffffe9;
      iVar2 = param_4 * 0x18;
    }
    else {
      iVar1 = (param_4 * 0xd4) / 6 + (param_4 * 0xd4 >> 0x1f);
      uVar4 = 0xffffffe1;
      iVar2 = param_4 << 5;
    }
    iVar3 = -0x6a;
    iVar1 = iVar1 - (param_4 * 0xd4 >> 0x1f);
    iVar2 = (((iVar2 - param_4) * 2) / 6) * 0x10000;
  }
  iVar1 = func_80020844(iVar3,uVar4,iVar1 * 0x10000 >> 0x10,iVar2 >> 0x10,0,0,0,0,4);
  return iVar1;
}

/* arg1: 0x80140000 */
/* arg3: small */
/* rand-u16: 0x80140000 64 0,65,66 */
/* arg2: 0x0000000E */
