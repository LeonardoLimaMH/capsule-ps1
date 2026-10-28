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
#define DAT_80100bc6 (*(s16 *)0x80100BC6)
#define D_80100BC4 (*(s16 *)0x80100BC4)
extern s32 MoveImage();
#define func_80012A20 ((s32 (*)())0x80012A20)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800A8994 ((s32 (*)())0x800A8994)
int func_8009C278(int param_1,int param_2,int param_3)

{
  union { u64 align; u8 bytes[0x8]; } recovered_local_frame;
#define local_18 (*(short volatile (*)[4])(recovered_local_frame.bytes + 0x0))

  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;


  iVar5 = 0;
  if (*(s8 *)(param_1 + param_3 * 0x7c + param_2 * 0x2e8 + 0x5e8) == '\\') {
    local_18[0] = 0x3c0;
    do {
      sVar6 = local_18[0] + 0x20;
      iVar3 = iVar5 * 0x20;
      iVar5 = iVar5 + 1;
      local_18[1] = 0x180;
      local_18[2] = 0x20;
      local_18[3] = 0x80;
      MoveImage(local_18,(short)(((u16 *)0x80100BC4))[param_2 * 0xc + param_3 * 2] + iVar3,
                (int)(short)(((u16 *)0x80100BC6))[param_2 * 0xc + param_3 * 2]);
      local_18[0] = sVar6;
    } while (iVar5 < 2);
  }
  else {
    uVar2 = func_800A8994(param_1,param_2,param_3);
    iVar3 = func_80019F30(uVar2 | 0x10000,0);
    do {
      puVar1 = (undefined4 *)(iVar3 + 0xc);
      iVar3 = iVar3 + 4;
      iVar4 = iVar5 * 0x20;
      iVar5 = iVar5 + 1;
      func_80012A20(*puVar1,3,
                    (int)(((uint)(ushort)(((u16 *)0x80100BC4))[param_2 * 0xc + param_3 * 2] + iVar4) *
                         0x10000) >> 0x10,(int)(short)(((u16 *)0x80100BC6))[param_2 * 0xc + param_3 * 2]);
    } while (iVar5 < 2);
  }
  return 0;
}

#undef local_18

/* arg0: 0x80130000 */
/* arg1: 0x00000000 */
/* arg2: 0x00000000 */
/* real-callee: func_80019F30 */
/* rand-u16: 0x80150000 1 0 */
/* rand-u16: 0x801305E8 1 92 */
