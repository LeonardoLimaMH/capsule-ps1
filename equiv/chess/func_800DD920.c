#include "common.h"

#include "common.h"

#include "common.h"

/* task-callback */
/* callee-contract: RotAverage4 */
/* rand-u16: 0x8008ED68 1 0 */
/* rand-u16: 0x8008ED6A 1 32786 */
/* rand-u16: 0x80121090 1 8192 */
/* rand-u16: 0x80121092 1 32786 */
/* rand-u16: 0x80130014 1 0 */
/* rand-u16: 0x80130016 1 32788 */
/* rand-u16: 0x80130038 1 4,5,8,12,16 */
/* rand-u16: 0x8013003A 1 8,16,32,64,128 */
/* rand-u16: 0x8013003C 1 8,16,32,64,128 */
/* rand-u16: 0x8013003E 1 0,1,2,15,255,4095 */
/* rand-u16: 0x80130042 1 0,1,2,255,65535 */
/* rand-u16: 0x8013004E 1 0,1,2,3,4,5,6,7,65535 */
/* rand-u16: 0x80130054 1 0,1,2,3,4,5,19,20,79,80,81,100 */
/* rand-u16: 0x80130056 1 0 */
/* rand-u16: 0x80130064 1 0,1,5,19,20,40,80,100 */
/* rand-u16: 0x80130066 1 0 */
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
/* real-callee: func_800DD428 */
/* real-callee: func_800DDA78 */
/* real-callee: func_800FE188 */
/* real-callee: func_800FE21C */
/* real-callee: func_800FE74C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FF460 */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* compiler: 2.8.1-psx */
/* rand-u16: 0x8013007A 1 0,1,2,3,4,5,6,7,8,9,10,15,31,65535 */
/* rand-u16: 0x8013003C 1 0,1,5,19,20,29,30,31,39,40,49,50,79,80,89,90,99,100,127,128,199 */
/* rand-u16: 0x8013003E 1 0 */
/* rand-u16: 0x80130070 1 4096 */
/* rand-u16: 0x80130072 1 32788 */
/* rand-u16: 0x80130074 1 8192 */
/* rand-u16: 0x80130076 1 32788 */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
#define func_80013920 ((s32 (*)())0x80013920)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_800FF190 ((s32 (*)())0x800FF190)
void func_800DD920(int param_1)

{
  union { u64 align; u8 bytes[0x8]; } recovered_local_frame;
#define local_28 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_26 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2))
#define local_24 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x4))

  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;




  iVar5 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(iVar5 + 0x70);
  iVar6 = *(int *)(iVar5 + 0x74);
  if (DAT_8008ee6b < 2) {
    sVar1 = *(short *)(param_1 + 0x1e) + 1;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x1e) + (ushort)DAT_8008ee6b;
  }
  local_28 = *(undefined2 *)(param_1 + 0x2c);
  *(short *)(param_1 + 0x1e) = sVar1;
  local_26 = *(undefined2 *)(param_1 + 0x2e);
  local_24 = *(undefined2 *)(param_1 + 0x30);
  iVar3 = (int)sVar1;
  func_800FF190(iVar5,&local_28,1);
  iVar2 = iVar3;
  if (iVar3 < 0) {
    iVar2 = iVar3 + 3;
  }
  *(uint *)(iVar4 + 0x34) =
       *(uint *)(iVar4 + 0x34) & 0xffffff80 | (uint)(iVar3 + (iVar2 >> 2) * -4 < 2);
  if (iVar3 < 0x14) {
    sVar1 = func_800202A4(0xb);
    sVar1 = *(short *)(iVar4 + 0x46) + sVar1 + -5;
    *(short *)(iVar4 + 0x46) = sVar1;
    *(short *)(iVar6 + 0x46) = sVar1;
    sVar1 = func_800202A4(0xb);
    sVar1 = *(short *)(iVar4 + 0x4a) + sVar1 + -5;
    *(short *)(iVar4 + 0x4a) = sVar1;
    *(short *)(iVar6 + 0x4a) = sVar1;
  }
  else {
    *(uint *)(iVar5 + 0x18) = *(uint *)(iVar5 + 0x18) ^ 0x80000000;
    *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) & 0xffffff80;
    func_80013920(param_1);
  }
  return;
}

#undef local_28
#undef local_26
#undef local_24
