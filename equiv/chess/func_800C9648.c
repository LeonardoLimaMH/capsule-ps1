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
#define DAT_80063950 (*(s32 *)0x80063950)
#define DAT_80063954 (*(s32 *)0x80063954)
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define DAT_801010e0 (*(u16 *)0x801010E0)
#define D_80118710 (*(u8 *)0x80118710)
#define D_80118818 (*(u16 *)0x80118818)
#define PTR_DAT_80069fb4 (*(u8 **)0x80069FB4)
#define func_800A8710 ((s32 (*)())0x800A8710)
#define func_800A8E08 ((s32 (*)())0x800A8E08)
#define func_800A924C ((s32 (*)())0x800A924C)
#define func_800CB898 ((s32 (*)())0x800CB898)
extern s32 rsin();
int func_800C9648(int param_1,int param_2,int param_3,int param_4,int param_5,short param_6)

{
  byte bVar1;
  undefined *puVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  uint uVar8;
  byte *pbVar9;

  puVar2 = PTR_DAT_80069fb4;
  pbVar9 = (byte *)(param_1 + param_3 * 0x2e8 + 0x5e8 + param_4 * 0x7c);
  uVar8 = *(uint *)(pbVar9 + 0x18);
  bVar1 = pbVar9[0x22];
  iVar5 = func_800A8E08(param_1,uVar8,param_5);
  if (iVar5 != 0) {
    return 2;
  }
  if ((bVar1 & 0x7f) == 2) {
    if ((uVar8 & 0x800000) == 0) {
      uVar6 = func_800A8710(param_1,param_3,param_4);
      func_800A924C(param_1,param_2,param_5,uVar6);
    }
    else {
      func_800A924C(param_1,param_2,param_5,2);
    }
    goto LAB_800c98e8;
  }
  iVar5 = func_800CB898(uVar8);
  if (iVar5 == 0) {
    psVar7 = (short *)(puVar2 + (uint)(byte)(&D_80118710)
                                            [(uint)pbVar9[0x16] + (uint)pbVar9[0x15] * 0xd] * 8);
    *(short *)(param_2 + 0x46) = *psVar7 - (short)(DAT_8008ee70 / 2);
    *(short *)(param_2 + 0x4a) = psVar7[1] - (short)(DAT_8008ee74 / 2);
    *(short *)(param_2 + 0x4e) = psVar7[2];
  }
  else {
    if ((uVar8 & 0x40) == 0) {
      if ((uVar8 & 0x80) == 0) goto LAB_800c97f8;
      uVar6 = 4;
    }
    else {
      uVar6 = 3;
    }
    func_800A924C(param_1,param_2,param_5,uVar6);
  }
LAB_800c97f8:
  if ((uVar8 & 0x80000) == 0) {
    if ((uVar8 & 0x100000) == 0) goto LAB_800c98e8;
    iVar5 = rsin(((uint)D_80118818 << 0xc) / 0x50);
    iVar5 = iVar5 * 0x1e;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xfff;
    }
    iVar5 = iVar5 >> 0xc;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    *(short *)(param_2 + 0x4a) = *(short *)(param_2 + 0x4a) - (short)iVar5;
    if (DAT_8008ee6b < 2) {
      D_80118818 = D_80118818 + 1;
    }
    else {
      D_80118818 = D_80118818 + DAT_8008ee6b;
    }
    if (D_80118818 < 0x51) goto LAB_800c98e8;
    uVar8 = *(uint *)(pbVar9 + 0x18) ^ 0x100000;
  }
  else {
    D_80118818 = 0;
    uVar8 = *(uint *)(pbVar9 + 0x18) ^ 0x80000 | 0x100000;
  }
  *(uint *)(pbVar9 + 0x18) = uVar8;
LAB_800c98e8:
  sVar3 = (*(short *)(param_2 + 0x4e) + -10) - param_6;
  *(short *)(param_2 + 0x4e) = sVar3;
  if ((bVar1 & 0x7f) == 6) {
    *(short *)(param_2 + 0x4e) = sVar3 + -4;
  }
  if (*(short *)(param_2 + 0x4e) < 6) {
    *(undefined2 *)(param_2 + 0x4e) = 6;
  }
  uVar8 = (uint)(*(byte *)(param_1 + 0xbea) < 5);
  if (uVar8 == 0) {
    uVar8 = 0xc00000 / *(ushort *)(&DAT_801010e0 + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  }
  else {
    iVar5 = (int)*(short *)(param_2 + 0x4e);
    if (iVar5 < 1) {
      return uVar8;
    }
    if (param_5 == 0) {
      uVar4 = (undefined2)(0x140000 / iVar5);
      *(undefined2 *)(param_2 + 0x52) = uVar4;
      *(undefined2 *)(param_2 + 0x50) = uVar4;
      uVar8 = 0x140000 / iVar5 & 0xfffffff0;
    }
    else {
      uVar8 = (int)(((((((u32 *)0x80063954))[(uint)*pbVar9 * 0xf] & 3) << 2 |
                     *(uint *)(((u8 *)0x80063950) + (uint)*pbVar9 * 0x3c) >> 0x1e) * 8 + 0x100) * 0x1000)
              / iVar5;
      uVar4 = (undefined2)uVar8;
      *(undefined2 *)(param_2 + 0x52) = uVar4;
      *(undefined2 *)(param_2 + 0x50) = uVar4;
      uVar8 = uVar8 & 0xfffffff0;
    }
  }
  *(short *)(param_2 + 0x52) = (short)uVar8;
  *(short *)(param_2 + 0x50) = (short)uVar8;
  return uVar8;
}

/* arg0: 0x80140000 */
/* arg1: 0x80150000 */
/* arg2: 0x00000000 */
/* arg3: 0x00000000 */
/* arg5: small */
/* real-callee: func_800A8E08 */
/* real-callee: func_800CB898 */
/* real-callee: func_800A8710 */
/* real-callee: rsin */
/* rand-u16: 0x801405D8 1 0 */
/* rand-u16: 0x801405E8 1 0,1,3 */
/* rand-u16: 0x8014060A 1 0,2,6,130 */
/* rand-u16: 0x80140BEA 1 0,4,5,6 */
/* rand-u32-strided: 0x801405FC 1 4 0,0x00010100,0x000C0C00 */
/* rand-u32-strided: 0x80140600 1 4 0,0x40,0x80,0x80000,0x100000,0x800000,0x40000000,0x80000000,0x180080 */
/* rand-u16: 0x80069FB4 1 0 */
/* rand-u16: 0x80069FB6 1 32790 */
/* rand-u16: 0x80118710 85 0,257,1799 */
/* rand-u16: 0x80160000 32 0,100,1000,32767,32768,65535 */
/* rand-u16: 0x80118818 1 0,1,79,80,81,65535 */
/* rand-u16: 0x8008EE6A 1 0,256,512,1024 */
/* rand-u16: 0x801010E0 1 16,100,1000 */
/* rand-u16: 0x8015004E 1 0,6,100,32767,32768,65535 */
/* arg4: 0x00000000 */
