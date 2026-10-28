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

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
/* real-callee: func_800FE188 */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define D_80119714 (*(s32 *)0x80119714)
extern s32 RotTransPers();
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_800161C4 ((s32 (*)())0x800161C4)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800B3338 ((s32 (*)())0x800B3338)
#define func_800B3488 ((s32 (*)())0x800B3488)
#define func_800DD3D8 ((s32 (*)())0x800DD3D8)
#define func_800DD4A8 ((s32 (*)())0x800DD4A8)
#define func_800DDA78 ((s32 (*)())0x800DDA78)
#define func_800FE188 ((s32 (*)())0x800FE188)
undefined4 func_800F1FF8(undefined4 param_1,undefined4 param_2,int param_3,uchar *param_4)

{
  union { u64 align; u8 bytes[0x38]; } recovered_local_frame;
#define SStack_38 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_30 (*(short volatile *)(recovered_local_frame.bytes + 0x8))
#define local_2e (*(short volatile *)(recovered_local_frame.bytes + 0xA))
#define lStack_2c (*(long volatile *)(recovered_local_frame.bytes + 0xC))
#define alStack_28 (*(long volatile (*)[2])(recovered_local_frame.bytes + 0x10))

  short sVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 uVar6;






  if (DAT_8008ee54 == 1) {
    func_800FE188(param_4,&SStack_38);
    SStack_38.vy = SStack_38.vy + -0x28;
    func_8002CEC0(&DAT_800906a0);
    lVar2 = RotTransPers(&SStack_38,(long *)&local_30,&lStack_2c,alStack_28);
    if (((D_80119714 & 7) == 0) && ((int)D_80119714 < 0x50)) {
      iVar3 = func_80015B3C(func_800DD4A8,func_800161C4,1);
      uVar4 = func_80019F30(0x70013,0x5a);
      func_80015EF8(iVar3);
      func_80015CD0(iVar3 + 0x14,uVar4,2);
      sVar1 = func_800202A4(0x3d);
      *(short *)(iVar3 + 0x46) = (local_30 - (short)(DAT_8008ee70 / 2)) + sVar1 + -0x1e;
      sVar1 = func_800202A4(0x3d);
      iVar5 = DAT_8008ee74;
      *(short *)(iVar3 + 0x4e) = (short)lVar2 + -0x15;
      *(short *)(iVar3 + 0x4a) = ((local_2e - (short)(iVar5 / 2)) - sVar1) + 0x1e;
      *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xffffffcf | 0x50;
      uVar6 = (undefined2)(0x140000 / (lVar2 + -10));
      *(undefined2 *)(iVar3 + 0x52) = uVar6;
      *(undefined2 *)(iVar3 + 0x50) = uVar6;
    }
    if (D_80119714 == 10) {
      func_800DD3D8(0x1e,0x5a);
    }
    if ((4 < *(uint *)(*(int *)(param_3 + 0x70) + 0x20)) && ((int)D_80119714 < 0x3c)) {
      *(undefined4 *)(*(int *)(param_3 + 0x70) + 0x20) = 1;
    }
    if (2 < *(short *)(*(int *)(param_3 + 0x70) + 0x24)) {
      *(undefined2 *)(*(int *)(param_3 + 0x70) + 0x24) = 2;
    }
    if (((D_80119714 & 7) == 0) && ((int)D_80119714 < 0x50)) {
      func_80034AB0(0x78);
    }
    if ((int)D_80119714 < 0x6f) {
      return 0;
    }
    iVar5 = func_800B3338(param_1,0);
    if (iVar5 != 0) {
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
    }
  }
  else {
    if (DAT_8008ee54 < 2) {
      if (DAT_8008ee54 == 0) {
        *(undefined1 *)(param_3 + 0x17) = 0x87;
        *(undefined1 *)(param_3 + 0x23) = 1;
        D_80119714 = 0;
        DAT_8008ee54 = DAT_8008ee54 + 1;
        func_800B3488(param_2,param_4);
        return 0;
      }
      return 0;
    }
    if (DAT_8008ee54 == 2) {
      if ((int)D_80119714 < 0x14) {
        return 0;
      }
      func_800DDA78(param_4);
      *(uint *)(param_4 + 0x1c) = *(uint *)(param_4 + 0x1c) | 8;
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
    }
    else if (DAT_8008ee54 != 3) {
      return 0;
    }
    if (0x1d < (int)D_80119714) {
      return 1;
    }
  }
  return 0;
}

#undef SStack_38
#undef local_30
#undef local_2e
#undef lStack_2c
#undef alStack_28
