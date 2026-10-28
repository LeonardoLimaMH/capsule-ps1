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
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define func_800185F8 ((s32 (*)())0x800185F8)
#define func_80020578 ((s32 (*)())0x80020578)
#define func_800CD9F0 ((s32 (*)())0x800CD9F0)
extern s32 rsin();
void func_800C5748(int param_1)

{
  union { u64 align; u8 bytes[0x10]; } recovered_local_frame;
#define local_18 (*(short volatile *)(recovered_local_frame.bytes + 0x0))
#define local_16 (*(short volatile *)(recovered_local_frame.bytes + 0x2))
#define local_14 (*(short volatile *)(recovered_local_frame.bytes + 0x4))
#define local_10 (*(short volatile *)(recovered_local_frame.bytes + 0x8))
#define local_e (*(short volatile (*)[3])(recovered_local_frame.bytes + 0xA))

  undefined2 uVar1;
  int iVar2;
  uint uVar3;






  if (DAT_8008ee6b < 2) {
    uVar3 = *(int *)(param_1 + 0x3c) + 1;
  }
  else {
    uVar3 = *(int *)(param_1 + 0x3c) + (uint)DAT_8008ee6b;
  }
  *(uint *)(param_1 + 0x3c) = uVar3;
  if (uVar3 == 0x14) {
    *(uint *)(*(int *)(param_1 + 0x80) + 0x18) =
         *(uint *)(*(int *)(param_1 + 0x80) + 0x18) | 0x80000;
  }
  else if (0x28 < uVar3) {
    func_800185F8(param_1);
  }
  iVar2 = rsin((uint)(*(int *)(param_1 + 0x3c) << 10) / 0x32);
  iVar2 = iVar2 * 0x32;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xfff;
  }
  func_80020578((iVar2 << 4) >> 0x10,0,
                (*(int *)(param_1 + 0x3c) * 0xd0 + 0x88) * (*(uint *)(param_1 + 0x34) & 0x7f) &
                0xff8,&local_10,local_e);
  local_18 = *(short *)(param_1 + 0x84) + local_10;
  local_16 = *(short *)(param_1 + 0x88) + (short)*(undefined4 *)(param_1 + 0x3c) * 4 + -200;
  local_14 = *(short *)(param_1 + 0x8c) + local_e[0];
  uVar1 = func_800CD9F0(&local_18,param_1,(*(uint *)(param_1 + 0x34) & 0x7f) == 0);
  *(undefined2 *)(param_1 + 0x4e) = uVar1;
  *(short *)(param_1 + 0x46) = *(short *)(param_1 + 0x46) - (short)(DAT_8008ee70 / 2);
  iVar2 = DAT_8008ee74;
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
  *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) - (short)(iVar2 / 2);
  return;
}

#undef local_18
#undef local_16
#undef local_14
#undef local_10
#undef local_e
