#include "common.h"

/* rand-u16: 0x8013001C 1 0,1,5,6,7,20,59,60,61,62,65535 */
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
#define DAT_8008610c (*(s8 *)0x8008610C)
extern s32 GetClut();
extern s32 GetTPage();
#define func_80013920 ((s32 (*)())0x80013920)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_800FE0B4 ((s32 (*)())0x800FE0B4)
void func_800EE2D4(int param_1)

{
  s8 cVar1;
  s8 cVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;

  cVar1 = *(s8 *)(param_1 + 0x2c);
  cVar2 = *(s8 *)(param_1 + 0x2d);
  if (*(short *)(param_1 + 0x1c) < 0x3d) {
    if (((int)*(short *)(param_1 + 0x1c) % 7 & 0xffffU) == 0) {
      iVar5 = func_80015B3C(-0x7ff11440,-0x7ff0821c,1);
      func_800FE0B4((u8)(cVar1 << 7 | cVar2 + 1U),iVar5 + 0x28);
      *(undefined1 *)(iVar5 + 0x30) = 0xff;
      *(undefined1 *)(iVar5 + 0x31) = 0xff;
      *(undefined1 *)(iVar5 + 0x34) = 0xff;
      *(undefined1 *)(iVar5 + 0x35) = 0xff;
      *(undefined1 *)(iVar5 + 0x32) = 0x7f;
      *(undefined1 *)(iVar5 + 0x36) = 0x7f;
      *(undefined1 *)(iVar5 + 0x38) = 0xc;
      *(undefined1 *)(iVar5 + 0x40) = 1;
      sVar3 = *(short *)(iVar5 + 0x2a) + -0x14;
      *(short *)(iVar5 + 0x2a) = sVar3;
      *(int *)(iVar5 + 0x1c) = (int)sVar3;
      uVar4 = GetTPage(0,1,0x280,0x100);
      *(undefined2 *)(iVar5 + 0x42) = uVar4;
      uVar4 = GetClut(0x40,0x1f0);
      *(undefined2 *)(iVar5 + 0x44) = uVar4;
      *(undefined1 *)(iVar5 + 0x46) = 0;
      *(undefined1 *)(iVar5 + 0x47) = 0;
    }
    *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
  }
  else {
    DAT_8008610c = 1;
    func_80013920(param_1);
  }
  return;
}
