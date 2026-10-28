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
#define DAT_8008edf0 (*(s32 *)0x8008EDF0)
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_800A8E34 ((s32 (*)())0x800A8E34)
int func_800BE244(int param_1,int param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;

  if (param_3 == 0) {
    uVar6 = 1 - param_2;
    iVar5 = -1;
    iVar8 = 1;
  }
  else {
    uVar6 = (((u32 *)0x8008EDF0))[param_2 * 4];
    iVar8 = -1;
    if (((((uVar6 & 0x1000) == 0) && ((uVar6 & 0x8000) == 0)) && (iVar8 = 1, (uVar6 & 0x4000) == 0))
       && ((uVar6 & 0x2000) == 0)) {
      return 0;
    }
    iVar5 = param_1 + param_2 * 2;
    bVar2 = *(byte *)((uint)*(byte *)(iVar5 + 0x602) * 4 +
                      (uint)*(byte *)(iVar5 + 0x601) * 0x34 +
                      *(int *)(&D_801010B0 + (uint)*(byte *)(param_1 + 9) * 0x34) + 3);
    uVar6 = (uint)(bVar2 >> 7);
    iVar5 = (bVar2 & 0x7f) - 1;
  }
  iVar7 = param_1 + param_2 * 2;
  do {
    do {
      if (iVar8 < 1) {
        bVar1 = iVar5 == 0;
        iVar5 = iVar5 + -1;
        if (bVar1) {
          uVar6 = 1 - uVar6;
          iVar5 = 5;
        }
      }
      else {
        iVar5 = iVar5 + 1;
        if (iVar5 == 6) {
          uVar6 = 1 - uVar6;
          iVar5 = 0;
        }
      }
      iVar4 = func_800A8E34(param_1,uVar6,iVar5);
    } while (iVar4 != 0);
    iVar4 = param_1 + iVar5 * 0x7c + uVar6 * 0x2e8;
    bVar2 = *(byte *)(iVar4 + 0x2d);
    bVar3 = *(byte *)(iVar4 + 0x2e);
  } while (*(s8 *)((uint)bVar2 * 0xd + param_1 + (uint)bVar3 + 0x630) != '\x02');
  *(byte *)(iVar7 + 0x601) = bVar2;
  *(byte *)(iVar7 + 0x602) = bVar3;
  return 2;
}

/* arg0: 0x80140000 */
/* real-callee: func_800A8E34 */
/* rand-u16: 0x80140008 1 0 */
/* rand-u16: 0x80140600 3 0 */
/* rand-u16: 0x80140630 85 514 */
/* rand-u16: 0x801010B0 1 0 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u32-strided: 0x80150000 1 4 0x01000000 */
/* rand-u32-strided: 0x8014002C 6 124 0,0x00010100,0x000C0C00 */
/* rand-u32-strided: 0x80140314 6 124 0,0x00010100,0x000C0C00 */
/* rand-u32-strided: 0x80140030 6 124 0,0x100,0x200 */
/* rand-u32-strided: 0x80140318 6 124 0,0x100,0x200 */
/* rand-u32-strided: 0x8014029C 1 4 0 */
/* rand-u32-strided: 0x80140584 1 4 0 */
/* rand-u32-strided: 0x8008EDF0 2 16 0,0x1000,0x2000,0x4000,0x8000 */
/* arg1: 0x00000000 */
/* arg2: 0x00000000 */
