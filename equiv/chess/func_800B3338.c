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
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
#define DAT_8008f7ce (*(u8 *)0x8008F7CE)
#define D_80069AD4 (*(s32 *)0x80069AD4)
#define func_8002CC74 ((s32 (*)())0x8002CC74)
#define func_8002CD50 ((s32 (*)())0x8002CD50)
int func_800B3338(int param_1,int param_2)

{
  int iVar1;
  s32 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;

  iVar9 = 0;
  uVar8 = 1;
  if (DAT_8008ee6b != 0) {
    uVar8 = (uint)DAT_8008ee6b;
  }
  piVar7 = (int *)(param_1 + 0xd68);
  if (param_2 == 0) {
    piVar7 = (int *)(param_1 + 0xd4c);
  }
  iVar6 = 0;
  if (uVar8 != 0) {
    do {
      iVar4 = 0;
      puVar2 = ((s32 *)0x80069AD4);
      piVar3 = piVar7;
      iVar5 = iVar4;
      do {
        iVar1 = *piVar3 - puVar2[0x11];
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if (iVar5 < iVar1) {
          iVar5 = iVar1;
        }
        piVar3 = piVar3 + 1;
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar4 < 3);
      iVar5 = (iVar5 + 1) / 10;
      piVar3 = piVar7;
      puVar2 = ((s32 *)0x80069AD4);
      do {
        if (iVar5 == 0) {
          iVar9 = 1;
          puVar2[0x11] = *piVar3;
        }
        else {
          puVar2[0x11] = puVar2[0x11] + (*piVar3 - puVar2[0x11]) / iVar5;
        }
        piVar3 = piVar3 + 1;
        puVar2 = puVar2 + 1;
      } while ((int)piVar3 < (int)(piVar7 + 3));
      iVar6 = iVar6 + 1;
    } while ((iVar9 == 0) && (iVar6 < (int)uVar8));
  }
  DAT_8008f7ce = 1;
  func_8002CC74();
  func_8002CD50();
  return iVar9;
}

/* arg0: 0x80130000 */
/* rand-u32-strided: 0x80130D4C 3 4 0,10,20,100,0xFFFFFFF6 */
/* rand-u32-strided: 0x80130D68 3 4 0,10,20,100,0xFFFFFFF6 */
/* rand-u32-strided: 0x80069B18 3 4 0,10,20,100,0xFFFFFFF6 */
/* rand-u16: 0x8008EE6A 1 0,256,512,1024 */
/* arg1: 0x00000000 */
