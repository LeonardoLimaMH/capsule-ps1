#include "common.h"

/* arg0: 0x80130000 */
/* arg1: 0x80140000 */
/* arg2: 0x80150000 */
/* rand-mem: 0x80140015 2 13 */
/* rand-mem: 0x80150015 2 13 */
/* rand-mem: 0x801305D9 1 4 */
/* rand-mem: 0x80130BCA 1 2 */
/* rand-mem: 0x80130BD5 2 8 */
/* rand-u16: 0x801010B0 1 0 */
/* rand-u16: 0x801010B2 1 32790 */
/* rand-u16: 0x801010E4 1 1024 */
/* rand-u16: 0x801010E6 1 32790 */
/* rand-u16: 0x80101118 1 2048 */
/* rand-u16: 0x8010111A 1 32790 */
/* rand-u16: 0x8010114C 1 3072 */
/* rand-u16: 0x8010114E 1 32790 */
#include "common.h"

#include "ghidra.h"
#define DAT_80100f91 (*(s32 *)0x80100F91)
#define DAT_80100f92 (*(s32 *)0x80100F92)
#define D_80100F50 (*(u8 *)0x80100F50)
#define D_80100F90 (*(u8 *)0x80100F90)
#define D_801010B0 (*(s32 *)0x801010B0)
s8 func_800B0F48(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  union { u64 align; u8 bytes[0x38]; } recovered_local_frame;
#define local_38 (*(s8 volatile (*)[8])(recovered_local_frame.bytes + 0x0))
#define local_30 (*(byte volatile (*)[9])(recovered_local_frame.bytes + 0x8))
#define local_27 (*(byte volatile *)(recovered_local_frame.bytes + 0x11))

  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  s8 *pcVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  s8 *pcVar20;
  s8 cVar21;




  pcVar20 = local_38;
  bVar1 = *(byte *)(param_1 + 0xbca);
  if (param_4 == 0) {
    cVar21 = '\x02';
    if (param_5 != 0) goto LAB_800b0fc0;
  }
  else {
    cVar21 = '\0';
    if (param_5 == 0) goto LAB_800b0fc0;
  }
  if ((((param_4 < 1) || (cVar21 = '\x01', param_5 < 1)) && (cVar21 = '\x03', param_4 < 0)) &&
     (param_5 < 0)) {
    cVar21 = '\x01';
  }
LAB_800b0fc0:
  iVar18 = 0;
  pbVar6 = local_30;
  local_30[8] = *(s8 *)(param_2 + 0x15) + *(s8 *)(param_3 + 0x15);
  local_27 = *(s8 *)(param_2 + 0x16) + *(s8 *)(param_3 + 0x16);
  do {
    *pcVar20 = (cVar21 + (&D_80100F50)[iVar18 + (uint)*(byte *)(param_1 + (uint)bVar1 + 0xbd5) * 8])
               - (cVar21 + (&D_80100F50)
                           [iVar18 + (uint)*(byte *)(param_1 + (uint)bVar1 + 0xbd5) * 8] & 0xf8U);
    *pbVar6 = (byte)iVar18;
    switch(*pcVar20) {
    case '\0':
    case '\x04':
      iVar11 = 1;
      if (*pcVar20 == '\0') {
        iVar11 = -1;
      }
      iVar13 = 3;
      if ((local_30[8] & 1) != 0) {
        iVar13 = 2;
      }
      iVar14 = 1;
      if ((local_27 & 1) != 0) {
        iVar14 = 2;
      }
      iVar17 = 0;
      if (iVar13 != 0) {
        do {
          iVar15 = 0;
          if (iVar14 != 0) {
            do {
              uVar8 = (uint)(local_30[8] >> 1) - (iVar17 + -1);
              uVar16 = (uint)(local_27 >> 1) + iVar11 + iVar15;
              if (((((int)uVar8 < 0) || ((int)uVar16 < 0)) || (0xc < (int)uVar8)) ||
                 (0xc < (int)uVar16)) {
LAB_800b1158:
                iVar9 = 0;
LAB_800b11bc:
                pcVar5 = ((u8 *)0x80100F90) + iVar9;
              }
              else {
                puVar4 = (uint *)(uVar16 * 4 +
                                 uVar8 * 0x34 +
                                 *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34));
                uVar19 = *puVar4 >> 6 & 0x1fff;
                if (uVar19 == 0) goto LAB_800b1158;
                iVar9 = 3;
                if ((2 < uVar19) || (iVar9 = 1, *(s8 *)((int)puVar4 + 3) == '\0'))
                goto LAB_800b11bc;
                if ((*(byte *)(param_2 + 0x15) != uVar8) ||
                   (pcVar5 = &DAT_80100f91, *(byte *)(param_2 + 0x16) != uVar16)) {
                  iVar9 = 2;
                  if (*(byte *)(param_3 + 0x15) == uVar8) {
                    pcVar5 = &DAT_80100f92;
                    if (*(byte *)(param_3 + 0x16) != uVar16) goto LAB_800b11c0;
                    iVar9 = 1;
                  }
                  goto LAB_800b11bc;
                }
              }
LAB_800b11c0:
              *pbVar6 = *pbVar6 + *pcVar5;
              iVar9 = (uint)(local_30[8] >> 1) - (iVar17 + -1);
              iVar10 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
              iVar7 = (uint)(local_27 >> 1) + iVar11 + iVar15;
              if (((iVar9 < 0) || (iVar7 < 0)) || ((0xc < iVar9 || (0xc < iVar7)))) {
                iVar9 = 0;
              }
              else {
                iVar9 = (*(uint *)(iVar7 * 4 + iVar9 * 0x34 + iVar10) >> 0x13 & 7) -
                        ((int)((*(uint *)((uint)*(byte *)(param_2 + 0x16) * 4 +
                                         (uint)*(byte *)(param_2 + 0x15) * 0x34 + iVar10) >> 0x13 &
                               7) + (*(uint *)((uint)*(byte *)(param_3 + 0x16) * 4 +
                                              (uint)*(byte *)(param_3 + 0x15) * 0x34 + iVar10) >>
                                     0x13 & 7)) >> 1);
              }
              if (0 < iVar9) {
                *pbVar6 = *pbVar6 + (s8)iVar9 * '\x02';
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < iVar14);
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < iVar13);
      }
      break;
    case '\x01':
      uVar8 = (int)(local_30[8] + 2) >> 1;
      uVar16 = (int)(local_27 - 1) / 2;
      if ((((int)uVar16 < 0) || (0xc < uVar8)) || (0xc < (int)uVar16)) {
LAB_800b1fe4:
        iVar11 = 0;
LAB_800b2048:
        pcVar5 = ((u8 *)0x80100F90) + iVar11;
      }
      else {
        puVar4 = (uint *)(uVar16 * 4 +
                         uVar8 * 0x34 +
                         *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34));
        uVar19 = *puVar4 >> 6 & 0x1fff;
        if (uVar19 == 0) goto LAB_800b1fe4;
        iVar11 = 3;
        if ((2 < uVar19) || (iVar11 = 1, *(s8 *)((int)puVar4 + 3) == '\0')) goto LAB_800b2048;
        if ((*(byte *)(param_2 + 0x15) != uVar8) ||
           (pcVar5 = &DAT_80100f91, *(byte *)(param_2 + 0x16) != uVar16)) {
          iVar11 = 2;
          if (*(byte *)(param_3 + 0x15) == uVar8) {
            pcVar5 = &DAT_80100f92;
            if (*(byte *)(param_3 + 0x16) != uVar16) goto LAB_800b204c;
            iVar11 = 1;
          }
          goto LAB_800b2048;
        }
      }
LAB_800b204c:
      *pbVar6 = *pbVar6 + *pcVar5;
      iVar13 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
      iVar11 = 0;
      if (((-1 < (int)uVar16) && (uVar8 < 0xd)) && ((int)uVar16 < 0xd)) {
        iVar11 = (*(uint *)(uVar16 * 4 + uVar8 * 0x34 + iVar13) >> 0x13 & 7) -
                 ((int)((*(uint *)((uint)*(byte *)(param_2 + 0x16) * 4 +
                                  (uint)*(byte *)(param_2 + 0x15) * 0x34 + iVar13) >> 0x13 & 7) +
                       (*(uint *)((uint)*(byte *)(param_3 + 0x16) * 4 +
                                 (uint)*(byte *)(param_3 + 0x15) * 0x34 + iVar13) >> 0x13 & 7)) >> 1
                 );
      }
      if (0 < iVar11) {
        *pbVar6 = *pbVar6 + (s8)iVar11 * '\x02';
      }
      uVar19 = uVar8 + 1;
      if ((((int)uVar16 < 0) || (0xc < uVar19)) || (0xc < (int)uVar16)) {
LAB_800b21d0:
        iVar11 = 0;
LAB_800b2234:
        pcVar5 = ((u8 *)0x80100F90) + iVar11;
      }
      else {
        puVar4 = (uint *)(uVar16 * 4 +
                         uVar19 * 0x34 +
                         *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34));
        uVar3 = *puVar4 >> 6 & 0x1fff;
        if (uVar3 == 0) goto LAB_800b21d0;
        iVar11 = 3;
        if ((2 < uVar3) || (iVar11 = 1, *(s8 *)((int)puVar4 + 3) == '\0')) goto LAB_800b2234;
        if ((*(byte *)(param_2 + 0x15) != uVar19) ||
           (pcVar5 = &DAT_80100f91, *(byte *)(param_2 + 0x16) != uVar16)) {
          iVar11 = 2;
          if (*(byte *)(param_3 + 0x15) == uVar19) {
            pcVar5 = &DAT_80100f92;
            if (*(byte *)(param_3 + 0x16) != uVar16) goto LAB_800b2238;
            iVar11 = 1;
          }
          goto LAB_800b2234;
        }
      }
LAB_800b2238:
      *pbVar6 = *pbVar6 + *pcVar5;
      iVar13 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
      iVar11 = 0;
      if (((-1 < (int)uVar16) && (uVar8 + 1 < 0xd)) && ((int)uVar16 < 0xd)) {
        iVar11 = (*(uint *)(uVar16 * 4 + (uVar8 + 1) * 0x34 + iVar13) >> 0x13 & 7) -
                 ((int)((*(uint *)((uint)*(byte *)(param_2 + 0x16) * 4 +
                                  (uint)*(byte *)(param_2 + 0x15) * 0x34 + iVar13) >> 0x13 & 7) +
                       (*(uint *)((uint)*(byte *)(param_3 + 0x16) * 4 +
                                 (uint)*(byte *)(param_3 + 0x15) * 0x34 + iVar13) >> 0x13 & 7)) >> 1
                 );
      }
      if (0 < iVar11) {
        *pbVar6 = *pbVar6 + (s8)iVar11 * '\x02';
      }
      uVar19 = uVar16 - 1;
      if ((((int)uVar19 < 0) || (0xc < uVar8)) || (0xc < (int)uVar19)) {
LAB_800b23bc:
        iVar11 = 0;
LAB_800b2420:
        pcVar5 = ((u8 *)0x80100F90) + iVar11;
      }
      else {
        puVar4 = (uint *)(uVar19 * 4 +
                         uVar8 * 0x34 +
                         *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34));
        uVar3 = *puVar4 >> 6 & 0x1fff;
        if (uVar3 == 0) goto LAB_800b23bc;
        iVar11 = 3;
        if ((2 < uVar3) || (iVar11 = 1, *(s8 *)((int)puVar4 + 3) == '\0')) goto LAB_800b2420;
        if ((*(byte *)(param_2 + 0x15) != uVar8) ||
           (pcVar5 = &DAT_80100f91, *(byte *)(param_2 + 0x16) != uVar19)) {
          iVar11 = 2;
          if (*(byte *)(param_3 + 0x15) == uVar8) {
            pcVar5 = &DAT_80100f92;
            if (*(byte *)(param_3 + 0x16) != uVar19) goto LAB_800b2424;
            iVar11 = 1;
          }
          goto LAB_800b2420;
        }
      }
LAB_800b2424:
      *pbVar6 = *pbVar6 + *pcVar5;
      bVar2 = *(byte *)(param_1 + 0x5d9);
      iVar17 = uVar16 - 1;
      goto LAB_800b1aa0;
    case '\x02':
    case '\x06':
      iVar11 = 1;
      if (*pcVar20 == '\x06') {
        iVar11 = -1;
      }
      iVar13 = 3;
      if ((local_27 & 1) != 0) {
        iVar13 = 2;
      }
      iVar14 = 1;
      if ((local_30[8] & 1) != 0) {
        iVar14 = 2;
      }
      iVar17 = 0;
      if (iVar13 != 0) {
        do {
          iVar15 = 0;
          if (iVar14 != 0) {
            do {
              uVar8 = (uint)(local_30[8] >> 1) + iVar11 + iVar15;
              uVar16 = (uint)(local_27 >> 1) - (iVar17 + -1);
              if (((((int)uVar8 < 0) || ((int)uVar16 < 0)) || (0xc < (int)uVar8)) ||
                 (0xc < (int)uVar16)) {
LAB_800b1400:
                iVar9 = 0;
LAB_800b1464:
                pcVar5 = ((u8 *)0x80100F90) + iVar9;
              }
              else {
                puVar4 = (uint *)(uVar16 * 4 +
                                 uVar8 * 0x34 +
                                 *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34));
                uVar19 = *puVar4 >> 6 & 0x1fff;
                if (uVar19 == 0) goto LAB_800b1400;
                iVar9 = 3;
                if ((2 < uVar19) || (iVar9 = 1, *(s8 *)((int)puVar4 + 3) == '\0'))
                goto LAB_800b1464;
                if ((*(byte *)(param_2 + 0x15) != uVar8) ||
                   (pcVar5 = &DAT_80100f91, *(byte *)(param_2 + 0x16) != uVar16)) {
                  iVar9 = 2;
                  if (*(byte *)(param_3 + 0x15) == uVar8) {
                    pcVar5 = &DAT_80100f92;
                    if (*(byte *)(param_3 + 0x16) != uVar16) goto LAB_800b1468;
                    iVar9 = 1;
                  }
                  goto LAB_800b1464;
                }
              }
LAB_800b1468:
              *pbVar6 = *pbVar6 + *pcVar5;
              iVar9 = (uint)(local_30[8] >> 1) + iVar11 + iVar15;
              iVar7 = (uint)(local_27 >> 1) - (iVar17 + -1);
              iVar12 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
              iVar10 = 0;
              if (((-1 < iVar9) && (-1 < iVar7)) && ((iVar9 < 0xd && (iVar7 < 0xd)))) {
                iVar10 = (*(uint *)(iVar7 * 4 + iVar9 * 0x34 + iVar12) >> 0x13 & 7) -
                         ((int)((*(uint *)((uint)*(byte *)(param_2 + 0x16) * 4 +
                                          (uint)*(byte *)(param_2 + 0x15) * 0x34 + iVar12) >> 0x13 &
                                7) + (*(uint *)((uint)*(byte *)(param_3 + 0x16) * 4 +
                                               (uint)*(byte *)(param_3 + 0x15) * 0x34 + iVar12) >>
                                      0x13 & 7)) >> 1);
              }
              if (0 < iVar10) {
                *pbVar6 = *pbVar6 + (s8)iVar10 * '\x02';
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < iVar14);
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < iVar13);
      }
      break;
    case '\x03':
      uVar8 = (int)(local_30[8] + 2) >> 1;
      uVar16 = (int)(local_27 + 2) >> 1;
      if ((uVar8 < 0xd) && (uVar16 < 0xd)) {
        puVar4 = (uint *)(uVar16 * 4 +
                         uVar8 * 0x34 +
                         *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34));
        uVar19 = *puVar4 >> 6 & 0x1fff;
        if (uVar19 == 0) goto LAB_800b1b6c;
        iVar11 = 3;
        if ((2 < uVar19) || (iVar11 = 1, *(s8 *)((int)puVar4 + 3) == '\0')) goto LAB_800b1bd0;
        if ((*(byte *)(param_2 + 0x15) != uVar8) ||
           (pcVar5 = &DAT_80100f91, *(byte *)(param_2 + 0x16) != uVar16)) {
          iVar11 = 2;
          if (*(byte *)(param_3 + 0x15) == uVar8) {
            pcVar5 = &DAT_80100f92;
            if (*(byte *)(param_3 + 0x16) != uVar16) goto LAB_800b1bd4;
            iVar11 = 1;
          }
          goto LAB_800b1bd0;
        }
      }
      else {
LAB_800b1b6c:
        iVar11 = 0;
LAB_800b1bd0:
        pcVar5 = ((u8 *)0x80100F90) + iVar11;
      }
LAB_800b1bd4:
      *pbVar6 = *pbVar6 + *pcVar5;
      iVar13 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
      iVar11 = 0;
      if ((uVar8 < 0xd) && (uVar16 < 0xd)) {
        iVar11 = (*(uint *)(uVar16 * 4 + uVar8 * 0x34 + iVar13) >> 0x13 & 7) -
                 ((int)((*(uint *)((uint)*(byte *)(param_2 + 0x16) * 4 +
                                  (uint)*(byte *)(param_2 + 0x15) * 0x34 + iVar13) >> 0x13 & 7) +
                       (*(uint *)((uint)*(byte *)(param_3 + 0x16) * 4 +
                                 (uint)*(byte *)(param_3 + 0x15) * 0x34 + iVar13) >> 0x13 & 7)) >> 1
                 );
      }
      if (0 < iVar11) {
        *pbVar6 = *pbVar6 + (s8)iVar11 * '\x02';
      }
      uVar19 = uVar8 + 1;
      if ((uVar19 < 0xd) && (uVar16 < 0xd)) {
        puVar4 = (uint *)(uVar16 * 4 +
                         uVar19 * 0x34 +
                         *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34));
        uVar3 = *puVar4 >> 6 & 0x1fff;
        if (uVar3 == 0) goto LAB_800b1d58;
        iVar11 = 3;
        if ((2 < uVar3) || (iVar11 = 1, *(s8 *)((int)puVar4 + 3) == '\0')) goto LAB_800b1dbc;
        if ((*(byte *)(param_2 + 0x15) != uVar19) ||
           (pcVar5 = &DAT_80100f91, *(byte *)(param_2 + 0x16) != uVar16)) {
          iVar11 = 2;
          if (*(byte *)(param_3 + 0x15) == uVar19) {
            pcVar5 = &DAT_80100f92;
            if (*(byte *)(param_3 + 0x16) != uVar16) goto LAB_800b1dc0;
            iVar11 = 1;
          }
          goto LAB_800b1dbc;
        }
      }
      else {
LAB_800b1d58:
        iVar11 = 0;
LAB_800b1dbc:
        pcVar5 = ((u8 *)0x80100F90) + iVar11;
      }
LAB_800b1dc0:
      *pbVar6 = *pbVar6 + *pcVar5;
      iVar13 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
      iVar11 = 0;
      if ((uVar8 + 1 < 0xd) && (uVar16 < 0xd)) {
        iVar11 = (*(uint *)(uVar16 * 4 + (uVar8 + 1) * 0x34 + iVar13) >> 0x13 & 7) -
                 ((int)((*(uint *)((uint)*(byte *)(param_2 + 0x16) * 4 +
                                  (uint)*(byte *)(param_2 + 0x15) * 0x34 + iVar13) >> 0x13 & 7) +
                       (*(uint *)((uint)*(byte *)(param_3 + 0x16) * 4 +
                                 (uint)*(byte *)(param_3 + 0x15) * 0x34 + iVar13) >> 0x13 & 7)) >> 1
                 );
      }
      if (0 < iVar11) {
        *pbVar6 = *pbVar6 + (s8)iVar11 * '\x02';
      }
      uVar19 = uVar16 + 1;
      if ((0xc < uVar8) || (0xc < uVar19)) goto LAB_800b1a1c;
      puVar4 = (uint *)(uVar19 * 4 +
                       uVar8 * 0x34 +
                       *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34));
      uVar3 = *puVar4 >> 6 & 0x1fff;
      if (uVar3 == 0) goto LAB_800b1a1c;
      iVar11 = 3;
      if (2 < uVar3) goto LAB_800b1a80;
LAB_800b1a2c:
      iVar11 = 1;
      if (*(s8 *)((int)puVar4 + 3) == '\0') goto LAB_800b1a80;
      if ((*(byte *)(param_2 + 0x15) != uVar8) ||
         (pcVar5 = &DAT_80100f91, *(byte *)(param_2 + 0x16) != uVar19)) {
        iVar11 = 2;
        if (*(byte *)(param_3 + 0x15) == uVar8) {
          pcVar5 = &DAT_80100f92;
          if (*(byte *)(param_3 + 0x16) != uVar19) goto LAB_800b1a84;
          iVar11 = 1;
        }
        goto LAB_800b1a80;
      }
      goto LAB_800b1a84;
    case '\x05':
      uVar8 = (int)(local_30[8] - 1) / 2;
      uVar16 = (int)(local_27 + 2) >> 1;
      if ((((int)uVar8 < 0) || (0xc < (int)uVar8)) || (0xc < uVar16)) {
LAB_800b1644:
        iVar11 = 0;
LAB_800b16a8:
        pcVar5 = ((u8 *)0x80100F90) + iVar11;
      }
      else {
        puVar4 = (uint *)(uVar16 * 4 +
                         uVar8 * 0x34 +
                         *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34));
        uVar19 = *puVar4 >> 6 & 0x1fff;
        if (uVar19 == 0) goto LAB_800b1644;
        iVar11 = 3;
        if ((2 < uVar19) || (iVar11 = 1, *(s8 *)((int)puVar4 + 3) == '\0')) goto LAB_800b16a8;
        if ((*(byte *)(param_2 + 0x15) != uVar8) ||
           (pcVar5 = &DAT_80100f91, *(byte *)(param_2 + 0x16) != uVar16)) {
          iVar11 = 2;
          if (*(byte *)(param_3 + 0x15) == uVar8) {
            pcVar5 = &DAT_80100f92;
            if (*(byte *)(param_3 + 0x16) != uVar16) goto LAB_800b16ac;
            iVar11 = 1;
          }
          goto LAB_800b16a8;
        }
      }
LAB_800b16ac:
      *pbVar6 = *pbVar6 + *pcVar5;
      iVar13 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
      iVar11 = 0;
      if (((-1 < (int)uVar8) && ((int)uVar8 < 0xd)) && (uVar16 < 0xd)) {
        iVar11 = (*(uint *)(uVar16 * 4 + uVar8 * 0x34 + iVar13) >> 0x13 & 7) -
                 ((int)((*(uint *)((uint)*(byte *)(param_2 + 0x16) * 4 +
                                  (uint)*(byte *)(param_2 + 0x15) * 0x34 + iVar13) >> 0x13 & 7) +
                       (*(uint *)((uint)*(byte *)(param_3 + 0x16) * 4 +
                                 (uint)*(byte *)(param_3 + 0x15) * 0x34 + iVar13) >> 0x13 & 7)) >> 1
                 );
      }
      if (0 < iVar11) {
        *pbVar6 = *pbVar6 + (s8)iVar11 * '\x02';
      }
      uVar19 = uVar8 - 1;
      if ((((int)uVar19 < 0) || (0xc < (int)uVar19)) || (0xc < uVar16)) {
LAB_800b1830:
        iVar11 = 0;
LAB_800b1894:
        pcVar5 = ((u8 *)0x80100F90) + iVar11;
      }
      else {
        puVar4 = (uint *)(uVar16 * 4 +
                         uVar19 * 0x34 +
                         *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34));
        uVar3 = *puVar4 >> 6 & 0x1fff;
        if (uVar3 == 0) goto LAB_800b1830;
        iVar11 = 3;
        if ((2 < uVar3) || (iVar11 = 1, *(s8 *)((int)puVar4 + 3) == '\0')) goto LAB_800b1894;
        if ((*(byte *)(param_2 + 0x15) != uVar19) ||
           (pcVar5 = &DAT_80100f91, *(byte *)(param_2 + 0x16) != uVar16)) {
          iVar11 = 2;
          if (*(byte *)(param_3 + 0x15) == uVar19) {
            pcVar5 = &DAT_80100f92;
            if (*(byte *)(param_3 + 0x16) != uVar16) goto LAB_800b1898;
            iVar11 = 1;
          }
          goto LAB_800b1894;
        }
      }
LAB_800b1898:
      *pbVar6 = *pbVar6 + *pcVar5;
      iVar11 = uVar8 - 1;
      iVar14 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
      iVar13 = 0;
      if (((-1 < iVar11) && (iVar11 < 0xd)) && (uVar16 < 0xd)) {
        iVar13 = (*(uint *)(uVar16 * 4 + iVar11 * 0x34 + iVar14) >> 0x13 & 7) -
                 ((int)((*(uint *)((uint)*(byte *)(param_2 + 0x16) * 4 +
                                  (uint)*(byte *)(param_2 + 0x15) * 0x34 + iVar14) >> 0x13 & 7) +
                       (*(uint *)((uint)*(byte *)(param_3 + 0x16) * 4 +
                                 (uint)*(byte *)(param_3 + 0x15) * 0x34 + iVar14) >> 0x13 & 7)) >> 1
                 );
      }
      if (0 < iVar13) {
        *pbVar6 = *pbVar6 + (s8)iVar13 * '\x02';
      }
      uVar19 = uVar16 + 1;
      if (((-1 < (int)uVar8) && ((int)uVar8 < 0xd)) && (uVar19 < 0xd)) {
        puVar4 = (uint *)(uVar19 * 4 +
                         uVar8 * 0x34 +
                         *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34));
        uVar3 = *puVar4 >> 6 & 0x1fff;
        if (uVar3 != 0) {
          iVar11 = 3;
          if (uVar3 < 3) goto LAB_800b1a2c;
          goto LAB_800b1a80;
        }
      }
LAB_800b1a1c:
      iVar11 = 0;
LAB_800b1a80:
      pcVar5 = ((u8 *)0x80100F90) + iVar11;
LAB_800b1a84:
      *pbVar6 = *pbVar6 + *pcVar5;
      bVar2 = *(byte *)(param_1 + 0x5d9);
      iVar17 = uVar16 + 1;
LAB_800b1aa0:
      iVar13 = *(int *)(((u8 *)0x801010B0) + (uint)bVar2 * 0x34);
      iVar11 = 0;
      if (((-1 < (int)uVar8) && (-1 < iVar17)) &&
         (((int)uVar8 < 0xd && (iVar14 = iVar17 << 2, iVar17 < 0xd)))) {
LAB_800b2980:
        iVar11 = (*(uint *)(iVar14 + uVar8 * 0x34 + iVar13) >> 0x13 & 7) -
                 ((int)((*(uint *)((uint)*(byte *)(param_2 + 0x16) * 4 +
                                  (uint)*(byte *)(param_2 + 0x15) * 0x34 + iVar13) >> 0x13 & 7) +
                       (*(uint *)((uint)*(byte *)(param_3 + 0x16) * 4 +
                                 (uint)*(byte *)(param_3 + 0x15) * 0x34 + iVar13) >> 0x13 & 7)) >> 1
                 );
      }
LAB_800b2a18:
      if (0 < iVar11) {
        *pbVar6 = *pbVar6 + (s8)iVar11 * '\x02';
      }
      break;
    case '\a':
      uVar8 = (int)(local_30[8] - 1) / 2;
      uVar16 = (int)(local_27 - 1) / 2;
      if ((((int)uVar8 < 0) || ((int)uVar16 < 0)) || ((0xc < (int)uVar8 || (0xc < (int)uVar16)))) {
LAB_800b24dc:
        iVar11 = 0;
LAB_800b2540:
        pcVar5 = ((u8 *)0x80100F90) + iVar11;
      }
      else {
        puVar4 = (uint *)(uVar16 * 4 +
                         uVar8 * 0x34 +
                         *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34));
        uVar19 = *puVar4 >> 6 & 0x1fff;
        if (uVar19 == 0) goto LAB_800b24dc;
        iVar11 = 3;
        if ((2 < uVar19) || (iVar11 = 1, *(s8 *)((int)puVar4 + 3) == '\0')) goto LAB_800b2540;
        if ((*(byte *)(param_2 + 0x15) != uVar8) ||
           (pcVar5 = &DAT_80100f91, *(byte *)(param_2 + 0x16) != uVar16)) {
          iVar11 = 2;
          if (*(byte *)(param_3 + 0x15) == uVar8) {
            pcVar5 = &DAT_80100f92;
            if (*(byte *)(param_3 + 0x16) != uVar16) goto LAB_800b2544;
            iVar11 = 1;
          }
          goto LAB_800b2540;
        }
      }
LAB_800b2544:
      *pbVar6 = *pbVar6 + *pcVar5;
      iVar13 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
      iVar11 = 0;
      if ((((-1 < (int)uVar8) && (-1 < (int)uVar16)) && ((int)uVar8 < 0xd)) && ((int)uVar16 < 0xd))
      {
        iVar11 = (*(uint *)(uVar16 * 4 + uVar8 * 0x34 + iVar13) >> 0x13 & 7) -
                 ((int)((*(uint *)((uint)*(byte *)(param_2 + 0x16) * 4 +
                                  (uint)*(byte *)(param_2 + 0x15) * 0x34 + iVar13) >> 0x13 & 7) +
                       (*(uint *)((uint)*(byte *)(param_3 + 0x16) * 4 +
                                 (uint)*(byte *)(param_3 + 0x15) * 0x34 + iVar13) >> 0x13 & 7)) >> 1
                 );
      }
      if (0 < iVar11) {
        *pbVar6 = *pbVar6 + (s8)iVar11 * '\x02';
      }
      uVar19 = uVar8 - 1;
      if ((((int)uVar19 < 0) || ((int)uVar16 < 0)) || ((0xc < (int)uVar19 || (0xc < (int)uVar16))))
      {
LAB_800b26c8:
        iVar11 = 0;
LAB_800b272c:
        pcVar5 = ((u8 *)0x80100F90) + iVar11;
      }
      else {
        puVar4 = (uint *)(uVar16 * 4 +
                         uVar19 * 0x34 +
                         *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34));
        uVar3 = *puVar4 >> 6 & 0x1fff;
        if (uVar3 == 0) goto LAB_800b26c8;
        iVar11 = 3;
        if ((2 < uVar3) || (iVar11 = 1, *(s8 *)((int)puVar4 + 3) == '\0')) goto LAB_800b272c;
        if ((*(byte *)(param_2 + 0x15) != uVar19) ||
           (pcVar5 = &DAT_80100f91, *(byte *)(param_2 + 0x16) != uVar16)) {
          iVar11 = 2;
          if (*(byte *)(param_3 + 0x15) == uVar19) {
            pcVar5 = &DAT_80100f92;
            if (*(byte *)(param_3 + 0x16) != uVar16) goto LAB_800b2730;
            iVar11 = 1;
          }
          goto LAB_800b272c;
        }
      }
LAB_800b2730:
      *pbVar6 = *pbVar6 + *pcVar5;
      iVar11 = uVar8 - 1;
      iVar14 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
      iVar13 = 0;
      if ((((-1 < iVar11) && (-1 < (int)uVar16)) && (iVar11 < 0xd)) && ((int)uVar16 < 0xd)) {
        iVar13 = (*(uint *)(uVar16 * 4 + iVar11 * 0x34 + iVar14) >> 0x13 & 7) -
                 ((int)((*(uint *)((uint)*(byte *)(param_2 + 0x16) * 4 +
                                  (uint)*(byte *)(param_2 + 0x15) * 0x34 + iVar14) >> 0x13 & 7) +
                       (*(uint *)((uint)*(byte *)(param_3 + 0x16) * 4 +
                                 (uint)*(byte *)(param_3 + 0x15) * 0x34 + iVar14) >> 0x13 & 7)) >> 1
                 );
      }
      if (0 < iVar13) {
        *pbVar6 = *pbVar6 + (s8)iVar13 * '\x02';
      }
      uVar19 = uVar16 - 1;
      if ((((int)uVar8 < 0) || ((int)uVar19 < 0)) || ((0xc < (int)uVar8 || (0xc < (int)uVar19)))) {
LAB_800b28b4:
        iVar11 = 0;
LAB_800b2918:
        pcVar5 = ((u8 *)0x80100F90) + iVar11;
      }
      else {
        puVar4 = (uint *)(uVar19 * 4 +
                         uVar8 * 0x34 +
                         *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34));
        uVar3 = *puVar4 >> 6 & 0x1fff;
        if (uVar3 == 0) goto LAB_800b28b4;
        iVar11 = 3;
        if ((2 < uVar3) || (iVar11 = 1, *(s8 *)((int)puVar4 + 3) == '\0')) goto LAB_800b2918;
        if ((*(byte *)(param_2 + 0x15) != uVar8) ||
           (pcVar5 = &DAT_80100f91, *(byte *)(param_2 + 0x16) != uVar19)) {
          iVar11 = 2;
          if (*(byte *)(param_3 + 0x15) == uVar8) {
            pcVar5 = &DAT_80100f92;
            if (*(byte *)(param_3 + 0x16) != uVar19) goto LAB_800b291c;
            iVar11 = 1;
          }
          goto LAB_800b2918;
        }
      }
LAB_800b291c:
      *pbVar6 = *pbVar6 + *pcVar5;
      iVar13 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
      iVar11 = uVar16 - 1;
      if ((((-1 < (int)uVar8) && (-1 < iVar11)) && ((int)uVar8 < 0xd)) &&
         (iVar14 = iVar11 * 4, iVar11 < 0xd)) goto LAB_800b2980;
      iVar11 = 0;
      goto LAB_800b2a18;
    }
    pbVar6 = pbVar6 + 1;
    iVar18 = iVar18 + 1;
    pcVar20 = pcVar20 + 1;
    if (7 < iVar18) {
      uVar8 = 0;
      pbVar6 = local_30 + 1;
      uVar16 = 1;
      do {
        if (*pbVar6 < local_30[uVar8 & 0xff]) {
          uVar8 = uVar16;
        }
        uVar19 = uVar16 + 1;
        pbVar6 = local_30 + uVar16 + 1;
        uVar16 = uVar19;
      } while ((int)uVar19 < 8);
      return local_38[uVar8 & 0xff];
    }
  } while( true );
}

#undef local_38
#undef local_30
#undef local_27
