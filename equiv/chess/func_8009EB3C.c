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
#define DAT_80085428 (*(s32 *)0x80085428)
#define D_80069AD4 (*(s32 *)0x80069AD4)
#define func_8009DB7C ((s32 (*)())0x8009DB7C)
#define func_800A8E34 ((s32 (*)())0x800A8E34)
#define func_800CA730 ((s32 (*)())0x800CA730)
int func_8009EB3C(int param_1,int param_2,int param_3)

{
  union { u64 align; u8 bytes[0x8]; } recovered_local_frame;
#define local_20 (*(int volatile *)(recovered_local_frame.bytes + 0x0))
#define local_1c (*(int volatile *)(recovered_local_frame.bytes + 0x4))

  undefined4 *puVar1;
  s8 cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  s8 cVar6;



  cVar2 = '\0';
  do {
    cVar6 = cVar2;
    iVar3 = func_800A8E34(param_1,param_2,cVar6);
    cVar2 = cVar6 + '\x01';
  } while (iVar3 != 0);
  *(s8 *)(param_1 + 0x628) = cVar6;
  if (((param_3 == 1) &&
      (func_800CA730(((u8 *)0x80085428),*(undefined1 *)(param_1 + 0x5fa),&local_20,&local_1c),
      local_1c != -1)) && (param_2 == local_20)) {
    *(undefined1 *)(param_1 + 0x628) = (undefined1)local_1c;
  }
  iVar3 = 0;
  if (param_3 < 2) {
    puVar5 = ((u32 *)0x80069AD4);
    iVar4 = param_1;
    do {
      puVar1 = puVar5 + 0x11;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar4 + 0x798) = *puVar1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 3);
  }
  iVar3 = func_8009DB7C(param_1,param_2);
  return iVar3;
}

#undef local_20
#undef local_1c

/* stub-ret: mixed */
/* arg0: 0x80130000 */
/* arg1: 0x00000000 */
/* arg2: 0x00000001 */
/* rand-u32-strided: 0x80130000 450 4 0,1,2,3,0x80150000 */
/* real-callee: func_800A8E34 */
/* rand-u32-strided: 0x80130030 16 124 0,0x100,0x200 */
/* real-callee: func_800CA730 */
/* rand-u32-strided: 0x80130030 1 4 0x200 */
/* rand-u32-strided: 0x801300AC 1 4 0 */
/* rand-u32-strided: 0x801305F8 1 4 0 */
/* rand-u16: 0x80085A00 1 0 */
/* rand-u16: 0x80085FF8 1 0 */
/* rand-u16: 0x80085FFA 1 0 */
/* rand-u16: 0x801010B0 1 0 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u16: 0x80150002 1 256 */
