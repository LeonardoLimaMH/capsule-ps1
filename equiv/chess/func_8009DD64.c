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
/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FE21C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FF460 */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FE74C */
/* real-callee: __fixdfsi */
/* real-callee: __floatsidf */
/* real-callee: __muldf3 */
/* real-callee: _add_mant_d */
/* real-callee: _dbl_shift */
/* real-callee: _dbl_shift_us */
/* real-callee: _err_math */
/* real-callee: _mul_mant_d */
/* real-callee: func_8004FE2C */
/* callee-contract: RotTransPers */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
#include "common.h"

#include "ghidra.h"
#define D_80069AD4 (*(s32 *)0x80069AD4)
undefined4 func_8009DD64(int param_1)

{
  union { u64 align; u8 bytes[0x10]; } recovered_local_frame;
#define local_10 (*(int volatile (*)[3])(recovered_local_frame.bytes + 0x0))
#define auStack_4 (*(undefined1 volatile (*)[4])(recovered_local_frame.bytes + 0xC))

  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;



  piVar4 = local_10;
  piVar7 = local_10;
  uVar8 = 1;
  iVar5 = 0;
  iVar6 = 0;
  puVar2 = &D_80069AD4;
  iVar3 = param_1;
  do {
    iVar1 = puVar2[0x11] - *(int *)(iVar3 + 0x77c);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    *piVar4 = iVar1;
    if (iVar5 < iVar1) {
      iVar5 = iVar1;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar6 = iVar6 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar6 < 3);
  puVar2 = &D_80069AD4;
  iVar5 = iVar5 / 0xf;
  do {
    iVar3 = puVar2[0x11];
    if (*(int *)(param_1 + 0x77c) < iVar3) {
      uVar8 = 0;
      if (iVar5 < *piVar7) {
        iVar3 = iVar3 - *piVar7 / iVar5;
      }
      else {
        iVar3 = iVar3 + -1;
      }
      puVar2[0x11] = iVar3;
      if ((int)puVar2[0x11] < *(int *)(param_1 + 0x77c)) {
        puVar2[0x11] = *(int *)(param_1 + 0x77c);
      }
    }
    else if (iVar3 < *(int *)(param_1 + 0x77c)) {
      uVar8 = 0;
      if (iVar5 < *piVar7) {
        iVar3 = iVar3 + *piVar7 / iVar5;
      }
      else {
        iVar3 = iVar3 + 1;
      }
      puVar2[0x11] = iVar3;
      if (*(int *)(param_1 + 0x77c) < (int)puVar2[0x11]) {
        uVar8 = 1;
        puVar2[0x11] = *(int *)(param_1 + 0x77c);
      }
    }
    param_1 = param_1 + 4;
    piVar7 = piVar7 + 1;
    puVar2 = puVar2 + 1;
  } while ((int)piVar7 < (int)auStack_4);
  return uVar8;
}

#undef local_10
#undef auStack_4
