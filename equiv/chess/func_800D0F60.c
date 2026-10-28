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
#define DAT_80118fba (*(u8 *)0x80118FBA)
#define func_800D2C9C ((s32 (*)())0x800D2C9C)
#define func_800D497C ((s32 (*)())0x800D497C)
s8 func_800D0F60(undefined1 param_1,uint param_2)

{
  union { u64 align; u8 bytes[0xB0]; } recovered_local_frame;
#define auStack_c8 (*(undefined1 volatile (*)[176])(recovered_local_frame.bytes + 0x0))

  s8 cVar1;
  s8 cVar2;
  s8 cVar3;
  s8 cVar4;
  int iVar5;


  iVar5 = ((param_2 & 0x7f) - 1) * 7 + ((param_2 & 0xff) >> 7) * 0x2a + (uint)DAT_80118c22 * 0x10e;
  cVar4 = *(s8 *)((int)((u32 *)0x80118FBA) + iVar5);
  cVar1 = *(s8 *)((int)((u32 *)0x80118FBA) + iVar5 + 1);
  func_800D497C(param_1,auStack_c8);
  cVar2 = func_800D2C9C(auStack_c8,cVar4 + '\x01',cVar1);
  cVar2 = cVar2 != '\0';
  cVar3 = func_800D2C9C(auStack_c8,cVar4 + -1,cVar1);
  if (cVar3 != '\0') {
    cVar2 = cVar2 + '\x01';
  }
  cVar3 = func_800D2C9C(auStack_c8,cVar4,cVar1 + '\x01');
  if (cVar3 != '\0') {
    cVar2 = cVar2 + '\x01';
  }
  cVar4 = func_800D2C9C(auStack_c8,cVar4,cVar1 + -1);
  if (cVar4 != '\0') {
    cVar2 = cVar2 + '\x01';
  }
  return cVar2;
}

#undef auStack_c8

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
/* arg0: 0x00000001 */
/* arg1: 0x00000001 */
