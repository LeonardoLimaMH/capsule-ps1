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
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008ee6a (*(s8 *)0x8008EE6A)
#define DAT_8008f704 (*(s32 *)0x8008F704)
#define func_80012668 ((s32 (*)())0x80012668)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_8001602C ((s32 (*)())0x8001602C)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800A46B8 ((s32 (*)())0x800A46B8)
undefined4 func_800C6F80(undefined4 param_1,int param_2,int param_3)

{
  union { u64 align; u8 bytes[0x8]; } recovered_local_frame;
#define local_28 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_26 (*(short volatile *)(recovered_local_frame.bytes + 0x2))
#define local_24 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x4))

  int iVar1;
  int iVar2;
  undefined4 uVar3;




  iVar2 = *(int *)(param_3 + 0x78);
  uVar3 = 0;
  switch(DAT_8008ee54) {
  case 0:
    DAT_8008ee6a = 2;
    iVar2 = 0;
    do {
      iVar1 = func_80015B3C(-0x7ff39a14,-0x7ff333f4,3);
      func_8001602C(iVar1);
      if (iVar2 != 0) {
        *(undefined1 *)(iVar1 + 0x58) = 1;
      }
      *(int *)(iVar1 + 0x5c) = iVar2;
      iVar2 = iVar2 + 1;
      *(int *)(iVar1 + 0x60) = param_3;
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) & 0xffffffcf | 0x41;
    } while (iVar2 < 0x18);
    *(int *)(param_2 + 0x62c) = iVar1;
    uVar3 = 0x13;
    goto LAB_800c70c0;
  case 1:
    uVar3 = 0;
    if (*(int *)(*(int *)(param_2 + 0x62c) + 100) == 1) {
      func_80012668();
      uVar3 = 0;
    }
    break;
  case 2:
    *(undefined1 *)(param_3 + 0x17) = 0x88;
    *(undefined1 *)(param_3 + 0x23) = 1;
    func_80012668();
  case 3:
    uVar3 = 0;
    if (*(s8 *)(param_3 + 0x22) == *(s8 *)(param_3 + 0x17)) {
      uVar3 = 4;
      *(undefined1 *)(param_3 + 0x24) = 0x45;
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x8000;
LAB_800c70c0:
      func_80034AB0(uVar3);
      func_80012668();
      uVar3 = 0;
    }
    break;
  case 4:
    *(undefined4 *)(iVar2 + 0x84) = 1;
    *(undefined4 *)(iVar2 + 0x88) = 2;
    func_800A46B8(param_1,*(undefined1 *)(param_3 + 0x15),*(undefined1 *)(param_3 + 0x16),&local_28)
    ;
    *(undefined2 *)(iVar2 + 0x6a) = local_28;
    *(short *)(iVar2 + 0x6e) = local_26 + -0xbe;
    *(undefined2 *)(iVar2 + 0x74) = 0;
    *(undefined2 *)(iVar2 + 0x76) = 0;
    *(undefined2 *)(iVar2 + 0x72) = local_24;
    func_80012668();
    uVar3 = 0;
    break;
  case 5:
    *(short *)(iVar2 + 0x76) = *(short *)(iVar2 + 0x76) + 0x40;
    *(short *)(iVar2 + 0x74) = *(short *)(iVar2 + 0x74) + 0x40;
    uVar3 = 0;
    if (*(int *)(iVar2 + 0x20) == 8) {
      DAT_8008f704 = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      func_80012668();
      uVar3 = 0;
    }
    break;
  case 6:
    uVar3 = 0;
    if (*(int *)(*(int *)(param_2 + 0x62c) + 100) == 2) {
      *(undefined4 *)(iVar2 + 0x1c) = DAT_8008f704;
      func_80012668();
      uVar3 = 0;
    }
    break;
  case 7:
    DAT_8008ee6a = 0;
    uVar3 = 1;
  }
  return uVar3;
}

#undef local_28
#undef local_26
#undef local_24

/* arg2: 0x80160000 */
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7 */
/* rand-mem: 0x80160015 2 13 */
/* rand-u16: 0x80160017 1 0,1,2,136 */
/* rand-u16: 0x80160022 1 0,1,2,136 */
/* rand-u16: 0x8015062C 1 4096 */
/* rand-u16: 0x8015062E 1 32790 */
/* rand-u16: 0x80160078 1 8192 */
/* rand-u16: 0x8016007A 1 32790 */
/* rand-u16: 0x80161064 1 0,1,2,8 */
/* rand-u16: 0x80161066 1 0 */
/* rand-u16: 0x80162020 1 0,8 */
/* rand-u16: 0x80162022 1 0 */
