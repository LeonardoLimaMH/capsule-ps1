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
/* real-callee: func_800DD428 */
/* real-callee: func_80015D14 */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
#include "ghidra.h"
#define DAT_80118aca (*(u16 *)0x80118ACA)
#define DAT_80118acc (*(u16 *)0x80118ACC)
#define D_80118AC8 (*(u16 *)0x80118AC8)
void func_800A4A10(int param_1,int param_2,int param_3,int param_4,short *param_5)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;

  sVar6 = 0;
  sVar5 = 0;
  iVar4 = 0;
  iVar7 = (*(byte *)(param_1 + param_2 + 0x5de) - 1) * 0x40;
  psVar2 = param_5 + 2;
  iVar3 = param_3;
  do {
    if (iVar4 < 2) {
      iVar1 = (iVar3 % param_4) * 8 + iVar7;
      *param_5 = *(short *)(((u8 *)0x80118AC8) + iVar1);
      psVar2[-1] = *(short *)(((u8 *)0x80118ACA) + iVar1);
      *psVar2 = *(short *)(((u8 *)0x80118ACC) + iVar1);
    }
    else {
      switch(param_3) {
      case 0:
        sVar6 = 8;
        break;
      case 1:
        sVar5 = -8;
        break;
      case 2:
      case 4:
        sVar6 = -8;
        break;
      case 3:
      case 5:
        sVar5 = 8;
      }
      iVar1 = ((iVar3 + -2) % param_4) * 8 + iVar7;
      *param_5 = *(short *)(((u8 *)0x80118AC8) + iVar1) + sVar6;
      psVar2[-1] = *(short *)(((u8 *)0x80118ACA) + iVar1);
      *psVar2 = *(short *)(((u8 *)0x80118ACC) + iVar1) + sVar5;
    }
    psVar2 = psVar2 + 4;
    param_5 = param_5 + 4;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar4 < 4);
  return;
}
