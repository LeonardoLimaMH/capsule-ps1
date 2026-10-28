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
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_8001A998 ((s32 (*)())0x8001A998)
#define func_800B6E24 ((s32 (*)())0x800B6E24)
#define func_800B7630 ((s32 (*)())0x800B7630)
int func_800B6D2C(int param_1,int param_2,undefined4 param_3)

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

  uint uVar1;
  int iVar2;
  int iVar3;












  func_8001A998(auStack_e0,0xa9);
  local_30 = auStack_e0;
  local_2c = *(undefined4 *)(&D_801010B0 + (uint)*(byte *)(param_1 + 9) * 0x34);
  local_20 = (uint)*(byte *)(param_2 + 0x11);
  local_28 = (uint)*(byte *)(param_2 + 0x15);
  local_24 = (uint)*(byte *)(param_2 + 0x16);
  local_1c = 0;
  uVar1 = func_800B7630(param_1,param_3,local_28,local_24);
  uVar1 = uVar1 & 0xff;
  iVar3 = 0;
  if (uVar1 == 0) {
    do {
      local_18 = *(undefined1 *)(param_2 + 0x15);
      local_17 = *(undefined1 *)(param_2 + 0x16);
      local_16 = (undefined1)iVar3;
      local_15 = 0;
      *(undefined1 *)(param_1 + 0x706) = 0;
      iVar2 = func_800B6E24(param_1,&local_30,&local_18);
      iVar3 = iVar3 + 1;
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar1 = 0;
    } while (iVar3 < 4);
  }
  return uVar1;
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

/* arg0: 0x80140000 */
/* arg1: 0x80160000 */
/* real-callee: func_8001A998 */
/* real-callee: func_800B7630 */
/* real-callee: func_800B6E24 */
/* real-callee: func_800B74BC */
/* real-callee: func_800B75C4 */
/* rand-u16: 0x80140008 1 0 */
/* rand-u16: 0x8014000E 1 0,257 */
/* rand-u16: 0x801010B0 1 0 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u16: 0x80160010 1 0,256,512,768 */
/* rand-u16: 0x80160014 1 1536 */
/* rand-u16: 0x80160016 1 6 */
/* rand-u16: 0x801406E2 1 0,1541,1797,1798,1799,1543,1287,1286,1285 */
/* rand-u16: 0x80140706 1 0,256,512,768 */
/* rand-u32-strided: 0x80150000 169 4 0x42,0x80042,0x100042,0x380042 */
/* arg2: 0x00000000 */
