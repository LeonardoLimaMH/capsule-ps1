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
#define DAT_80118c22 (*(u8 *)0x80118C22)
#define DAT_80118fbe (*(s32 *)0x80118FBE)
#define DAT_8011970a (*(u8 *)0x8011970A)
#define DAT_8011970b (*(u8 *)0x8011970B)
#define D_80118C18 (*(s32 *)0x80118C18)
#define D_80119660 (*(u8 *)0x80119660)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_800CFFF8 ((s32 (*)())0x800CFFF8)
#define func_800D497C ((s32 (*)())0x800D497C)
#define func_800D8580 ((s32 (*)())0x800D8580)
#define func_800D90C0 ((s32 (*)())0x800D90C0)
bool func_800DAF10(uint param_1)

{
  union { u64 align; u8 bytes[0xB0]; } recovered_local_frame;
#define local_d0 (*(byte volatile (*)[176])(recovered_local_frame.bytes + 0x0))

  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;


  iVar7 = 0;
  uVar3 = param_1 & 0xff;
  sVar1 = func_800D8580(uVar3,uVar3);
  iVar6 = 0;
  iVar4 = ((param_1 & 0x7f) - 1) * 7 + (uVar3 >> 7) * 0x2a;
  *(s8 *)((int)((u32 *)0x80118FBE) + iVar4 + 1) =
       *(s8 *)((int)((u32 *)0x80118FBE) + iVar4 + 1) + (s8)sVar1;
  DAT_80118c22 = 0;
  iVar2 = func_800D497C(uVar3,local_d0);
  DAT_80118c22 = 2;
  *(s8 *)((int)((u32 *)0x80118FBE) + iVar4 + 1) =
       *(s8 *)((int)((u32 *)0x80118FBE) + iVar4 + 1) - (s8)sVar1;
  do {
    iVar4 = 0;
    do {
      if (local_d0[iVar4 + iVar6 * 0xd] != 0) {
        iVar2 = iVar2 + -1;
        if ((sVar1 < (short)(ushort)local_d0[iVar4 + iVar6 * 0xd]) &&
           (*(s8 *)(iVar4 * 4 + iVar6 * 0x34 + D_80118C18 + 3) == '\0')) {
          (&D_80119660)[iVar7] = (s8)(iVar6 * 0xd) + (s8)iVar4;
          iVar7 = iVar7 + 1;
        }
        if (iVar2 == 0) {
          iVar6 = 0xd;
          break;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xd);
    iVar6 = iVar6 + 1;
    if (0xc < iVar6) {
      if (iVar7 != 0) {
        iVar2 = func_800202A4(iVar7);
        func_800D90C0(param_1 & 0xff);
        pbVar5 = &D_80119660 + iVar2;
        func_800CFFF8(param_1 & 0xff,*pbVar5 / 0xd,(uint)*pbVar5 % 0xd);
        DAT_8011970a = *pbVar5 / 0xd;
        DAT_8011970b = *pbVar5 % 0xd;
      }
      return iVar7 != 0;
    }
  } while( true );
}

#undef local_d0

/* real-callee: func_800D3D2C */
/* real-callee: func_800D3A2C */
/* rand-u16: 0x80085A10 1 0 */
/* rand-u16: 0x80085CF8 1 0 */
/* rand-u16: 0x80085A06 1 0,257 */
/* rand-u16: 0x80063948 1 0,256,512,1024,1536,1792,2048 */
/* rand-u16: 0x80118FBA 1 0,257,1542,3084 */
/* rand-u16: 0x80118FBE 1 0,256,512,768 */
/* rand-u16: 0x80118FE4 1 0,257,1542,3084 */
/* rand-u16: 0x80118FE8 1 0,256,512,768 */
/* rand-u16: 0x8011900E 85 0,257,1542,33153,34438 */
/* rand-u16: 0x80118C18 1 0 */
/* rand-u16: 0x80118C1A 1 32790 */
/* rand-u32-strided: 0x80160000 169 4 0,0x42,0x82,0x80042,0x380042 */
/* real-callee: func_8001A998 */
/* real-callee: func_800D497C */
/* real-callee: func_800D4100 */
/* real-callee: func_800D2C9C */
/* rand-u16: 0x80118C22 1 0 */
/* real-callee: func_800D8580 */
/* real-callee: func_800D7B80 */
/* real-callee: func_800202A4 */
/* real-callee: rand */
/* rand-u16: 0x80085A20 1 0,256,768,2304 */
/* rand-u16: 0x80085D08 1 0,256,768,2304 */
/* rand-u32-strided: 0x8006B2B4 1 4 0,0x20000000,0x40000000,0x60000000 */
/* rand-u16: 0x8006B2B8 1 0,1,5,100,65535 */
/* arg0: 0x00000001 */
