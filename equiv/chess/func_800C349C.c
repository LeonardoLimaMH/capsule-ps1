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
#define DAT_80098859 (*(s8 *)0x80098859)
#define DAT_8009885a (*(s8 *)0x8009885A)
#define DAT_80100fea (*(s16 *)0x80100FEA)
#define DAT_80100fec (*(s16 *)0x80100FEC)
#define DAT_80100fee (*(s16 *)0x80100FEE)
#define D_80069EA0 (*(u32 *)0x80069EA0)
#define D_80069EA4 (*(u32 *)0x80069EA4)
#define D_80098858 (*(s8 *)0x80098858)
#define D_80100FE8 (*(s16 *)0x80100FE8)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_8001602C ((s32 (*)())0x8001602C)
#define func_8002858C ((s32 (*)())0x8002858C)
#define func_8002CBDC ((s32 (*)())0x8002CBDC)
#define func_800C2AEC ((s32 (*)())0x800C2AEC)
#define func_800CB540 ((s32 (*)())0x800CB540)
#define func_800CB588 ((s32 (*)())0x800CB588)
#define func_800CD188 ((s32 (*)())0x800CD188)
void func_800C349C(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte local_30 [8];

  local_30[0] = D_80098858;
  local_30[1] = DAT_80098859;
  local_30[2] = DAT_8009885a;
  iVar6 = 0;
  iVar4 = 0;
  iVar5 = 0;
  do {
    func_800CD188(iVar4,iVar6);
    iVar6 = iVar6 + (uint)local_30[iVar4];
    iVar2 = func_80015B3C(func_800C2AEC,func_800CB540,1);
    func_8001602C(iVar2);
    *(undefined4 *)(iVar2 + 0x60) = 1;
    *(int *)(iVar2 + 0x5c) = iVar4;
    D_80069EA0 = 0;
    D_80069EA4 = 2;
    *(undefined **)(iVar2 + 0x18) = ((u8 *)0x80090EB4) + iVar5;
    func_8002CBDC(iVar2);
    *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x10) = 0x400;
    *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x14) = 0x400;
    *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x18) = 0x400;
    func_8002858C(0x13,iVar4 + 7,*(undefined4 *)(iVar2 + 0x18),0,iVar4 + 0x13);
    func_800CB588(iVar2,iVar4);
    puVar3 = *(undefined4 **)(iVar2 + 0x14);
    *(undefined2 *)(puVar3 + 0x3b) = 0x30;
    puVar3[2] = 0x420;
    *(undefined2 *)((int)puVar3 + 0x22) = 0xf60;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined2 *)(puVar3 + 8) = 0x400;
    *(undefined2 *)(puVar3 + 9) = 0;
    puVar3[0xc] = (int)(short)(&D_80100FE8)[iVar4 * 4] + (short)(&DAT_80100fea)[iVar4 * 4] * -0x30;
    puVar3[0xd] = (short)(&DAT_80100fec)[iVar4 * 4] * -0x30;
    puVar3[0xe] = (short)(&DAT_80100fee)[iVar4 * 4] * -0x30;
    puVar3[0x10] = (int)(short)(&DAT_80100fea)[iVar4 * 4];
    puVar3[0x11] = (int)(short)(&DAT_80100fec)[iVar4 * 4];
    sVar1 = (&DAT_80100fee)[iVar4 * 4];
    *(undefined2 *)(puVar3 + 0x14) = 0x1000;
    *(undefined2 *)((int)puVar3 + 0x52) = 0x1000;
    *(undefined2 *)(puVar3 + 0x15) = 0;
    puVar3[0x12] = (int)sVar1;
    if (iVar4 == 0) {
      *(undefined2 *)(puVar3 + 0x16) = 0x55;
      *(undefined2 *)((int)puVar3 + 0x5a) = 0x55;
    }
    else if (iVar4 == 2) {
      *(undefined2 *)(puVar3 + 0x16) = 0x55;
      *(undefined2 *)((int)puVar3 + 0x5a) = 0xffab;
    }
    else {
      *(undefined2 *)(puVar3 + 0x16) = 0x55;
      *(undefined2 *)((int)puVar3 + 0x52) = 0x1000;
    }
    iVar4 = iVar4 + 1;
    *(undefined1 *)((int)puVar3 + 0x62) = 0x70;
    *(undefined1 *)((int)puVar3 + 0x61) = 0x70;
    *(undefined1 *)(puVar3 + 0x18) = 0x70;
    *(undefined2 *)(puVar3 + 0x34) = 0xaf0;
    *(undefined2 *)((int)puVar3 + 0xca) = 0xaf0;
    *(undefined2 *)(puVar3 + 0x31) = 0xaf0;
    *(undefined2 *)(puVar3 + 0x39) = 0x540;
    *(undefined2 *)((int)puVar3 + 0xe6) = 0x9c0;
    *(undefined2 *)(puVar3 + 0x3a) = 0xac0;
    iVar5 = iVar5 + 0xbc;
  } while (iVar4 < 3);
  return;
}
