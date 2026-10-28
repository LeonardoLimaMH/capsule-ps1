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
/* compiler: 2.8.1-psx */
/* arg2: 0x80140000 */
/* arg3: 0x80150000 */
/* rand-mem: 0x80140015 2 13 */
/* rand-mem: 0x80150015 2 13 */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008f7a4 (*(s32 *)0x8008F7A4)
#define D_80119714 (*(s32 *)0x80119714)
#define _DAT_8008f7ac (*(u32 *)0x8008F7AC)
#define _DAT_8008f7b0 (*(u32 *)0x8008F7B0)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800DD3D8 ((s32 (*)())0x800DD3D8)
#define func_800DD428 ((s32 (*)())0x800DD428)
#define func_800DDA78 ((s32 (*)())0x800DDA78)
#define func_800F52C4 ((s32 (*)())0x800F52C4)
#define func_800FBB90 ((s32 (*)())0x800FBB90)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FF190 ((s32 (*)())0x800FF190)
undefined4 func_800F0BEC(undefined4 param_1,int param_2,uchar *param_3,undefined4 param_4)

{
  union { u64 align; u8 bytes[0x18]; } recovered_local_frame;
#define local_30 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_2f (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x1))
#define local_2e (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x2))
#define local_28 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x8))
#define local_27 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x9))
#define local_26 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0xA))
#define local_20 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x10))

  bool bVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;








  switch(DAT_8008ee54) {
  case 0:
    break;
  case 1:
    goto switchD_800f0c3c_caseD_1;
  case 2:
    goto switchD_800f0c3c_caseD_2;
  case 3:
    goto switchD_800f0c3c_caseD_3;
  case 4:
    goto switchD_800f0c3c_caseD_4;
  case 5:
    goto switchD_800f0c3c_caseD_5;
  default:
    return 0;
  }
  func_800DD3D8(0x12,100);
  DAT_8008f7a4 = (int)*(short *)(*(int *)(param_3 + 0x70) + 0x50);
  DAT_8008ee54 = DAT_8008ee54 + 1;
  D_80119714 = 0;
  local_30 = 0x60;
  local_2f = 0x60;
  local_2e = 0x60;
  local_28 = 0x15;
  local_27 = 0;
  local_26 = 0x15;
  func_800DD428(&local_30,&local_28,0x14);
  _DAT_8008f7b0 = 0;
  _DAT_8008f7ac = 0;
  *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x80000000;
  func_800DD3D8(0x12,0xf);
switchD_800f0c3c_caseD_1:
  uVar4 = 0;
  if (9 < D_80119714) {
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
switchD_800f0c3c_caseD_2:
    if (((D_80119714 == 8) || (D_80119714 == 0x28)) || (bVar1 = false, D_80119714 == 0x30)) {
      bVar1 = true;
    }
    if (bVar1) {
      func_800FBB90(0x10);
      func_80034AB0(2);
      func_800DD3D8(0x1e,8);
    }
    func_800FE188(param_3,&local_20);
    sVar3 = func_800202A4(0x1e);
    local_20.vx = local_20.vx + -0xf + sVar3;
    sVar3 = func_800202A4(0x1e);
    local_20.vz = local_20.vz + -0xf + sVar3;
    DAT_8008f7a4 = DAT_8008f7a4 + 0x51;
    func_800FF190(param_3,&local_20,10);
    iVar5 = *(int *)(param_3 + 0x70);
    uVar2 = (undefined2)DAT_8008f7a4;
    *(undefined2 *)(iVar5 + 0x52) = (undefined2)DAT_8008f7a4;
    *(undefined2 *)(iVar5 + 0x50) = uVar2;
    uVar4 = 0;
    if (0x4f < D_80119714) {
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
switchD_800f0c3c_caseD_3:
      func_800FE188(param_3,&local_20);
      sVar3 = func_800202A4(0x11);
      local_20.vx = local_20.vx + -8 + sVar3;
      sVar3 = func_800202A4(0x11);
      local_20.vz = local_20.vz + -8 + sVar3;
      func_800FF190(param_3,&local_20,10);
      iVar5 = *(int *)(param_3 + 0x70);
      uVar2 = (undefined2)DAT_8008f7a4;
      *(undefined2 *)(iVar5 + 0x52) = (undefined2)DAT_8008f7a4;
      *(undefined2 *)(iVar5 + 0x50) = uVar2;
      uVar4 = 0;
      if (9 < D_80119714) {
        D_80119714 = 0;
        DAT_8008ee54 = DAT_8008ee54 + 1;
switchD_800f0c3c_caseD_4:
        iVar5 = func_80015B3C(func_80018600,func_800F52C4,1);
        if (D_80119714 == 0x19) {
          *(undefined1 *)(iVar5 + 0x28) = 0xff;
          *(undefined1 *)(iVar5 + 0x30) = 1;
          *(undefined1 *)(iVar5 + 0x29) = 0;
          *(undefined1 *)(iVar5 + 0x2a) = 0;
          *(undefined1 *)(iVar5 + 0x2c) = 0;
          *(undefined1 *)(iVar5 + 0x2d) = 0;
          *(undefined1 *)(iVar5 + 0x2e) = 0;
          *(undefined2 *)(iVar5 + 0x32) = 0xd;
          func_80034AB0(0x72);
          func_80034AB0(0x1c);
        }
        param_3[0x17] = 0x87;
        param_3[0x23] = '\x01';
        func_800FE188(param_3,&local_20);
        sVar3 = func_800202A4(3);
        local_20.vx = local_20.vx + -1 + sVar3;
        sVar3 = func_800202A4(3);
        local_20.vz = local_20.vz + -1 + sVar3;
        func_800FF190(param_3,&local_20,10);
        iVar5 = *(int *)(param_3 + 0x70);
        uVar2 = (undefined2)DAT_8008f7a4;
        *(undefined2 *)(iVar5 + 0x52) = (undefined2)DAT_8008f7a4;
        *(undefined2 *)(iVar5 + 0x50) = uVar2;
        if (D_80119714 == 0x23) {
          func_800DDA78(param_4);
        }
        uVar4 = 0;
        if (0x45 < D_80119714) {
          local_30 = 0x15;
          local_2f = 0x15;
          local_2e = 0;
          local_28 = 0x60;
          local_27 = 0x60;
          local_26 = 0x60;
          func_800DD428(&local_30,&local_28,0x28);
          D_80119714 = 0;
          DAT_8008ee54 = DAT_8008ee54 + 1;
switchD_800f0c3c_caseD_5:
          iVar5 = *(int *)(param_3 + 0x70);
          sVar3 = *(short *)(iVar5 + 0x52) + -0xa0;
          *(short *)(iVar5 + 0x52) = sVar3;
          *(short *)(iVar5 + 0x50) = sVar3;
          uVar4 = 0;
          if (0x13 < D_80119714) {
            uVar4 = 1;
            *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) ^ 0x80000000;
            *(undefined1 *)(param_2 + 0x60d) = 2;
          }
        }
      }
    }
  }
  return uVar4;
}

#undef local_30
#undef local_2f
#undef local_2e
#undef local_28
#undef local_27
#undef local_26
#undef local_20
