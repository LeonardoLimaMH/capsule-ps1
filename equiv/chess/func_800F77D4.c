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
/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FE21C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FF460 */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FE74C */
/* real-callee: __fixdfsi */
/* real-callee: __floatsidf */
/* real-callee: __muldf3 */
/* real-callee: _add_mant_d */
/* real-callee: _dbl_shift */
/* real-callee: _dbl_shift_us */
/* real-callee: _err_math */
/* real-callee: _mul_mant_d */
/* real-callee: func_8004FE2C */
/* callee-contract: RotTransPers */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
#include "common.h"

#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define DAT_8011974d (*(u8 *)0x8011974D)
extern s32 AddPrim();
extern s32 RotTransPers();
extern s32 SetPolyF4();
#define func_80013920 ((s32 (*)())0x80013920)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
void func_800F77D4(int param_1)

{
  union { u64 align; u8 bytes[0x40]; } recovered_local_frame;
#define local_40 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_38 (*(short volatile *)(recovered_local_frame.bytes + 0x8))
#define local_36 (*(short volatile *)(recovered_local_frame.bytes + 0xA))
#define lStack_34 (*(long volatile *)(recovered_local_frame.bytes + 0xC))
#define alStack_30 (*(long volatile (*)[2])(recovered_local_frame.bytes + 0x10))

  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  uint uVar7;






  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
  }
  uVar2 = *(ushort *)(param_1 + 0x42);
  if ((ushort)*(byte *)(param_1 + 0x4d) < uVar2 >> 1) {
    uVar3 = *(ushort *)(param_1 + 0x40);
    iVar5 = (uint)*(byte *)(param_1 + 0x4d) << 1;
  }
  else {
    uVar3 = *(ushort *)(param_1 + 0x40);
    iVar5 = ((uint)uVar2 - (uint)*(byte *)(param_1 + 0x4d)) * 2;
  }
  sVar4 = (short)((int)((uint)uVar3 * iVar5) / (int)(uint)uVar2) + 2;
  local_40.vx = *(short *)(param_1 + 0x2a);
  local_40.vy = *(short *)(param_1 + 0x2e);
  local_40.vz = *(short *)(param_1 + 0x32);
  lVar6 = RotTransPers(&local_40,(long *)&local_38,&lStack_34,alStack_30);
  iVar5 = *(int *)(DAT_8008ed68 + 0x1090);
  uVar7 = 0;
  if ((iVar5 != 0) && (iVar5 + 0x18U <= DAT_8008ed68 + 0x4594U)) {
    uVar7 = iVar5 + 0x18U;
  }
  *(uint *)(DAT_8008ed68 + 0x1090) = uVar7;
  SetPolyF4(iVar5);
  *(undefined1 *)(iVar5 + 4) = *(undefined1 *)(param_1 + 0x44);
  *(undefined1 *)(iVar5 + 5) = *(undefined1 *)(param_1 + 0x45);
  uVar1 = *(undefined1 *)(param_1 + 0x46);
  *(short *)(iVar5 + 10) = local_36 - sVar4;
  *(short *)(iVar5 + 0xc) = local_38 + 2;
  *(short *)(iVar5 + 0x10) = local_38 + -2;
  *(short *)(iVar5 + 8) = local_38;
  *(short *)(iVar5 + 0xe) = local_36;
  *(short *)(iVar5 + 0x12) = local_36;
  *(short *)(iVar5 + 0x14) = local_38;
  *(short *)(iVar5 + 0x16) = sVar4 + local_36;
  *(undefined1 *)(iVar5 + 6) = uVar1;
  AddPrim(DAT_8008ed68 + lVar6 * 4 + 0x70);
  iVar5 = *(int *)(DAT_8008ed68 + 0x1090);
  uVar7 = 0;
  if ((iVar5 != 0) && (iVar5 + 0x18U <= DAT_8008ed68 + 0x4594U)) {
    uVar7 = iVar5 + 0x18U;
  }
  *(uint *)(DAT_8008ed68 + 0x1090) = uVar7;
  SetPolyF4(iVar5);
  *(undefined1 *)(iVar5 + 4) = *(undefined1 *)(param_1 + 0x44);
  *(undefined1 *)(iVar5 + 5) = *(undefined1 *)(param_1 + 0x45);
  uVar1 = *(undefined1 *)(param_1 + 0x46);
  *(short *)(iVar5 + 10) = local_36 + -2;
  *(short *)(iVar5 + 0xc) = sVar4 + local_38;
  *(short *)(iVar5 + 0x10) = local_38 - sVar4;
  *(short *)(iVar5 + 8) = local_38;
  *(short *)(iVar5 + 0xe) = local_36;
  *(short *)(iVar5 + 0x12) = local_36;
  *(short *)(iVar5 + 0x14) = local_38;
  *(short *)(iVar5 + 0x16) = local_36 + 2;
  *(undefined1 *)(iVar5 + 6) = uVar1;
  AddPrim(DAT_8008ed68 + lVar6 * 4 + 0x70);
  *(s8 *)(param_1 + 0x4d) = *(s8 *)(param_1 + 0x4d) + '\x01';
  if (*(ushort *)(param_1 + 0x42) <= (ushort)*(byte *)(param_1 + 0x4d)) {
    if (*(s8 *)(param_1 + 0x4c) == '\0') {
      *(s8 *)(param_1 + 0x4d) =
           (s8)((ushort)*(byte *)(param_1 + 0x4d) % *(ushort *)(param_1 + 0x42));
    }
    else {
      func_80013920(param_1);
    }
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x3c);
  return;
}

#undef local_40
#undef local_38
#undef local_36
#undef lStack_34
#undef alStack_30
