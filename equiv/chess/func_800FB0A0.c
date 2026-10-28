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
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define DAT_8011974d (*(u8 *)0x8011974D)
#define D_80119710 (*(s32 *)0x80119710)
extern s32 RotTransPers();
#define func_80013920 ((s32 (*)())0x80013920)
#define func_800161C4 ((s32 (*)())0x800161C4)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
extern s32 rcos();
extern s32 rsin();
void func_800FB0A0(int param_1)

{
  union { u64 align; u8 bytes[0x58]; } recovered_local_frame;
#define local_58 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_50 (*(short volatile *)(recovered_local_frame.bytes + 0x8))
#define local_4e (*(short volatile *)(recovered_local_frame.bytes + 0xA))
#define lStack_4c (*(long volatile *)(recovered_local_frame.bytes + 0xC))
#define lStack_48 (*(long volatile *)(recovered_local_frame.bytes + 0x10))
#define local_44 (*(int volatile *)(recovered_local_frame.bytes + 0x14))
#define local_40 (*(int volatile *)(recovered_local_frame.bytes + 0x18))
#define local_3c (*(int volatile *)(recovered_local_frame.bytes + 0x1C))
#define local_38 (*(int volatile *)(recovered_local_frame.bytes + 0x20))
#define local_34 (*(int volatile *)(recovered_local_frame.bytes + 0x24))
#define local_30 (*(int volatile *)(recovered_local_frame.bytes + 0x28))

  short sVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;












  local_40 = *(short *)(param_1 + 0x2a) + -0x78;
  local_44 = (int)*(short *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x30);
  local_3c = (int)*(short *)(param_1 + 0x2c);
  local_38 = D_80119710;
  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
  }
  if (*(byte *)(param_1 + 0x37) < 8) {
    *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) + 1;
  }
  uVar9 = (uint)*(byte *)(param_1 + 0x36);
  *(short *)(param_1 + 0x38) = *(short *)(param_1 + 0x38) + 0x1e;
  if (uVar9 < *(byte *)(param_1 + 0x37)) {
    local_34 = local_38 * 5;
    do {
      iVar7 = local_38 - uVar9;
      iVar8 = 0xb4 - (iVar7 * 0xb4) / 0x28;
      if (iVar8 < 1) {
        *(u8 *)(param_1 + 0x36) = *(u8 *)(param_1 + 0x36) + '\x01';
      }
      iVar6 = 0;
      local_30 = local_34 << 3;
      do {
        iVar4 = (int)*(short *)(param_1 + 0x38) + (iVar7 * 0x2000) / 0x28 + iVar6 * 0x800;
        iVar2 = rsin(iVar4);
        iVar2 = iVar8 * iVar2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xfff;
        }
        local_58.vx = (short)local_44 + (short)(iVar2 >> 0xc);
        local_58.vy = (short)local_40 - (0x82 - (short)((iVar7 * 0x82) / 0x28));
        iVar2 = rcos(iVar4);
        iVar2 = iVar8 * iVar2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xfff;
        }
        local_58.vz = (short)local_3c + (short)(iVar2 >> 0xc);
        lVar3 = RotTransPers(&local_58,(long *)&local_50,&lStack_4c,&lStack_48);
        *(short *)(iVar5 + 0x46) = local_50 - (short)(DAT_8008ee70 / 2);
        iVar2 = DAT_8008ee74;
        iVar6 = iVar6 + 1;
        *(short *)(iVar5 + 0x4e) = (short)lVar3;
        *(undefined2 *)(iVar5 + 0x54) = (undefined2)local_30;
        *(short *)(iVar5 + 0x4a) = local_4e - (short)(iVar2 / 2);
        sVar1 = 0x1000 - (short)((iVar7 * 0x1000) / 0x28);
        *(short *)(iVar5 + 0x52) = sVar1;
        *(short *)(iVar5 + 0x50) = sVar1;
        func_800161C4(iVar5);
      } while (iVar6 < 2);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)(uint)*(byte *)(param_1 + 0x37));
  }
  if (*(u8 *)(param_1 + 0x36) == *(u8 *)(param_1 + 0x37)) {
    func_80013920(*(undefined4 *)(param_1 + 0x30));
    func_80013920(param_1);
  }
  return;
}

#undef local_58
#undef local_50
#undef local_4e
#undef lStack_4c
#undef lStack_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
