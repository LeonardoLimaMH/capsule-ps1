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
extern s32 GetTPage();
extern s32 RotTransPers();
extern s32 SetPolyG3();
extern s32 SetSemiTrans();
#define func_80018610 ((s32 (*)())0x80018610)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
void func_800F5894(int param_1)

{
  union { u64 align; u8 bytes[0x38]; } recovered_local_frame;
#define local_38 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_36 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x2))
#define lStack_34 (*(long volatile *)(recovered_local_frame.bytes + 0x4))
#define alStack_30 (*(long volatile (*)[2])(recovered_local_frame.bytes + 0x8))

  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;





  uVar2 = GetTPage(0,1,0,0);
  if (DAT_8011974d == '\0') {
    func_8002CEC0(&DAT_800906a0);
    DAT_8011974d = '\x01';
  }
  lVar4 = RotTransPers((SVECTOR *)(param_1 + 0x28),(long *)&local_38,&lStack_34,alStack_30);
  iVar8 = 0;
  do {
    iVar7 = *(int *)(DAT_8008ed68 + 0x1090);
    uVar5 = 0;
    if ((iVar7 == 0) || (uVar5 = iVar7 + 0x1c, uVar6 = 0, uVar5 <= DAT_8008ed68 + 0x4594U)) {
      uVar6 = uVar5;
    }
    *(uint *)(DAT_8008ed68 + 0x1090) = uVar6;
    SetPolyG3(iVar7);
    SetSemiTrans(iVar7,1);
    *(undefined1 *)(iVar7 + 4) = *(undefined1 *)(param_1 + 0x30);
    *(undefined1 *)(iVar7 + 5) = *(undefined1 *)(param_1 + 0x31);
    uVar1 = *(undefined1 *)(param_1 + 0x32);
    *(undefined1 *)(iVar7 + 0xc) = 0;
    *(undefined1 *)(iVar7 + 0xd) = 0;
    *(undefined1 *)(iVar7 + 0xe) = 0;
    *(undefined1 *)(iVar7 + 0x14) = 0;
    *(undefined1 *)(iVar7 + 0x15) = 0;
    *(undefined1 *)(iVar7 + 0x16) = 0;
    *(undefined2 *)(iVar7 + 0x18) = local_38;
    *(undefined2 *)(iVar7 + 0x10) = local_38;
    *(undefined2 *)(iVar7 + 8) = local_38;
    *(undefined2 *)(iVar7 + 0x1a) = local_36;
    *(undefined2 *)(iVar7 + 0x12) = local_36;
    *(undefined2 *)(iVar7 + 10) = local_36;
    *(undefined1 *)(iVar7 + 6) = uVar1;
    if (iVar8 == 1) {
      *(short *)(iVar7 + 0x10) = *(short *)(iVar7 + 0x10) + *(short *)(param_1 + 0x36);
      sVar3 = *(short *)(iVar7 + 0x1a) + *(short *)(param_1 + 0x34);
LAB_800f5a94:
      *(short *)(iVar7 + 0x1a) = sVar3;
    }
    else if (iVar8 < 2) {
      if (iVar8 == 0) {
        sVar3 = *(short *)(iVar7 + 0x10) + *(short *)(param_1 + 0x36);
LAB_800f5a80:
        *(short *)(iVar7 + 0x10) = sVar3;
        sVar3 = *(short *)(iVar7 + 0x1a) - *(short *)(param_1 + 0x34);
        goto LAB_800f5a94;
      }
    }
    else {
      if (iVar8 == 2) {
        *(short *)(iVar7 + 0x10) = *(short *)(iVar7 + 0x10) - *(short *)(param_1 + 0x36);
        sVar3 = *(short *)(iVar7 + 0x1a) + *(short *)(param_1 + 0x34);
        goto LAB_800f5a94;
      }
      if (iVar8 == 3) {
        sVar3 = *(short *)(iVar7 + 0x10) - *(short *)(param_1 + 0x36);
        goto LAB_800f5a80;
      }
    }
    iVar8 = iVar8 + 1;
    AddPrim(DAT_8008ed68 + lVar4 * 4 + 0x70,iVar7);
    if (3 < iVar8) {
      func_80018610(uVar2,lVar4);
      return;
    }
  } while( true );
}

#undef local_38
#undef local_36
#undef lStack_34
#undef alStack_30
