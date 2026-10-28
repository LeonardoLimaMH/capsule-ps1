#include "common.h"

#include "common.h"

#include "common.h"

/* task-callback */
/* callee-contract: RotAverage4 */
/* rand-u16: 0x8008ED68 1 0 */
/* rand-u16: 0x8008ED6A 1 32786 */
/* rand-u16: 0x80121090 1 8192 */
/* rand-u16: 0x80121092 1 32786 */
/* rand-u16: 0x80130014 1 0 */
/* rand-u16: 0x80130016 1 32788 */
/* rand-u16: 0x80130038 1 4,5,8,12,16 */
/* rand-u16: 0x8013003A 1 8,16,32,64,128 */
/* rand-u16: 0x8013003C 1 8,16,32,64,128 */
/* rand-u16: 0x8013003E 1 0,1,2,15,255,4095 */
/* rand-u16: 0x80130042 1 0,1,2,255,65535 */
/* rand-u16: 0x8013004E 1 0,1,2,3,4,5,6,7,65535 */
/* rand-u16: 0x80130054 1 0,1,2,3,4,5,19,20,79,80,81,100 */
/* rand-u16: 0x80130056 1 0 */
/* rand-u16: 0x80130064 1 0,1,5,19,20,40,80,100 */
/* rand-u16: 0x80130066 1 0 */
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
/* real-callee: func_800DD428 */
/* real-callee: func_800DDA78 */
/* real-callee: func_800FE188 */
/* real-callee: func_800FE21C */
/* real-callee: func_800FE74C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FF460 */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* compiler: 2.8.1-psx */
/* rand-u16: 0x8013007A 1 0,1,2,3,4,5,6,7,8,9,10,15,31,65535 */
/* rand-u16: 0x8013003C 1 0,1,5,19,20,29,30,31,39,40,49,50,79,80,89,90,99,100,127,128,199 */
/* rand-u16: 0x8013003E 1 0 */
/* rand-u16: 0x80130070 1 4096 */
/* rand-u16: 0x80130072 1 32788 */
/* rand-u16: 0x80130074 1 8192 */
/* rand-u16: 0x80130076 1 32788 */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
#define func_80013920 ((s32 (*)())0x80013920)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800FEBF4 ((s32 (*)())0x800FEBF4)
#define func_800FF190 ((s32 (*)())0x800FF190)
#define func_800FF3B4 ((s32 (*)())0x800FF3B4)
extern s32 rsin();
void func_800DD4D8(int param_1)

{
  union { u64 align; u8 bytes[0x8]; } recovered_local_frame;
#define local_30 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_2e (*(short volatile *)(recovered_local_frame.bytes + 0x2))
#define local_2c (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x4))

  short sVar1;
  int iVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;




  iVar7 = *(int *)(param_1 + 0x14);
  iVar10 = *(int *)(iVar7 + 0x70);
  iVar9 = *(int *)(iVar7 + 0x74);
  if (DAT_8008ee6b < 2) {
    sVar3 = *(short *)(param_1 + 0x1e) + 1;
  }
  else {
    sVar3 = *(short *)(param_1 + 0x1e) + (ushort)DAT_8008ee6b;
  }
  iVar5 = (int)*(short *)(param_1 + 0x1c);
  *(short *)(param_1 + 0x1e) = sVar3;
  sVar1 = (short)(0xfa / (iVar5 + 1));
  iVar8 = (int)sVar3;
  if ((*(ushort *)(param_1 + 0x1c) & 1) != 0) {
    sVar1 = -sVar1;
  }
  if (2 < iVar5) {
    if (iVar5 != 3) {
      return;
    }
    *(undefined1 *)(iVar9 + 0x57) = 0;
    *(undefined1 *)(iVar10 + 0x57) = 0;
    *(undefined2 *)(iVar9 + 0x54) = 0;
    *(undefined2 *)(iVar10 + 0x54) = 0;
    *(uint *)(iVar7 + 0x18) = *(uint *)(iVar7 + 0x18) ^ 0x90000000;
    func_80013920(param_1);
    return;
  }
  if (iVar5 < 1) {
    if (iVar5 != 0) {
      return;
    }
    func_800FF3B4(param_1 + 0x2c,(undefined2 *)(param_1 + 0x34),0x3c,iVar8,&local_30);
    if (*(short *)(param_1 + 0x1a) != 0) {
      func_800FEBF4(&local_30);
    }
    iVar5 = rsin((iVar8 << 0xc) / 0x78);
    iVar5 = iVar5 * 300;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xfff;
    }
    local_2e = local_2e - (short)(iVar5 >> 0xc);
    func_800FF190(iVar7,&local_30,1);
    sVar1 = *(short *)(iVar9 + 0x54) + sVar1;
    *(short *)(iVar9 + 0x54) = sVar1;
    *(short *)(iVar10 + 0x54) = sVar1;
    if (iVar8 < 0x3c) {
      return;
    }
    func_80034AB0(0x7d);
    if (*(short *)(param_1 + 0x18) == 0) goto LAB_800dd7b0;
    iVar7 = func_80015B3C(-0x7ff22d14,-0x7ffe7a00,1);
    *(undefined2 *)(iVar7 + 0x1e) = 0x14;
    uVar4 = 0x1e;
  }
  else {
    local_30 = *(undefined2 *)(param_1 + 0x34);
    local_2e = *(short *)(param_1 + 0x36);
    local_2c = *(undefined2 *)(param_1 + 0x38);
    iVar6 = (0x3c / iVar5) / 2;
    if (*(short *)(param_1 + 0x1a) != 0) {
      func_800FEBF4(&local_30);
    }
    iVar2 = rsin(((iVar8 << 0xc) / iVar6) / 2);
    iVar2 = ((300 / iVar5) / 2) * iVar2;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xfff;
    }
    local_2e = local_2e - (short)(iVar2 >> 0xc);
    func_800FF190(iVar7,&local_30,1);
    sVar1 = *(short *)(iVar9 + 0x54) + sVar1;
    *(short *)(iVar9 + 0x54) = sVar1;
    *(short *)(iVar10 + 0x54) = sVar1;
    if (iVar8 < iVar6) {
      return;
    }
    if ((*(short *)(param_1 + 0x1c) != 1) || (func_80034AB0(0x7d), *(short *)(param_1 + 0x18) == 0))
    goto LAB_800dd7b0;
    iVar7 = func_80015B3C(-0x7ff22d14,-0x7ffe7a00,1);
    *(undefined2 *)(iVar7 + 0x1e) = 10;
    uVar4 = 0x14;
  }
  *(undefined2 *)(iVar7 + 0x20) = uVar4;
LAB_800dd7b0:
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
  return;
}

#undef local_30
#undef local_2e
#undef local_2c
