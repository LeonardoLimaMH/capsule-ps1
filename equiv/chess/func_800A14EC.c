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
/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FE21C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FF460 */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FE74C */
/* real-callee: __fixdfsi */
/* real-callee: __floatsidf */
/* real-callee: __muldf3 */
/* real-callee: _add_mant_d */
/* real-callee: _dbl_shift */
/* real-callee: _dbl_shift_us */
/* real-callee: _err_math */
/* real-callee: _mul_mant_d */
/* real-callee: func_8004FE2C */
/* real-callee: func_800DD428 */
/* real-callee: func_80015D14 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define DAT_800860d7 (*(u8 *)0x800860D7)
#define DAT_800979fc (*(s32 *)0x800979FC)
#define DAT_80097a00 (*(s8 *)0x80097A00)
#define D_8006388C (*(s32 *)0x8006388C)
#define D_80063890 (*(s32 *)0x80063890)
#define D_800979F8 (*(s32 *)0x800979F8)
#define func_8001F1A8 ((s32 (*)())0x8001F1A8)
#define func_80020844 ((s32 (*)())0x80020844)
void func_800A14EC(void)

{
  union { u64 align; u8 bytes[0x10]; } recovered_local_frame;
#define local_20 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_1c (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x4))
#define local_18 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x8))

  undefined4 uVar1;




  local_20 = D_800979F8;
  local_1c = DAT_800979fc;
  local_18 = DAT_80097a00;
  func_80020844(0xffffffb8,0xffffffd8,0x90,0x30,0,0,0,0,4);
  func_8001F1A8(0xffffffc0,0xffffffe0,0,1,0,&local_20,0,9,3);
  uVar1 = 0;
  if (DAT_800860d7 == '\0') {
    uVar1 = 3;
  }
  func_8001F1A8(0xffffffd8,0xfffffff4,uVar1,1,0,&D_8006388C,0,2,3);
  uVar1 = 0;
  if (DAT_800860d7 != '\0') {
    uVar1 = 3;
  }
  func_8001F1A8(0,0xfffffff4,uVar1,1,0,&D_80063890,0,3,3);
  return;
}

#undef local_20
#undef local_1c
#undef local_18
