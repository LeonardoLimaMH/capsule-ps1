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
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define DAT_8008f754 (*(u16 *)0x8008F754)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define DAT_8011974d (*(u8 *)0x8011974D)
extern s32 RotTransPers();
#define func_80013920 ((s32 (*)())0x80013920)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
extern s32 rsin();
void func_800EB968(int param_1)

{
  union { u64 align; u8 bytes[0x30]; } recovered_local_frame;
#define local_30 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_28 (*(short volatile *)(recovered_local_frame.bytes + 0x8))
#define local_26 (*(short volatile *)(recovered_local_frame.bytes + 0xA))
#define lStack_24 (*(long volatile *)(recovered_local_frame.bytes + 0xC))
#define alStack_20 (*(long volatile (*)[2])(recovered_local_frame.bytes + 0x10))

  short sVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;






  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
  }
  iVar4 = rsin((((int)*(short *)(param_1 + 0x2e) << 0xc) / (int)*(short *)(param_1 + 0x34)) / 2);
  iVar4 = iVar4 * 0xff;
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xfff;
  }
  uVar2 = (undefined1)(iVar4 >> 0xc);
  *(undefined1 *)(iVar6 + 0x5a) = uVar2;
  *(undefined1 *)(iVar6 + 0x59) = uVar2;
  *(undefined1 *)(iVar6 + 0x58) = uVar2;
  iVar6 = 0;
  iVar4 = param_1;
  if (*(s8 *)(param_1 + 0x2c) != '\0') {
    do {
      sVar3 = *(short *)(param_1 + 0x30);
      sVar1 = *(short *)(param_1 + 0x2e);
      *(undefined2 *)(iVar4 + 0x56) = 1;
      iVar7 = (int)sVar1 + iVar6 * sVar3;
      if ((*(short *)(param_1 + 0x32) <= iVar7) && (iVar7 <= *(short *)(param_1 + 0x34))) {
        *(undefined2 *)(iVar4 + 0x56) = 0;
        local_30.vx = (short)((uint)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x44) * iVar7) >>
                             0x10);
        local_30.vz = (short)((uint)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x4c) * iVar7) >>
                             0x10);
        local_30.vy = (short)((uint)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x48) * iVar7 +
                                    iVar7 * 0x960 * iVar7) >> 0x10);
        lVar5 = RotTransPers(&local_30,(long *)&local_28,&lStack_24,alStack_20);
        *(short *)(iVar4 + 0x50) = local_28 - (short)(DAT_8008ee70 / 2);
        iVar7 = DAT_8008ee74;
        *(short *)(iVar4 + 0x54) = (short)lVar5;
        *(short *)(iVar4 + 0x52) = local_26 - (short)(iVar7 / 2);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar6 < (int)(uint)*(byte *)(param_1 + 0x2c));
  }
  sVar3 = *(short *)(param_1 + 0x2e) + 1;
  *(short *)(param_1 + 0x2e) = sVar3;
  if (*(short *)(param_1 + 0x34) < sVar3) {
    func_80013920(*(undefined4 *)(param_1 + 0x28));
    func_80013920(param_1);
    DAT_8008f754 = DAT_8008f754 + -1;
  }
  return;
}

#undef local_30
#undef local_28
#undef local_26
#undef lStack_24
#undef alStack_20
