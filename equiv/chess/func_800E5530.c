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
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8006b2b4 (*(s32 *)0x8006B2B4)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define DAT_8011974e (*(u8 *)0x8011974E)
#define DAT_8011974f (*(s32 *)0x8011974F)
#define D_80118C18 (*(s32 *)0x80118C18)
#define D_80119714 (*(s32 *)0x80119714)
extern s32 RotTransPers();
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800D3128 ((s32 (*)())0x800D3128)
#define func_800D741C ((s32 (*)())0x800D741C)
#define func_800DD230 ((s32 (*)())0x800DD230)
#define func_800FE21C ((s32 (*)())0x800FE21C)
undefined4 func_800E5530(undefined4 param_1,int param_2,byte *param_3)

{
  union { u64 align; u8 bytes[0x20]; } recovered_local_frame;
#define SStack_38 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_30 (*(uint volatile *)(recovered_local_frame.bytes + 0x8))
#define local_2c (*(uint volatile *)(recovered_local_frame.bytes + 0xC))
#define lStack_28 (*(long volatile *)(recovered_local_frame.bytes + 0x10))
#define lStack_24 (*(long volatile *)(recovered_local_frame.bytes + 0x14))
#define alStack_20 (*(long volatile (*)[2])(recovered_local_frame.bytes + 0x18))

  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;







  iVar7 = *(int *)(param_3 + 0x70);
  iVar6 = *(int *)(param_3 + 0x78);
  iVar4 = func_800DD230(param_3);
  if (DAT_8008ee54 != 1) {
    if (1 < DAT_8008ee54) {
      if (DAT_8008ee54 == 2) {
        if (D_80119714 == 6) {
          func_80034AB0(0x8015);
        }
        if (*(int *)(iVar6 + 0x1c) != 0) {
          return 0;
        }
      }
      else if (DAT_8008ee54 != 99) {
        return 0;
      }
      *(undefined1 *)(param_2 + 0x60d) = 2;
      return 1;
    }
    if (DAT_8008ee54 != 0) {
      return 0;
    }
    param_3[0x23] = 1;
    param_3[0x17] = 0x88;
    uVar1 = *(undefined1 *)((uint)param_3[0x16] * 4 + (uint)param_3[0x15] * 0x34 + D_80118C18 + 3);
    *(uint *)(((u8 *)0x8006B2B4) + (uint)*param_3 * 0x58) =
         *(uint *)(((u8 *)0x8006B2B4) + (uint)*param_3 * 0x58) | 0x18000;
    DAT_8011974e = func_800D741C(uVar1,&DAT_8011974f,param_3[0x25]);
    *(uint *)(((u8 *)0x8006B2B4) + (uint)*param_3 * 0x58) =
         *(uint *)(((u8 *)0x8006B2B4) + (uint)*param_3 * 0x58) & 0xfffe7fff | 0x10000;
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x8000;
    switch(iVar4) {
    case 0:
      bVar2 = 0x45;
      break;
    case 1:
    case 2:
    case 3:
      bVar2 = 0x46;
      break;
    case 4:
      bVar2 = 0x47;
      break;
    case 5:
    case 6:
    case 7:
      bVar2 = 0x48;
      break;
    default:
      goto switchD_800e56a4_default;
    }
    param_3[0x24] = bVar2;
    goto switchD_800e56a4_default;
  }
  *(undefined4 *)(iVar6 + 0x84) = 1;
  *(uint *)(iVar6 + 0x38) = *(uint *)(iVar6 + 0x38) & 0xffffffcf | 0x50;
  switch(iVar4) {
  case 0:
  case 2:
  case 4:
  case 6:
    *(undefined2 *)(iVar6 + 0x54) = 0;
    goto switchD_800e570c_default;
  case 1:
    *(undefined2 *)(iVar6 + 0x6a) = 0x14;
    uVar3 = 0xfed4;
    break;
  case 5:
    uVar3 = 0xfed4;
    break;
  case 7:
    *(undefined2 *)(iVar6 + 0x6a) = 0xffec;
  case 3:
    uVar3 = 300;
    break;
  default:
    goto switchD_800e570c_default;
  }
  *(undefined2 *)(iVar6 + 0x54) = uVar3;
switchD_800e570c_default:
  uVar3 = *(undefined2 *)(iVar7 + 0x50);
  *(undefined2 *)(iVar6 + 0x52) = uVar3;
  *(undefined2 *)(iVar6 + 0x50) = uVar3;
  if (2 < iVar4 - 3U) {
    local_30 = (uint)param_3[0x15];
    local_2c = (uint)param_3[0x16];
    func_800D3128((uint)param_3[0x25],2,(int *)&local_30,(int *)&local_2c);
    func_800FE21C(local_30,local_2c,&SStack_38);
    func_8002CEC0(&DAT_800906a0);
    lVar5 = RotTransPers(&SStack_38,&lStack_28,&lStack_24,alStack_20);
    *(short *)(iVar6 + 0x72) = ((short)lVar5 - *(short *)(iVar7 + 0x4e)) + -0x11;
  }
switchD_800e56a4_default:
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
  return 0;
}

#undef SStack_38
#undef local_30
#undef local_2c
#undef lStack_28
#undef lStack_24
#undef alStack_20
