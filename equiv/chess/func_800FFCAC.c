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
#define DAT_8008f754 (*(s32 *)0x8008F754)
#define D_801010B0 (*(s32 *)0x801010B0)
#define D_801021B8 (*(u8 *)0x801021B8)
#define func_800202A4 ((s32 (*)())0x800202A4)
int func_800FFCAC(int param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar4;

  iVar7 = param_1 + 0x5d0;
  bVar1 = *(byte *)(param_1 + param_2 + 0x5de);
  iVar8 = *(int *)(&D_801010B0 + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  if (*(s8 *)(iVar7 + param_2 + 0x6d9) == '\0') {
    iVar3 = func_800202A4(6);
    *(int *)(((u16 *)0x8008F754) + param_2 * 2) = iVar3;
  }
  else {
    iVar3 = *(int *)(((u16 *)0x8008F754) + param_2 * 2);
  }
  iVar3 = iVar3 * 6 + (uint)*(byte *)(param_1 + 0x5d9) * 0x48 + (bVar1 - 1) * 0x24;
  if (*(s8 *)(iVar7 + param_2 + 0x6d9) == '\x05') {
    bVar1 = (&D_801021B8)[iVar3 + 5];
    uVar2 = 5;
    bVar6 = bVar1 >> 4;
    uVar4 = bVar1 & 0xf;
  }
  else {
    do {
      uVar4 = func_800202A4(5);
      uVar2 = (undefined1)uVar4;
    } while (((int)(uint)*(byte *)(iVar7 + param_2 + 0x6dd) >> (uVar4 & 0x1f) & 1U) != 0);
    do {
      iVar5 = func_800202A4(5);
      bVar1 = (&D_801021B8)[iVar5 + iVar3];
      bVar6 = bVar1 >> 4;
      uVar4 = bVar1 & 0xf;
    } while (*(s8 *)(uVar4 * 4 + (uint)bVar6 * 0x34 + iVar8 + 3) != '\0');
  }
  iVar7 = iVar7 + param_2 * 6;
  *(undefined1 *)(iVar7 + 0x5ed) = 5;
  *(undefined1 *)(iVar7 + 0x5ec) = uVar2;
  *(byte *)(iVar7 + 0x5ee) = bVar6;
  *(s8 *)(iVar7 + 0x5ef) = (s8)uVar4;
  return iVar7;
}

/* arg0: 0x80140000 */
/* real-callee: func_800202A4 */
/* real-callee: rand */
/* rand-u16: 0x801405D8 1 0 */
/* rand-u16: 0x801405DE 1 257 */
/* rand-u16: 0x801010B0 1 0 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u16: 0x80140CAC 1 0,256,768,3840 */
/* rand-u16: 0x80140CAE 1 0,1,3,15 */
/* rand-u16: 0x801021B8 18 0,4369,52428 */
/* rand-u32-strided: 0x8008F754 2 4 0,1,2,3,4,5 */
/* rand-u32-strided: 0x80150000 169 4 0 */
/* arg1: 0x00000000 */
/* rand-u16: 0x80140CA8 1 0 */
/* rand-u16: 0x80140CAA 1 0 */
