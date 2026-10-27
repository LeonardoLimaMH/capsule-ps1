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
#include "ghidra.h"
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
#define DAT_80101021 (*(s8 *)0x80101021)
#define D_80101020 (*(s8 *)0x80101020)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_800185F8 ((s32 (*)())0x800185F8)
#define func_8001AA70 ((s32 (*)())0x8001AA70)
#define func_8001ADF8 ((s32 (*)())0x8001ADF8)
#define func_800AADE0 ((s32 (*)())0x800AADE0)
#define func_800C4600 ((s32 (*)())0x800C4600)
void func_800C48DC(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  uVar5 = *(uint *)(param_1 + 0x84);
  uVar6 = *(undefined4 *)(param_1 + 0x7c);
  uVar7 = *(undefined4 *)(param_1 + 0x80);
  if (DAT_8008ee6b < 2) {
    uVar2 = *(int *)(param_1 + 0x3c) + 1;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x3c) + (uint)DAT_8008ee6b;
  }
  *(uint *)(param_1 + 0x3c) = uVar2;
  if (*(short *)(param_1 + 0x7a) == 0) {
    if (uVar5 <= uVar2 >> 3) {
      func_8001ADF8(1,0x40,1,1);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
      *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
    }
  }
  else if ((*(short *)(param_1 + 0x7a) == 1) && (*(short *)(param_1 + 0x24) < 0)) {
    if ((int)uVar5 < 8) {
      iVar3 = *(int *)(param_1 + 0x40);
      iVar4 = func_80015B3C(func_800C4600,func_800AADE0,5);
      func_80015EF8(iVar4);
      *(undefined4 *)(iVar4 + 0x7c) = uVar6;
      *(undefined4 *)(iVar4 + 0x80) = uVar7;
      func_8001AA70(iVar4 + 0x14,iVar3 + 0x14,0x20);
      *(int *)(iVar4 + 0x40) = iVar3;
      *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) & 0xffffff80 | 1;
    }
    func_800185F8(param_1);
  }
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(*(int *)(param_1 + 0x40) + 0x50);
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(*(int *)(param_1 + 0x40) + 0x52);
  iVar3 = ((int)uVar5 % 5) * 2;
  iVar4 = (int)(s8)(&D_80101020)[iVar3] * (int)*(short *)(param_1 + 0x50);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xfff;
  }
  *(short *)(param_1 + 0x46) = *(short *)(*(int *)(param_1 + 0x40) + 0x46) + (short)(iVar4 >> 0xc);
  iVar4 = (int)(s8)(&DAT_80101021)[iVar3] * (int)*(short *)(param_1 + 0x52);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xfff;
  }
  iVar3 = (uint)*(ushort *)(param_1 + 0x50) << 0x10;
  *(short *)(param_1 + 0x4a) = *(short *)(*(int *)(param_1 + 0x40) + 0x4a) + (short)(iVar4 >> 0xc);
  sVar1 = *(short *)(*(int *)(param_1 + 0x40) + 0x4e);
  iVar4 = (uint)*(ushort *)(param_1 + 0x52) << 0x10;
  *(short *)(param_1 + 0x50) = (short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
  *(short *)(param_1 + 0x52) = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
  *(short *)(param_1 + 0x4e) = sVar1 + -2;
  return;
}
