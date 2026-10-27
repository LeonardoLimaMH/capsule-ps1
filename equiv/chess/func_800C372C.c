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
#define D_80069EA0 (*(u32 *)0x80069EA0)
#define D_80069EA4 (*(u32 *)0x80069EA4)
#define D_8009885C (*(s32 *)0x8009885C)
#define D_80101000 (*(s16 *)0x80101000)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_8001602C ((s32 (*)())0x8001602C)
#define func_8002858C ((s32 (*)())0x8002858C)
#define func_8002CBDC ((s32 (*)())0x8002CBDC)
#define func_800C2EFC ((s32 (*)())0x800C2EFC)
#define func_800CB540 ((s32 (*)())0x800CB540)
#define func_800CB588 ((s32 (*)())0x800CB588)
#define func_800CD188 ((s32 (*)())0x800CD188)
void func_800C372C(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  undefined4 local_28 [2];

  local_28[0] = D_8009885C;
  iVar8 = 0;
  iVar5 = 0;
  psVar6 = &D_80101000;
  iVar7 = 0;
  do {
    func_800CD188(iVar5,iVar8);
    iVar8 = iVar8 + (uint)*(byte *)((int)local_28 + iVar5);
    iVar3 = func_80015B3C(func_800C2EFC,func_800CB540,1);
    func_8001602C(iVar3);
    *(int *)(iVar3 + 0x5c) = iVar5;
    D_80069EA4 = 2;
    D_80069EA0 = 0;
    *(undefined **)(iVar3 + 0x18) = ((u8 *)0x80090EB4) + iVar7;
    func_8002CBDC(iVar3);
    *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x10) = 0x2aa;
    *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x14) = 0x2aa;
    *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x18) = 0x2aa;
    func_8002858C(0x13,iVar5 + 10,*(undefined4 *)(iVar3 + 0x18),0,iVar5 + 0x13);
    func_800CB588(iVar3,iVar5);
    piVar4 = *(int **)(iVar3 + 0x14);
    *(undefined2 *)(piVar4 + 0x3b) = 0x30;
    *(undefined2 *)(piVar4 + 8) = 0x1000;
    *(undefined2 *)((int)piVar4 + 0x22) = 0x1080;
    *(undefined2 *)(piVar4 + 9) = 0;
    *(undefined2 *)(piVar4 + 10) = 0x55;
    *piVar4 = (int)*psVar6 + psVar6[1] * -0x30;
    iVar7 = iVar7 + 0xbc;
    piVar4[1] = psVar6[2] * -0x30;
    sVar1 = psVar6[3];
    *(undefined1 *)((int)piVar4 + 0x62) = 0xc0;
    *(undefined1 *)((int)piVar4 + 0x61) = 0xc0;
    *(undefined1 *)(piVar4 + 0x18) = 0xc0;
    *(undefined2 *)(piVar4 + 0x31) = 0xff0;
    *(undefined2 *)((int)piVar4 + 0xca) = 0xff0;
    *(undefined2 *)(piVar4 + 0x34) = 0xff0;
    piVar4[2] = sVar1 * -0x30 + 800;
    sVar2 = (short)iVar5;
    piVar4[4] = (int)psVar6[1];
    iVar5 = iVar5 + 1;
    piVar4[5] = (int)psVar6[2];
    sVar1 = psVar6[3];
    psVar6 = psVar6 + 4;
    *(short *)((int)piVar4 + 0x22) = *(short *)((int)piVar4 + 0x22) + sVar2 * 0x40;
    *(undefined2 *)(piVar4 + 0x39) = 0x540;
    *(undefined2 *)((int)piVar4 + 0xe6) = 0x9c0;
    *(undefined2 *)(piVar4 + 0x3a) = 0xac0;
    piVar4[6] = (int)sVar1;
  } while (iVar5 < 4);
  return;
}
