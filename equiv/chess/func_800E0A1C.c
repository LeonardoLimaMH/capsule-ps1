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
#define D_80119714 (*(s32 *)0x80119714)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800DD274 ((s32 (*)())0x800DD274)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FE21C ((s32 (*)())0x800FE21C)
#define func_800FE5B0 ((s32 (*)())0x800FE5B0)
#define func_800FEBF4 ((s32 (*)())0x800FEBF4)
#define func_800FF2CC ((s32 (*)())0x800FF2CC)
#define func_800FF3B4 ((s32 (*)())0x800FF3B4)
extern s32 rsin();
undefined4 func_800E0A1C(undefined4 param_1,int param_2,byte *param_3)

{
  union { u64 align; u8 bytes[0x18]; } recovered_local_frame;
#define auStack_40 (*(undefined1 volatile (*)[2])(recovered_local_frame.bytes + 0x0))
#define local_3e (*(short volatile *)(recovered_local_frame.bytes + 0x2))
#define SStack_38 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x8))
#define SStack_30 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x10))

  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint x;
  uint y;





  if (DAT_8008ee54 == 3) {
    param_2 = param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2;
    x = (uint)*(byte *)(param_2 + 0x601);
    y = (uint)*(byte *)(param_2 + 0x602);
    iVar4 = func_800FE5B0(param_3,x,y);
    iVar1 = D_80119714;
    func_800FE188(param_3,&SStack_38);
    func_800FE21C(x,y,&SStack_30);
    func_800FF3B4(&SStack_38,&SStack_30,iVar4,iVar1,auStack_40);
    func_800FEBF4(auStack_40);
    iVar6 = rsin(((iVar1 << 0xc) / iVar4) / 2);
    iVar5 = rsin(((iVar1 * 0x3000) / iVar4) / 2);
    iVar6 = iVar6 * 0x46;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xfff;
    }
    iVar5 = iVar5 * 0x1e;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xfff;
    }
    local_3e = local_3e - ((short)(iVar6 >> 0xc) + (short)(iVar5 >> 0xc));
    func_800FF2CC(param_3,auStack_40,1);
    if (0 < iVar4 - iVar1) {
      return 0;
    }
  }
  else {
    if (3 < DAT_8008ee54) {
      if (DAT_8008ee54 == 5) {
        if (*(int *)(*(int *)(param_3 + 0x70) + 0x1c) != 0) {
          return 0;
        }
      }
      else {
        if (DAT_8008ee54 < 5) {
          iVar6 = *(int *)(param_3 + 0x74);
          uVar2 = (undefined1)((D_80119714 << 7) / 0x14);
          *(undefined1 *)(iVar6 + 0x5a) = uVar2;
          *(undefined1 *)(iVar6 + 0x59) = uVar2;
          *(undefined1 *)(iVar6 + 0x58) = uVar2;
          if (D_80119714 < 0x14) {
            return 0;
          }
          *(uint *)(*(int *)(param_3 + 0x74) + 0x38) =
               *(uint *)(*(int *)(param_3 + 0x74) + 0x38) & 0xffffffbf;
          *(uint *)(*(int *)(param_3 + 0x74) + 0x38) =
               *(uint *)(*(int *)(param_3 + 0x74) + 0x38) & 0xffffffcf;
          iVar6 = *(int *)(param_3 + 0x74);
          *(undefined1 *)(iVar6 + 0x5a) = 0x80;
          *(undefined1 *)(iVar6 + 0x59) = 0x80;
          *(undefined1 *)(iVar6 + 0x58) = 0x80;
          *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) ^ 0x80000000;
          param_2 = param_2 + (uint)*(byte *)(param_2 + 0x5fa) * 2;
          func_800DD274(param_3,*(undefined1 *)(param_2 + 0x601),*(undefined1 *)(param_2 + 0x602));
          iVar6 = *(int *)(param_3 + 0x70);
          uVar3 = func_80019F30(*param_3 + 0x10d | 0x70000,0x46);
          func_80015CD0(iVar6 + 0x14,uVar3,1);
          goto LAB_800e0dc8;
        }
        if (DAT_8008ee54 != 99) {
          return 0;
        }
      }
      *(undefined1 *)(param_2 + 0x60d) = 2;
      return 1;
    }
    if (DAT_8008ee54 == 1) {
      iVar6 = *(int *)(param_3 + 0x70);
      if (*(int *)(iVar6 + 0x1c) != 0) {
        return 0;
      }
      uVar3 = func_80019F30(*param_3 + 0x10d | 0x70000,0x45);
      func_80015CD0(iVar6 + 0x14,uVar3,0);
      *(uint *)(*(int *)(param_3 + 0x74) + 0x38) = *(uint *)(*(int *)(param_3 + 0x74) + 0x38) | 0x40
      ;
      *(uint *)(*(int *)(param_3 + 0x74) + 0x38) =
           *(uint *)(*(int *)(param_3 + 0x74) + 0x38) & 0xffffffcf | 0x10;
    }
    else if (DAT_8008ee54 < 2) {
      if (DAT_8008ee54 != 0) {
        return 0;
      }
      param_3[0x17] = 0x88;
      param_3[0x23] = 1;
    }
    else {
      iVar6 = *(int *)(param_3 + 0x74);
      uVar2 = (undefined1)(((0x14 - D_80119714) * 0x80) / 0x14);
      *(undefined1 *)(iVar6 + 0x5a) = uVar2;
      *(undefined1 *)(iVar6 + 0x59) = uVar2;
      *(undefined1 *)(iVar6 + 0x58) = uVar2;
      if (D_80119714 < 0x14) {
        return 0;
      }
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x80000000;
    }
  }
LAB_800e0dc8:
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
  return 0;
}

#undef auStack_40
#undef local_3e
#undef SStack_38
#undef SStack_30
