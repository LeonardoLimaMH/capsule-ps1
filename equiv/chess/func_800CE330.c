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
#define DAT_80085a01 (*(u8 *)0x80085A01)
#define DAT_8008ee5a (*(u16 *)0x8008EE5A)
#define DAT_801010c6 (*(u16 *)0x801010C6)
#define DAT_80118b50 (*(s32 *)0x80118B50)
#define DAT_80118b60 (*(s32 *)0x80118B60)
#define DAT_80118b64 (*(s32 *)0x80118B64)
#define D_80069EA4 (*(s32 *)0x80069EA4)
#define D_80069EA8 (*(s32 *)0x80069EA8)
#define D_80118B54 (*(s32 *)0x80118B54)
extern s32 SetPolyFT4();
extern s32 SetPolyG4();
#define func_8002B964 ((s32 (*)())0x8002B964)
int func_800CE330(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;

  uVar12 = (uint)DAT_8008ee5a;
  *(undefined4 *)(param_4 + 4) = param_6;
  *(undefined4 *)(param_4 + 8) = D_80069EA4;
  func_8002B964(param_4,param_6);
  if (*(int *)(param_4 + 8) == 1) {
    if (param_5 == 0) {
      local_38 = *(undefined4 **)(param_4 + 0xa4);
      local_34 = *(undefined4 **)(param_4 + 0xa8);
    }
    else {
      local_38 = *(undefined4 **)(uVar12 * 4 + param_4 + 0xa4);
    }
  }
  else if (param_5 == 0) {
    local_30 = *(undefined4 **)(param_4 + 0xa4);
    local_2c = *(undefined4 **)(param_4 + 0xa8);
  }
  else {
    local_30 = *(undefined4 **)(uVar12 * 4 + param_4 + 0xa4);
  }
  iVar14 = 0;
  uVar1 = *(ushort *)(((u8 *)0x801010C6) + param_3 * 8 + (uint)DAT_80085a01 * 0x34);
  D_80069EA8 = 0;
  if (uVar1 != 0) {
    iVar13 = 0;
    do {
      if (*(int *)(param_4 + 8) == 1) {
        iVar3 = DAT_80118b50;
        iVar2 = D_80118B54;
        if (param_3 == 0) {
          iVar3 = DAT_80118b60;
          iVar2 = DAT_80118b64;
        }
        uVar12 = (uint)*(ushort *)(iVar13 + iVar2 + 10);
        SetPolyFT4(local_38);
        if (uVar12 < 0x62) {
          puVar5 = (undefined1 *)(uVar12 * 0xc + iVar3);
          *(undefined1 *)(local_38 + 3) = *puVar5;
          *(undefined1 *)((int)local_38 + 0xd) = puVar5[1];
          *(undefined1 *)(local_38 + 5) = puVar5[2];
          *(undefined1 *)((int)local_38 + 0x15) = puVar5[3];
          *(undefined1 *)(local_38 + 7) = puVar5[4];
          *(undefined1 *)((int)local_38 + 0x1d) = puVar5[5];
          if (D_80069EA8 == 0) {
            *(undefined1 *)(local_38 + 9) = puVar5[6];
          }
          else {
            *(undefined1 *)(local_38 + 9) = *puVar5;
          }
          if (D_80069EA8 == 0) {
            *(undefined1 *)((int)local_38 + 0x25) = *(undefined1 *)(uVar12 * 0xc + iVar3 + 7);
          }
          else {
            *(undefined1 *)((int)local_38 + 0x25) = *(undefined1 *)(uVar12 * 0xc + iVar3 + 1);
          }
          iVar3 = uVar12 * 0xc + iVar3;
          *(undefined2 *)((int)local_38 + 0x16) = *(undefined2 *)(iVar3 + 8);
          *(undefined2 *)((int)local_38 + 0xe) = *(undefined2 *)(iVar3 + 10);
        }
        else {
          *(undefined2 *)((int)local_38 + 0x16) = 0x1f;
          if (param_3 == 0) {
            uVar12 = (int)uVar12 >> 2;
          }
          *(short *)((int)local_38 + 0xe) = (short)(uVar12 << 6) + 0x6210;
        }
        if (param_5 == 0) {
          puVar9 = local_38;
          puVar11 = local_34;
          do {
            puVar10 = puVar11;
            puVar8 = puVar9;
            uVar4 = puVar8[1];
            uVar6 = puVar8[2];
            uVar7 = puVar8[3];
            *puVar10 = *puVar8;
            puVar10[1] = uVar4;
            puVar10[2] = uVar6;
            puVar10[3] = uVar7;
            puVar9 = puVar8 + 4;
            puVar11 = puVar10 + 4;
          } while (puVar9 != local_38 + 8);
          uVar4 = puVar8[5];
          puVar10[4] = *puVar9;
          puVar10[5] = uVar4;
        }
        local_38 = local_38 + 10;
        if (param_5 == 0) local_34 = local_34 + 10;
      }
      else {
        SetPolyG4(local_30);
        *(undefined1 *)(local_30 + 1) = 0x80;
        *(undefined1 *)((int)local_30 + 5) = 0x80;
        *(undefined1 *)((int)local_30 + 6) = 0x80;
        if (param_5 == 0) {
          puVar9 = local_30;
          puVar11 = local_2c;
          do {
            uVar4 = puVar9[1];
            uVar6 = puVar9[2];
            uVar7 = puVar9[3];
            *puVar11 = *puVar9;
            puVar11[1] = uVar4;
            puVar11[2] = uVar6;
            puVar11[3] = uVar7;
            puVar9 = puVar9 + 4;
            puVar11 = puVar11 + 4;
          } while (puVar9 != local_30 + 8);
          *puVar11 = *puVar9;
        }
        local_30 = local_30 + 9;
        if (param_5 == 0) local_2c = local_2c + 9;
      }
      iVar14 = iVar14 + 1;
      iVar13 = iVar13 + 0xc;
    } while (iVar14 < (int)(uint)uVar1);
  }
  *(int *)(param_4 + 0xc) = iVar14;
  return iVar14;
}

/* arg3: 0x80140000 */
/* arg5: small */
/* real-callee: func_8002B964 */
/* real-callee: SetPolyFT4 */
/* real-callee: SetPolyG4 */
/* rand-u16: 0x80078C20 1 0,1 */
/* rand-u16: 0x8008EE5A 1 0,1 */
/* rand-u16: 0x80085A00 1 0,256,768 */
/* rand-u32-strided: 0x80069EA4 1 4 0,1,2,5 */
/* rand-u32-strided: 0x80118B50 1 4 0x80160000 */
/* rand-u32-strided: 0x80118B54 1 4 0x80161000 */
/* rand-u32-strided: 0x80118B60 1 4 0x80162000 */
/* rand-u32-strided: 0x80118B64 1 4 0x80163000 */
/* rand-u16: 0x8016100A 1 0,1,97,98,99,65535 */
/* rand-u16: 0x80161016 1 0,1,97,98,99,65535 */
/* rand-u16: 0x80161022 1 0,1,97,98,99,65535 */
/* rand-u16: 0x8016300A 1 0,1,97,98,99,65535 */
/* rand-u16: 0x80163016 1 0,1,97,98,99,65535 */
/* rand-u16: 0x80163022 1 0,1,97,98,99,65535 */
/* rand-mem: 0x80160000 1200 256 */
/* rand-mem: 0x80162000 1200 256 */
/* rand-u32-strided: 0x80069ec8 16 28 0x80150000 */
/* rand-u32-strided: 0x80069ecc 16 28 0x80151000 */
/* rand-u32-strided: 0x8006a1a0 16 28 0x80150000 */
/* rand-u32-strided: 0x8006a1a4 16 28 0x80151000 */
/* rand-u16: 0x801010c6 1 0,1,3 */
/* rand-u16: 0x801010ce 1 0,1,3 */
/* rand-u16: 0x801010d6 1 0,1,3 */
/* rand-u16: 0x801010fa 1 0,1,3 */
/* rand-u16: 0x80101102 1 0,1,3 */
/* rand-u16: 0x8010110a 1 0,1,3 */
/* rand-u16: 0x8010112e 1 0,1,3 */
/* rand-u16: 0x80101136 1 0,1,3 */
/* rand-u16: 0x8010113e 1 0,1,3 */
/* rand-u16: 0x80101162 1 0,1,3 */
/* rand-u16: 0x8010116a 1 0,1,3 */
/* rand-u16: 0x80101172 1 0,1,3 */
/* arg2: 0x00000000 */
/* arg4: 0x00000000 */
