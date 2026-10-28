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
#define DAT_80063948 (*(s32 *)0x80063948)
#define D_80100F00 (*(s32 *)0x80100F00)
#define func_800188F0 ((s32 (*)())0x800188F0)
#define func_80018EF4 ((s32 (*)())0x80018EF4)
#define func_8001F1A8 ((s32 (*)())0x8001F1A8)
#define func_8001F35C ((s32 (*)())0x8001F35C)
#define func_800A95F8 ((s32 (*)())0x800A95F8)
#define func_800CA664 ((s32 (*)())0x800CA664)
#define func_800CAA6C ((s32 (*)())0x800CAA6C)
int func_800A9C9C(int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  undefined4 uVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 uVar10;

  pbVar9 = (byte *)(param_1 + param_2 * 0x2e8 + 0x5e8 + param_3 * 0x7c);
  func_8001F1A8((param_4 + 5) * 0x10000 >> 0x10,(param_5 + 7) * 0x10000 >> 0x10,0,0,0,pbVar9 + 1,0,8
                ,D_80100F00);
  if (*pbVar9 == 99) {
    uVar4 = func_800CA664((int)*(short *)(*(int *)(pbVar9 + 0x70) + 100));
  }
  else {
    uVar4 = *(uint *)(((u8 *)0x80063948) + (uint)*pbVar9 * 0x3c) >> 0xc & 3;
  }
  iVar6 = (param_5 + 0x13) * 0x10000 >> 0x10;
  uVar10 = 0;
  func_80018EF4((param_4 + 0x25) * 0x10000 >> 0x10,iVar6,uVar4,0,D_80100F00);
  iVar8 = (param_4 + 0x3b) * 0x10000 >> 0x10;
  func_800188F0(iVar8,iVar6,0,0,D_80100F00);
  iVar7 = (param_4 + 8) * 0x10000 >> 0x10;
  iVar6 = (param_5 + 0x20) * 0x10000 >> 0x10;
  func_800188F0(iVar7,iVar6,1,0,D_80100F00);
  func_800188F0(iVar8,iVar6,2,0,D_80100F00);
  func_800188F0(iVar7,(param_5 + 0x2d) * 0x10000 >> 0x10,3,0,D_80100F00);
  uVar2 = D_80100F00;
  sVar3 = func_800CAA6C(pbVar9,4);
  if ((sVar3 != 0) && (uVar10 = 1, sVar3 < 0)) {
    uVar10 = 3;
  }
  sVar5 = (short)(param_5 + 7);
  func_8001F35C((param_4 + 0x67) * 0x10000 >> 0x10,(int)sVar5,uVar10,0,0,pbVar9[0x12],1,uVar2);
  uVar2 = D_80100F00;
  uVar10 = 0;
  sVar3 = func_800CAA6C(pbVar9,1);
  if ((sVar3 != 0) && (uVar10 = 1, sVar3 < 0)) {
    uVar10 = 3;
  }
  func_8001F35C((param_4 + 0x49) * 0x10000 >> 0x10,(param_5 + 0x13) * 0x10000 >> 0x10,uVar10,0,0,
                pbVar9[0xf],3,uVar2);
  uVar2 = D_80100F00;
  uVar10 = 0;
  sVar3 = func_800CAA6C(pbVar9,2);
  if ((sVar3 != 0) && (uVar10 = 1, sVar3 < 0)) {
    uVar10 = 3;
  }
  func_8001F35C((param_4 + 0x14) * 0x10000 >> 0x10,(param_5 + 0x20) * 0x10000 >> 0x10,uVar10,0,0,
                pbVar9[0x10],3,uVar2);
  uVar2 = D_80100F00;
  uVar10 = 0;
  sVar3 = func_800CAA6C(pbVar9,3);
  if ((sVar3 != 0) && (uVar10 = 1, sVar3 < 0)) {
    uVar10 = 3;
  }
  func_8001F35C((param_4 + 0x53) * 0x10000 >> 0x10,(param_5 + 0x20) * 0x10000 >> 0x10,uVar10,0,0,
                pbVar9[0x11],1,uVar2);
  uVar2 = D_80100F00;
  func_800CAA6C(pbVar9,0);
  func_8001F35C((param_4 + 0x14) * 0x10000 >> 0x10,(param_5 + 0x2d) * 0x10000 >> 0x10,0,0,0,
                pbVar9[0xe],3,uVar2);
  if ((param_2 == *(byte *)(param_1 + 0xcee)) && (param_3 == *(byte *)(param_1 + 0xcef))) {
    bVar1 = pbVar9[9];
    iVar6 = (uint)pbVar9[0xe] * 0x10000 - (uint)*(ushort *)(param_1 + 0xcec);
  }
  else {
    bVar1 = pbVar9[9];
    iVar6 = (uint)pbVar9[0xe] << 0x10;
  }
  iVar6 = func_800A95F8(param_1,param_2,iVar6 / (int)(uint)bVar1,(short)(param_4 + 5),sVar5,1);
  return iVar6;
}

/* arg0: 0x80140000 */
/* arg3: small */
/* arg4: small */
/* real-callee: func_800CAA6C */
/* real-callee: func_800CA664 */
/* rand-u16: 0x80150064 1 0,65534,65535,100 */
/* rand-u16: 0x80140CEC 1 0,1,65535 */
/* rand-u16: 0x80140CEE 1 0,1281 */
/* rand-u32-strided: 0x80100F00 1 4 0,1,2,3 */
/* rand-u32-strided: 0x80063948 4 60 0,0x1000,0x2000,0x3000 */
/* arg1: 0x00000000 */
/* arg2: 0x00000000 */
/* rand-u16: 0x801405e8 1 0,1,3,99 */
/* rand-u16: 0x801405f0 1 256,25600,65280 */
/* rand-u16: 0x801405f6 3 0,257,25600,65535 */
/* rand-u16: 0x80140652 1 0,1,4 */
/* rand-u32-strided: 0x80140616 4 6 0,0x00010001,0xFFFF0002,0x80000003,0x7FFF0004 */
/* rand-u32-strided: 0x80140658 1 4 0x80150000 */
