#include "common.h"
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define DAT_8006af84 (*(s32 *)0x8006AF84)
#define DAT_8009167a (*(u16 *)0x8009167A)
#define DAT_8009167e (*(u16 *)0x8009167E)
#define DAT_800916a2 (*(s16 *)0x800916A2)
#define DAT_800916d6 (*(s16 *)0x800916D6)
#define DAT_800916d8 (*(s16 *)0x800916D8)
#define DAT_800916da (*(s16 *)0x800916DA)
#define DAT_800916ea (*(s16 *)0x800916EA)
#define DAT_800916ec (*(s16 *)0x800916EC)
#define DAT_800916ee (*(s16 *)0x800916EE)
#define DAT_800916f0 (*(s16 *)0x800916F0)
#define DAT_800916f2 (*(s16 *)0x800916F2)
#define DAT_800916f4 (*(s16 *)0x800916F4)
#define DAT_800916f6 (*(s16 *)0x800916F6)
#define DAT_800916f8 (*(s16 *)0x800916F8)
#define DAT_800916fa (*(s16 *)0x800916FA)
#define DAT_800916fc (*(s16 *)0x800916FC)
#define DAT_8009176c (*(s32 *)0x8009176C)
#define DAT_800917b4 (*(s16 *)0x800917B4)
#define DAT_800917b8 (*(s16 *)0x800917B8)
#define DAT_801061e1 (*(u8 *)0x801061E1)
#define DAT_801061e2 (*(u8 *)0x801061E2)
#define DAT_801061e3 (*(u8 *)0x801061E3)
#define DAT_801061e4 (*(u8 *)0x801061E4)
#define DAT_801061e5 (*(u8 *)0x801061E5)
#define DAT_801061e6 (*(u8 *)0x801061E6)
#define DAT_801061e7 (*(u8 *)0x801061E7)
#define DAT_801061e8 (*(u8 *)0x801061E8)
#define DAT_801061e9 (*(u8 *)0x801061E9)
#define DAT_801061ea (*(u8 *)0x801061EA)
#define DAT_801061eb (*(u8 *)0x801061EB)
#define DAT_801061ec (*(u8 *)0x801061EC)
#define DAT_801061ed (*(u8 *)0x801061ED)
#define DAT_801061ee (*(u8 *)0x801061EE)
#define DAT_801061ef (*(u8 *)0x801061EF)
#define DAT_801061f0 (*(u8 *)0x801061F0)
#define DAT_801061f1 (*(u8 *)0x801061F1)
#define DAT_801061f2 (*(u8 *)0x801061F2)
#define DAT_801061f3 (*(u8 *)0x801061F3)
#define DAT_801061f4 (*(u8 *)0x801061F4)
#define DAT_801061f5 (*(u8 *)0x801061F5)
#define DAT_801061f6 (*(u8 *)0x801061F6)
#define DAT_801061f7 (*(u8 *)0x801061F7)
#define DAT_801061f8 (*(u8 *)0x801061F8)
#define DAT_801061f9 (*(u8 *)0x801061F9)
#define DAT_801061fa (*(u8 *)0x801061FA)
#define DAT_801061fb (*(u8 *)0x801061FB)
#define DAT_801061fc (*(u8 *)0x801061FC)
#define DAT_801061fd (*(u8 *)0x801061FD)
#define D_801061E0 (*(u8 *)0x801061E0)
#define func_800202A4 ((s32 (*)())0x800202A4)
int func_800E7B80(short param_1)
{
  union { u64 align; u8 bytes[0x50]; } recovered_local_frame;
#define auStack_58 (*(undefined1 volatile (*)[16])(recovered_local_frame.bytes + 0x0))
#define local_48 (*(short volatile (*)[32])(recovered_local_frame.bytes + 0x10))

  s8 cVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  undefined1 *puVar5;
  s8 *pcVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;


  iVar7 = (int)param_1;
  local_48[0] = -1;
  uVar8 = 0;
  if ((&DAT_800917b8)[iVar7 * 0xd4] == 1) {
    return -1;
  }
  if (((short)(&DAT_800916d8)[iVar7 * 0xd4] < 0x17) && ((&DAT_801061e7)[iVar7 * 0x28] == '\0')) {
    local_48[0] = 7;
    uVar8 = 1;
  }
  else if ((0x74 < (short)(&DAT_800916d8)[param_1 * 0xd4]) &&
          ((&DAT_801061e8)[param_1 * 0x28] == '\0')) {
    local_48[0] = 8;
    uVar8 = 1;
  }
  iVar7 = (int)param_1;
  sVar2 = (&DAT_800916da)[iVar7 * 0xd4];
  if (sVar2 < 0x96) {
    if (sVar2 < 0x69) {
      if ((sVar2 < 0x38) && ((&DAT_801061e5)[iVar7 * 0x28] == '\0')) {
        *(undefined2 *)((int)local_48 + ((int)((uint)uVar8 << 0x10) >> 0xf)) = 5;
        uVar8 = uVar8 + 1;
      }
      if ((0x9a < *(short *)(((u8 *)0x800916ee) + param_1 * 0x1a8)) &&
         ((&DAT_801061e2)[param_1 * 0x28] == '\0')) {
        uVar4 = 2;
        goto LAB_800e7f60;
      }
    }
  }
  else {
    if ((0xcc < sVar2) && ((&DAT_801061e3)[iVar7 * 0x28] == '\0')) {
      *(undefined2 *)((int)local_48 + ((int)((uint)uVar8 << 0x10) >> 0xf)) = 3;
      uVar8 = uVar8 + 1;
    }
    if (((0x9a < (short)(&DAT_800916da)[param_1 * 0xd4]) &&
        (iVar7 = param_1 * 0x28, (&DAT_801061e4)[iVar7] == '\0')) &&
       ((&DAT_801061e5)[iVar7] != '\0')) {
      *(undefined2 *)((int)local_48 + ((int)((uint)uVar8 << 0x10) >> 0xf)) = 4;
      uVar8 = uVar8 + 1;
    }
    if ((*(short *)(((u8 *)0x800916ee) + param_1 * 0x1a8) < 0x38) &&
       ((&DAT_801061e4)[param_1 * 0x28] == '\0')) {
      *(undefined2 *)((int)local_48 + ((int)((uint)uVar8 << 0x10) >> 0xf)) = 0;
      uVar8 = uVar8 + 1;
    }
    if (((&DAT_801061e1)[param_1 * 0x28] == '\0') && ((&DAT_801061e2)[param_1 * 0x28] != '\0')) {
      uVar4 = 1;
LAB_800e7f60:
      *(undefined2 *)((int)local_48 + ((int)((uint)uVar8 << 0x10) >> 0xf)) = uVar4;
      uVar8 = uVar8 + 1;
    }
  }
  if ((0x11 < (DAT_8006af84 - *(int *)(((u8 *)0x8009176c) + param_1 * 0x1a8)) / 0x4b0) &&
     ((&DAT_801061e6)[param_1 * 0x28] == '\0')) {
    *(undefined2 *)((int)local_48 + ((int)((uint)uVar8 << 0x10) >> 0xf)) = 6;
    uVar8 = uVar8 + 1;
  }
  if ((*(short *)(((u8 *)0x800916ec) + param_1 * 0x1a8) < 0x15) &&
     ((&DAT_801061e9)[param_1 * 0x28] == '\0')) {
    uVar4 = 9;
LAB_800e811c:
    *(undefined2 *)((int)local_48 + ((int)((uint)uVar8 << 0x10) >> 0xf)) = uVar4;
    uVar8 = uVar8 + 1;
  }
  else {
    iVar7 = param_1 * 0x1a8;
    if ((199 < *(short *)(((u8 *)0x800916ec) + iVar7)) &&
       ((0x95 < *(short *)(((u8 *)0x800916f8) + iVar7) && ((&DAT_801061ea)[param_1 * 0x28] == '\0')))) {
      uVar4 = 10;
      goto LAB_800e811c;
    }
  }
  iVar7 = (int)param_1;
  sVar2 = (&DAT_800916d6)[iVar7 * 0xd4];
  if (sVar2 < 0x118) {
    if (sVar2 < 0xdd) {
      if ((sVar2 < 0x8d) && ((&DAT_801061f1)[iVar7 * 0x28] == '\0')) {
        puVar5 = auStack_58 + ((int)((uint)uVar8 << 0x10) >> 0xf);
        uVar4 = 0x11;
      }
      else {
        if ((&DAT_801061f0)[param_1 * 0x28] != '\0') goto LAB_800e8284;
        puVar5 = auStack_58 + ((int)((uint)uVar8 << 0x10) >> 0xf);
        uVar4 = 0x10;
      }
      goto LAB_800e8278;
    }
  }
  else {
    if ((sVar2 < 0x168) || ((&DAT_801061ef)[iVar7 * 0x28] != '\0')) {
      if ((&DAT_801061ee)[param_1 * 0x28] != '\0') goto LAB_800e8284;
      puVar5 = auStack_58 + ((int)((uint)uVar8 << 0x10) >> 0xf);
      uVar4 = 0xe;
    }
    else {
      puVar5 = auStack_58 + ((int)((uint)uVar8 << 0x10) >> 0xf);
      uVar4 = 0xf;
    }
LAB_800e8278:
    *(undefined2 *)(puVar5 + 0x10) = uVar4;
    uVar8 = uVar8 + 1;
  }
LAB_800e8284:
  iVar7 = param_1 * 0x1a8;
  iVar7 = ((int)*(short *)(((u8 *)0x800916f2) + iVar7) + (int)*(short *)(((u8 *)0x800916f4) + iVar7) +
          (int)*(short *)(((u8 *)0x800916f6) + iVar7)) / 3;
  if ((iVar7 * 0x10000 >> 0x10 < 0x33) && ((&DAT_801061eb)[param_1 * 0x28] == '\0')) {
    puVar5 = auStack_58 + ((int)((uint)uVar8 << 0x10) >> 0xf);
    uVar4 = 0xb;
LAB_800e83d0:
    *(undefined2 *)(puVar5 + 0x10) = uVar4;
    uVar8 = uVar8 + 1;
  }
  else {
    if ((199 < (short)iVar7) && ((&DAT_801061ed)[param_1 * 0x28] == '\0')) {
      puVar5 = auStack_58 + ((int)((uint)uVar8 << 0x10) >> 0xf);
      uVar4 = 0xd;
      goto LAB_800e83d0;
    }
    if ((0xb3 < iVar7 * 0x10000 >> 0x10) && ((&DAT_801061ec)[param_1 * 0x28] == '\0')) {
      puVar5 = auStack_58 + ((int)((uint)uVar8 << 0x10) >> 0xf);
      uVar4 = 0xc;
      goto LAB_800e83d0;
    }
  }
  if ((*(short *)(((u8 *)0x800916ea) + param_1 * 0x1a8) < 0x33) &&
     ((&DAT_801061f2)[param_1 * 0x28] == '\0')) {
    uVar4 = 0x12;
LAB_800e84d0:
    *(undefined2 *)((int)local_48 + ((int)((uint)uVar8 << 0x10) >> 0xf)) = uVar4;
    uVar8 = uVar8 + 1;
  }
  else if ((0xef < *(short *)(((u8 *)0x800916ea) + param_1 * 0x1a8)) &&
          ((&DAT_801061f3)[param_1 * 0x28] == '\0')) {
    uVar4 = 0x13;
    goto LAB_800e84d0;
  }
  if ((*(short *)(((u8 *)0x800916f0) + param_1 * 0x1a8) < 0x33) &&
     ((&DAT_801061f4)[param_1 * 0x28] == '\0')) {
    uVar4 = 0x14;
LAB_800e85d0:
    *(undefined2 *)((int)local_48 + ((int)((uint)uVar8 << 0x10) >> 0xf)) = uVar4;
    uVar8 = uVar8 + 1;
  }
  else if ((0xef < *(short *)(((u8 *)0x800916f0) + param_1 * 0x1a8)) &&
          ((&DAT_801061f5)[param_1 * 0x28] == '\0')) {
    uVar4 = 0x15;
    goto LAB_800e85d0;
  }
  if ((*(short *)(((u8 *)0x800916f8) + param_1 * 0x1a8) < 0xf0) ||
     ((&DAT_801061f6)[param_1 * 0x28] != '\0')) {
    if ((*(short *)(((u8 *)0x800916f8) + param_1 * 0x1a8) < 0x33) &&
       ((&DAT_801061f7)[param_1 * 0x28] == '\0')) {
      uVar4 = 0x17;
      goto LAB_800e86cc;
    }
  }
  else {
    uVar4 = 0x16;
LAB_800e86cc:
    *(undefined2 *)((int)local_48 + ((int)((uint)uVar8 << 0x10) >> 0xf)) = uVar4;
    uVar8 = uVar8 + 1;
  }
  if ((*(short *)(((u8 *)0x800916fc) + param_1 * 0x1a8) < 0x33) &&
     ((&DAT_801061f8)[param_1 * 0x28] == '\0')) {
    uVar4 = 0x18;
LAB_800e87cc:
    *(undefined2 *)((int)local_48 + ((int)((uint)uVar8 << 0x10) >> 0xf)) = uVar4;
    uVar8 = uVar8 + 1;
  }
  else if ((0xef < *(short *)(((u8 *)0x800916fc) + param_1 * 0x1a8)) &&
          ((&DAT_801061f9)[param_1 * 0x28] == '\0')) {
    uVar4 = 0x19;
    goto LAB_800e87cc;
  }
  if ((199 < *(short *)(((u8 *)0x800916fa) + param_1 * 0x1a8)) &&
     ((&DAT_801061fb)[param_1 * 0x28] == '\0')) {
    *(undefined2 *)((int)local_48 + ((int)((uint)uVar8 << 0x10) >> 0xf)) = 0x1b;
    uVar8 = uVar8 + 1;
  }
  iVar7 = (int)param_1;
  if ((&DAT_800916a2)[iVar7 * 0xd4] == -1) goto LAB_800e89e8;
  if (((&DAT_8009167a)[iVar7 * 0xd4] == 0) || ((&DAT_801061fd)[iVar7 * 0x28] != '\0')) {
    if ((*(short *)(((u8 *)0x8009167e) + param_1 * 0x1a8) != 0) &&
       ((&DAT_801061fc)[param_1 * 0x28] == '\0')) {
      uVar4 = 0x1c;
      goto LAB_800e8954;
    }
  }
  else {
    uVar4 = 0x1d;
LAB_800e8954:
    *(undefined2 *)((int)local_48 + ((int)((uint)uVar8 << 0x10) >> 0xf)) = uVar4;
    uVar8 = uVar8 + 1;
  }
  iVar7 = (int)param_1;
  if (((*(short *)(((u8 *)0x800916fa) + iVar7 * 0x1a8) < 0x51) && ((&DAT_800917b4)[iVar7 * 0xd4] != 1))
     && ((&DAT_801061fa)[iVar7 * 0x28] == '\0')) {
    *(undefined2 *)((int)local_48 + ((int)((uint)uVar8 << 0x10) >> 0xf)) = 0x1a;
    uVar8 = uVar8 + 1;
  }
LAB_800e89e8:
  iVar7 = func_800202A4((int)(short)uVar8);
  iVar9 = 0;
  sVar3 = local_48[iVar7];
  sVar2 = local_48[iVar7];
  iVar7 = 0;
  do {
    pcVar6 = ((u8 *)0x801061E0) + (iVar7 >> 0x10) + param_1 * 0x28;
    if (iVar7 >> 0x10 == (int)sVar2) {
      *pcVar6 = '\x04';
    }
    else {
      cVar1 = *pcVar6;
      *pcVar6 = cVar1 + -1;
      if ((s8)(cVar1 + -1) == '\0') {
        *pcVar6 = '\0';
      }
    }
    iVar9 = iVar9 + 1;
    iVar7 = iVar9 * 0x10000;
  } while (iVar9 * 0x10000 >> 0x10 < 0x26);
  return (int)sVar3;
}

#undef auStack_58
#undef local_48

/* real-callee: func_800202A4 */
/* real-callee: rand */
/* rand-u32-strided: 0x8006AF84 1 4 0,1,21599,21600,24000 */
/* rand-u16: 0x800916D6 3 0,22,23,55,56,104,105,116,117,149,150,154,155,204,205,220,221,279,280,359,360,65535 */
/* rand-u16: 0x800916EA 11 0,20,21,50,51,55,56,80,81,149,150,154,155,179,180,199,200,239,240,255,65535 */
/* rand-u16: 0x8009167A 1 0,1 */
/* rand-u16: 0x8009167E 1 0,1 */
/* rand-u16: 0x800916A2 1 0,65535 */
/* rand-u16: 0x800917B4 1 0,1 */
/* rand-u16: 0x800917B8 1 0,1 */
/* rand-u32-strided: 0x8009176C 1 4 0,1,5000 */
/* rand-mem: 0x801061E0 38 6 */
/* rand-u16: 0x8009187E 3 0,22,23,55,56,104,105,116,117,149,150,154,155,204,205,220,221,279,280,359,360,65535 */
/* rand-u16: 0x80091892 11 0,20,21,50,51,55,56,80,81,149,150,154,155,179,180,199,200,239,240,255,65535 */
/* rand-u16: 0x80091822 1 0,1 */
/* rand-u16: 0x80091826 1 0,1 */
/* rand-u16: 0x8009184A 1 0,65535 */
/* rand-u16: 0x8009195C 1 0,1 */
/* rand-u16: 0x80091960 1 0,1 */
/* rand-u32-strided: 0x80091914 1 4 0,1,5000 */
/* rand-mem: 0x80106208 38 6 */
/* rand-u16: 0x80091A26 3 0,22,23,55,56,104,105,116,117,149,150,154,155,204,205,220,221,279,280,359,360,65535 */
/* rand-u16: 0x80091A3A 11 0,20,21,50,51,55,56,80,81,149,150,154,155,179,180,199,200,239,240,255,65535 */
/* rand-u16: 0x800919CA 1 0,1 */
/* rand-u16: 0x800919CE 1 0,1 */
/* rand-u16: 0x800919F2 1 0,65535 */
/* rand-u16: 0x80091B04 1 0,1 */
/* rand-u16: 0x80091B08 1 0,1 */
/* rand-u32-strided: 0x80091ABC 1 4 0,1,5000 */
/* rand-mem: 0x80106230 38 6 */
/* rand-u16: 0x80091BCE 3 0,22,23,55,56,104,105,116,117,149,150,154,155,204,205,220,221,279,280,359,360,65535 */
/* rand-u16: 0x80091BE2 11 0,20,21,50,51,55,56,80,81,149,150,154,155,179,180,199,200,239,240,255,65535 */
/* rand-u16: 0x80091B72 1 0,1 */
/* rand-u16: 0x80091B76 1 0,1 */
/* rand-u16: 0x80091B9A 1 0,65535 */
/* rand-u16: 0x80091CAC 1 0,1 */
/* rand-u16: 0x80091CB0 1 0,1 */
/* rand-u32-strided: 0x80091C64 1 4 0,1,5000 */
/* rand-mem: 0x80106258 38 6 */
/* rand-u16: 0x80091D76 3 0,22,23,55,56,104,105,116,117,149,150,154,155,204,205,220,221,279,280,359,360,65535 */
/* rand-u16: 0x80091D8A 11 0,20,21,50,51,55,56,80,81,149,150,154,155,179,180,199,200,239,240,255,65535 */
/* rand-u16: 0x80091D1A 1 0,1 */
/* rand-u16: 0x80091D1E 1 0,1 */
/* rand-u16: 0x80091D42 1 0,65535 */
/* rand-u16: 0x80091E54 1 0,1 */
/* rand-u16: 0x80091E58 1 0,1 */
/* rand-u32-strided: 0x80091E0C 1 4 0,1,5000 */
/* rand-mem: 0x80106280 38 6 */
/* rand-u16: 0x80091F1E 3 0,22,23,55,56,104,105,116,117,149,150,154,155,204,205,220,221,279,280,359,360,65535 */
/* rand-u16: 0x80091F32 11 0,20,21,50,51,55,56,80,81,149,150,154,155,179,180,199,200,239,240,255,65535 */
/* rand-u16: 0x80091EC2 1 0,1 */
/* rand-u16: 0x80091EC6 1 0,1 */
/* rand-u16: 0x80091EEA 1 0,65535 */
/* rand-u16: 0x80091FFC 1 0,1 */
/* rand-u16: 0x80092000 1 0,1 */
/* rand-u32-strided: 0x80091FB4 1 4 0,1,5000 */
/* rand-mem: 0x801062A8 38 6 */
/* arg0: 0x00000000 */
