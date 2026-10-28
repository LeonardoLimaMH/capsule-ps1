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
/* real-callee: func_800DD428 */
/* real-callee: func_80015D14 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* compiler: 2.7.2-psx */
/* arg2: 0x80140000 */
/* arg3: 0x80150000 */
/* rand-mem: 0x80140015 2 13 */
/* rand-mem: 0x80150015 2 13 */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008f7a4 (*(s32 *)0x8008F7A4)
#define DAT_8008f7a8 (*(s32 *)0x8008F7A8)
#define D_80119714 (*(s32 *)0x80119714)
extern s32 GetClut();
extern s32 GetTPage();
#define func_80013928 ((s32 (*)())0x80013928)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800374E8 ((s32 (*)())0x800374E8)
#define func_800DD428 ((s32 (*)())0x800DD428)
#define func_800FDA08 ((s32 (*)())0x800FDA08)
#define func_800FE188 ((s32 (*)())0x800FE188)
undefined4 func_800EF478(undefined4 param_1,int param_2,uchar *param_3)

{
  union { u64 align; u8 bytes[0x20]; } recovered_local_frame;
#define local_40 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_3f (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x1))
#define local_3e (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x2))
#define local_38 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x8))
#define local_37 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x9))
#define local_36 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0xA))
#define local_30 (*(int volatile (*)[4])(recovered_local_frame.bytes + 0x10))

  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  undefined4 *puVar8;








  iVar6 = DAT_8008f7a4;
  local_30[0] = DAT_8008f7a4;
  local_30[1] = DAT_8008f7a8;
  switch(DAT_8008ee54) {
  case 0:
    func_800374E8(0x801c);
    param_3[0x17] = 0x87;
    param_3[0x23] = '\x01';
    D_80119714 = 0;
    local_40 = 0x60;
    local_3f = 0x60;
    local_3e = 0x60;
    local_38 = 0x10;
    local_37 = 0x10;
    local_36 = 0x10;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    func_800DD428(&local_40,&local_38,0x3c);
  case 1:
    uVar2 = 0;
    if (0x18 < D_80119714) {
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
switchD_800ef4e0_caseD_2:
      puVar8 = &DAT_8008ed68;
      sVar7 = 0;
      iVar6 = 0;
      do {
        iVar4 = func_80015B3C(func_80018600,func_800FDA08,1);
        local_30[iVar6 + 2] = iVar4;
        func_800FE188(param_3,(SVECTOR *)(iVar4 + 0x28));
        *(undefined1 *)(local_30[iVar6 + 2] + 0x30) = 1;
        *(undefined1 *)(local_30[iVar6 + 2] + 0x31) = 1;
        *(undefined1 *)(local_30[iVar6 + 2] + 0x32) = 1;
        *(undefined1 *)(local_30[iVar6 + 2] + 0x34) = 1;
        *(undefined1 *)(local_30[iVar6 + 2] + 0x35) = 1;
        *(undefined1 *)(local_30[iVar6 + 2] + 0x36) = 1;
        *(undefined1 *)(local_30[iVar6 + 2] + 0x38) = 8;
        uVar1 = GetTPage(0,1,0x280,0x100);
        *(undefined2 *)(local_30[iVar6 + 2] + 0x3a) = uVar1;
        uVar1 = GetClut((0xb - iVar6) * 0x10,0x1f0);
        *(undefined2 *)(local_30[iVar6 + 2] + 0x3c) = uVar1;
        *(undefined1 *)(local_30[iVar6 + 2] + 0x3e) = 0x40;
        *(undefined1 *)(local_30[iVar6 + 2] + 0x3f) = 0x40;
        *(undefined1 *)(local_30[iVar6 + 2] + 0x40) = 1;
        *(undefined2 *)(local_30[iVar6 + 2] + 0x42) = 10;
        *(undefined2 *)(local_30[iVar6 + 2] + 0x44) = 100;
        *(undefined2 *)(local_30[iVar6 + 2] + 0x46) = 10;
        *(undefined2 *)(local_30[iVar6 + 2] + 0x4a) = 3;
        iVar4 = iVar6 + 1;
        *(short *)(local_30[iVar6 + 2] + 0x48) = sVar7;
        sVar7 = sVar7 + -0x46;
        puVar8[0x28f] = local_30[iVar6 + 2];
        puVar8 = puVar8 + 1;
        iVar6 = iVar4;
      } while (iVar4 < 2);
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
      func_80034AB0(0x801c);
      uVar2 = 0;
    }
    break;
  case 2:
    goto switchD_800ef4e0_caseD_2;
  case 3:
    iVar5 = 0;
    iVar4 = 1;
    do {
      *(short *)(local_30[iVar5] + 0x48) = *(short *)(local_30[iVar5] + 0x48) + 0x32;
      *(short *)(local_30[iVar5] + 0x46) = *(short *)(local_30[iVar5] + 0x46) + 3;
      if (299 < *(short *)(local_30[iVar5] + 0x46)) {
        *(undefined2 *)(local_30[iVar5] + 0x46) = 300;
      }
      iVar3 = iVar5 + 3;
      if (D_80119714 < 100) {
        *(s8 *)(local_30[iVar5] + 0x30) = (s8)(D_80119714 / iVar4);
        *(s8 *)(local_30[iVar5] + 0x31) = (s8)(D_80119714 / iVar4);
        *(s8 *)(local_30[iVar5] + 0x32) = (s8)(D_80119714 / iVar4);
        *(s8 *)(local_30[iVar5] + 0x34) = (s8)(D_80119714 / iVar3);
        *(s8 *)(local_30[iVar5] + 0x35) = (s8)(D_80119714 / iVar3);
        *(s8 *)(local_30[iVar5] + 0x36) = (s8)(D_80119714 / iVar3);
      }
      else {
        *(s8 *)(local_30[iVar5] + 0x30) = (s8)((D_80119714 * -2 + 300) / iVar4);
        *(s8 *)(local_30[iVar5] + 0x31) = (s8)((D_80119714 * -2 + 300) / iVar4);
        *(s8 *)(local_30[iVar5] + 0x32) = (s8)((D_80119714 * -2 + 300) / iVar4);
        *(s8 *)(local_30[iVar5] + 0x34) =
             (s8)((0x21 - ((D_80119714 + -100) * 0x17) / 0x32) / iVar4);
        *(s8 *)(local_30[iVar5] + 0x35) =
             (s8)((0x21 - ((D_80119714 + -100) * 0x17) / 0x32) / iVar4);
        *(s8 *)(local_30[iVar5] + 0x36) =
             (s8)iVar5 - ((s8)(((D_80119714 + -100) * 0x17) / 0x32) + -0x21);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar5 < 2);
    uVar2 = 0;
    if (0x95 < D_80119714) {
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
      func_80013928(iVar6);
      func_80013928(local_30[1]);
      uVar2 = 0;
    }
    break;
  case 4:
    *(undefined1 *)(param_2 + 0x60d) = 2;
    local_40 = 0x15;
    local_3f = 0x15;
    local_3e = 0;
    local_38 = 0x60;
    local_37 = 0x60;
    local_36 = 0x60;
    func_800DD428(&local_40,&local_38,0x28);
    uVar2 = 1;
    break;
  default:
    uVar2 = 0;
  }
  return uVar2;
}

#undef local_40
#undef local_3f
#undef local_3e
#undef local_38
#undef local_37
#undef local_36
#undef local_30
