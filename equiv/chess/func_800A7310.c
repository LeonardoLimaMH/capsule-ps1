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
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800A7B30 ((s32 (*)())0x800A7B30)
#define func_800A7BB4 ((s32 (*)())0x800A7BB4)
#define func_800A81D8 ((s32 (*)())0x800A81D8)
#define func_800A82A0 ((s32 (*)())0x800A82A0)
#define func_800A8994 ((s32 (*)())0x800A8994)
#define func_800C942C ((s32 (*)())0x800C942C)
#define func_800C9A34 ((s32 (*)())0x800C9A34)
int func_800A7310(int param_1,int param_2,int param_3,int param_4)

{
  union { u64 align; u8 bytes[0x8]; } recovered_local_frame;
#define local_28 (*(uint volatile *)(recovered_local_frame.bytes + 0x0))
#define local_24 (*(int volatile *)(recovered_local_frame.bytes + 0x4))

  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;



  iVar4 = param_1 + param_3 * 0x2e8 + 0x5e8 + param_4 * 0x7c;
  uVar1 = func_800A8994(param_1,param_3,param_4);
  local_24 = func_800C942C(param_1,*(undefined1 *)(iVar4 + 0x25));
  local_24 = func_800C9A34(param_1,iVar4,local_24);
  if (local_24 == *(int *)(param_2 + 0x8c)) {
    local_28 = (uint)*(byte *)(iVar4 + 0x17);
  }
  else {
    func_800A82A0(param_2,&local_28,&local_24,iVar4);
  }
  *(undefined1 *)(iVar4 + 0x22) = (undefined1)local_28;
  if ((*(s8 *)(iVar4 + 0x28) == '\0') && ((local_28 & 0x80) != 0)) {
    iVar2 = func_800A7B30(param_1,iVar4,local_24,local_28);
    if (((*(int *)(param_2 + 0x88) < 1) || (*(int *)(param_2 + 0x8c) != local_24)) ||
       (*(int *)(param_2 + 0x88) + -1 != iVar2)) {
      uVar3 = func_80019F30(uVar1 | 0x70000,iVar2);
      func_80015CD0(param_2 + 0x14,uVar3,*(undefined1 *)(iVar4 + 0x23));
      *(int *)(param_2 + 0x88) = iVar2 + 1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x88) = 0;
    uVar3 = func_800A7BB4(local_24,local_28,iVar4);
    uVar3 = func_80019F30(uVar1 | 0x60000,uVar3);
    *(undefined4 *)(param_2 + 0x18) = uVar3;
    *(undefined4 *)(param_2 + 0x1c) = 0;
  }
  *(int *)(param_2 + 0x8c) = local_24;
  iVar4 = func_800A81D8(param_1,param_2,param_3,param_4);
  return iVar4;
}

#undef local_28
#undef local_24

/* arg0: 0x80140000 */
/* arg1: 0x80150000 */
/* real-callee: func_800A8994 */
/* real-callee: func_800C942C */
/* real-callee: func_800C9A34 */
/* real-callee: func_800A82A0 */
/* real-callee: func_800A7B30 */
/* real-callee: func_800A7BB4 */
/* real-callee: func_80019F30 */
/* real-callee: func_800A81D8 */
/* rand-u16: 0x80069BBE 1 0,256,4095 */
/* rand-u16: 0x8011881A 1 0,257,1023 */
/* rand-u16: 0x8011881C 1 257,65282 */
/* rand-u16: 0x8008EE6A 1 0,256,512,1024 */
/* rand-u32-strided: 0x80150084 1 4 0,0x10000,0x20000,0xFF0000 */
/* rand-u32-strided: 0x80150088 1 4 0,1,2,0x7FFFFFFF */
/* rand-u32-strided: 0x8015008C 1 4 0,1,7 */
/* arg2: 0x00000000 */
/* arg3: 0x00000000 */
/* rand-u16: 0x801405e8 1 0,12,49,71,72,82 */
/* rand-u16: 0x801405fe 1 0,256,33024,33280,34304,35328 */
/* rand-u32-strided: 0x80140600 1 4 0,0x200000,0x400000,0x600000 */
/* rand-u16: 0x80140608 1 257,65282 */
/* rand-u16: 0x8014060c 1 0,257,1799 */
/* rand-u16: 0x8014060e 1 0,1,2,3,4,256,257,258,259,260 */
/* rand-u16: 0x80140610 1 0,257 */
