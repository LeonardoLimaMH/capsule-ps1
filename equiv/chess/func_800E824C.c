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
#define D_80118C18 (*(s32 *)0x80118C18)
#define D_80119714 (*(s32 *)0x80119714)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800DD824 ((s32 (*)())0x800DD824)
#define func_800FF190 ((s32 (*)())0x800FF190)
#define func_800FF460 ((s32 (*)())0x800FF460)
extern s32 rsin();
undefined4 func_800E824C(undefined4 param_1,int param_2,int param_3,int param_4)

{
  union { u64 align; u8 bytes[0x8]; } recovered_local_frame;
#define auStack_28 (*(undefined1 volatile (*)[2])(recovered_local_frame.bytes + 0x0))
#define local_26 (*(short volatile *)(recovered_local_frame.bytes + 0x2))

  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;



  if (DAT_8008ee54 == 3) {
    func_800FF460(param_3,param_4,0x1e,D_80119714,auStack_28);
    iVar6 = rsin((D_80119714 << 0xc) / 0x3c);
    iVar6 = iVar6 * 0x32;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xfff;
    }
    local_26 = local_26 - (short)(iVar6 >> 0xc);
    func_800FF190(param_3,auStack_28,1);
    if (D_80119714 < 0x1e) {
      return 0;
    }
    bVar1 = *(byte *)(param_3 + 0x15);
    bVar2 = *(byte *)(param_3 + 0x16);
    bVar3 = *(byte *)(param_4 + 0x16);
    iVar9 = (uint)bVar2 * 4;
    iVar7 = (uint)bVar1 * 0x34;
    iVar8 = (uint)bVar3 * 4;
    iVar6 = (uint)*(byte *)(param_4 + 0x15) * 0x34;
    uVar4 = *(undefined1 *)(iVar9 + iVar7 + D_80118C18 + 3);
    uVar5 = *(undefined1 *)(iVar8 + iVar6 + D_80118C18 + 3);
    *(byte *)(param_3 + 0x15) = *(byte *)(param_4 + 0x15);
    *(byte *)(param_3 + 0x16) = bVar3;
    *(undefined1 *)(iVar8 + iVar6 + D_80118C18 + 3) = uVar4;
    *(byte *)(param_4 + 0x15) = bVar1;
    *(byte *)(param_4 + 0x16) = bVar2;
    *(undefined1 *)(iVar9 + iVar7 + D_80118C18 + 3) = uVar5;
    *(undefined1 *)(param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2 + 0x601) =
         *(undefined1 *)(param_4 + 0x15);
    *(undefined1 *)(param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2 + 0x602) =
         *(undefined1 *)(param_4 + 0x16);
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) ^ 0x80000000;
  }
  else {
    if (3 < DAT_8008ee54) {
      if (DAT_8008ee54 == 10) {
        if (0x77 < D_80119714) {
          return 1;
        }
        return 0;
      }
      if (10 < DAT_8008ee54) {
        if (DAT_8008ee54 == 99) {
          return 1;
        }
        return 0;
      }
      if (DAT_8008ee54 != 4) {
        return 0;
      }
      if (0x3b < D_80119714) {
        DAT_8008ee54 = 99;
        D_80119714 = 0;
        return 0;
      }
      return 0;
    }
    if (DAT_8008ee54 == 1) {
      if (*(uint *)(*(int *)(param_3 + 0x70) + 0x20) < 2) {
        return 0;
      }
      if ((*(uint *)((uint)*(byte *)(param_4 + 0x16) * 4 +
                    (uint)*(byte *)(param_4 + 0x15) * 0x34 + D_80118C18) >> 6 & 0x1fff) == 2) {
        func_800DD824(param_4,(uint)*(byte *)(param_4 + 0x15),(uint)*(byte *)(param_4 + 0x16),0,1);
        DAT_8008ee54 = 10;
        D_80119714 = 0;
        return 0;
      }
      func_800DD824(param_4,*(undefined1 *)(param_3 + 0x15),*(undefined1 *)(param_3 + 0x16),0,1);
    }
    else if (DAT_8008ee54 < 2) {
      if (DAT_8008ee54 != 0) {
        return 0;
      }
      *(undefined1 *)(param_3 + 0x17) = 0x87;
      *(undefined1 *)(param_3 + 0x23) = 1;
      func_80034AB0(0x800a);
    }
    else {
      if (*(int *)(*(int *)(param_3 + 0x70) + 0x1c) != 0) {
        return 0;
      }
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x80000000;
    }
  }
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
  return 0;
}

#undef auStack_28
#undef local_26

/* arg1: 0x80160000 */
/* arg2: 0x80140000 */
/* arg3: 0x80150000 */
/* real-callee: rsin */
/* rand-u16: 0x80140014 2 0,257,1542,3084 */
/* rand-u16: 0x80150014 2 0,257,1542,3084 */
/* rand-u16: 0x801605FA 1 0,1 */
/* rand-u32-strided: 0x80140070 1 4 0x80161000 */
/* rand-u32-strided: 0x80150070 1 4 0x80162000 */
/* rand-u32-strided: 0x80161020 1 4 0,1,2,4 */
/* rand-u32-strided: 0x8016101C 1 4 0,1 */
/* rand-u16: 0x80161046 5 0,100,32767,32768,65535 */
/* rand-u16: 0x80162046 5 0,100,32767,32768,65535 */
/* rand-u16: 0x80118C18 1 0 */
/* rand-u16: 0x80118C1A 1 32791 */
/* rand-u32-strided: 0x80170000 169 4 0x01000042,0x81000082,0x06080042,0x86000042 */
/* rand-u32-strided: 0x80119714 1 4 0,1,29,30,59,60,119,120,230 */
/* rand-u16: 0x8008EE54 1 3 */
/* rand-u32-strided: 0x80140074 1 4 0x80163000 */
/* rand-u32-strided: 0x80150074 1 4 0x80164000 */
