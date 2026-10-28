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
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define DAT_8011974d (*(s8 *)0x8011974D)
extern s32 AddPrim();
extern s32 RotTransPers();
extern s32 SetPolyGT3();
extern s32 SetSemiTrans();
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
extern s32 rcos();
extern s32 rsin();
void func_800FB368(int param_1)

{
  union { u64 align; u8 bytes[0x18]; } recovered_local_frame;
#define local_40 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_38 (*(short volatile *)(recovered_local_frame.bytes + 0x8))
#define local_36 (*(undefined2 volatile *)(recovered_local_frame.bytes + 0xA))
#define lStack_34 (*(long volatile *)(recovered_local_frame.bytes + 0xC))
#define lStack_30 (*(long volatile *)(recovered_local_frame.bytes + 0x10))
#define local_2c (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x14))
#define local_2a (*(undefined2 volatile *)(recovered_local_frame.bytes + 0x16))

  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  void *primitive;
  int iVar9;
  s8 cVar10;
  s8 cVar11;








  func_8002CEC0(&DAT_800906a0);
  DAT_8011974d = 1;
  iVar9 = 0;
  cVar11 = (*(byte *)(param_1 + 0x42) & 1) * '@';
  cVar10 = (*(byte *)(param_1 + 0x42) >> 1) * '@';
  if (*(s8 *)(param_1 + 0x34) != '\0') {
    do {
      iVar3 = func_800202A4((int)*(short *)(param_1 + 0x36));
      uVar4 = func_800202A4(0x1000);
      iVar6 = (uint)*(ushort *)(param_1 + 0x3a) << 0x10;
      iVar8 = iVar6 >> 0x10;
      iVar8 = (iVar8 - (iVar6 >> 0x1f) >> 1) +
              ((iVar8 * (*(short *)(param_1 + 0x36) - iVar3)) / (int)*(short *)(param_1 + 0x36)) / 2
      ;
      iVar6 = rcos(uVar4);
      iVar6 = iVar3 * iVar6;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xfff;
      }
      local_40.vx = *(short *)(param_1 + 0x28) + (short)(iVar6 >> 0xc);
      local_40.vy = *(short *)(param_1 + 0x2a);
      iVar6 = rsin(uVar4);
      iVar3 = iVar3 * iVar6;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xfff;
      }
      local_40.vz = *(short *)(param_1 + 0x2c) + (short)(iVar3 >> 0xc);
      lVar5 = RotTransPers(&local_40,(long *)&local_38,&lStack_34,&lStack_30);
      local_40.vy = local_40.vy - (short)iVar8;
      RotTransPers(&local_40,(long *)&local_2c,&lStack_34,&lStack_30);
      sVar2 = *(short *)(param_1 + 0x38);
      primitive = *(void **)(DAT_8008ed68 + 0x1090);
      uVar7 = 0;
      if ((primitive != (void *)0x0) && ((int)primitive + 0x28U <= DAT_8008ed68 + 0x4594U)) {
        uVar7 = (int)primitive + 0x28U;
      }
      *(uint *)(DAT_8008ed68 + 0x1090) = uVar7;
      SetPolyGT3(primitive);
      *(undefined1 *)((int)primitive + 4) = 0;
      *(undefined1 *)((int)primitive + 5) = 0;
      *(undefined1 *)((int)primitive + 6) = 0;
      uVar1 = *(undefined1 *)(param_1 + 0x30);
      *(undefined1 *)((int)primitive + 0x1c) = uVar1;
      *(undefined1 *)((int)primitive + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x31);
      *(undefined1 *)((int)primitive + 0x1d) = uVar1;
      *(undefined1 *)((int)primitive + 0x11) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x32);
      *(undefined1 *)((int)primitive + 0x1e) = uVar1;
      *(undefined1 *)((int)primitive + 0x12) = uVar1;
      SetSemiTrans(primitive,*(undefined1 *)(param_1 + 0x3c));
      *(undefined2 *)((int)primitive + 0x1a) = *(undefined2 *)(param_1 + 0x3e);
      *(undefined2 *)((int)primitive + 0xe) = *(undefined2 *)(param_1 + 0x40);
      *(undefined2 *)((int)primitive + 8) = local_2c;
      *(undefined2 *)((int)primitive + 10) = local_2a;
      sVar2 = (short)((iVar8 * sVar2) / (lVar5 + -0x14));
      *(short *)((int)primitive + 0x14) = local_38 - sVar2;
      *(undefined2 *)((int)primitive + 0x16) = local_36;
      *(short *)((int)primitive + 0x20) = local_38 + sVar2;
      *(s8 *)((int)primitive + 0x18) = cVar11 + '@';
      *(s8 *)((int)primitive + 0xc) = cVar11;
      *(s8 *)((int)primitive + 0xd) = cVar10;
      *(s8 *)((int)primitive + 0x19) = cVar10;
      *(s8 *)((int)primitive + 0x24) = cVar11;
      *(s8 *)((int)primitive + 0x25) = cVar10 + '@';
      *(undefined2 *)((int)primitive + 0x22) = local_36;
      AddPrim((void *)(DAT_8008ed68 + (lVar5 + -0x14) * 4 + 0x70),primitive);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)(uint)*(byte *)(param_1 + 0x34));
  }
  return;
}

#undef local_40
#undef local_38
#undef local_36
#undef lStack_34
#undef lStack_30
#undef local_2c
#undef local_2a
