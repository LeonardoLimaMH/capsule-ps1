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
#include "ghidra.h"
#define DAT_80069bbc (*(s16 *)0x80069BBC)
#define DAT_80069bbe (*(s16 *)0x80069BBE)
#define DAT_800859f8 (*(s32 *)0x800859F8)
#define DAT_80085ff2 (*(u8 *)0x80085FF2)
#define DAT_80085ffd (*(u8 *)0x80085FFD)
#define DAT_8008610f (*(u8 *)0x8008610F)
#define DAT_8008ee4c (*(u16 *)0x8008EE4C)
#define DAT_80100c19 (*(u8 *)0x80100C19)
#define DAT_80100c1a (*(u8 *)0x80100C1A)
#define D_80069AD4 (*(s32 *)0x80069AD4)
#define D_80069BB4 (*(s32 *)0x80069BB4)
#define D_80100C18 (*(u8 *)0x80100C18)
#define func_800185F8 ((s32 (*)())0x800185F8)
#define func_800B3558 ((s32 (*)())0x800B3558)
#define func_800CB8A4 ((s32 (*)())0x800CB8A4)
#define func_800CB960 ((s32 (*)())0x800CB960)
void func_800B7988(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;

  iVar15 = 10;
  puVar14 = ((u8 *)0x800859F8);
  uVar3 = *(ushort *)(param_1 + 0x4e);
  iVar11 = *(int *)(param_1 + 100);
  if (uVar3 == 1) {
LAB_800b7a34:
    puVar12 = ((u32 *)0x80069AD4);
    uVar4 = func_800CB8A4((int)DAT_80069bbc,0x400,*(undefined4 *)(param_1 + 0x54),0x50,1);
    iVar13 = 0;
    *(undefined2 *)(*(int *)(param_1 + 0x14) + 0x20) = uVar4;
    uVar4 = func_800CB8A4((int)DAT_80069bbe,((byte)(&DAT_80085ffd)[DAT_80085ff2] < 4 ^ 1) << 0xc,
                          *(undefined4 *)(param_1 + 0x54),0x50,1);
    *(undefined2 *)(*(int *)(param_1 + 0x14) + 0x22) = uVar4;
    uVar5 = func_800CB960(D_80069BB4,0x1b0,*(undefined4 *)(param_1 + 0x54),0x50,1);
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 8) = uVar5;
    do {
      puVar1 = (undefined4 *)(puVar14 + 0x77c);
      puVar14 = puVar14 + 4;
      puVar2 = puVar12 + 0x11;
      puVar12 = puVar12 + 1;
      uVar5 = func_800CB960(*puVar2,*puVar1,*(undefined4 *)(param_1 + 0x54),0x50,1);
      iVar6 = iVar13 * 4;
      iVar13 = iVar13 + 1;
      *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x14) + 0x78) = uVar5;
    } while (iVar13 < 3);
    uVar7 = *(uint *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x54) = uVar7 + 1;
    sVar10 = *(short *)(param_1 + 0x1c) + (ushort)(uVar7 % 5 == 0);
    sVar9 = *(short *)(param_1 + 0x2c) - (ushort)(uVar7 % 5 == 0);
    sVar8 = *(short *)(param_1 + 0x18) - (ushort)(uVar7 % 10 == 0);
    *(short *)(param_1 + 0x24) = sVar10;
    *(short *)(param_1 + 0x1c) = sVar10;
    *(short *)(param_1 + 0x34) = sVar9;
    *(short *)(param_1 + 0x2c) = sVar9;
    *(short *)(param_1 + 0x28) = sVar8;
    *(short *)(param_1 + 0x18) = sVar8;
    sVar8 = *(short *)(param_1 + 0x20) + (ushort)(uVar7 % 10 == 0);
    *(short *)(param_1 + 0x30) = sVar8;
    *(short *)(param_1 + 0x20) = sVar8;
    if (uVar7 + 1 < 0x51) goto LAB_800b7c54;
    DAT_8008610f = 1;
    sVar8 = *(short *)(param_1 + 0x4e);
  }
  else {
    if (uVar3 < 2) {
      if (uVar3 != 0) goto LAB_800b7c54;
      func_800B3558(((u8 *)0x800859F8),*(int *)(param_1+0x5c),*(int *)(param_1+0x60));
      *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 1;
      goto LAB_800b7a34;
    }
    if (uVar3 != 2) {
      if (uVar3 == 3) {
        uVar7 = *(int *)(param_1 + 0x54) + 1;
        *(uint *)(param_1 + 0x54) = uVar7;
        if (uVar7 < 0xb) {
          iVar15 = 10 - uVar7;
        }
        else {
          DAT_8008610f = 2;
          func_800185F8(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
        }
      }
      goto LAB_800b7c54;
    }
    if (DAT_8008ee4c < 4) goto LAB_800b7c54;
    sVar8 = *(short *)(param_1 + 0x4e);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  *(short *)(param_1 + 0x4e) = sVar8 + 1;
LAB_800b7c54:
  if ((iVar11 < 7) && (2 < iVar11)) {
    *(s8 *)(param_1 + 0x38) =
         (s8)((int)((uint)(byte)(&D_80100C18)[(uint)DAT_80085ff2 * 4] * iVar15) / 10);
    *(s8 *)(param_1 + 0x39) =
         (s8)((int)((uint)(byte)(&DAT_80100c19)[(uint)DAT_80085ff2 * 4] * iVar15) / 10);
    *(s8 *)(param_1 + 0x3a) =
         (s8)((int)((uint)(byte)(&DAT_80100c1a)[(uint)DAT_80085ff2 * 4] * iVar15) / 10);
  }
  return;
}
