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

#include "ghidra.h"
#define DAT_80090eb4 (*(s32 *)0x80090EB4)
#define DAT_80097abc (*(s8 *)0x80097ABC)
#define DAT_80097abd (*(s8 *)0x80097ABD)
#define DAT_80097abe (*(s8 *)0x80097ABE)
#define D_80069EA0 (*(u32 *)0x80069EA0)
#define D_80069EA4 (*(u32 *)0x80069EA4)
#define D_80097A80 (*(s32 *)0x80097A80)
#define D_80097AB8 (*(s32 *)0x80097AB8)
#define uRam80097ab0 (*(u32 *)0x80097AB0)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_8001602C ((s32 (*)())0x8001602C)
#define func_8002858C ((s32 (*)())0x8002858C)
#define func_8002CBDC ((s32 (*)())0x8002CBDC)
#define func_800A2E20 ((s32 (*)())0x800A2E20)
#define func_800CB540 ((s32 (*)())0x800CB540)
#define func_800CB588 ((s32 (*)())0x800CB588)
#define func_800CD188 ((s32 (*)())0x800CD188)
void func_800A3080(int param_1)

{
  union { u64 align; u8 bytes[0x58]; } recovered_local_frame;
#define local_58 (*(short volatile (*)[2])(recovered_local_frame.bytes + 0x0))
#define local_54 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x4))
#define local_50 (*(short volatile (*)[2])(recovered_local_frame.bytes + 0x8))
#define local_4c (*(undefined4 volatile (*)[11])(recovered_local_frame.bytes + 0xC))
#define local_20 (*(undefined4 volatile *)(recovered_local_frame.bytes + 0x38))
#define local_1c (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x3C))
#define local_1b (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x3D))
#define local_1a (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x3E))

  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int iVar12;









  puVar7 = &D_80097A80;
  psVar2 = local_58;
  do {
    psVar9 = psVar2;
    puVar8 = puVar7;
    uVar4 = puVar8[1];
    uVar5 = puVar8[2];
    uVar6 = puVar8[3];
    *(undefined4 *)psVar9 = *puVar8;
    *(undefined4 *)(psVar9 + 2) = uVar4;
    *(undefined4 *)(psVar9 + 4) = uVar5;
    *(undefined4 *)(psVar9 + 6) = uVar6;
    puVar7 = puVar8 + 4;
    psVar2 = psVar9 + 8;
  } while (puVar8 + 4 != (undefined4 *)0x80097ab0);
  uVar4 = puVar8[5];
  *(undefined4 *)(psVar9 + 8) = uRam80097ab0;
  *(undefined4 *)(psVar9 + 10) = uVar4;
  local_20 = D_80097AB8;
  local_1c = DAT_80097abc;
  local_1b = DAT_80097abd;
  local_1a = DAT_80097abe;
  iVar12 = 0;
  *(undefined1 *)(param_1 + 0xd77) = 0;
  iVar10 = 0;
  iVar11 = 0;
  do {
    func_800CD188(iVar10,iVar12);
    iVar12 = iVar12 + (uint)*(byte *)((int)&local_20 + iVar10);
    iVar3 = func_80015B3C(func_800A2E20,func_800CB540,1);
    func_8001602C(iVar3);
    *(int *)(iVar3 + 0x5c) = iVar10;
    D_80069EA4 = 2;
    D_80069EA0 = 0;
    *(undefined **)(iVar3 + 0x18) = ((u8 *)0x80090EB4) + iVar11;
    func_8002CBDC(iVar3);
    *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x10) = 0x2aa;
    *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x14) = 0x2aa;
    *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x18) = 0x2aa;
    func_8002858C(0x13,iVar10,*(undefined4 *)(iVar3 + 0x18),0,iVar10 + 0x13);
    func_800CB588(iVar3,iVar10);
    puVar7 = *(undefined4 **)(iVar3 + 0x14);
    *(undefined2 *)(puVar7 + 0x3b) = 0x28;
    *puVar7 = 0x20;
    puVar7[2] = 0x360;
    *(undefined2 *)(puVar7 + 8) = 0xf40;
    *(undefined2 *)((int)puVar7 + 0x22) = 0xec0;
    *(undefined2 *)(puVar7 + 9) = 0xfc0;
    puVar7[1] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[0xc] = (int)local_58[iVar10 * 4] + local_58[iVar10 * 4 + 1] * -0x28;
    puVar7[0xd] = local_50[(iVar10 * 2 + -1) * 2] * -0x28;
    puVar7[0xe] = local_50[iVar10 * 4 + -1] * -0x28;
    puVar7[0x10] = (int)local_58[iVar10 * 4 + 1];
    puVar7[0x11] = (int)local_50[(iVar10 * 2 + -1) * 2];
    sVar1 = local_50[iVar10 * 4 + -1];
    *(undefined2 *)(puVar7 + 0x14) = 0x1000;
    *(undefined2 *)((int)puVar7 + 0x52) = 0x1000;
    *(undefined2 *)(puVar7 + 0x15) = 0;
    *(undefined2 *)(puVar7 + 0x16) = 0x66;
    puVar7[0x12] = (int)sVar1;
    if (iVar10 < 3) {
      *(undefined2 *)((int)puVar7 + 0x5a) = 0x66;
    }
    else if (iVar10 < 4) {
      *(undefined2 *)((int)puVar7 + 0x52) = 0;
      *(undefined2 *)((int)puVar7 + 0x5a) = 0;
    }
    else {
      *(undefined2 *)((int)puVar7 + 0x5a) = 0xff9a;
    }
    iVar10 = iVar10 + 1;
    *(undefined1 *)((int)puVar7 + 0x62) = 0x98;
    *(undefined1 *)((int)puVar7 + 0x61) = 0x98;
    *(undefined1 *)(puVar7 + 0x18) = 0x98;
    *(undefined2 *)(puVar7 + 0x34) = 0xd70;
    *(undefined2 *)((int)puVar7 + 0xca) = 0xd70;
    *(undefined2 *)(puVar7 + 0x31) = 0xd70;
    *(undefined2 *)(puVar7 + 0x39) = 0x540;
    *(undefined2 *)((int)puVar7 + 0xe6) = 0x9c0;
    *(undefined2 *)(puVar7 + 0x3a) = 0xac0;
    iVar11 = iVar11 + 0xbc;
  } while (iVar10 < 7);
  return;
}

#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_20
#undef local_1c
#undef local_1b
#undef local_1a
