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
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
#define DAT_8008ee74 (*(u32 *)0x8008EE74)
#define func_80012668 ((s32 (*)())0x80012668)
#define func_800A46B8 ((s32 (*)())0x800A46B8)
#define func_800A88C4 ((s32 (*)())0x800A88C4)
#define func_800A88E8 ((s32 (*)())0x800A88E8)
#define func_800B91F0 ((s32 (*)())0x800B91F0)
#define func_800CD950 ((s32 (*)())0x800CD950)
extern s32 rsin();
undefined4 func_800BAF44(int param_1,int param_2,int param_3,undefined1 *param_4,int param_5)

{
  union { u64 align; u8 bytes[0x68]; } recovered_local_frame;
#define local_d0 (*(short volatile *)(recovered_local_frame.bytes + 0x0))
#define local_ce (*(short volatile *)(recovered_local_frame.bytes + 0x2))
#define local_cc (*(short volatile *)(recovered_local_frame.bytes + 0x4))
#define local_c8 (*(short volatile (*)[2])(recovered_local_frame.bytes + 0x8))
#define local_c4 (*(short volatile *)(recovered_local_frame.bytes + 0xC))
#define local_c0 (*(short volatile *)(recovered_local_frame.bytes + 0x10))
#define local_be (*(short volatile *)(recovered_local_frame.bytes + 0x12))
#define local_bc (*(short volatile *)(recovered_local_frame.bytes + 0x14))
#define auStack_b8 (*(undefined1 volatile (*)[74])(recovered_local_frame.bytes + 0x18))
#define local_6e (*(ushort volatile *)(recovered_local_frame.bytes + 0x62))

  short sVar1;
  s8 cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;











  iVar8 = *(int *)(param_4 + 0x74);
  iVar7 = *(int *)(param_3 + 0x78);
  uVar9 = 0;
  switch(DAT_8008ee54) {
  case 0:
    uVar9 = 0;
    if (*(s8 *)(param_3 + 0x22) == *(s8 *)(param_3 + 0x17)) {
      func_80012668();
      uVar9 = 0;
    }
    break;
  case 1:
  case 5:
    *(undefined1 *)(param_3 + 0x24) = 0x45;
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x10000;
    func_80012668();
    uVar9 = 0;
    break;
  case 2:
  case 6:
    *(undefined4 *)(iVar7 + 0x84) = 1;
    *(undefined4 *)(iVar7 + 0x88) = 1;
    *(undefined1 *)(param_2 + 0x709) = 0x14;
    func_80012668();
  case 3:
  case 7:
    func_800A46B8(param_1,param_4[0x15],param_4[0x16],local_c8);
    func_800A46B8(param_1,*(undefined1 *)(param_3 + 0x15),*(undefined1 *)(param_3 + 0x16),&local_c0)
    ;
    if (DAT_8008ee6b < 2) {
      cVar2 = -1;
    }
    else {
      cVar2 = -DAT_8008ee6b;
    }
    *(s8 *)(param_2 + 0x709) = *(s8 *)(param_2 + 0x709) + cVar2;
    uVar6 = (uint)*(byte *)(param_2 + 0x709);
    local_d0 = local_c8[0] - (short)((int)(((int)local_c8[0] - (int)local_c0) * uVar6) / 0x14);
    local_cc = local_c4 - (short)((int)(((int)local_c4 - (int)local_bc) * uVar6) / 0x14);
    iVar8 = rsin((int)((0x14 - uVar6) * 0x400) / 0x14);
    iVar8 = iVar8 * 0x96;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xfff;
    }
    local_ce = local_be - (short)(iVar8 >> 0xc);
    *(short *)(iVar7 + 0x6a) = local_d0;
    *(short *)(iVar7 + 0x6e) = local_ce;
    *(short *)(iVar7 + 0x72) = local_cc;
    uVar9 = 0;
    if (*(s8 *)(param_2 + 0x709) == '\0') {
      func_80012668();
      uVar9 = 0;
    }
    break;
  case 4:
  case 8:
    func_800A46B8(param_1,param_4[0x15],param_4[0x16],local_c8);
    local_d0 = *(short *)(iVar7 + 0x6a);
    *(short *)(iVar7 + 0x6e) = *(short *)(iVar7 + 0x6e) + 8;
    local_ce = *(undefined2 *)(iVar7 + 0x6e);
    local_cc = *(undefined2 *)(iVar7 + 0x72);
    func_800CD950(&local_d0,auStack_b8);
    sVar1 = *(short *)(iVar8 + 0x4e);
    iVar4 = DAT_8008ee74 / 2;
    if (param_5 == 5) {
      iVar5 = func_800A88C4((int)((*(ushort *)(iVar8 + 0x4e) - 5) * 0x10000) >> 0x10);
    }
    else {
      iVar5 = func_800A88E8(*param_4,(int)((*(ushort *)(iVar8 + 0x4e) - 5) * 0x10000) >> 0x10);
    }
    uVar9 = 0;
    if ((int)(((uint)*(ushort *)(iVar8 + 0x4a) - iVar5) * 0x10000) <=
        (int)((((uint)local_6e - iVar4) - 0x2300 / (sVar1 + -5)) * 0x10000)) {
      if (*(short *)(param_2 + 0x710) == 0) {
        if ((*(uint *)(param_4 + 0x1c) & 0x20000) != 0) {
          func_800B91F0(param_2,param_4);
        }
      }
      else {
        *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 2;
      }
      if (DAT_8008ee54 == 8) {
        *(uint *)(param_4 + 0x1c) = *(uint *)(param_4 + 0x1c) | 8;
      }
      *(undefined4 *)(iVar7 + 0x84) = 2;
      func_80012668();
      uVar9 = 0;
    }
    break;
  case 9:
    *(undefined2 *)(param_1 + 0xc) = 0;
    func_80012668();
    uVar9 = 0;
    break;
  case 10:
    if (DAT_8008ee6b < 2) {
      uVar3 = *(short *)(param_1 + 0xc) + 1;
    }
    else {
      uVar3 = *(short *)(param_1 + 0xc) + (ushort)DAT_8008ee6b;
    }
    *(ushort *)(param_1 + 0xc) = uVar3;
    uVar9 = 0;
    if (0x28 < uVar3) {
      *(undefined1 *)(param_2 + 0x60d) = 2;
      uVar9 = 1;
    }
  }
  return uVar9;
}

#undef local_d0
#undef local_ce
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_be
#undef local_bc
#undef auStack_b8
#undef local_6e

/* arg0: 0x80130000 */
/* arg1: 0x80140000 */
/* arg2: 0x80150000 */
/* arg3: 0x80160000 */
/* arg4: 5 */
/* real-callee: func_800A46B8 */
/* real-callee: func_800A88C4 */
/* real-callee: func_800A88E8 */
/* real-callee: rsin */
/* callee-contract: func_800CD950 */
/* rand-u16: 0x8013000C 1 0,1,38,39,40,41,65535 */
/* rand-u16: 0x801305D8 1 0,256,768 */
/* rand-u32-strided: 0x80150078 1 4 0x80170000 */
/* rand-u32-strided: 0x80160074 1 4 0x80180000 */
/* rand-mem: 0x80150015 2 13 */
/* rand-mem: 0x80160015 2 13 */
/* rand-u16: 0x80160000 1 0,1,3 */
/* rand-u16: 0x8018004E 1 6,10,100,32767,65535 */
/* rand-u16: 0x8018004A 1 0,10,100,32767,32768,65535 */
/* rand-u16: 0x80140708 1 0,256,512,4864,5120 */
/* rand-u16: 0x80140710 1 0,1 */
/* rand-u16: 0x8008EE6A 1 0,256,512,1024 */
/* rand-u32-strided: 0x8008EE74 1 4 240,480 */
/* rand-u32-strided: 0x801010B0 4 52 0x80190000 */
/* rand-u32-strided: 0x80190000 169 4 0,524288,1048576,3670016 */
/* rand-u32-strided: 0x8016001C 1 4 0,131072 */
/* rand-u16: 0x8017006A 1 0,100,65535 */
/* rand-u16: 0x8017006E 1 0,100,65535 */
/* rand-u16: 0x80170072 1 0,100,65535 */

/* rand-u16: 0x8008EE54 1 0 */
