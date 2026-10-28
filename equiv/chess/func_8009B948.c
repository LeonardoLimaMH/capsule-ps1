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
#define DAT_801010b4 (*(s32 *)0x801010B4)
#define D_80069EA0 (*(u32 *)0x80069EA0)
#define D_80069EA4 (*(u32 *)0x80069EA4)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_8001602C ((s32 (*)())0x8001602C)
#define func_8002CBDC ((s32 (*)())0x8002CBDC)
#define func_800CA474 ((s32 (*)())0x800CA474)
#define func_800CE330 ((s32 (*)())0x800CE330)
#define func_800CED20 ((s32 (*)())0x800CED20)
#define func_800CEFA0 ((s32 (*)())0x800CEFA0)
int func_8009B948(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  code *setup;
  undefined4 *puVar4;
  int iVar5;

  iVar5 = *(int *)(((u8 *)0x801010B4) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  uVar1 = 0xffffffff;
  if (*(int *)(param_2 * 0x34 + iVar5) != -1) {
    uVar2 = func_800CA474(param_1);
    if (param_2 == 2) {
      setup = func_800CED20;
    }
    else {
      setup = func_800CEFA0;
    }
    iVar3 = func_80015B3C((int)setup,-0x7ffe7a00,1);
    func_8001602C(iVar3);
    D_80069EA0 = (uint)(param_2 != 1);
    puVar4 = (undefined4 *)(param_2 * 0x34 + iVar5);
    D_80069EA4 = puVar4[2] * 2 + D_80069EA0;
    *(int *)(iVar3 + 0x18) = param_2 * 0xbc + -0x7ff6fad8;
    func_8002CBDC(iVar3);
    *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x10) = 0x1000;
    *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x14) = 0x1000;
    *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x18) = 0x1000;
    func_800CE330(uVar2,*puVar4,param_2,*(undefined4 *)(iVar3 + 0x18),0,param_2 + 6);
    puVar4[0xc] = iVar3;
    uVar1 = *(uint *)(iVar3 + 0x50) & 0xfffffffe;
    *(uint *)(iVar3 + 0x50) = uVar1;
  }
  return uVar1;
}

/* arg0: 0x80140000 */
/* real-callee: func_800CA474 */
/* real-callee: func_8001602C */
/* real-callee: func_8002CBDC */
/* real-callee: RotMatrix */
/* real-callee: rsin */
/* real-callee: rcos */
/* rand-u16: 0x801405D8 1 0,256,768 */
/* rand-u32-strided: 0x801010B4 4 52 0x80150000 */
/* rand-u32-strided: 0x80150000 3 52 0,1,0xFFFFFFFF */
/* rand-u32-strided: 0x80150008 3 52 0,1,7 */
/* arg1: 0x00000000 */
