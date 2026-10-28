#define jtbl_80097AC0 (*(u8 **)0x80097AC0)
/* compiler: 2.8.1-psx */
#include "common.h"
/* arg0: 0x80140000 */
/* rand-u16: 0x8014007A 1 0,1,2,3,4,5,6,7,65535 */
/* rand-u32-strided: 0x8014003C 1 4 0,7,8,9,39,40,41,65535,0xFFFFFFFF */
/* rand-u16: 0x80140076 1 0,512,65024 */
/* rand-u32-strided: 0x800EFF4C 1 4 0x80150000 */
/* rand-u32-strided: 0x800EFF50 1 4 0x80160000 */
/* rand-u32-strided: 0x8008F704 1 4 0,1,2,3,4,5 */
/* rand-u32-strided: 0x8008F714 1 4 0,1,2,3 */
/* rand-u32-strided: 0x8008F70C 1 4 0,1,83,84,85,65535 */
/* rand-u16: 0x8006AF80 1 0,1,2,3,4,5 */
/* rand-u16: 0x8008EE4C 1 0,1,2,3,4,5 */
/* rand-u16: 0x8008F702 1 0,1,2 */
/* rand-u32-strided: 0x80140038 1 4 0,1,8,9,0xFFFFFFFF */
/* rand-u32-strided: 0x8014007C 1 4 0,1,2,3,4,5 */
/* rand-u16: 0x80091628 6 0,1,3,20 */
/* rand-u16: 0x800917D0 1 0,1,3,20 */
/* rand-u16: 0x80091978 1 0,1,3,20 */
/* rand-u16: 0x80091B20 1 0,1,3,20 */
/* rand-u16: 0x80091CC8 1 0,1,3,20 */
/* rand-u16: 0x80091E70 1 0,1,3,20 */
#include "ghidra.h"
#define DAT_8008ee4c (*(u16 *)0x8008EE4C)
#define DAT_8008f702 (*(u8 *)0x8008F702)
#define DAT_8008f704 (*(s32 *)0x8008F704)
#define DAT_8008f70c (*(s32 *)0x8008F70C)
#define DAT_8008f714 (*(s32 *)0x8008F714)
#define DAT_80090000 (*(s32 *)0x80090000)
#define DAT_80091628 (*(u16 *)0x80091628)
#define D_8006AF80 (*(u16 *)0x8006AF80)
#define D_800E8A9C (*(s32 *)0x800E8A9C)
#define D_800E8AA4 (*(u8 *)0x800E8AA4)
#define D_800EFA04 (*(s32 *)0x800EFA04)
#define D_800EFF4C (*(u8 **)0x800EFF4C)
#define D_800EFF50 (*(u8 **)0x800EFF50)
#define _DAT_8008f70c (*(s32 *)0x8008F70C)
#define func_800125D8 ((s32 (*)())0x800125D8)
#define func_800185F8 ((s32 (*)())0x800185F8)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_8001F1A8 ((s32 (*)())0x8001F1A8)
#define func_800BE190 ((s32 (*)())0x800BE190)
int func_800994FC(int param_1)
{
  short sVar1;
  bool bVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uVar8 = *(uint *)(param_1 + 0x34) & 0x7f;
  if (DAT_8008f702 == '\x01') goto switchD_8009955c_default;
  switch(*(undefined2 *)(param_1 + 0x7a)) {
  case 0:
    if (DAT_8008ee4c == 2) {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
      puVar6 = D_800EFF4C;
      if ((uVar8 == 0xb) || (puVar6 = D_800EFF50, uVar8 == 0xc)) {
        *(uint *)(puVar6 + 0x38) = *(uint *)(puVar6 + 0x38) & 0xfffffffe;
      }
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 8;
      *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
      goto switchD_8009955c_caseD_1;
    }
    break;
  case 1:
switchD_8009955c_caseD_1:
    uVar4 = *(int *)(param_1 + 0x3c) + 1;
    *(uint *)(param_1 + 0x3c) = uVar4;
    if (*(short *)(param_1 + 0x76) == 0) {
      if (0x28 < uVar4) goto LAB_80099614;
      break;
    }
    if (8 < uVar4) {
LAB_80099614:
      if (uVar8 == 3) {
        func_800125D8();
      }
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffff7;
      *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
      if ((((uVar8 == 3) || (uVar8 == 5)) || (uVar8 == 8)) || (uVar8 == 1)) {
        sVar1 = *(short *)(param_1 + 0x7a);
        goto LAB_80099708;
      }
      break;
    }
    bVar2 = uVar8 - 1 < 0x10;
    goto LAB_800997d8;
  case 2:
    if (1 < DAT_8008f714) {
      *(undefined2 *)(param_1 + 0x7a) = 4;
      *(short *)(param_1 + 0x6a) = -*(short *)(param_1 + 0x6a);
      *(short *)(param_1 + 0x6e) = -*(short *)(param_1 + 0x6e);
    }
    break;
  case 3:
    if (DAT_8008f714 < 2) {
      if (DAT_8008f714 != 1) break;
      sVar1 = *(short *)(param_1 + 0x7a);
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined2 *)(param_1 + 0x76) = 0xfe00;
    }
    else {
      uVar3 = 10;
      if (uVar8 == 3) {
        uVar3 = 0xfff6;
      }
      *(undefined2 *)(param_1 + 0x6a) = uVar3;
      sVar1 = *(short *)(param_1 + 0x7a);
      *(undefined2 *)(param_1 + 0x76) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
LAB_80099708:
    *(short *)(param_1 + 0x7a) = sVar1 + 1;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 8;
    *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
  case 5:
    uVar4 = *(int *)(param_1 + 0x3c) + 1;
    *(uint *)(param_1 + 0x3c) = uVar4;
    if (*(short *)(param_1 + 0x76) == 0) {
      if (0x28 < uVar4) goto LAB_80099760;
      break;
    }
    if (8 < uVar4) {
LAB_80099760:
      if (uVar8 == 3) {
        func_800125D8();
      }
      *(undefined2 *)(param_1 + 0x7a) = 6;
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
      break;
    }
    bVar2 = uVar8 - 1 < 0x10;
    goto LAB_800997d8;
  case 6:
    if (1 < DAT_8008f714) {
      iVar5 = func_800185F8(param_1);
      return iVar5;
    }
    if (DAT_8008f714 == 0) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined2 *)(param_1 + 0x76) = 0x200;
      *(undefined2 *)(param_1 + 0x7a) = 0;
    }
  }
switchD_8009955c_default:
  bVar2 = uVar8 - 1 < 0x10;
LAB_800997d8:
  if (!bVar2) {
    return (int)&DAT_80090000;
  }
  puVar6 = (&jtbl_80097AC0)[uVar8 - 1];

  switch(uVar8 - 1) {
  case 0:
    puVar6 = &DAT_80090000;
    if ((*(uint *)(param_1 + 0x38) >> 3 & 1) == 0) {
      puVar6 = (undefined *)(DAT_8008f704 * 0x20 + -0x38);
      *(short *)(param_1 + 0x46) = (short)puVar6;
    }
    break;
  case 4:
    if (((*(uint *)(param_1 + 0x38) >> 3 & 1) == 0) ||
       (puVar6 = (undefined *)(int)*(short *)(param_1 + 0x76), puVar6 == (undefined *)0x0)) {
      puVar6 = (undefined *)
               func_8001F1A8((*(short *)(param_1 + 0x46) + 0x12) * 0x10000 >> 0x10,
                             (*(short *)(param_1 + 0x4a) + 0x48) * 0x10000 >> 0x10,0,1,0,&D_800E8A9C
                             ,1,4,*(short *)(param_1 + 0x4e) + -1);
    }
    break;
  case 7:
    if (*(uint *)(param_1 + 0x7c) == (uint)D_8006AF80) {
      puVar6 = (undefined *)0x2;
      *(undefined2 *)(param_1 + 0x66) = 2;
    }
    else {
      puVar6 = (undefined *)0x1;
      if (*(uint *)(param_1 + 0x7c) == DAT_8008f704) {
        *(undefined2 *)(param_1 + 0x66) = 1;
      }
      else {
        *(undefined2 *)(param_1 + 0x66) = 0;
      }
    }
    break;
  case 8:
    puVar6 = (undefined *)
             func_8001F1A8((*(short *)(param_1 + 0x46) + 0x18) * 0x10000 >> 0x10,
                           (int)*(short *)(param_1 + 0x4a),0,1,0,
                           ((u8 *)0x800EFA04) + (uint)(ushort)(&DAT_80091628)[(uint)D_8006AF80 * 0xd4] * 8,
                           1,4,*(short *)(param_1 + 0x4e) + -1);
    break;
  case 9:
    if (DAT_8008ee4c == 3) {
      uVar8 = *(uint *)(param_1 + 0x38) & 0xfffffffe;
LAB_800999d0:
      *(uint *)(param_1 + 0x38) = uVar8;
      if (DAT_8008ee4c != 4) goto LAB_800999e8;
    }
    else {
      if (DAT_8008ee4c == 4) {
        uVar8 = *(uint *)(param_1 + 0x38) | 1;
        goto LAB_800999d0;
      }
LAB_800999e8:
      func_8001F1A8((*(short *)(param_1 + 0x46) + 0x18) * 0x10000 >> 0x10,
                    (int)*(short *)(param_1 + 0x4a),0,1,0,
                    ((u8 *)0x800EFA04) + (uint)(ushort)(&DAT_80091628)[DAT_8008f704 * 0xd4] * 8,1,4,
                    *(short *)(param_1 + 0x4e) + -1);
    }
    puVar6 = (undefined *)func_80019F30(0x6000e,DAT_8008f704 + 0xdb);
    *(undefined **)(param_1 + 0x18) = puVar6;
    break;
  case 10:
    *(short *)(D_800EFF4C + 0x46) = *(short *)(param_1 + 0x46) + 0x28;
    *(short *)(D_800EFF4C + 0x4a) = *(short *)(param_1 + 0x4a) + 0x30;
    *(undefined4 *)(D_800EFF4C + 0x68) = *(undefined4 *)(param_1 + 0x68);
    puVar6 = *(undefined **)(param_1 + 0x6c);
    *(undefined **)(D_800EFF4C + 0x6c) = puVar6;
    break;
  case 0xb:
    if (_DAT_8008f70c == 0) {
      uVar7 = func_80019F30(0x6000e,(byte)(&D_800E8AA4)
                                          [(ushort)(&DAT_80091628)[DAT_8008f704 * 0xd4]] + 0x83);
      *(undefined4 *)(param_1 + 0x18) = uVar7;
    }
    if ((*(uint *)(param_1 + 0x38) >> 3 & 1) == 0) {
      *(short *)(param_1 + 0x46) = DAT_8008f70c + -0x24;
    }
    *(short *)(D_800EFF50 + 0x46) = *(short *)(param_1 + 0x46) + 0x28;
    *(short *)(D_800EFF50 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x30;
    *(undefined4 *)(D_800EFF50 + 0x68) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(D_800EFF50 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
    if (_DAT_8008f70c == 0) {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
      uVar8 = *(uint *)(D_800EFF50 + 0x38) | 1;
    }
    else {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
      uVar8 = *(uint *)(D_800EFF50 + 0x38) & 0xfffffffe;
    }
    *(uint *)(D_800EFF50 + 0x38) = uVar8;
    if (_DAT_8008f70c == 0x54) {
      *(undefined1 *)(param_1 + 0x5b) = 0;
      puVar6 = D_800EFF50;
      D_800EFF50[0x5b] = 0;
    }
    else {
      D_800EFF50[0x5b] = 1;
      *(undefined2 *)(D_800EFF50 + 0x5c) = 0xce;
      *(undefined2 *)(D_800EFF50 + 0x5e) = 0;
      *(undefined2 *)(D_800EFF50 + 0x60) = 0x54;
      puVar6 = D_800EFF50;
      *(undefined2 *)(D_800EFF50 + 0x62) = 0xf0;
      *(undefined1 *)(param_1 + 0x5b) = 1;
      *(undefined2 *)(param_1 + 0x5c) = 0xce;
      *(undefined2 *)(param_1 + 0x5e) = 0;
      *(undefined2 *)(param_1 + 0x60) = 0x54;
      *(undefined2 *)(param_1 + 0x62) = 0xf0;
    }
    break;
  case 0xf:
    puVar6 = (undefined *)func_800BE190(param_1);
  }
  return (int)puVar6;
}

/* rand-u32-strided: 0x80140034 1 4 0 */
