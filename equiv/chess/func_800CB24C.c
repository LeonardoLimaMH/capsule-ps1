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
#define func_800B8F38 ((s32 (*)())0x800B8F38)
int func_800CB24C(undefined4 param_1,int param_2,int param_3)

{
  union { u64 align; u8 bytes[0x8]; } recovered_local_frame;
#define local_28 (*(int volatile (*)[2])(recovered_local_frame.bytes + 0x0))

  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;


  iVar4 = 0;
  piVar3 = local_28;
  iVar5 = 0x18;
  do {
    *piVar3 = 0;
    if ((3 < *(byte *)(param_2 + iVar4 + 0x60a)) &&
       (iVar1 = func_800B8F38(param_1,param_2,param_2 + iVar5 + 0x26c,iVar4), iVar1 != 0)) {
      *piVar3 = -1;
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x2e8;
  } while (iVar4 < 2);
  piVar3 = local_28;
  iVar4 = 2;
  if ((piVar3[param_3] <= piVar3[1 - param_3]) &&
     (iVar4 = 0, piVar3[1 - param_3] <= piVar3[param_3])) {
    iVar5 = 0;
    iVar4 = 0x18;
    do {
      *piVar3 = 0;
      iVar2 = 0;
      iVar1 = param_2 + iVar4;
      do {
        if ((*(uint *)(iVar1 + 0x18) & 0x300) == 0) {
          *piVar3 = *piVar3 + 1;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x7c;
      } while (iVar2 < 5);
      piVar3 = piVar3 + 1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x2e8;
    } while (iVar5 < 2);
    iVar1 = local_28[param_3];
    iVar5 = 1 - param_3;
    if ((iVar1 == 1) || (piVar3 = local_28 + iVar5, iVar5 = 1 - param_3, *piVar3 == 1)) {
      iVar4 = 1;
      if (iVar1 != local_28[iVar5]) {
        iVar4 = (uint)(iVar1 != 1) << 1;
      }
    }
    else {
      iVar4 = 1;
    }
  }
  return iVar4;
}

#undef local_28

/* arg1: 0x80140000 */
/* stub-ret: mixed */
/* rand-u16: 0x8014060A 1 0,1028,1285 */
/* rand-u32-strided: 0x80140030 5 124 0,0x100,0x200 */
/* rand-u32-strided: 0x80140318 5 124 0,0x100,0x200 */
/* arg2: 0x00000000 */
