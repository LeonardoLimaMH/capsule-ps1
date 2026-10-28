#include "common.h"

/* arg0: 0x80140000 */
/* real-callee: func_80015D14 */
/* rand-u16: 0x8008ED68 1 0 */
/* rand-u16: 0x8008ED6A 1 32786 */
/* rand-u16: 0x80121090 1 8192 */
/* rand-u16: 0x80121092 1 32786 */
/* rand-u16: 0x80140018 1 4096 */
/* rand-u16: 0x8014001A 1 32788 */
/* rand-u16: 0x8014001C 1 16384 */
/* rand-u16: 0x8014001E 1 32788 */
/* rand-u16: 0x80140020 1 0 */
/* rand-u16: 0x80140022 1 0 */
/* rand-u16: 0x80140024 1 0,1,2,32767,65535 */
/* rand-u16: 0x80140030 1 0,1,2,3,4,5,6,7,512,1024,3584 */
/* rand-u16: 0x80140032 1 0 */
/* rand-u16: 0x80140038 1 0,0,0,1,8,9,16,32,64,128 */
/* rand-u16: 0x8014003A 1 0 */
/* rand-u16: 0x8014004E 1 0,1,2,3,4,5,6,7,8 */
/* rand-u16: 0x80140050 1 0,1,32,128,4096,8192,16384,65535 */
/* rand-u16: 0x80140052 1 0,1,32,128,4096,8192,16384,65535 */
/* rand-u16: 0x80140054 1 0,0,0,1,4096,8192,65535 */
/* rand-u16: 0x8014007C 1 0 */
/* rand-u16: 0x8014007E 1 0 */
/* rand-u16: 0x80140080 1 0 */
/* rand-u16: 0x80140082 1 0 */
/* rand-u16: 0x80141000 1 3 */
/* rand-u16: 0x80141002 1 0 */
/* rand-u16: 0x80141008 1 8192 */
/* rand-u16: 0x8014100A 1 32788 */
/* rand-u16: 0x80142008 1 12288 */
/* rand-u16: 0x8014200A 1 32788 */
/* rand-u16: 0x8014202C 1 12288 */
/* rand-u16: 0x8014202E 1 32788 */
/* rand-u16: 0x80142050 1 12288 */
/* rand-u16: 0x80142052 1 32788 */
/* rand-u16: 0x80144000 1 3 */
/* rand-u16: 0x80144002 1 0 */
/* rand-u16: 0x80144004 1 20480 */
/* rand-u16: 0x80144006 1 32788 */
/* rand-u16: 0x80145000 1 4096 */
/* rand-u16: 0x80145002 1 32788 */
/* rand-u16: 0x80145004 1 1,2,8 */
/* rand-u16: 0x80145008 1 4096 */
/* rand-u16: 0x8014500A 1 32788 */
/* rand-u16: 0x8014500C 1 1,2,8 */
/* rand-u16: 0x80145010 1 4096 */
/* rand-u16: 0x80145012 1 32788 */
/* rand-u16: 0x80145014 1 1,2,8 */
/* rand-mem: 0x8008F702 1 1 */
/* rand-mem: 0x8008EE6B 1 2 */
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
/* real-callee: func_800DD428 */
/* real-callee: func_80015D14 */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
#include "ghidra.h"
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define DAT_8008f7dc (*(s32 *)0x8008F7DC)
#define DAT_80100bc6 (*(u16 *)0x80100BC6)
#define D_80100BC4 (*(u16 *)0x80100BC4)
extern s32 GetClut();
extern s32 GetTPage();
extern s32 SetPolyFT4();
extern s32 SetSemiTrans();
extern s32 SetShadeTex();
#define func_80015D14 ((s32 (*)())0x80015D14)
#define func_80016148 ((s32 (*)())0x80016148)
extern s32 rcos();
extern s32 rsin();
void func_800AADE0(int param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  byte bVar7;
  byte bVar8;
  undefined2 uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  s8 cVar15;
  uint uVar16;
  short *psVar17;
  s8 cVar18;
  uint uVar19;
  byte bVar20;
  uint *puVar21;
  int iVar22;
  uint *puVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint *puVar28;
  uint uVar29;
  ushort *puVar30;
  int iVar31;
  short *psVar32;
  short *local_4c;
  int local_30;

  if ((*(uint *)(param_1 + 0x38) & 1) != 1) {
    do {
      iVar11 = func_80015D14(param_1 + 0x14);
    } while (iVar11 != 0);
    if (*(int *)(param_1 + 0x18) != 0) {
      if ((*(uint *)(param_1 + 0x38) >> 3 & 1) != 0) {
        func_80016148(param_1);
      }
      if (*(short *)(param_1 + 0x54) == 0) {
        iVar11 = **(int **)(param_1 + 0x18);
        psVar17 = (short *)(*(int **)(param_1 + 0x18))[2];
        psVar32 = psVar17 + iVar11 * 0x12 + -0x12;
        bVar7 = *(byte *)(param_1 + 0x58);
        if (DAT_8008f7dc != 0x1000) {
          iVar31 = (uint)bVar7 * DAT_8008f7dc;
          if (DAT_8008f7dc < 0x1000) {
            if (iVar31 < 0) {
              iVar31 = iVar31 + 0xfff;
            }
            bVar7 = (byte)(iVar31 >> 0xc);
          }
          else {
            iVar31 = (0xff - (uint)bVar7) * (DAT_8008f7dc + -0x1000);
            if (iVar31 < 0) {
              iVar31 = iVar31 + 0xfff;
            }
            bVar7 = (s8)(iVar31 >> 0xc) + bVar7;
          }
        }
        bVar8 = *(byte *)(param_1 + 0x59);
        if (DAT_8008f7dc != 0x1000) {
          iVar31 = (uint)bVar8 * DAT_8008f7dc;
          if (DAT_8008f7dc < 0x1000) {
            if (iVar31 < 0) {
              iVar31 = iVar31 + 0xfff;
            }
            bVar8 = (byte)(iVar31 >> 0xc);
          }
          else {
            iVar31 = (0xff - (uint)bVar8) * (DAT_8008f7dc + -0x1000);
            if (iVar31 < 0) {
              iVar31 = iVar31 + 0xfff;
            }
            bVar8 = (s8)(iVar31 >> 0xc) + bVar8;
          }
        }
        bVar20 = *(byte *)(param_1 + 0x5a);
        if (DAT_8008f7dc != 0x1000) {
          iVar31 = (uint)bVar20 * DAT_8008f7dc;
          if (DAT_8008f7dc < 0x1000) {
            bVar20 = (byte)(iVar31 >> 0xc);
            if (iVar31 < 0) {
              bVar20 = (byte)(iVar31 + 0xfff >> 0xc);
            }
          }
          else {
            iVar31 = (0xff - (uint)bVar20) * (DAT_8008f7dc + -0x1000);
            if (iVar31 < 0) {
              iVar31 = iVar31 + 0xfff;
            }
            bVar20 = (s8)(iVar31 >> 0xc) + bVar20;
          }
        }
        sVar5 = *(short *)(param_1 + 0x46) + (short)(DAT_8008ee70 / 2) +
                (short)*(s8 *)(param_1 + 0x56);
        sVar1 = *(short *)(*(int *)(psVar17 + iVar11 * 0x12 + -0xe) + 6);
        sVar2 = *(short *)(param_1 + 0x2e);
        sVar6 = *(short *)(param_1 + 0x4a) + (short)(DAT_8008ee74 / 2) +
                (short)*(s8 *)(param_1 + 0x57);
        uVar3 = *(ushort *)(*(int *)(psVar17 + iVar11 * 0x12 + -0xe) + 4);
        uVar4 = *(ushort *)(param_1 + 0x2c);
        if (psVar17 <= psVar32) {
          puVar30 = (ushort *)(psVar17 + iVar11 * 0x12 + -10);
          do {
            iVar11 = 0;
            iVar31 = 0;
            puVar28 = *(uint **)(DAT_8008ed68 + 0x1090);
            puVar23 = (uint *)0x0;
            if ((puVar28 == (uint *)0x0) ||
               (puVar23 = puVar28 + 10, puVar21 = (uint *)0x0,
               puVar23 <= (uint *)(DAT_8008ed68 + 0x4594U))) {
              puVar21 = puVar23;
            }
            *(uint **)(DAT_8008ed68 + 0x1090) = puVar21;
            SetPolyFT4(puVar28);
            SetShadeTex(puVar28,0);
            SetSemiTrans(puVar28,*(uint *)(param_1 + 0x38) >> 6 & 1);
            *(byte *)(puVar28 + 1) = bVar7;
            *(byte *)((int)puVar28 + 5) = bVar8;
            *(byte *)((int)puVar28 + 6) = bVar20;
            uVar16 = *(uint *)(param_1 + 0x34) & 0x7f;
            if (uVar16 == 0) {
              iVar22 = (uint)puVar30[-2] + (int)*(short *)(param_1 + 100);
              iVar12 = iVar22;
              if (iVar22 < 0) {
                iVar12 = iVar22 + 0xf;
              }
              iVar22 = ((int)(((uint)uVar3 + (uint)uVar4) * 0x10000) >> 0x10) +
                       (iVar22 + (iVar12 >> 4) * -0x10) * 0x10;
              iVar12 = (int)(short)(sVar1 + sVar2) + (int)*(short *)(param_1 + 0x66) + (iVar12 >> 4)
              ;
            }
            else {
              iVar22 = 0x3f0;
              if (uVar16 == 1) {
                iVar22 = 0x100;
                iVar12 = 0x1fe;
              }
              else {
                iVar12 = 0x17f;
              }
            }
            uVar9 = GetClut(iVar22,iVar12);
            *(undefined2 *)((int)puVar28 + 0xe) = uVar9;
            iVar22 = ((int)*psVar32 - (int)*(s8 *)(param_1 + 0x56)) *
                     (int)*(short *)(param_1 + 0x50);
            if (iVar22 < 0) {
              iVar22 = iVar22 + 0x1f;
            }
            iVar12 = (uint)puVar30[2] * (int)*(short *)(param_1 + 0x50);
            iVar22 = iVar22 >> 5;
            if (iVar12 < 0) {
              iVar12 = iVar12 + 0x1f;
            }
            iVar25 = (iVar12 >> 5) + iVar22;
            iVar12 = iVar22;
            if ((puVar30[1] & 2) != 0) {
              iVar12 = iVar25;
              iVar25 = iVar22;
            }
            iVar22 = ((int)(short)puVar30[-7] - (int)*(s8 *)(param_1 + 0x57)) *
                     (int)*(short *)(param_1 + 0x52);
            if (iVar22 < 0) {
              iVar22 = iVar22 + 0x1f;
            }
            iVar13 = (uint)puVar30[3] * (int)*(short *)(param_1 + 0x52);
            iVar22 = iVar22 >> 5;
            if (iVar13 < 0) {
              iVar13 = iVar13 + 0x1f;
            }
            iVar26 = (iVar13 >> 5) + iVar22;
            iVar13 = iVar22;
            if ((puVar30[1] & 1) != 0) {
              iVar13 = iVar26;
              iVar26 = iVar22;
            }
            if (iVar12 < 0) {
              iVar12 = iVar12 + 0x7f;
            }
            sVar10 = (short)(iVar12 >> 7) + sVar5;
            *(short *)(puVar28 + 6) = sVar10;
            *(short *)(puVar28 + 2) = sVar10;
            if (iVar25 < 0) {
              iVar25 = iVar25 + 0x7f;
            }
            sVar10 = (short)(iVar25 >> 7) + sVar5;
            *(short *)(puVar28 + 8) = sVar10;
            *(short *)(puVar28 + 4) = sVar10;
            if ((short)puVar28[8] < (short)puVar28[2]) {
              iVar11 = -1;
            }
            if (iVar13 < 0) {
              iVar13 = iVar13 + 0x7f;
            }
            sVar10 = (short)(iVar13 >> 7) + sVar6;
            *(short *)((int)puVar28 + 0x12) = sVar10;
            *(short *)((int)puVar28 + 10) = sVar10;
            if (iVar26 < 0) {
              iVar26 = iVar26 + 0x7f;
            }
            sVar10 = (short)(iVar26 >> 7) + sVar6;
            *(short *)((int)puVar28 + 0x22) = sVar10;
            *(short *)((int)puVar28 + 0x1a) = sVar10;
            if (*(short *)((int)puVar28 + 0x22) < *(short *)((int)puVar28 + 10)) {
              iVar31 = -1;
            }
            iVar22 = *(int *)(puVar30 + -6);
            if (*(short *)(iVar22 + 4) == 0x140) {
              uVar16 = (uint)(ushort)(&D_80100BC4)
                                     [*(int *)(param_1 + 0x7c) * 0xc + *(int *)(param_1 + 0x80) * 2]
              ;
              uVar29 = (uint)(ushort)(&DAT_80100bc6)
                                     [*(int *)(param_1 + 0x7c) * 0xc + *(int *)(param_1 + 0x80) * 2]
              ;
            }
            else if (*(short *)(iVar22 + 4) == 0x160) {
              uVar29 = (uint)(ushort)(&DAT_80100bc6)
                                     [*(int *)(param_1 + 0x7c) * 0xc + *(int *)(param_1 + 0x80) * 2]
              ;
              uVar16 = (ushort)(&D_80100BC4)
                               [*(int *)(param_1 + 0x7c) * 0xc + *(int *)(param_1 + 0x80) * 2] +
                       0x20;
            }
            else {
              uVar16 = (uint)*(ushort *)(iVar22 + 4) + (uint)*(ushort *)(param_1 + 0x28);
              uVar29 = (uint)*(ushort *)(iVar22 + 6) + (uint)*(ushort *)(param_1 + 0x2a);
            }
            uVar9 = GetTPage(0,*(uint *)(param_1 + 0x38) >> 4 & 3,(int)(short)uVar16,
                             (int)(short)uVar29);
            *(undefined2 *)((int)puVar28 + 0x16) = uVar9;
            uVar19 = (uint)puVar30[2];
            iVar22 = (uint)puVar30[-1] + (uVar16 & 0x20) * 4;
            if ((*(ushort *)(param_1 + 0x54) & 0xfff) == 0) {
              iVar12 = iVar22 + uVar19;
              if (iVar11 != 0) {
                if (iVar22 == 0) goto LAB_800ab40c;
                iVar22 = iVar22 + -1;
                goto LAB_800ab410;
              }
            }
            else {
LAB_800ab40c:
              uVar19 = uVar19 - 1;
LAB_800ab410:
              iVar12 = iVar22 + uVar19;
            }
            cVar18 = (s8)iVar22;
            if (0xff < iVar12) {
              iVar12 = 0xff;
            }
            cVar15 = (s8)iVar12;
            if (0x1fff < *(short *)(param_1 + 0x50)) {
              if (iVar11 == 0) {
                cVar15 = cVar15 + -1;
              }
              else {
                cVar18 = cVar18 + '\x01';
              }
            }
            *(s8 *)(puVar28 + 3) = cVar18;
            *(s8 *)(puVar28 + 7) = cVar18;
            *(s8 *)(puVar28 + 9) = cVar15;
            *(s8 *)(puVar28 + 5) = cVar15;
            uVar16 = (uint)puVar30[3];
            iVar11 = (uint)*puVar30 + (uVar29 & 0x80);
            if ((*(ushort *)(param_1 + 0x54) & 0xfff) == 0) {
              if (iVar31 != 0) {
                if (iVar11 == 0) goto LAB_800ab494;
                iVar11 = iVar11 + -1;
              }
            }
            else {
LAB_800ab494:
              uVar16 = uVar16 - 1;
            }
            iVar22 = iVar11 + uVar16;
            if (0xff < iVar22) {
              iVar22 = 0xff;
            }
            cVar18 = (s8)iVar22;
            if (0x1fff < *(short *)(param_1 + 0x52)) {
              if (iVar31 == 0) {
                cVar18 = cVar18 + -1;
              }
              else {
                iVar11 = iVar11 + 1;
              }
            }
            *(s8 *)((int)puVar28 + 0x25) = cVar18;
            *(s8 *)((int)puVar28 + 0x1d) = cVar18;
            *(s8 *)((int)puVar28 + 0xd) = (s8)iVar11;
            *(s8 *)((int)puVar28 + 0x15) = (s8)iVar11;
            *puVar28 = *puVar28 & 0xff000000 |
                       *(uint *)(*(short *)(param_1 + 0x4e) * 4 + DAT_8008ed68 + 0x70) & 0xffffff;
            iVar11 = *(short *)(param_1 + 0x4e) * 4 + DAT_8008ed68;
            *(uint *)(iVar11 + 0x70) =
                 *(uint *)(iVar11 + 0x70) & 0xff000000 | (uint)puVar28 & 0xffffff;
            psVar32 = psVar32 + -0x12;
            puVar30 = puVar30 + -0x12;
          } while (psVar17 <= psVar32);
        }
      }
      else {
        iVar11 = **(int **)(param_1 + 0x18);
        psVar17 = (short *)(*(int **)(param_1 + 0x18))[2];
        local_4c = psVar17 + iVar11 * 0x12 + -0x12;
        bVar7 = *(byte *)(param_1 + 0x58);
        if (DAT_8008f7dc != 0x1000) {
          iVar31 = (uint)bVar7 * DAT_8008f7dc;
          if (DAT_8008f7dc < 0x1000) {
            if (iVar31 < 0) {
              iVar31 = iVar31 + 0xfff;
            }
            bVar7 = (byte)(iVar31 >> 0xc);
          }
          else {
            iVar31 = (0xff - (uint)bVar7) * (DAT_8008f7dc + -0x1000);
            if (iVar31 < 0) {
              iVar31 = iVar31 + 0xfff;
            }
            bVar7 = (s8)(iVar31 >> 0xc) + bVar7;
          }
        }
        bVar8 = *(byte *)(param_1 + 0x59);
        if (DAT_8008f7dc != 0x1000) {
          iVar31 = (uint)bVar8 * DAT_8008f7dc;
          if (DAT_8008f7dc < 0x1000) {
            if (iVar31 < 0) {
              iVar31 = iVar31 + 0xfff;
            }
            bVar8 = (byte)(iVar31 >> 0xc);
          }
          else {
            iVar31 = (0xff - (uint)bVar8) * (DAT_8008f7dc + -0x1000);
            if (iVar31 < 0) {
              iVar31 = iVar31 + 0xfff;
            }
            bVar8 = (s8)(iVar31 >> 0xc) + bVar8;
          }
        }
        bVar20 = *(byte *)(param_1 + 0x5a);
        if (DAT_8008f7dc != 0x1000) {
          iVar31 = (uint)bVar20 * DAT_8008f7dc;
          if (DAT_8008f7dc < 0x1000) {
            bVar20 = (byte)(iVar31 >> 0xc);
            if (iVar31 < 0) {
              bVar20 = (byte)(iVar31 + 0xfff >> 0xc);
            }
          }
          else {
            iVar31 = (0xff - (uint)bVar20) * (DAT_8008f7dc + -0x1000);
            if (iVar31 < 0) {
              iVar31 = iVar31 + 0xfff;
            }
            bVar20 = (s8)(iVar31 >> 0xc) + bVar20;
          }
        }
        sVar1 = *(short *)(param_1 + 0x46);
        iVar31 = DAT_8008ee70 / 2;
        sVar5 = *(short *)(param_1 + 0x2e);
        iVar25 = DAT_8008ee74 / 2;
        sVar2 = *(short *)(param_1 + 0x4a);
        sVar6 = *(short *)(*(int *)(psVar17 + iVar11 * 0x12 + -0xe) + 6);
        uVar3 = *(ushort *)(*(int *)(psVar17 + iVar11 * 0x12 + -0xe) + 4);
        uVar4 = *(ushort *)(param_1 + 0x2c);
        iVar22 = rcos((int)*(short *)(param_1 + 0x54));
        iVar12 = rsin((int)*(short *)(param_1 + 0x54));
        iVar13 = sVar1 + iVar31 + (int)*(s8 *)(param_1 + 0x56);
        iVar31 = sVar2 + iVar25 + (int)*(s8 *)(param_1 + 0x57);
        if (psVar17 <= local_4c) {
          puVar30 = (ushort *)(psVar17 + iVar11 * 0x12 + -10);
          do {
            iVar11 = 0;
            local_30 = 0;
            puVar28 = *(uint **)(DAT_8008ed68 + 0x1090);
            puVar23 = (uint *)0x0;
            if ((puVar28 == (uint *)0x0) ||
               (puVar23 = puVar28 + 10, puVar21 = (uint *)0x0,
               puVar23 <= (uint *)(DAT_8008ed68 + 0x4594U))) {
              puVar21 = puVar23;
            }
            *(uint **)(DAT_8008ed68 + 0x1090) = puVar21;
            SetPolyFT4(puVar28);
            SetShadeTex(puVar28,0);
            SetSemiTrans(puVar28,*(uint *)(param_1 + 0x38) >> 6 & 1);
            *(byte *)(puVar28 + 1) = bVar7;
            *(byte *)((int)puVar28 + 5) = bVar8;
            *(byte *)((int)puVar28 + 6) = bVar20;
            uVar16 = *(uint *)(param_1 + 0x34) & 0x7f;
            if (uVar16 == 0) {
              iVar25 = (uint)puVar30[-2] + (int)*(short *)(param_1 + 100);
              iVar26 = iVar25;
              if (iVar25 < 0) {
                iVar26 = iVar25 + 0xf;
              }
              iVar25 = ((int)(((uint)uVar3 + (uint)uVar4) * 0x10000) >> 0x10) +
                       (iVar25 + (iVar26 >> 4) * -0x10) * 0x10;
              iVar26 = (int)(short)(sVar6 + sVar5) + (int)*(short *)(param_1 + 0x66) + (iVar26 >> 4)
              ;
            }
            else {
              iVar25 = 0x3f0;
              if (uVar16 == 1) {
                iVar25 = 0x100;
                iVar26 = 0x1fe;
              }
              else {
                iVar26 = 0x17f;
              }
            }
            uVar9 = GetClut(iVar25,iVar26);
            *(undefined2 *)((int)puVar28 + 0xe) = uVar9;
            iVar25 = ((int)*local_4c - (int)*(s8 *)(param_1 + 0x56)) *
                     (int)*(short *)(param_1 + 0x50);
            if (iVar25 < 0) {
              iVar25 = iVar25 + 0x1f;
            }
            iVar26 = (uint)puVar30[2] * (int)*(short *)(param_1 + 0x50);
            iVar25 = iVar25 >> 5;
            if (iVar26 < 0) {
              iVar26 = iVar26 + 0x1f;
            }
            iVar27 = (iVar26 >> 5) + iVar25;
            iVar26 = iVar25;
            if ((puVar30[1] & 2) != 0) {
              iVar26 = iVar27;
              iVar27 = iVar25;
            }
            iVar25 = ((int)(short)puVar30[-7] - (int)*(s8 *)(param_1 + 0x57)) *
                     (int)*(short *)(param_1 + 0x52);
            if (iVar25 < 0) {
              iVar25 = iVar25 + 0x1f;
            }
            iVar14 = (uint)puVar30[3] * (int)*(short *)(param_1 + 0x52);
            iVar25 = iVar25 >> 5;
            if (iVar14 < 0) {
              iVar14 = iVar14 + 0x1f;
            }
            iVar24 = (iVar14 >> 5) + iVar25;
            iVar14 = iVar25;
            if ((puVar30[1] & 1) != 0) {
              iVar14 = iVar24;
              iVar24 = iVar25;
            }
            iVar25 = iVar26 * iVar22 - iVar14 * iVar12;
            if (iVar25 < 0) {
              iVar25 = iVar25 + 0x7ffff;
            }
            sVar1 = (short)iVar13;
            *(short *)(puVar28 + 2) = (short)(iVar25 >> 0x13) + sVar1;
            iVar25 = iVar27 * iVar22 - iVar14 * iVar12;
            if (iVar25 < 0) {
              iVar25 = iVar25 + 0x7ffff;
            }
            *(short *)(puVar28 + 4) = (short)(iVar25 >> 0x13) + sVar1;
            iVar25 = iVar26 * iVar22 - iVar24 * iVar12;
            if (iVar25 < 0) {
              iVar25 = iVar25 + 0x7ffff;
            }
            *(short *)(puVar28 + 6) = (short)(iVar25 >> 0x13) + sVar1;
            iVar25 = iVar27 * iVar22 - iVar24 * iVar12;
            if (iVar25 < 0) {
              iVar25 = iVar25 + 0x7ffff;
            }
            iVar25 = (iVar25 >> 0x13) + iVar13;
            *(short *)(puVar28 + 8) = (short)iVar25;
            if (iVar25 * 0x10000 >> 0x10 < (int)(short)puVar28[2]) {
              iVar11 = -1;
            }
            iVar25 = iVar27 * iVar12 + iVar14 * iVar22;
            if (iVar25 < 0) {
              iVar25 = iVar25 + 0x7ffff;
            }
            sVar1 = (short)iVar31;
            *(short *)((int)puVar28 + 0x12) = (short)(iVar25 >> 0x13) + sVar1;
            iVar25 = iVar26 * iVar12 + iVar14 * iVar22;
            if (iVar25 < 0) {
              iVar25 = iVar25 + 0x7ffff;
            }
            *(short *)((int)puVar28 + 10) = (short)(iVar25 >> 0x13) + sVar1;
            iVar25 = iVar26 * iVar12 + iVar24 * iVar22;
            if (iVar25 < 0) {
              iVar25 = iVar25 + 0x7ffff;
            }
            *(short *)((int)puVar28 + 0x1a) = (short)(iVar25 >> 0x13) + sVar1;
            iVar25 = iVar27 * iVar12 + iVar24 * iVar22;
            if (iVar25 < 0) {
              iVar25 = iVar25 + 0x7ffff;
            }
            iVar25 = (iVar25 >> 0x13) + iVar31;
            *(short *)((int)puVar28 + 0x22) = (short)iVar25;
            if (iVar25 * 0x10000 >> 0x10 < (int)*(short *)((int)puVar28 + 10)) {
              local_30 = -1;
            }
            iVar25 = *(int *)(puVar30 + -6);
            if (*(short *)(iVar25 + 4) == 0x140) {
              uVar16 = (uint)(ushort)(&D_80100BC4)
                                     [*(int *)(param_1 + 0x7c) * 0xc + *(int *)(param_1 + 0x80) * 2]
              ;
              uVar29 = (uint)(ushort)(&DAT_80100bc6)
                                     [*(int *)(param_1 + 0x7c) * 0xc + *(int *)(param_1 + 0x80) * 2]
              ;
            }
            else if (*(short *)(iVar25 + 4) == 0x160) {
              uVar29 = (uint)(ushort)(&DAT_80100bc6)
                                     [*(int *)(param_1 + 0x7c) * 0xc + *(int *)(param_1 + 0x80) * 2]
              ;
              uVar16 = (ushort)(&D_80100BC4)
                               [*(int *)(param_1 + 0x7c) * 0xc + *(int *)(param_1 + 0x80) * 2] +
                       0x20;
            }
            else {
              uVar16 = (uint)*(ushort *)(iVar25 + 4) + (uint)*(ushort *)(param_1 + 0x28);
              uVar29 = (uint)*(ushort *)(iVar25 + 6) + (uint)*(ushort *)(param_1 + 0x2a);
            }
            uVar9 = GetTPage(0,*(uint *)(param_1 + 0x38) >> 4 & 3,(int)(short)uVar16,
                             (int)(short)uVar29);
            *(undefined2 *)((int)puVar28 + 0x16) = uVar9;
            uVar19 = (uint)puVar30[2];
            iVar25 = (uint)puVar30[-1] + (uVar16 & 0x20) * 4;
            if ((*(ushort *)(param_1 + 0x54) & 0xfff) == 0) {
              iVar26 = iVar25 + uVar19;
              if (iVar11 != 0) {
                if (iVar25 == 0) goto LAB_800abc04;
                iVar25 = iVar25 + -1;
                goto LAB_800abc08;
              }
            }
            else {
LAB_800abc04:
              uVar19 = uVar19 - 1;
LAB_800abc08:
              iVar26 = iVar25 + uVar19;
            }
            cVar18 = (s8)iVar25;
            if (0xff < iVar26) {
              iVar26 = 0xff;
            }
            cVar15 = (s8)iVar26;
            if (0x1fff < *(short *)(param_1 + 0x50)) {
              if (iVar11 == 0) {
                cVar15 = cVar15 + -1;
              }
              else {
                cVar18 = cVar18 + '\x01';
              }
            }
            *(s8 *)(puVar28 + 3) = cVar18;
            *(s8 *)(puVar28 + 7) = cVar18;
            *(s8 *)(puVar28 + 9) = cVar15;
            *(s8 *)(puVar28 + 5) = cVar15;
            uVar16 = (uint)puVar30[3];
            iVar11 = (uint)*puVar30 + (uVar29 & 0x80);
            if ((*(ushort *)(param_1 + 0x54) & 0xfff) == 0) {
              if (local_30 != 0) {
                if (iVar11 == 0) goto LAB_800abc94;
                iVar11 = iVar11 + -1;
              }
            }
            else {
LAB_800abc94:
              uVar16 = uVar16 - 1;
            }
            iVar25 = iVar11 + uVar16;
            if (0xff < iVar25) {
              iVar25 = 0xff;
            }
            cVar18 = (s8)iVar25;
            if (0x1fff < *(short *)(param_1 + 0x52)) {
              if (local_30 == 0) {
                cVar18 = cVar18 + -1;
              }
              else {
                iVar11 = iVar11 + 1;
              }
            }
            *(s8 *)((int)puVar28 + 0x25) = cVar18;
            *(s8 *)((int)puVar28 + 0x1d) = cVar18;
            *(s8 *)((int)puVar28 + 0xd) = (s8)iVar11;
            *(s8 *)((int)puVar28 + 0x15) = (s8)iVar11;
            *puVar28 = *puVar28 & 0xff000000 |
                       *(uint *)(*(short *)(param_1 + 0x4e) * 4 + DAT_8008ed68 + 0x70) & 0xffffff;
            iVar11 = *(short *)(param_1 + 0x4e) * 4 + DAT_8008ed68;
            local_4c = local_4c + -0x12;
            *(uint *)(iVar11 + 0x70) =
                 *(uint *)(iVar11 + 0x70) & 0xff000000 | (uint)puVar28 & 0xffffff;
            puVar30 = puVar30 + -0x12;
          } while (psVar17 <= local_4c);
        }
      }
    }
  }
  return;
}
