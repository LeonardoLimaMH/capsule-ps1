#include "common.h"

/* rand-u16: 0x801405D9 1 0,1 */
/* rand-mem: 0x80140015 2 13 */
/* rand-mem: 0x80150015 2 13 */
/* rand-u16: 0x801010B0 1 8192 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u16: 0x801010E4 1 16384 */
/* rand-u16: 0x801010E6 1 32789 */
/* rand-u32-strided: 0x80152000 169 4 0,0x42,0x82 */
/* rand-u32-strided: 0x80154000 169 4 0,0x42,0x82 */
/* real-callee: func_800A8EE8 */
/* real-callee: func_800A835C */
/* real-callee: func_800A46B8 */
/* real-callee: func_80020304 */
/* real-callee: func_800202A4 */
/* real-callee: func_800A8994 */
/* arg0: 0x80140000 */
/* arg1: 0x80150000 */
/* arg2: small */
/* arg3: small */
/* arg4: small */
/* arg5: small */
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
#define D_80101030 (*(u8 *)0x80101030)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_8001602C ((s32 (*)())0x8001602C)
#define func_800A46B8 ((s32 (*)())0x800A46B8)
int func_800C553C(int param_1,undefined4 param_2,int param_3,int param_4)

{
  union { u64 align; u8 bytes[0x8]; } recovered_local_frame;
#define local_28 (*(short volatile *)(recovered_local_frame.bytes + 0x0))
#define local_26 (*(short volatile *)(recovered_local_frame.bytes + 0x2))
#define local_24 (*(short volatile *)(recovered_local_frame.bytes + 0x4))

  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;




  iVar4 = 0;
  iVar7 = param_1 + param_3 * 0x2e8 + 0x5e8 + param_4 * 0x7c;
  func_800A46B8(param_1,*(undefined1 *)(iVar7 + 0x15),*(undefined1 *)(iVar7 + 0x16),&local_28);
  do {
    iVar6 = 0;
    iVar5 = iVar4 + 1;
    do {
      iVar1 = func_80015B3C(-0x7ff3ad00,-0x7ff33664,3);
      func_8001602C(iVar1);
      if (iVar4 != 0) {
        *(undefined1 *)(iVar1 + 0x58) = 1;
      }
      iVar2 = iVar4;
      if (iVar4 < 0) {
        iVar2 = iVar4 + 7;
      }
      uVar3 = (iVar4 + (iVar2 >> 3) * -8) - 4;
      if ((int)uVar3 < 0) {
        uVar3 = -uVar3;
      }
      iVar2 = (uVar3 & 0xff) * 4;
      *(undefined *)(iVar1 + 0x38) = (&D_80101030)[iVar2];
      *(undefined1 *)(iVar1 + 0x39) = *(undefined1 *)(iVar2 + -0x7fefefcf);
      *(undefined1 *)(iVar1 + 0x3a) = *(undefined1 *)(iVar2 + -0x7fefefce);
      *(undefined *)(iVar1 + 0x3e) = (&D_80101030)[iVar2];
      *(undefined1 *)(iVar1 + 0x3f) = *(undefined1 *)(iVar2 + -0x7fefefcf);
      *(undefined1 *)(iVar1 + 0x40) = *(undefined1 *)(iVar2 + -0x7fefefce);
      iVar2 = iVar5;
      if (iVar5 < 0) {
        iVar2 = iVar4 + 8;
      }
      uVar3 = (iVar5 + (iVar2 >> 3) * -8) - 4;
      if ((int)uVar3 < 0) {
        uVar3 = -uVar3;
      }
      iVar2 = (uVar3 & 0xff) * 4;
      *(undefined *)(iVar1 + 0x3b) = (&D_80101030)[iVar2];
      *(undefined1 *)(iVar1 + 0x3c) = *(undefined1 *)(iVar2 + -0x7fefefcf);
      *(undefined1 *)(iVar1 + 0x3d) = *(undefined1 *)(iVar2 + -0x7fefefce);
      *(undefined *)(iVar1 + 0x41) = (&D_80101030)[iVar2];
      *(undefined1 *)(iVar1 + 0x42) = *(undefined1 *)(iVar2 + -0x7fefefcf);
      *(undefined1 *)(iVar1 + 0x43) = *(undefined1 *)(iVar2 + -0x7fefefce);
      *(int *)(iVar1 + 0x5c) = iVar4;
      *(int *)(iVar1 + 0x60) = iVar7;
      iVar6 = iVar6 + 1;
      *(int *)(iVar1 + 100) = (int)local_28;
      *(int *)(iVar1 + 0x68) = (int)local_26;
      *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) & 0xffffffcf | 0x40;
      *(int *)(iVar1 + 0x6c) = (int)local_24;
    } while (iVar6 < 1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  return iVar1;
}

#undef local_28
#undef local_26
#undef local_24
