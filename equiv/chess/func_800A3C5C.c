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
/* real-callee: func_800459CC */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FE21C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FF460 */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FE74C */
/* real-callee: func_800DD428 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800DDA78 */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define DAT_80085428 (*(s32 *)0x80085428)
#define DAT_80085ff2 (*(u8 *)0x80085FF2)
#define DAT_800860d1 (*(u8 *)0x800860D1)
#define DAT_8008ee4c (*(u16 *)0x8008EE4C)
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
#define DAT_80090000 (*(s32 *)0x80090000)
#define DAT_80100c19 (*(u8 *)0x80100C19)
#define DAT_80100c1a (*(u8 *)0x80100C1A)
#define D_80100C18 (*(u8 *)0x80100C18)
#define func_800185F8 ((s32 (*)())0x800185F8)
#define func_800A4900 ((s32 (*)())0x800A4900)
extern s32 rsin();
int func_800A3C5C(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  uVar5 = *(uint *)(param_1 + 0x5c);
  if (*(short *)(param_1 + 0x4e) == 0) {
    puVar1 = (undefined *)0xfffffffe;
    if (DAT_8008ee4c != 0) {
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xfffffffe;
      *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 1;
    }
  }
  else {
    puVar1 = &DAT_80090000;
    if (*(short *)(param_1 + 0x4e) == 1) {
      if (DAT_8008ee4c == 0xb) {
        puVar1 = (undefined *)func_800185F8(param_1);
      }
      else {
        if (DAT_8008ee6b < 2) {
          iVar2 = *(int *)(param_1 + 0x54) + 1;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x54) + (uint)DAT_8008ee6b;
        }
        *(int *)(param_1 + 0x54) = iVar2;
        if ((DAT_80085ff2 == uVar5) && ((byte)(&DAT_800860d1)[uVar5] < 6)) {
          *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xfffffffe;
          func_800A4900(((u8 *)0x80085428),param_1 + 0x18,*(undefined4 *)(param_1 + 0x60),
                        *(undefined4 *)(param_1 + 100));
          iVar4 = uVar5 * 4;
          iVar3 = rsin((uint)(*(int *)(param_1 + 0x54) << 0xc) / 0x78 & 0x7ff);
          iVar2 = iVar3 * (uint)(byte)(&D_80100C18)[iVar4];
          if (iVar2 < 0) {
            iVar2 = iVar2 + 0xfff;
          }
          *(s8 *)(param_1 + 0x38) = (s8)(iVar2 >> 0xc);
          iVar2 = iVar3 * (uint)(byte)(&DAT_80100c19)[iVar4];
          if (iVar2 < 0) {
            iVar2 = iVar2 + 0xfff;
          }
          *(s8 *)(param_1 + 0x39) = (s8)(iVar2 >> 0xc);
          iVar3 = iVar3 * (uint)(byte)(&DAT_80100c1a)[iVar4];
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xfff;
          }
          puVar1 = (undefined *)(iVar3 >> 0xc);
          *(s8 *)(param_1 + 0x3a) = (s8)puVar1;
        }
        else {
          puVar1 = (undefined *)(*(uint *)(param_1 + 0x50) | 1);
          *(undefined **)(param_1 + 0x50) = puVar1;
        }
      }
    }
  }
  return (int)puVar1;
}

/* arg0: 0x80140000 */
/* real-callee: rsin */
/* rand-u16: 0x8008EE4C 1 0,1,11,65535 */
/* rand-u16: 0x8008EE6A 1 0,256,512,1024 */
/* rand-u16: 0x80085FF2 1 0,1,2,3 */
/* rand-u16: 0x800860D0 3 0,1285,1542 */
/* rand-u32-strided: 0x8014005C 1 4 0,1,2,3 */
/* rand-u32-strided: 0x80140054 1 4 0,1,119,120,0xFFFFFFFF,0x80000000 */
/* rand-u16: 0x8014004E 1 1 */
/* rand-u16: 0x8008EE4C 1 1 */
/* rand-u16: 0x80085FF2 1 1 */
/* rand-u16: 0x800860D2 1 0,5 */
/* rand-u32-strided: 0x8014005C 1 4 1 */
