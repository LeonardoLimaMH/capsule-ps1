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
#define func_800A835C ((s32 (*)())0x800A835C)
int func_800FFAB0(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  bVar1 = *(byte *)(param_1 + param_2 + 0x5de);
  iVar10 = *(int *)(&D_801010B0 + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  if (*(s8 *)(param_1 + 0x5d0 + param_2 + 0x10) == '\0') {
    iVar6 = *(int *)(((u16 *)0x8008F754) + param_2 * 2);
    *(uint *)(((u16 *)0x8008F754) + param_2 * 2) = (iVar6 + 1U) % 6;
  }
  else {
    iVar6 = func_800202A4(6);
  }
  iVar9 = 0;
  bVar2 = *(byte *)(param_1 + 0x5d9);
  do {
    iVar5 = 5;
    if (iVar9 != 5) {
      iVar5 = func_800202A4(5);
    }
    bVar3 = (byte)(&D_801021B8)[iVar5 + iVar6 * 6 + (uint)bVar2 * 0x48 + (bVar1 - 1) * 0x24] >> 4;
    uVar7 = (byte)(&D_801021B8)[iVar5 + iVar6 * 6 + (uint)bVar2 * 0x48 + (bVar1 - 1) * 0x24] & 0xf;
    iVar5 = uVar7 * 4 + (uint)bVar3 * 0x34 + iVar10;
    if (*(s8 *)(iVar5 + 3) == '\0') {
      iVar8 = param_1 + 0x5d0 + iVar9 * 0x7c + param_2 * 0x2e8;
      *(byte *)(iVar8 + 0x2d) = bVar3;
      *(s8 *)(iVar8 + 0x2e) = (s8)uVar7;
      *(undefined1 *)(iVar8 + 0x2f) = 1;
      uVar4 = func_800A835C(param_1,param_2);
      iVar9 = iVar9 + 1;
      *(undefined1 *)(iVar8 + 0x3d) = uVar4;
      *(byte *)(iVar5 + 3) = (byte)(param_2 << 7) | (byte)iVar9;
    }
  } while (iVar9 < 6);
  return 5;
}

/* arg0: 0x80140000 */
/* real-callee: func_800202A4 */
/* real-callee: rand */
/* real-callee: func_800A835C */
/* rand-u16: 0x801405D8 1 0 */
/* rand-u16: 0x801405DE 1 257,514 */
/* rand-u16: 0x801405E0 1 0,257 */
/* rand-u16: 0x801010B0 1 0 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u32-strided: 0x8008F754 2 4 0,1,2,3,4,5 */
/* rand-u32-strided: 0x80150000 169 4 0 */
/* rand-u32-strided: 0x801021B8 12 6 0x33221100 */
/* rand-u16: 0x801021bc 1 21828 */
/* rand-u16: 0x801021c2 1 21828 */
/* rand-u16: 0x801021c8 1 21828 */
/* rand-u16: 0x801021ce 1 21828 */
/* rand-u16: 0x801021d4 1 21828 */
/* rand-u16: 0x801021da 1 21828 */
/* rand-u16: 0x801021e0 1 21828 */
/* rand-u16: 0x801021e6 1 21828 */
/* rand-u16: 0x801021ec 1 21828 */
/* rand-u16: 0x801021f2 1 21828 */
/* rand-u16: 0x801021f8 1 21828 */
/* rand-u16: 0x801021fe 1 21828 */
/* arg1: 0x00000000 */
