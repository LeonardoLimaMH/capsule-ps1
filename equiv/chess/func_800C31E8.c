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
#include "ghidra.h"
#define DAT_80090eb4 (*(s32 *)0x80090EB4)
#define DAT_80098854 (*(s8 *)0x80098854)
#define DAT_80100fc2 (*(s16 *)0x80100FC2)
#define DAT_80100fc4 (*(s16 *)0x80100FC4)
#define DAT_80100fc6 (*(s16 *)0x80100FC6)
#define D_80069EA0 (*(u32 *)0x80069EA0)
#define D_80069EA4 (*(u32 *)0x80069EA4)
#define D_80100FC0 (*(s16 *)0x80100FC0)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_8001602C ((s32 (*)())0x8001602C)
#define func_8002858C ((s32 (*)())0x8002858C)
#define func_8002CBDC ((s32 (*)())0x8002CBDC)
#define func_800C2AEC ((s32 (*)())0x800C2AEC)
#define func_800CB540 ((s32 (*)())0x800CB540)
#define func_800CB588 ((s32 (*)())0x800CB588)
#define func_800CD188 ((s32 (*)())0x800CD188)
void func_800C31E8(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte local_30 [8];

  local_30[0] = 0x1e;
  local_30[1] = 0x1c;
  local_30[2] = 0x22;
  local_30[3] = 6;
  local_30[4] = DAT_80098854;
  iVar7 = 0;
  iVar5 = 0;
  iVar6 = 0;
  do {
    func_800CD188(iVar5,iVar7);
    iVar7 = iVar7 + (uint)local_30[iVar5];
    iVar2 = func_80015B3C(func_800C2AEC,func_800CB540,1);
    func_8001602C(iVar2);
    *(int *)(iVar2 + 0x5c) = iVar5;
    *(undefined4 *)(iVar2 + 0x60) = 0;
    D_80069EA4 = 2;
    D_80069EA0 = 0;
    *(undefined **)(iVar2 + 0x18) = ((u8 *)0x80090EB4) + iVar6;
    func_8002CBDC(iVar2);
    *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x10) = 0x2aa;
    *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x14) = 0x2aa;
    *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x18) = 0x2aa;
    if (iVar5 < 2) {
      iVar3 = param_2 * 2 + iVar5 + 0xe;
    }
    else {
      iVar3 = iVar5 + 5;
    }
    func_8002858C(0x13,iVar3,*(undefined4 *)(iVar2 + 0x18),0,iVar5 + 0x13);
    func_800CB588(iVar2,iVar5);
    puVar4 = *(undefined4 **)(iVar2 + 0x14);
    *(undefined2 *)(puVar4 + 0x3b) = 0x30;
    puVar4[2] = 0x390;
    *(undefined2 *)(puVar4 + 8) = 0x4a0;
    *(undefined2 *)((int)puVar4 + 0x22) = 0xf60;
    *(undefined2 *)(puVar4 + 9) = 0x20;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[0xc] = (int)(short)(&D_80100FC0)[iVar5 * 4] + (short)(&DAT_80100fc2)[iVar5 * 4] * -0x30;
    puVar4[0xd] = (short)(&DAT_80100fc4)[iVar5 * 4] * -0x30;
    puVar4[0xe] = (short)(&DAT_80100fc6)[iVar5 * 4] * -0x30;
    puVar4[0x10] = (int)(short)(&DAT_80100fc2)[iVar5 * 4];
    puVar4[0x11] = (int)(short)(&DAT_80100fc4)[iVar5 * 4];
    sVar1 = (&DAT_80100fc6)[iVar5 * 4];
    *(undefined2 *)(puVar4 + 0x14) = 0x1000;
    *(undefined2 *)((int)puVar4 + 0x52) = 0x1000;
    *(undefined2 *)(puVar4 + 0x15) = 0;
    puVar4[0x12] = (int)sVar1;
    if (iVar5 < 2) {
      *(undefined2 *)(puVar4 + 0x16) = 0x55;
      *(undefined2 *)((int)puVar4 + 0x5a) = 0x55;
    }
    else if (iVar5 < 3) {
      *(undefined2 *)(puVar4 + 0x16) = 0x55;
      *(undefined2 *)((int)puVar4 + 0x52) = 0x1000;
    }
    else {
      *(undefined2 *)(puVar4 + 0x16) = 0x55;
      *(undefined2 *)((int)puVar4 + 0x5a) = 0xffab;
    }
    iVar5 = iVar5 + 1;
    *(undefined1 *)((int)puVar4 + 0x62) = 0x70;
    *(undefined1 *)((int)puVar4 + 0x61) = 0x70;
    *(undefined1 *)(puVar4 + 0x18) = 0x70;
    *(undefined2 *)(puVar4 + 0x34) = 0xaf0;
    *(undefined2 *)((int)puVar4 + 0xca) = 0xaf0;
    *(undefined2 *)(puVar4 + 0x31) = 0xaf0;
    *(undefined2 *)(puVar4 + 0x39) = 0x540;
    *(undefined2 *)((int)puVar4 + 0xe6) = 0x9c0;
    *(undefined2 *)(puVar4 + 0x3a) = 0xac0;
    iVar6 = iVar6 + 0xbc;
  } while (iVar5 < 5);
  return;
}
