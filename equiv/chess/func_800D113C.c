/* rand-ptr: 0x80118C1C 1 */
/* rand-mem: 0x80118C22 1 8 */
/* rand-u16: 0x800859F4 1 0,256,512,768,1024,1280,1536,1792 */
#include "common.h"

#include "ghidra.h"
#define DAT_80063948 (*(s32 *)0x80063948)
#define DAT_800859f4 (*(u16 *)0x800859F4)
#define DAT_80085a10 (*(u8 *)0x80085A10)
#define DAT_80085cf8 (*(s32 *)0x80085CF8)
#define DAT_80118c22 (*(u8 *)0x80118C22)
#define DAT_80118faa (*(s32 *)0x80118FAA)
#define DAT_80118fae (*(s32 *)0x80118FAE)
#define DAT_80118fb2 (*(u8 *)0x80118FB2)
#define DAT_80118fb4 (*(u8 *)0x80118FB4)
#define DAT_80118fb5 (*(u8 *)0x80118FB5)
#define DAT_80118fb6 (*(u8 *)0x80118FB6)
#define DAT_80118fba (*(u8 *)0x80118FBA)
#define DAT_80118fdd (*(u8 *)0x80118FDD)
#define DAT_80118fde (*(u8 *)0x80118FDE)
#define DAT_80118fe4 (*(u8 *)0x80118FE4)
#define DAT_80118fe6 (*(u8 *)0x80118FE6)
#define DAT_80119007 (*(u8 *)0x80119007)
#define DAT_80119008 (*(u8 *)0x80119008)
#define D_80118C1C (*(u16 **)0x80118C1C)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_800D10A0 ((s32 (*)())0x800D10A0)
#define func_800D28C0 ((s32 (*)())0x800D28C0)
#define func_800D497C ((s32 (*)())0x800D497C)
int func_800D113C(void)

{
  ushort uVar1;
  bool bVar2;
  short *psVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  byte *pbVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  char acStack_100 [184];
  undefined1 local_48;
  byte local_40;
  uint local_30;
  uint uStack_2c;

  iVar13 = (uint)DAT_80118c22 * 0x10e;
  iVar25 = (int)&DAT_80118faa + iVar13;
  if ((&DAT_80118fb2)[iVar13] == '\0') {
    sVar12 = D_80118C1C[2];
  }
  else {
    sVar12 = -D_80118C1C[2];
  }
  uVar19 = (DAT_800859f4 & 0x700) >> 8;
  if (uVar19 == 0) {
LAB_800d120c:
    sVar6 = D_80118C1C[4] * (ushort)DAT_80118c22 - D_80118C1C[1];
  }
  else {
    sVar6 = 0;
    if (uVar19 != 7) {
      if ((&DAT_80118fb4)[iVar13] == '\0') goto LAB_800d120c;
      sVar6 = (short)(((uint)(ushort)D_80118C1C[3] * (uint)(byte)(&DAT_80118fb4)[iVar13]) / uVar19);
    }
  }
  uVar19 = (DAT_800859f4 & 0x700) >> 8;
  if (uVar19 != 0) {
    sVar7 = 0;
    if (uVar19 == 7) goto code_r0x800d130c;
    if ((&DAT_80118fb5)[iVar13] != '\0') {
      sVar7 = (short)(((uint)(ushort)D_80118C1C[3] * (uint)(byte)(&DAT_80118fb5)[iVar13]) / uVar19);
      goto code_r0x800d130c;
    }
  }
  sVar7 = D_80118C1C[4] * (ushort)DAT_80118c22 - D_80118C1C[1];
code_r0x800d130c:
  if (*(char *)((int)&DAT_80118fb6 + iVar13 + 2) == '\0') {
    sVar8 = D_80118C1C[4] * (ushort)DAT_80118c22 - *D_80118C1C;
  }
  else {
    sVar8 = (short)(uint)((ulonglong)
                          ((longlong)
                           (int)((uint)(ushort)D_80118C1C[6] *
                                (uint)*(byte *)((int)&DAT_80118fb6 + iVar13 + 2)) * 0x66666667) >>
                         0x21);
  }
  if (*(char *)((int)&DAT_80118fb6 + iVar13 + 3) == '\0') {
    sVar9 = D_80118C1C[4] * (ushort)DAT_80118c22 - *D_80118C1C;
  }
  else {
    sVar9 = (short)(uint)((ulonglong)
                          ((longlong)
                           (int)((uint)(ushort)D_80118C1C[6] *
                                (uint)*(byte *)((int)&DAT_80118fb6 + iVar13 + 3)) * 0x66666667) >>
                         0x21);
  }
  if (*(byte *)((int)&DAT_80118fb6 + iVar13) < 5) {
    sVar10 = (short)((int)((uint)(ushort)D_80118C1C[5] *
                          (5 - (uint)*(byte *)((int)&DAT_80118fb6 + iVar13))) / 5);
  }
  else {
    sVar10 = D_80118C1C[4] * (ushort)DAT_80118c22 - D_80118C1C[1];
  }
  if (*(byte *)((int)&DAT_80118fb6 + iVar13 + 1) < 5) {
    sVar11 = (short)((int)((uint)(ushort)D_80118C1C[5] *
                          (5 - (uint)*(byte *)((int)&DAT_80118fb6 + iVar13 + 1))) / 5);
  }
  else {
    sVar11 = D_80118C1C[4] * (ushort)DAT_80118c22 - D_80118C1C[1];
  }
  iVar26 = ((((((int)sVar12 + (int)sVar6) - (int)sVar7) + (int)sVar8) - (int)sVar9) + (int)sVar10) -
           (int)sVar11;
  uVar19 = 1;
  uVar23 = 1;
  uVar27 = 0;
  do {
    psVar3 = D_80118C1C;
    pbVar20 = (byte *)((int)&DAT_80118fba + (uVar27 & 0xff) * 7 + iVar13);
    local_48 = (undefined1)uVar23;
    sVar12 = 0;
    if (pbVar20[2] != 0) {
      if (DAT_80118fb2 == 0) {
        uVar1 = D_80118C1C[7];
      }
      else {
        uVar1 = D_80118C1C[8];
      }
      iVar21 = (uint)(byte)(&DAT_80118fdd)[iVar13] - (uint)*pbVar20;
      iVar24 = (uint)uVar1 * (uint)pbVar20[2] + (uint)(ushort)D_80118C1C[9] * (uint)pbVar20[3] +
               (uint)(ushort)D_80118C1C[10] * (uint)pbVar20[4] +
               (uint)(ushort)D_80118C1C[0xb] * (uint)pbVar20[5] +
               (uint)(ushort)D_80118C1C[0xc] * (uint)pbVar20[6];
      if (iVar21 < 0) {
        iVar21 = (uint)*pbVar20 - (uint)(byte)(&DAT_80118fdd)[iVar13];
      }
      iVar18 = (uint)(byte)(&DAT_80118fde)[iVar13] - (uint)pbVar20[1];
      iVar14 = (uint)pbVar20[1] - (uint)(byte)(&DAT_80118fde)[iVar13];
      if (-1 < iVar18) {
        iVar14 = iVar18;
      }
      if (iVar21 + iVar14 == uVar19) {
        iVar24 = iVar24 + (uint)(ushort)D_80118C1C[0x10];
      }
      uVar22 = uVar27 & 0xff;
      uVar15 = uVar22 + 1;
      iVar21 = (uint)DAT_80118c22 * 0x10e;
      iVar14 = ((uVar15 & 0x7f) - 1) * 7 + ((uVar15 & 0xff) >> 7) * 0x2a + iVar21;
      iVar18 = (uint)*(byte *)((int)&DAT_80118fba + iVar14) - (uint)(byte)(&DAT_80119007)[iVar21];
      uVar16 = (uint)*(byte *)((int)&DAT_80118fba + iVar14 + 1) -
               (uint)(byte)(&DAT_80119008)[iVar21];
      if (iVar18 == 0) {
        uVar17 = uVar16;
        if ((int)uVar16 < 0) {
          uVar17 = -uVar16;
        }
        bVar2 = true;
        if (uVar17 != uVar19) goto LAB_800d16dc;
      }
      else {
LAB_800d16dc:
        bVar2 = false;
        if ((uVar16 & 0xffff) == 0) {
          uVar16 = (uint)(short)iVar18;
          if ((int)uVar16 < 0) {
            uVar16 = -uVar16;
          }
          bVar2 = false;
          if (uVar16 == uVar19) {
            bVar2 = true;
          }
        }
      }
      if (bVar2) {
        sVar12 = D_80118C1C[0xe] *
                 (D_80118C1C[0xf] +
                 (ushort)*(byte *)((int)&DAT_80118fba + uVar22 * 7 + (uint)DAT_80118c22 * 0x10e + 2)
                 );
      }
      else {
        switch(*(uint *)(&DAT_80063948 + (uint)(byte)(&DAT_80085a10)[uVar22 * 0x7c] * 0x3c) >> 8 &
               0xf) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 5:
        case 7:
        case 8:
        case 9:
          iVar14 = (uint)DAT_80118c22 * 0x10e;
          iVar21 = ((uVar15 & 0x7f) - 1) * 7 + ((uVar15 & 0xff) >> 7) * 0x2a + iVar14;
          uVar15 = (uint)*(byte *)((int)&DAT_80118fba + iVar21);
          iVar18 = uVar15 - (byte)(&DAT_80119007)[iVar14];
          if (iVar18 < 0) {
            iVar18 = (byte)(&DAT_80119007)[iVar14] - uVar15;
          }
          uVar15 = (uint)*(byte *)((int)&DAT_80118fba + iVar21 + 1);
          iVar21 = uVar15 - (byte)(&DAT_80119008)[iVar14];
          if (iVar21 < 0) {
            iVar21 = iVar18 + ((byte)(&DAT_80119008)[iVar14] - uVar15) + -1;
          }
          else {
            iVar21 = iVar18 + iVar21 + -1;
          }
          break;
        case 4:
        case 6:
          iVar18 = (uint)DAT_80118c22 * 0x10e;
          iVar14 = ((uVar15 & 0x7f) - 1) * 7 + ((uVar15 & 0xff) >> 7) * 0x2a + iVar18;
          iVar21 = (uint)(byte)(&DAT_80119007)[iVar18] -
                   (uint)*(byte *)((int)&DAT_80118fba + iVar14);
          if (iVar21 < 0) {
            iVar21 = -iVar21;
          }
          iVar14 = (uint)(byte)(&DAT_80119008)[iVar18] -
                   (uint)*(byte *)((int)&DAT_80118fba + iVar14 + 1);
          if (iVar14 < 0) {
            iVar14 = -iVar14;
          }
          if (iVar21 < iVar14) {
            iVar21 = iVar14;
          }
          break;
        default:
          iVar21 = 0x100;
        }
        sVar12 = (short)((int)(uint)(ushort)D_80118C1C[0x11] / (int)(short)iVar21);
      }
      local_30 = uVar19;
      iVar21 = func_800D497C(uVar23 & 0xff,acStack_100);
      iVar18 = 0;
      iVar14 = 0x2a;
      iVar21 = iVar24 + sVar12 + (uint)(ushort)psVar3[0x12] * iVar21;
      uVar19 = local_30;
      do {
        iVar24 = iVar25 + iVar14;
        if (*(char *)(iVar24 + 0x12) != '\0') {
          uVar16 = (uint)*(byte *)(iVar24 + 0x10);
          uVar15 = (uint)*(byte *)(iVar24 + 0x11);
          uVar23 = uVar16 + 1 & 0xff;
          if ((uVar23 < 0xd) && (uVar15 < 0xd)) {
            cVar4 = acStack_100[uVar15 + uVar23 * 0xd];
          }
          else {
            cVar4 = '\0';
          }
          cVar4 = cVar4 != '\0';
          uVar23 = uVar16 - 1 & 0xff;
          if ((uVar23 < 0xd) && (uVar15 < 0xd)) {
            cVar5 = acStack_100[uVar15 + uVar23 * 0xd];
          }
          else {
            cVar5 = '\0';
          }
          if (cVar5 != '\0') {
            cVar4 = cVar4 + '\x01';
          }
          if ((uVar16 < 0xd) && (uVar23 = uVar15 + 1 & 0xff, uVar23 < 0xd)) {
            cVar5 = acStack_100[uVar23 + uVar16 * 0xd];
          }
          else {
            cVar5 = '\0';
          }
          if (cVar5 != '\0') {
            cVar4 = cVar4 + '\x01';
          }
          if ((uVar16 < 0xd) && (uVar23 = uVar15 - 1 & 0xff, uVar23 < 0xd)) {
            cVar5 = acStack_100[uVar23 + uVar16 * 0xd];
          }
          else {
            cVar5 = '\0';
          }
          if (cVar5 != '\0') {
            cVar4 = cVar4 + '\x01';
          }
          if (cVar4 != '\0') {
            local_30 = uVar19;
            sVar12 = func_800D28C0(local_48,(uVar19 << 7 | iVar18 + 1U) & 0xff);
            uVar23 = (uint)*(byte *)(iVar25 + iVar14 + 0x12);
            uVar19 = local_30;
            if ((int)sVar12 < (int)uVar23) {
              iVar21 = iVar21 + (int)((uint)(ushort)psVar3[0x14] * (int)sVar12) / (int)uVar23;
            }
            else {
              iVar21 = iVar21 + (uint)(ushort)psVar3[0x14];
            }
          }
        }
        sVar12 = (short)iVar21;
        iVar18 = iVar18 + 1;
        iVar14 = iVar14 + 7;
      } while (iVar18 < 5);
    }
    iVar26 = iVar26 + sVar12;
    uVar15 = uVar27 + 1;
    uVar23 = uVar27 + 2;
    uVar27 = uVar15;
  } while ((int)uVar15 < 5);
  uVar19 = 1;
  iVar21 = 1;
  uVar27 = 0;
  do {
    psVar3 = D_80118C1C;
    local_40 = (byte)iVar21 | 0x80;
    pbVar20 = &DAT_80118fe4 + (uVar27 & 0xff) * 7 + iVar13;
    sVar12 = 0;
    if (pbVar20[2] != 0) {
      if (DAT_80118fb2 == uVar19) {
        uVar1 = D_80118C1C[7];
      }
      else {
        uVar1 = D_80118C1C[8];
      }
      iVar21 = (uint)(byte)(&DAT_80119007)[iVar13] - (uint)*pbVar20;
      iVar24 = (uint)uVar1 * (uint)pbVar20[2] + (uint)(ushort)D_80118C1C[9] * (uint)pbVar20[3] +
               (uint)(ushort)D_80118C1C[10] * (uint)pbVar20[4] +
               (uint)(ushort)D_80118C1C[0xb] * (uint)pbVar20[5] +
               (uint)(ushort)D_80118C1C[0xc] * (uint)pbVar20[6];
      if (iVar21 < 0) {
        iVar21 = (uint)*pbVar20 - (uint)(byte)(&DAT_80119007)[iVar13];
      }
      iVar18 = (uint)(byte)(&DAT_80119008)[iVar13] - (uint)pbVar20[1];
      iVar14 = (uint)pbVar20[1] - (uint)(byte)(&DAT_80119008)[iVar13];
      if (-1 < iVar18) {
        iVar14 = iVar18;
      }
      if (iVar21 + iVar14 == uVar19) {
        iVar24 = iVar24 + (uint)(ushort)D_80118C1C[0x10];
      }
      uVar16 = uVar27 & 0xff;
      uVar23 = uVar16 + 1;
      iVar21 = (uint)DAT_80118c22 * 0x10e;
      iVar14 = ((uVar23 & 0x7f) - 1) * 7 + ((uVar23 & 0xff | 0x80) >> 7) * 0x2a + iVar21;
      iVar18 = (uint)*(byte *)((int)&DAT_80118fba + iVar14) - (uint)(byte)(&DAT_80118fdd)[iVar21];
      uVar15 = (uint)*(byte *)((int)&DAT_80118fba + iVar14 + 1) -
               (uint)(byte)(&DAT_80118fde)[iVar21];
      if (iVar18 == 0) {
        uVar22 = uVar15;
        if ((int)uVar15 < 0) {
          uVar22 = -uVar15;
        }
        if (uVar22 != 1) goto LAB_800d1dbc;
        bVar2 = true;
      }
      else {
LAB_800d1dbc:
        bVar2 = false;
        if ((uVar15 & 0xffff) == 0) {
          uVar15 = (uint)(short)iVar18;
          if ((int)uVar15 < 0) {
            uVar15 = -uVar15;
          }
          bVar2 = false;
          if (uVar15 == uVar19) {
            bVar2 = true;
          }
        }
      }
      if (bVar2) {
        sVar12 = D_80118C1C[0xe] *
                 (D_80118C1C[0xf] +
                 (ushort)(byte)(&DAT_80118fe6)[uVar16 * 7 + (uint)DAT_80118c22 * 0x10e]);
      }
      else {
        switch(*(uint *)(&DAT_80063948 + (uint)(byte)(&DAT_80085cf8)[uVar16 * 0x7c] * 0x3c) >> 8 &
               0xf) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 5:
        case 7:
        case 8:
        case 9:
          iVar21 = (uint)DAT_80118c22 * 0x10e;
          iVar18 = ((uVar23 & 0x7f) - 1) * 7 + ((uVar23 & 0xff | 0x80) >> 7) * 0x2a + iVar21;
          uVar23 = (uint)*(byte *)((int)&DAT_80118fba + iVar18);
          iVar14 = uVar23 - (byte)(&DAT_80118fdd)[iVar21];
          if (iVar14 < 0) {
            iVar14 = (byte)(&DAT_80118fdd)[iVar21] - uVar23;
          }
          uVar23 = (uint)*(byte *)((int)&DAT_80118fba + iVar18 + 1);
          iVar18 = uVar23 - (byte)(&DAT_80118fde)[iVar21];
          if (iVar18 < 0) {
            iVar21 = iVar14 + ((byte)(&DAT_80118fde)[iVar21] - uVar23) + -1;
          }
          else {
            iVar21 = iVar14 + iVar18 + -1;
          }
          break;
        case 4:
        case 6:
          iVar18 = (uint)DAT_80118c22 * 0x10e;
          iVar14 = ((uVar23 & 0x7f) - 1) * 7 + ((uVar23 & 0xff | 0x80) >> 7) * 0x2a + iVar18;
          iVar21 = (uint)(byte)(&DAT_80118fdd)[iVar18] -
                   (uint)*(byte *)((int)&DAT_80118fba + iVar14);
          if (iVar21 < 0) {
            iVar21 = -iVar21;
          }
          iVar14 = (uint)(byte)(&DAT_80118fde)[iVar18] -
                   (uint)*(byte *)((int)&DAT_80118fba + iVar14 + 1);
          if (iVar14 < 0) {
            iVar14 = -iVar14;
          }
          if (iVar21 < iVar14) {
            iVar21 = iVar14;
          }
          break;
        default:
          iVar21 = 0x100;
        }
        sVar12 = (short)((int)(uint)(ushort)D_80118C1C[0x11] / (int)(short)iVar21);
      }
      uStack_2c = uVar19;
      iVar21 = func_800D497C(local_40,acStack_100);
      iVar18 = 0;
      iVar14 = 0;
      iVar21 = iVar24 + sVar12 + (uint)(ushort)psVar3[0x12] * iVar21;
      uVar19 = uStack_2c;
      do {
        iVar24 = iVar25 + iVar14;
        if (*(char *)(iVar24 + 0x12) != '\0') {
          uVar16 = (uint)*(byte *)(iVar24 + 0x10);
          uVar15 = (uint)*(byte *)(iVar24 + 0x11);
          uVar23 = uVar16 + 1 & 0xff;
          if ((uVar23 < 0xd) && (uVar15 < 0xd)) {
            cVar4 = acStack_100[uVar15 + uVar23 * 0xd];
          }
          else {
            cVar4 = '\0';
          }
          cVar4 = cVar4 != '\0';
          uVar23 = uVar16 - 1 & 0xff;
          if ((uVar23 < 0xd) && (uVar15 < 0xd)) {
            cVar5 = acStack_100[uVar15 + uVar23 * 0xd];
          }
          else {
            cVar5 = '\0';
          }
          if (cVar5 != '\0') {
            cVar4 = cVar4 + '\x01';
          }
          if ((uVar16 < 0xd) && (uVar23 = uVar15 + 1 & 0xff, uVar23 < 0xd)) {
            cVar5 = acStack_100[uVar23 + uVar16 * 0xd];
          }
          else {
            cVar5 = '\0';
          }
          if (cVar5 != '\0') {
            cVar4 = cVar4 + '\x01';
          }
          if ((uVar16 < 0xd) && (uVar23 = uVar15 - 1 & 0xff, uVar23 < 0xd)) {
            cVar5 = acStack_100[uVar23 + uVar16 * 0xd];
          }
          else {
            cVar5 = '\0';
          }
          if (cVar5 != '\0') {
            cVar4 = cVar4 + '\x01';
          }
          if (cVar4 != '\0') {
            uStack_2c = uVar19;
            sVar12 = func_800D28C0(local_40,iVar18 + 1U & 0xff);
            uVar23 = (uint)*(byte *)(iVar25 + iVar14 + 0x12);
            uVar19 = uStack_2c;
            if ((int)sVar12 < (int)uVar23) {
              iVar21 = iVar21 + (int)((uint)(ushort)psVar3[0x14] * (int)sVar12) / (int)uVar23;
            }
            else {
              iVar21 = iVar21 + (uint)(ushort)psVar3[0x14];
            }
          }
        }
        sVar12 = (short)iVar21;
        iVar18 = iVar18 + 1;
        iVar14 = iVar14 + 7;
      } while (iVar18 < 5);
    }
    iVar26 = iVar26 - sVar12;
    uVar23 = uVar27 + 1;
    iVar21 = uVar27 + 2;
    uVar27 = uVar23;
    if (4 < (int)uVar23) {
      sVar12 = func_800D10A0(iVar25,iVar26 * 0x10000 >> 0x10);
      iVar25 = func_800202A4(D_80118C1C[0x16]);
      if (DAT_80118fb2 == 0) {
        iVar13 = (int)*(short *)((int)&DAT_80118fae + iVar13 + 2);
      }
      else {
        iVar13 = -(int)*(short *)((int)&DAT_80118fae + iVar13 + 2);
      }
      iVar13 = iVar26 + sVar12 + iVar25 + iVar13;
      iVar25 = -0x7fff;
      if ((iVar13 < -0x7fff) || (iVar26 = 0x7fff0000, iVar25 = iVar13, iVar13 < 0x8000)) {
        iVar26 = iVar25 << 0x10;
      }
      return iVar26 >> 0x10;
    }
  } while( true );
}
