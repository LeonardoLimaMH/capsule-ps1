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
#define DAT_80085a25 (*(u8 *)0x80085A25)
#define DAT_80085a26 (*(u8 *)0x80085A26)
#define DAT_801191d6 (*(u8 *)0x801191D6)
#define DAT_8011970a (*(u8 *)0x8011970A)
#define DAT_8011970b (*(u8 *)0x8011970B)
#define D_80118C18 (*(s32 *)0x80118C18)
#define D_80119660 (*(u8 *)0x80119660)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_800D7328 ((s32 (*)())0x800D7328)
#define func_800D90C0 ((s32 (*)())0x800D90C0)
#define func_800D943C ((s32 (*)())0x800D943C)
undefined4 func_800DC06C(uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  s8 cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;

  uVar10 = param_1 & 0xff;
  cVar4 = func_800D7328(uVar10,&D_80119660);
  uVar5 = 0;
  if (cVar4 != '\0') {
    uVar6 = func_800202A4((u8)cVar4);
    bVar1 = (&D_80119660)[uVar6 & 0xff];
    iVar9 = (bVar1 & 0x7f) - 1;
    iVar7 = iVar9 * 0x7c + (uint)(bVar1 >> 7) * 0x2e8;
    bVar2 = (&DAT_80085a25)[iVar7];
    bVar3 = (&DAT_80085a26)[iVar7];
    func_800D90C0(uVar10);
    func_800D943C(uVar10,(uint)bVar1);
    if ((*(uint *)((uint)bVar3 * 4 + (uint)bVar2 * 0x34 + D_80118C18) >> 6 & 0x1fff) != 2) {
      iVar8 = (param_1 & 0x7f) - 1;
      iVar7 = iVar8 * 7 + (uVar10 >> 7) * 0x2a;
      iVar9 = iVar9 * 7 + (uint)(bVar1 >> 7) * 0x2a;
      *(byte *)((int)((u32 *)0x801191D6) + iVar7) = bVar2;
      *(byte *)((int)((u32 *)0x801191D6) + iVar7 + 1) = bVar3;
      iVar7 = iVar8 * 0x7c + (uVar10 >> 7) * 0x2e8;
      *(undefined1 *)((int)((u32 *)0x801191D6) + iVar9) = (&DAT_80085a25)[iVar7];
      *(undefined1 *)((int)((u32 *)0x801191D6) + iVar9 + 1) = (&DAT_80085a26)[iVar7];
      *(s8 *)((uint)bVar2 * 0xd + (uint)bVar3 + -0x7fee6dd6) = (s8)param_1;
      *(byte *)((uint)(byte)(&DAT_80085a25)[iVar7] * 0xd + (uint)(byte)(&DAT_80085a26)[iVar7] +
               -0x7fee6dd6) = bVar1;
    }
    uVar5 = 1;
    DAT_8011970a = bVar2;
    DAT_8011970b = bVar3;
  }
  return uVar5;
}

/* real-callee: func_800D7328 */
/* real-callee: func_800D6DA4 */
/* real-callee: func_800D4F74 */
/* real-callee: func_8001A998 */
/* real-callee: func_800202A4 */
/* real-callee: rand */
/* rand-u16: 0x80063948 2 0 */
/* rand-u32-strided: 0x8006B2B4 1 4 0x20380 */
/* rand-u16: 0x80118C18 1 0 */
/* rand-u16: 0x80118C1A 1 32790 */
/* rand-u32-strided: 0x80160000 169 4 0x42 */
/* rand-u32-strided: 0x80085A10 12 124 0 */
/* rand-u16: 0x80085a25 1 0 */
/* rand-u16: 0x80085aa1 1 1 */
/* rand-u16: 0x80085b1d 1 2 */
/* rand-u16: 0x80085b99 1 3 */
/* rand-u16: 0x80085c15 1 4 */
/* rand-u16: 0x80085c91 1 5 */
/* rand-u32-strided: 0x80160000 1 4 0x1000042,0x1000082 */
/* rand-u32-strided: 0x80160034 1 4 0x2000042,0x2000082 */
/* rand-u32-strided: 0x80160068 1 4 0x3000042,0x3000082 */
/* rand-u32-strided: 0x8016009c 1 4 0x4000042,0x4000082 */
/* rand-u32-strided: 0x801600d0 1 4 0x5000042,0x5000082 */
/* rand-u16: 0x80085d0d 1 256 */
/* rand-u16: 0x80085d89 1 257 */
/* rand-u16: 0x80085e05 1 258 */
/* rand-u16: 0x80085e81 1 259 */
/* rand-u16: 0x80085efd 1 260 */
/* rand-u16: 0x80085f79 1 261 */
/* rand-u32-strided: 0x80160004 1 4 0x81000042,0x81000082 */
/* rand-u32-strided: 0x80160038 1 4 0x82000042,0x82000082 */
/* rand-u32-strided: 0x8016006c 1 4 0x83000042,0x83000082 */
/* rand-u32-strided: 0x801600a0 1 4 0x84000042,0x84000082 */
/* rand-u32-strided: 0x801600d4 1 4 0x85000042,0x85000082 */
/* arg0: 0x00000001 */
