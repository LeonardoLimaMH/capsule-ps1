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
#define DAT_80100c19 (*(u8 *)0x80100C19)
#define DAT_80100c1a (*(u8 *)0x80100C1A)
#define D_80100C18 (*(u8 *)0x80100C18)
extern s32 rsin();
int func_800A360C(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = param_2 * 4;
  iVar1 = rsin((uint)(*(int *)(param_3 + 0x54) << 0xc) / 0x78 & 0x7ff);
  if (param_4 == 0) {
    iVar2 = iVar1 * (uint)(byte)(&D_80100C18)[iVar3];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xfff;
    }
    *(s8 *)(param_3 + 0x38) = (s8)(iVar2 >> 0xc);
    iVar2 = iVar1 * (uint)(byte)(&DAT_80100c19)[iVar3];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xfff;
    }
    *(s8 *)(param_3 + 0x39) = (s8)(iVar2 >> 0xc);
    iVar1 = iVar1 * (uint)(byte)(&DAT_80100c1a)[iVar3];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xfff;
    }
    iVar1 = iVar1 >> 0xc;
  }
  else {
    iVar2 = iVar1 * (uint)(byte)(&D_80100C18)[iVar3];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x3fff;
    }
    *(s8 *)(param_3 + 0x38) = (s8)(iVar2 >> 0xe);
    iVar2 = iVar1 * (uint)(byte)(&DAT_80100c19)[iVar3];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x3fff;
    }
    *(s8 *)(param_3 + 0x39) = (s8)(iVar2 >> 0xe);
    iVar1 = iVar1 * (uint)(byte)(&DAT_80100c1a)[iVar3];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x3fff;
    }
    iVar1 = iVar1 >> 0xe;
  }
  *(s8 *)(param_3 + 0x3a) = (s8)iVar1;
  return iVar1;
}

/* arg1: small */
/* arg2: 0x80140000 */
/* arg3: 0,1 */
/* rand-u16: 0x80140054 1 0,1,2,3,65535 */
/* rand-u16: 0x80140056 1 0,1,65535 */
