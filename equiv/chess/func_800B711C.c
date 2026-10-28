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
#include "ghidra.h"
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_8001A998 ((s32 (*)())0x8001A998)
#define func_800B7200 ((s32 (*)())0x800B7200)
void func_800B711C(int param_1,int param_2)

{
  union { u64 align; u8 bytes[0xD0]; } recovered_local_frame;
#define auStack_e0 (*(undefined1 volatile (*)[176])(recovered_local_frame.bytes + 0x0))
#define local_30 (*(undefined1 * volatile *)(recovered_local_frame.bytes + 0xB0))
#define local_2c (*(undefined4 volatile *)(recovered_local_frame.bytes + 0xB4))
#define local_28 (*(uint volatile *)(recovered_local_frame.bytes + 0xB8))
#define local_24 (*(uint volatile *)(recovered_local_frame.bytes + 0xBC))
#define local_20 (*(uint volatile *)(recovered_local_frame.bytes + 0xC0))
#define local_1c (*(undefined4 volatile *)(recovered_local_frame.bytes + 0xC4))
#define local_18 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0xC8))
#define local_17 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0xC9))
#define local_16 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0xCA))
#define local_15 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0xCB))

  int iVar1;
  int iVar2;












  func_8001A998(auStack_e0,0xa9);
  local_30 = auStack_e0;
  local_2c = *(undefined4 *)(&D_801010B0 + (uint)*(byte *)(param_1 + 9) * 0x34);
  local_20 = (uint)*(byte *)(param_2 + 0x11);
  local_28 = (uint)*(byte *)(param_2 + 0x15);
  local_24 = (uint)*(byte *)(param_2 + 0x16);
  iVar2 = 0;
  local_1c = 0;
  do {
    local_18 = *(undefined1 *)(param_2 + 0x15);
    local_17 = *(undefined1 *)(param_2 + 0x16);
    local_16 = (undefined1)iVar2;
    local_15 = 0;
    *(undefined1 *)(param_1 + 0x706) = 0;
    iVar1 = func_800B7200(param_1,&local_30,&local_18);
    iVar2 = iVar2 + 1;
    if (iVar1 != 0) {
      return;
    }
  } while (iVar2 < 4);
  return;
}

#undef auStack_e0
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_17
#undef local_16
#undef local_15
