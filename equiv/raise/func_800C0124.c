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
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_800f066e (*(u16 *)0x800F066E)
#define DAT_800f0676 (*(s16 *)0x800F0676)
#define DAT_800f0686 (*(s16 *)0x800F0686)
#define DAT_80100d8c (*(u8 *)0x80100D8C)
#define DAT_80100d90 (*(u8 *)0x80100D90)
#define DAT_80100d94 (*(u8 *)0x80100D94)
#define DAT_80100d9a (*(u16 *)0x80100D9A)
#define DAT_80100da0 (*(u16 *)0x80100DA0)
#define DAT_80100da2 (*(u16 *)0x80100DA2)
#define DAT_80100da8 (*(u16 *)0x80100DA8)
#define DAT_80100daa (*(u16 *)0x80100DAA)
#define DAT_80100db0 (*(u16 *)0x80100DB0)
#define DAT_80100db2 (*(u16 *)0x80100DB2)
#define D_80100D88 (*(s8 *)0x80100D88)
#define D_80100D98 (*(u16 *)0x80100D98)
extern s32 AddPrim();
extern s32 SetPolyG4();
extern s32 SetSemiTrans();
#define func_80018610 ((s32 (*)())0x80018610)
extern s32 rcos();
extern s32 rsin();
undefined4 func_800C0124(short param_1,short param_2,short param_3)

{
  union { u64 align; u8 bytes[0x48]; } recovered_local_frame;
#define local_70 (*(int volatile (*)[3])(recovered_local_frame.bytes + 0x0))
#define asStack_64 (*(short volatile (*)[6])(recovered_local_frame.bytes + 0xC))
#define local_58 (*(short volatile *)(recovered_local_frame.bytes + 0x18))
#define local_50 (*(short volatile *)(recovered_local_frame.bytes + 0x20))
#define local_48 (*(short volatile *)(recovered_local_frame.bytes + 0x28))
#define local_40 (*(int volatile *)(recovered_local_frame.bytes + 0x30))
#define local_38 (*(short volatile *)(recovered_local_frame.bytes + 0x38))
#define local_30 (*(int * volatile *)(recovered_local_frame.bytes + 0x40))

  s8 cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  void *primitive;
  short *psVar11;
  short *psVar12;
  s8 *pcVar13;
  int iVar14;









  iVar14 = 0;
  local_30 = local_70;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3;
  do {
    local_40 = 0;
    local_38 = (short)((ulonglong)((longlong)(iVar14 * DAT_800f0676) * 0x55555556) >> 0x20) -
               (short)(iVar14 * DAT_800f0676 >> 0x1f);
    do {
      iVar8 = (int)DAT_800f0686;
      piVar4 = local_30;
      iVar5 = local_40;
      piVar6 = local_30;
      do {
        iVar2 = iVar5;
        if (iVar5 < 0) {
          iVar2 = iVar5 + 3;
        }
        iVar2 = iVar5 + (iVar2 >> 2) * -4 + -2;
        piVar4[2] = iVar2;
        if (iVar14 == 0) {
          *(short *)(piVar6 + 4) = local_38;
        }
        else {
          if (iVar2 < 0) {
            sVar9 = (short)piVar4[2] * -8;
          }
          else {
            sVar9 = ((short)piVar4[2] + 1) * 8;
          }
          *(short *)(piVar6 + 4) = local_38 + sVar9;
        }
        iVar3 = iVar5 * 0x80 + iVar8;
        iVar2 = iVar3;
        if (iVar3 < 0) {
          iVar2 = iVar3 + 0xfff;
        }
        *piVar4 = iVar3 + (iVar2 >> 0xc) * -0x1000;
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
        piVar6 = (int *)((int)piVar6 + 2);
      } while ((int)piVar4 < (int)(local_30 + 2));
      pcVar13 = ((u8 *)0x80100D88);
      psVar12 = asStack_64;
      psVar11 = &D_80100D98;
      piVar4 = local_30;
      do {
        sVar9 = local_58;
        if (-0x7feff271 < (int)pcVar13) {
          iVar5 = rcos(piVar4[-2]);
          iVar5 = ((int)DAT_800f0676 + (int)*psVar12) * iVar5;
          if (iVar5 < 0) {
            iVar5 = iVar5 + 0xfff;
          }
          sVar9 = sVar9 + (short)(iVar5 >> 0xc);
        }
        sVar10 = local_50;
        *psVar11 = sVar9;
        if (-0x7feff271 < (int)pcVar13) {
          iVar5 = rsin(piVar4[-2]);
          iVar5 = ((int)DAT_800f0676 + (int)*psVar12) * iVar5;
          if (iVar5 < 0) {
            iVar5 = iVar5 + 0xfff;
          }
          sVar10 = sVar10 + (short)(iVar5 >> 0xc);
        }
        psVar11[1] = sVar10;
        psVar11[2] = local_48;
        if ((int)pcVar13 < -0x7feff270) {
          cVar1 = -1;
        }
        else {
          cVar1 = (s8)iVar14 * -0x20 + -0x80;
        }
        *pcVar13 = cVar1;
        pcVar13 = pcVar13 + 4;
        psVar11 = psVar11 + 4;
        psVar12 = psVar12 + 1;
        piVar4 = piVar4 + 1;
      } while ((int)pcVar13 < -0x7feff268);
      primitive = *(void **)(DAT_8008ed68 + 0x1090);
      uVar7 = 0;
      if ((primitive != (void *)0x0) && ((int)primitive + 0x24U <= DAT_8008ed68 + 0x4594U)) {
        uVar7 = (int)primitive + 0x24U;
      }
      *(uint *)(DAT_8008ed68 + 0x1090) = uVar7;
      SetPolyG4(primitive);
      SetSemiTrans(primitive,1);
      *(undefined1 *)((int)primitive + 4) = D_80100D88;
      *(undefined1 *)((int)primitive + 5) = D_80100D88;
      *(undefined1 *)((int)primitive + 6) = D_80100D88;
      *(undefined1 *)((int)primitive + 0xc) = DAT_80100d8c;
      *(undefined1 *)((int)primitive + 0xd) = DAT_80100d8c;
      *(undefined1 *)((int)primitive + 0xe) = DAT_80100d8c;
      *(undefined1 *)((int)primitive + 0x14) = DAT_80100d90;
      *(undefined1 *)((int)primitive + 0x15) = DAT_80100d90;
      *(undefined1 *)((int)primitive + 0x16) = DAT_80100d90;
      *(undefined1 *)((int)primitive + 0x1c) = DAT_80100d94;
      *(undefined1 *)((int)primitive + 0x1d) = DAT_80100d94;
      *(undefined1 *)((int)primitive + 0x1e) = DAT_80100d94;
      *(undefined2 *)((int)primitive + 8) = D_80100D98;
      *(undefined2 *)((int)primitive + 10) = DAT_80100d9a;
      *(undefined2 *)((int)primitive + 0x10) = DAT_80100da0;
      *(undefined2 *)((int)primitive + 0x12) = DAT_80100da2;
      *(undefined2 *)((int)primitive + 0x18) = DAT_80100da8;
      *(undefined2 *)((int)primitive + 0x1a) = DAT_80100daa;
      *(undefined2 *)((int)primitive + 0x20) = DAT_80100db0;
      local_40 = local_40 + 1;
      *(undefined2 *)((int)primitive + 0x22) = DAT_80100db2;
      iVar5 = (int)local_48;
      AddPrim((void *)(DAT_8008ed68 + iVar5 * 4 + 0x70 + iVar14 * 4),primitive);
      func_80018610(DAT_800f066e,iVar5 + iVar14);
    } while (local_40 < 0x20);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 2);
  return 0;
}

#undef local_70
#undef asStack_64
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef local_30
