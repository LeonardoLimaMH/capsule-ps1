#include "common.h"
/* real-callee: func_800B1260 */
/* arg1: small */
/* rand-u16: 0x8006AF80 1 0,1,2,3,4,5 */
/* rand-u16: 0x800EF2D8 1 0,1,2,3,4,5 */
/* rand-u32-strided: 0x800EEB70 1 4 0,1 */
/* rand-u16: 0x80150000 1 0x0060,0x0160,0x0260,0x0360,0x0460,0x0560 */
/* rand-u16: 0x80101204 1 65535,0,1,2 */
/* rand-u16: 0x80101242 4 0,6,9 */
/* rand-u16: 0x800916A2 1 0,1,2,3,4,5 */
/* rand-u16: 0x800916DA 1 0,35,36,75,76,110,111,65535 */
/* rand-u16: 0x800916F4 1 0,39,40,79,80,119,120,159,160,199,200,65535 */
/* rand-u32-strided: 0x801011F4 1 4 0x80150000 */
/* rand-u32-strided: 0x801011F0 1 4 0,0xA0002,1 */
/* rand-u32-strided: 0x80101214 6 4 0x80160000 */
/* rand-u16: 0x801019A0 1 65535,0,1,2 */
/* rand-u16: 0x801019DE 4 0,6,9 */
/* rand-u16: 0x8009184A 1 0,1,2,3,4,5 */
/* rand-u16: 0x80091882 1 0,35,36,75,76,110,111,65535 */
/* rand-u16: 0x8009189C 1 0,39,40,79,80,119,120,159,160,199,200,65535 */
/* rand-u32-strided: 0x80101990 1 4 0x80150000 */
/* rand-u32-strided: 0x8010198C 1 4 0,0xA0002,1 */
/* rand-u32-strided: 0x801019B0 6 4 0x80160000 */
/* rand-u16: 0x8010213C 1 65535,0,1,2 */
/* rand-u16: 0x8010217A 4 0,6,9 */
/* rand-u16: 0x800919F2 1 0,1,2,3,4,5 */
/* rand-u16: 0x80091A2A 1 0,35,36,75,76,110,111,65535 */
/* rand-u16: 0x80091A44 1 0,39,40,79,80,119,120,159,160,199,200,65535 */
/* rand-u32-strided: 0x8010212C 1 4 0x80150000 */
/* rand-u32-strided: 0x80102128 1 4 0,0xA0002,1 */
/* rand-u32-strided: 0x8010214C 6 4 0x80160000 */
/* rand-u16: 0x801028D8 1 65535,0,1,2 */
/* rand-u16: 0x80102916 4 0,6,9 */
/* rand-u16: 0x80091B9A 1 0,1,2,3,4,5 */
/* rand-u16: 0x80091BD2 1 0,35,36,75,76,110,111,65535 */
/* rand-u16: 0x80091BEC 1 0,39,40,79,80,119,120,159,160,199,200,65535 */
/* rand-u32-strided: 0x801028C8 1 4 0x80150000 */
/* rand-u32-strided: 0x801028C4 1 4 0,0xA0002,1 */
/* rand-u32-strided: 0x801028E8 6 4 0x80160000 */
/* rand-u16: 0x80103074 1 65535,0,1,2 */
/* rand-u16: 0x801030B2 4 0,6,9 */
/* rand-u16: 0x80091D42 1 0,1,2,3,4,5 */
/* rand-u16: 0x80091D7A 1 0,35,36,75,76,110,111,65535 */
/* rand-u16: 0x80091D94 1 0,39,40,79,80,119,120,159,160,199,200,65535 */
/* rand-u32-strided: 0x80103064 1 4 0x80150000 */
/* rand-u32-strided: 0x80103060 1 4 0,0xA0002,1 */
/* rand-u32-strided: 0x80103084 6 4 0x80160000 */
/* rand-u16: 0x80103810 1 65535,0,1,2 */
/* rand-u16: 0x8010384E 4 0,6,9 */
/* rand-u16: 0x80091EEA 1 0,1,2,3,4,5 */
/* rand-u16: 0x80091F22 1 0,35,36,75,76,110,111,65535 */
/* rand-u16: 0x80091F3C 1 0,39,40,79,80,119,120,159,160,199,200,65535 */
/* rand-u32-strided: 0x80103800 1 4 0x80150000 */
/* rand-u32-strided: 0x801037FC 1 4 0,0xA0002,1 */
/* rand-u32-strided: 0x80103820 6 4 0x80160000 */
/* rand-u16: 0x80150002 1 25424 */
/* rand-u16: 0x80150004 1 29800 */
/* rand-u16: 0x80150006 1 13136 */
#include "ghidra.h"
#define DAT_800916da (*(s16 *)0x800916DA)
#define DAT_800916f4 (*(s16 *)0x800916F4)
#define DAT_801011f0 (*(s32 *)0x801011F0)
#define DAT_801011f4 (*(s32 *)0x801011F4)
#define DAT_80101204 (*(u16 *)0x80101204)
#define DAT_8010129e (*(s16 *)0x8010129E)
#define D_80100F38 (*(s32 *)0x80100F38)
#define func_800B1260 ((s32 (*)())0x800B1260)
int func_800C2E04(undefined4 param_1,undefined4 param_2)
{
  s8 cVar1;
  short sVar2;
  ushort uVar3;
  s8 *pcVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uVar6 = func_800B1260(param_2);
  uVar10 = uVar6 & 0xffff;
  iVar7 = uVar10 * 0x79c;
  sVar2 = *(short *)(((u8 *)0x80101204) + iVar7);
  *(ushort *)(((u8 *)0x80101204) + iVar7) = sVar2 + 1U;
  *(undefined2 *)(((u8 *)0x80100F38) + ((int)((uint)(ushort)(sVar2 + 1U) << 0x10) >> 0xf) + iVar7 + 0x2ce)
       = 1;
  *(undefined4 *)(((u8 *)0x80100F38) + *(short *)(((u8 *)0x80101204) + iVar7) * 4 + iVar7 + 0x2dc) =
       (&DAT_801011f4)[uVar10 * 0x1e7];
  iVar9 = (&DAT_801011f4)[uVar10 * 0x1e7];
  sVar2 = *(short *)(((u8 *)0x80101204) + iVar7);
  (&DAT_801011f4)[uVar10 * 0x1e7] = iVar9 + 1;
  *(ushort *)(((u8 *)0x80100F38) + sVar2 * 2 + iVar7 + 0x318) = (ushort)*(byte *)(iVar9 + 1);
  sVar2 = *(short *)(((u8 *)0x80101204) + iVar7);
  (&DAT_801011f4)[uVar10 * 0x1e7] = (&DAT_801011f4)[uVar10 * 0x1e7] + 1;
  if ((*(short *)(((u8 *)0x80100F38) + sVar2 * 2 + iVar7 + 0x30a) == 6) &&
     (*(short *)(((u8 *)0x801011f0) + iVar7) == 0)) {
    iVar9 = (int)(short)(&DAT_800916da)[uVar10 * 0xd4];
    if (0x23 < iVar9) {
      if (iVar9 - 0x24U < 0x28) {
        *(undefined2 *)(((u8 *)0x8010129e) + iVar7) = 1;
      }
      else {
        uVar5 = 2;
        if (0x22 < iVar9 - 0x4cU) {
          uVar5 = 3;
        }
        *(undefined2 *)(((u8 *)0x8010129e) + iVar7) = uVar5;
      }
      goto code_r0x800c2ffc;
    }
  }
  else if ((*(short *)(((u8 *)0x80100F38) + *(short *)(((u8 *)0x80101204) + iVar7) * 2 + iVar7 + 0x30a) == 9) &&
          (*(int *)(((u8 *)0x801011f0) + iVar7) == 0xa0002)) {
    iVar9 = (int)*(short *)(((u8 *)0x800916f4) + (uVar6 & 0xffff) * 0x1a8);
    if (0x27 < iVar9) {
      uVar5 = 1;
      if ((((0x27 < iVar9 - 0x28U) && (uVar5 = 2, 0x27 < iVar9 - 0x50U)) &&
          (uVar5 = 3, 0x27 < iVar9 - 0x78U)) && (uVar5 = 4, 0x27 < iVar9 - 0xa0U)) {
        uVar5 = 5;
      }
      *(undefined2 *)(((u8 *)0x8010129e) + iVar7) = uVar5;
      goto code_r0x800c2ffc;
    }
  }
  *(undefined2 *)(((u8 *)0x8010129e) + iVar7) = 0;
code_r0x800c2ffc:
  uVar3 = *(ushort *)(((u8 *)0x80101204) + iVar7);
  iVar9 = 0;
  if (0 < *(short *)(((u8 *)0x80100F38) + *(short *)(((u8 *)0x80101204) + iVar7) * 2 + iVar7 + 0x318)) {
    do {
      uVar6 = (uint)*(byte *)(&DAT_801011f4)[uVar10 * 0x1e7];
      if (uVar6 - 0x50 < 0x14) {
        if (iVar9 == *(short *)(((u8 *)0x8010129e) + iVar7)) {
          *(undefined2 *)(((u8 *)0x80100F38) + ((int)((uint)uVar3 << 0x10) >> 0xf) + iVar7 + 0x2d0) = 1;
          *(undefined4 *)(((u8 *)0x80100F38) + *(short *)(((u8 *)0x80101204) + iVar7) * 4 + iVar7 + 0x2e0) =
               (&DAT_801011f4)[uVar10 * 0x1e7];
LAB_800c314c:
          *(undefined4 *)(((u8 *)0x80100F38) + *(short *)(((u8 *)0x80101204) + iVar7) * 4 + iVar7 + 0x2f8) =
               (&DAT_801011f4)[uVar10 * 0x1e7];
        }
LAB_800c3160:
        iVar9 = iVar9 + 1;
        (&DAT_801011f4)[uVar10 * 0x1e7] = (&DAT_801011f4)[uVar10 * 0x1e7] + 1;
      }
      else {
        if (uVar6 - 0x68 < 0xd) {
          if (iVar9 == *(short *)(((u8 *)0x8010129e) + iVar7)) {
            *(undefined2 *)(((u8 *)0x80100F38) + *(short *)(((u8 *)0x80101204) + iVar7) * 2 + iVar7 + 0x2d0) = 1
            ;
            *(undefined4 *)(((u8 *)0x80100F38) + *(short *)(((u8 *)0x80101204) + iVar7) * 4 + iVar7 + 0x2e0) =
                 (&DAT_801011f4)[uVar10 * 0x1e7];
            goto LAB_800c314c;
          }
          goto LAB_800c3160;
        }
        if (uVar6 == 0x24) {
          if (iVar9 == *(short *)(((u8 *)0x8010129e) + iVar7)) {
            *(undefined2 *)(((u8 *)0x80100F38) + *(short *)(((u8 *)0x80101204) + iVar7) * 2 + iVar7 + 0x2d0) = 1
            ;
            *(undefined4 *)(((u8 *)0x80100F38) + *(short *)(((u8 *)0x80101204) + iVar7) * 4 + iVar7 + 0x2e0) =
                 (&DAT_801011f4)[uVar10 * 0x1e7];
          }
          iVar8 = (&DAT_801011f4)[uVar10 * 0x1e7];
          (&DAT_801011f4)[uVar10 * 0x1e7] = iVar8 + 1;
          cVar1 = *(s8 *)(iVar8 + 1);
          while (cVar1 != '%') {
            iVar8 = (&DAT_801011f4)[uVar10 * 0x1e7];
            (&DAT_801011f4)[uVar10 * 0x1e7] = iVar8 + 1;
            cVar1 = *(s8 *)(iVar8 + 1);
          }
          if (iVar9 == *(short *)(((u8 *)0x8010129e) + iVar7)) goto LAB_800c314c;
          goto LAB_800c3160;
        }
      }
      uVar3 = *(ushort *)(((u8 *)0x80101204) + iVar7);
    } while (iVar9 < *(short *)(((u8 *)0x80100F38) + *(short *)(((u8 *)0x80101204) + iVar7) * 2 + iVar7 + 0x318)
            );
  }
  cVar1 = *(s8 *)(&DAT_801011f4)[uVar10 * 0x1e7];
  pcVar4 = (s8 *)(&DAT_801011f4)[uVar10 * 0x1e7];
  while (cVar1 != '3') {
    (&DAT_801011f4)[uVar10 * 0x1e7] = pcVar4 + 1;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 1;
  }
  *(undefined4 *)(((u8 *)0x80100F38) + *(short *)(((u8 *)0x80101204) + iVar7) * 4 + iVar7 + 0x2f4) =
       (&DAT_801011f4)[uVar10 * 0x1e7];
  sVar2 = *(short *)(((u8 *)0x80101204) + iVar7);
  *(ushort *)(((u8 *)0x80101204) + iVar7) = sVar2 + 1U;
  iVar7 = *(int *)(((u8 *)0x80100F38) + ((int)((uint)(ushort)(sVar2 + 1U) << 0x10) >> 0xe) + iVar7 + 0x2dc)
  ;
  (&DAT_801011f4)[uVar10 * 0x1e7] = iVar7;
  return iVar7;
}
