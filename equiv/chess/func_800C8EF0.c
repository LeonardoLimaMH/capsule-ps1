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
#define D_80069C4C (*(s32 *)0x80069C4C)
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_800201D8 ((s32 (*)())0x800201D8)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
int func_800C8EF0(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;

  iVar7 = param_1 + 0x5d0;
  iVar9 = *(int *)(&D_801010B0 + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  bVar2 = func_800201D8(param_2);
  pbVar6 = param_3 + 1;
  if ((((((u32 *)0x8008EDF0))[param_2 * 4] & 0x20) != 0) || (((((u32 *)0x8008EDF0))[param_2 * 4] & 0x40) != 0))
  {
    *(undefined1 *)(param_1 + 0xcfd) = 0;
  }
  if (bVar2 == 0) {
    bVar2 = 0;
    if (D_80069C4C == 5) goto LAB_800c9034;
    iVar5 = 1;
    if (*(byte *)(param_1 + 0xcfd) == 0) goto LAB_800c9034;
    bVar2 = *(byte *)(param_1 + 0xcf2);
    iVar3 = param_1 + 0x5d1;
    if (1 < *(byte *)(param_1 + 0xcfd)) {
      do {
        *(undefined1 *)(iVar3 + 0x721) = *(undefined1 *)(iVar3 + 0x722);
        iVar5 = iVar5 + 1;
        iVar3 = iVar7 + iVar5;
      } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0xcfd));
    }
    *(s8 *)(param_1 + 0xcfd) = *(s8 *)(param_1 + 0xcfd) + -1;
  }
  if (D_80069C4C == 5) {
    bVar1 = *(byte *)(param_1 + 0xcfd);
    if (bVar1 < 10) {
      *(byte *)(param_1 + 0xcfd) = bVar1 + 1;
      *(byte *)(iVar7 + (uint)bVar1 + 0x722) = bVar2;
    }
    bVar2 = 0;
  }
LAB_800c9034:
  uVar8 = 0;
  do {
    if (((int)(uint)bVar2 >> (uVar8 & 0x1f) & 1U) != 0) {
      uVar4 = uVar8 + (*(byte *)(iVar7 + param_2 + 0x605) & 0xfe) & 7;
      if (uVar4 == 0) {
        *pbVar6 = *pbVar6 + 1;
        bVar1 = *pbVar6;
        if (((*(uint *)((uint)bVar1 * 4 + (uint)*param_3 * 0x34 + iVar9) & 0x3f) < 2) ||
           (bVar1 == 0xd)) {
          *pbVar6 = bVar1 - 1;
        }
        else {
LAB_800c9210:
          func_80034AB0(0x84);
        }
      }
      else if (uVar4 == 4) {
        *pbVar6 = *pbVar6 - 1;
        bVar1 = *pbVar6;
        if ((1 < (*(uint *)((uint)bVar1 * 4 + (uint)*param_3 * 0x34 + iVar9) & 0x3f)) &&
           (bVar1 != 0xff)) goto LAB_800c9210;
        *pbVar6 = bVar1 + 1;
      }
      else if (uVar4 == 2) {
        *param_3 = *param_3 - 1;
        bVar1 = *param_3;
        if ((1 < (*(uint *)((uint)*pbVar6 * 4 + (uint)bVar1 * 0x34 + iVar9) & 0x3f)) &&
           (bVar1 != 0xff)) goto LAB_800c9210;
        *param_3 = bVar1 + 1;
      }
      else if (uVar4 == 6) {
        *param_3 = *param_3 + 1;
        bVar1 = *param_3;
        if ((1 < (*(uint *)((uint)*pbVar6 * 4 + (uint)bVar1 * 0x34 + iVar9) & 0x3f)) &&
           (bVar1 != 0xd)) goto LAB_800c9210;
        *param_3 = bVar1 - 1;
      }
    }
    uVar8 = uVar8 + 2;
    if (7 < (int)uVar8) {
      return (uint)bVar2;
    }
  } while( true );
}

/* arg0: 0x80140000 */
/* arg2: 0x80160000 */
/* real-callee: func_800201D8 */
/* rand-u16: 0x801405D8 1 0 */
/* rand-u16: 0x80160000 1 0,257,1542,3084 */
/* rand-u16: 0x801010B0 1 0 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u16: 0x80140BD4 1 0,512,1024,1536 */
/* rand-u16: 0x80140BD6 1 0,2,4,6 */
/* rand-u16: 0x80140CF2 5 0,257,1028,4112,16448,21845 */
/* rand-u16: 0x80140CFC 1 0,256,2304,2560 */
/* rand-u32-strided: 0x80069C4C 1 4 0,5 */
/* rand-u32-strided: 0x8008EDF0 2 16 0,0x1000,0x2000,0x4000,0x8000,0xFFFF,0x20,0x40 */
/* rand-u32-strided: 0x8008EE0C 8 4 0,39,40,48 */
/* rand-u32-strided: 0x80150000 169 4 0,1,2,0x3F */
/* arg1: 0x00000000 */
