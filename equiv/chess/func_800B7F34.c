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
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define D_801010B0 (*(s32 *)0x801010B0)
#define D_80118710 (*(u8 *)0x80118710)
#define PTR_DAT_80069fb4 (*(u8 **)0x80069FB4)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800CA474 ((s32 (*)())0x800CA474)
int func_800B7F34(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int task;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  undefined1 *puVar10;
  int iVar11;
  int local_30;
  uint *local_2c;

  puVar10 = &D_80118710;
  local_30 = 0;
  local_2c = *(uint **)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  iVar11 = 0;
  do {
    iVar8 = 0;
    puVar9 = local_2c;
    do {
      puVar3 = PTR_DAT_80069fb4;
      uVar5 = *puVar9;
      if (2 < (uVar5 & 0x3f)) {
        bVar1 = puVar10[iVar8];
        uVar6 = func_800CA474(param_1);
        task = func_80015B3C(-0x7ff47140,-0x7ffe9e3c,5);
        func_80015EF8(task);
        uVar7 = func_80019F30(uVar6 | 0x60000,4 < (uVar5 & 0x3f) | 10);
        iVar11 = iVar11 + 1;
        *(undefined4 *)(task + 0x18) = uVar7;
        *(short *)(task + 0x46) = *(short *)(puVar3 + (uint)bVar1 * 8) - (short)(DAT_8008ee70 / 2);
        iVar4 = DAT_8008ee74;
        sVar2 = *(short *)((int)(puVar3 + (uint)bVar1 * 8) + 2);
        *(undefined2 *)(task + 0x4e) = 6;
        *(short *)(task + 0x4a) = sVar2 - (short)(iVar4 / 2);
      }
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar8 < 0xd);
    local_2c = local_2c + 0xd;
    puVar10 = puVar10 + 0xd;
    local_30 = local_30 + 1;
  } while (local_30 < 0xd);
  return iVar11;
}

/* arg0: 0x80140000 */
/* rand-u16: 0x801405D9 1 0,1 */
/* rand-u16: 0x801010B0 1 0 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u16: 0x801010E4 1 8192 */
/* rand-u16: 0x801010E6 1 32789 */
/* rand-u16: 0x80150000 1 0,1,2,3,4,5 */
/* rand-u16: 0x80150002 1 0 */
/* rand-u16: 0x80152000 1 0,1,2,3,4,5 */
/* rand-u16: 0x80152002 1 0 */

/* real-callee: func_800CA474 */
/* real-callee: func_80019F30 */
