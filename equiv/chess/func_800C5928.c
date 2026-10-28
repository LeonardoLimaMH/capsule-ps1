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
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800A46B8 ((s32 (*)())0x800A46B8)
int func_800C5928(int param_1,undefined4 param_2,int param_3,int param_4)

{
  union { u64 align; u8 bytes[0x8]; } recovered_local_frame;
#define local_20 (*(short volatile *)(recovered_local_frame.bytes + 0x0))
#define local_1e (*(short volatile *)(recovered_local_frame.bytes + 0x2))
#define local_1c (*(short volatile *)(recovered_local_frame.bytes + 0x4))

  int task;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;




  uVar2 = 0;
  iVar3 = param_1 + param_3 * 0x2e8 + 0x5e8 + param_4 * 0x7c;
  func_800A46B8(param_1,*(undefined1 *)(iVar3 + 0x15),*(undefined1 *)(iVar3 + 0x16),&local_20);
  do {
    task = func_80015B3C(-0x7ff3a8b8,-0x7ffe9e3c,5);
    func_80015EF8(task);
    *(uint *)(task + 0x38) = *(uint *)(task + 0x38) | 1;
    uVar1 = func_80019F30(0x70013,0x5c);
    func_80015CD0(task + 0x14,uVar1,0);
    *(undefined4 *)(task + 0x40) = param_2;
    *(uint *)(task + 0x34) = *(uint *)(task + 0x34) & 0xffffff80 | uVar2 & 0x7f;
    *(short *)(task + 0x66) =
         (short)uVar2 +
         ((short)((ulonglong)((longlong)(int)uVar2 * 0x2aaaaaab) >> 0x20) -
         (short)((int)uVar2 >> 0x1f)) * -6;
    *(int *)(task + 0x84) = (int)local_20;
    *(int *)(task + 0x88) = (int)local_1e;
    uVar2 = uVar2 + 1;
    *(int *)(task + 0x80) = iVar3;
    *(int *)(task + 0x8c) = (int)local_1c;
  } while ((int)uVar2 < 0x1e);
  return task;
}

#undef local_20
#undef local_1e
#undef local_1c

/* arg0: 0x80140000 */
/* arg1: 0x80150000 */
/* arg2: small */
/* arg3: small */
/* real-callee: func_800A46B8 */
/* real-callee: func_80020304 */
/* rand-u16: 0x801405D9 1 0,1 */
/* rand-mem: 0x801405FD 2 13 */
/* rand-u16: 0x801010B0 1 8192 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u16: 0x801010E4 1 16384 */
/* rand-u16: 0x801010E6 1 32789 */
/* rand-mem: 0x80152000 676 256 */
/* rand-mem: 0x80154000 676 256 */
