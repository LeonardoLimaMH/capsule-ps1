#include "common.h"

/* real-callee: __fixdfsi */
/* real-callee: __floatsidf */
/* real-callee: __muldf3 */
/* real-callee: _add_mant_d */
/* real-callee: _dbl_shift */
/* real-callee: _dbl_shift_us */
/* real-callee: _err_math */
/* real-callee: _mul_mant_d */
/* real-callee: func_8004FE2C */
#include "common.h"

/* callee-contract: RotTransPers */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
#include "common.h"

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
/* arg1: 0x80130000 */
/* arg2: 0x80140000 */
/* arg3: 0x80150000 */
/* rand-u16: 0x80119714 1 0,1,5,19,20,29,30,31,199 */
/* rand-u16: 0x80119716 1 0 */
/* rand-ptr: 0x8008F760 3 */
/* rand-mem: 0x80140015 2 13 */
/* rand-mem: 0x80150015 2 13 */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FE74C */
/* real-callee: __floatsidf */
/* real-callee: __muldf3 */
/* real-callee: __fixdfsi */
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
/* real-callee: func_800FE188 */
/* real-callee: func_800FEBF4 */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008f760 (*(s32 *)0x8008F760)
#define DAT_8008f764 (*(s32 *)0x8008F764)
#define DAT_8008f768 (*(s32 *)0x8008F768)
#define D_80119714 (*(s32 *)0x80119714)
extern s32 __fixdfsi();
extern u64 __floatsidf();
extern u64 __muldf3();
#define func_80013928 ((s32 (*)())0x80013928)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800A81D8 ((s32 (*)())0x800A81D8)
#define func_800AADE0 ((s32 (*)())0x800AADE0)
#define func_800DDA78 ((s32 (*)())0x800DDA78)
#define func_800FBB90 ((s32 (*)())0x800FBB90)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FE74C ((s32 (*)())0x800FE74C)
#define func_800FEBF4 ((s32 (*)())0x800FEBF4)
#define func_800FF0A0 ((s32 (*)())0x800FF0A0)
#define func_800FF3B4 ((s32 (*)())0x800FF3B4)
undefined4 func_800F234C(undefined4 param_1,int param_2,byte *param_3,uchar *param_4)

{
  union { u64 align; u8 bytes[0x80]; } recovered_local_frame;
#define local_80 (*(int volatile (*)[4])(recovered_local_frame.bytes + 0x0))
#define local_70 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x10))
#define local_68 (*(short volatile *)(recovered_local_frame.bytes + 0x18))
#define local_66 (*(short volatile *)(recovered_local_frame.bytes + 0x1A))
#define local_64 (*(short volatile *)(recovered_local_frame.bytes + 0x1C))
#define local_60 (*(short volatile *)(recovered_local_frame.bytes + 0x20))
#define local_5e (*(short volatile *)(recovered_local_frame.bytes + 0x22))
#define local_5c (*(short volatile *)(recovered_local_frame.bytes + 0x24))
#define auStack_58 (*(undefined1 volatile (*)[2])(recovered_local_frame.bytes + 0x28))
#define local_56 (*(short volatile *)(recovered_local_frame.bytes + 0x2A))
#define local_50 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x30))
#define local_48 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x38))
#define local_40 (*(int volatile *)(recovered_local_frame.bytes + 0x40))
#define local_38 (*(short volatile *)(recovered_local_frame.bytes + 0x48))
#define local_30 (*(SVECTOR * volatile *)(recovered_local_frame.bytes + 0x50))
#define local_2c (*(SVECTOR * volatile *)(recovered_local_frame.bytes + 0x54))

  undefined1 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  undefined8 uVar15;

















  local_80[0] = DAT_8008f760;
  local_80[1] = DAT_8008f764;
  local_80[2] = DAT_8008f768;
  if (DAT_8008ee54 == 3) {
LAB_800f2a30:
    iVar8 = 0;
    puVar10 = &DAT_8008ed68;
    do {
      local_60 = *(short *)(puVar10 + 0x28f);
      local_5e = *(short *)(puVar10 + 0x290);
      local_5c = *(short *)(puVar10 + 0x291);
      sVar2 = func_800202A4(3);
      local_60 = local_60 + -1 + sVar2;
      sVar2 = func_800202A4(3);
      local_5c = local_5c + -1 + sVar2;
      piVar5 = local_80 + iVar8;
      func_800FF0A0(*piVar5,&local_60,0xfffffff6);
      puVar10[0x28f] = (int)local_60;
      puVar10[0x290] = (int)local_5e;
      puVar10[0x291] = (int)local_5c;
      iVar11 = *piVar5;
      if ((*(int *)(iVar11 + 0x20) == 6) && (*(short *)(iVar11 + 0x24) == 0)) {
        *(undefined4 *)(iVar11 + 0x20) = 2;
        *(undefined2 *)(*piVar5 + 0x24) = 0;
      }
      iVar8 = iVar8 + 1;
      puVar10 = puVar10 + 3;
    } while (iVar8 < 3);
    if (D_80119714 == 5) {
      func_80034AB0(0x8018);
    }
    if (D_80119714 < 0x14) {
      return 0;
    }
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
LAB_800f2b64:
    iVar8 = D_80119714;
    func_800FE188(param_3,&local_50);
    func_800FE188(param_4,&local_48);
    sVar2 = (short)iVar8;
    if (iVar8 < 0x1f) {
      local_50.vx = local_50.vx + (short)(((int)local_48.vx - (int)local_50.vx) / 0x1e) * sVar2;
      local_50.vy = local_50.vy + (short)(((int)local_48.vy - (int)local_50.vy) / 0x1e) * sVar2;
      local_50.vz = local_50.vz + (short)(((int)local_48.vz - (int)local_50.vz) / 0x1e) * sVar2;
      func_800FEBF4(&local_50);
    }
    iVar11 = 0;
    iVar12 = 0;
    puVar10 = &DAT_8008ed68;
    local_48.vy = local_48.vy + -100;
    local_30 = &local_50;
    local_2c = &local_48;
    do {
      local_50.vx = *(short *)(puVar10 + 0x28f);
      local_50.vy = *(short *)(puVar10 + 0x290);
      local_50.vz = *(short *)(puVar10 + 0x291);
      local_38 = func_800FE74C(local_30,local_2c);
      iVar13 = (int)local_48.vy;
      iVar4 = (int)local_50.vy;
      iVar6 = (int)local_38;
      func_800FF3B4(local_30,local_2c,iVar6,iVar8 * 0x14,auStack_58);
      piVar5 = (int *)((int)local_80 + iVar12);
      local_56 = local_56 +
                 (short)((uint)(((((iVar13 - iVar4) * 0x14) / iVar6) / 3 - (iVar6 * 3) / 0x28) *
                               0x10000) >> 0x10) * sVar2 + (short)((iVar8 * 3 * iVar8) / 2);
      func_800FF0A0(*piVar5,auStack_58,0xfffffff6);
      if ((iVar6 < (iVar8 + 0xf) * 0x14) && (*(uint *)(*piVar5 + 0x20) < 7)) {
        *(undefined4 *)(*piVar5 + 0x20) = 6;
        *(undefined2 *)(*piVar5 + 0x24) = 0;
      }
      else {
        iVar13 = *(int *)((int)local_80 + iVar12);
        if ((*(int *)(iVar13 + 0x20) == 6) && (*(short *)(iVar13 + 0x24) == 0)) {
          *(undefined4 *)(iVar13 + 0x20) = 2;
          *(undefined2 *)(*(int *)((int)local_80 + iVar12) + 0x24) = 0;
        }
      }
      iVar12 = iVar12 + 4;
      iVar11 = iVar11 + 1;
      puVar10 = puVar10 + 3;
    } while (iVar11 < 3);
    if (iVar8 * 0x14 < (int)local_38) {
      return 0;
    }
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    func_800DDA78(param_4);
    *(uint *)(param_4 + 0x1c) = *(uint *)(param_4 + 0x1c) | 8;
  }
  else {
    if (DAT_8008ee54 < 4) {
      if (DAT_8008ee54 == 1) {
        uVar15 = __floatsidf(0x14);
        puVar10 = &DAT_8008ed68;
        sVar7 = -0x14;
        sVar14 = 0;
        sVar2 = 0;
        uVar15 = __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0x66666666,0x3ff66666);
        __fixdfsi((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
        iVar8 = 0;
        do {
          func_800FE188(param_3,&local_70);
          local_70.vy = local_70.vy + -0x46;
          switch(param_3[0x25]) {
          case 0:
            local_70.vz = local_70.vz + -0x28;
            break;
          case 1:
            local_70.vz = local_70.vz + -0x1d + sVar7;
            goto LAB_800f2658;
          case 2:
            local_70.vx = local_70.vx + -0x28;
            goto LAB_800f26cc;
          case 3:
            local_70.vz = (local_70.vz + 0x1d) - sVar7;
LAB_800f2658:
            local_70.vx = local_70.vx + (-9 - sVar14);
            goto switchD_800f260c_default;
          case 4:
            local_70.vz = local_70.vz + 0x28;
            break;
          case 5:
            local_70.vx = local_70.vx + 0x1d + sVar7;
            local_70.vz = local_70.vz + (0x31 - sVar14);
            goto LAB_800f270c;
          case 6:
            local_70.vx = local_70.vx + 0x28;
LAB_800f26cc:
            local_70.vz = local_70.vz + (0x1c - sVar2);
            goto switchD_800f260c_default;
          case 7:
            local_70.vx = local_70.vx + 0x1d + sVar7;
            local_70.vz = (local_70.vz + -0x1d) - (0x14 - sVar14);
LAB_800f270c:
          default:
            goto switchD_800f260c_default;
          }
          local_70.vx = local_70.vx + (0x1c - sVar2);
switchD_800f260c_default:
          sVar7 = sVar7 + 0x14;
          sVar14 = sVar14 + 0x14;
          sVar2 = sVar2 + 0x1c;
          puVar10[0x28f] = (int)local_70.vx;
          puVar10[0x290] = (int)local_70.vy;
          iVar11 = iVar8 + 1;
          puVar10[0x291] = (int)local_70.vz;
          puVar10 = puVar10 + 3;
          func_800FF0A0(local_80[iVar8],&local_70,0xfffffff6);
          iVar8 = iVar11;
          if (2 < iVar11) {
            DAT_8008ee54 = DAT_8008ee54 + 1;
            D_80119714 = 0;
            return 0;
          }
        } while( true );
      }
      if (DAT_8008ee54 < 2) {
        if (DAT_8008ee54 == 0) {
          param_3[0x17] = 0x88;
          param_3[0x23] = 1;
          uVar3 = func_80019F30(*param_3 + 0x10d | 0x70000,0x46);
          uVar9 = (uint)*(byte *)(param_2 + 0x5fa);
          uVar1 = *(undefined1 *)(param_2 + uVar9 + 0x5fb);
          local_80[0] = func_80015B3C(func_80018600,func_800AADE0,1);
          local_80[1] = func_80015B3C(func_80018600,func_800AADE0,1);
          DAT_8008f768 = func_80015B3C(func_80018600,func_800AADE0,1);
          DAT_8008f760 = local_80[0];
          DAT_8008f764 = local_80[1];
          local_80[2] = DAT_8008f768;
          func_80015EF8(local_80[0]);
          func_80015EF8(local_80[1]);
          func_80015EF8(local_80[2]);
          func_80015CD0(local_80[0] + 0x14,uVar3,2);
          func_80015CD0(local_80[1] + 0x14,uVar3,2);
          func_80015CD0(local_80[2] + 0x14,uVar3,2);
          func_800A81D8(param_1,local_80[0],uVar9,uVar1);
          func_800A81D8(param_1,local_80[1],uVar9,uVar1);
          func_800A81D8(param_1,local_80[2],uVar9,uVar1);
          func_800FBB90(0x1e);
          D_80119714 = 0;
          DAT_8008ee54 = DAT_8008ee54 + 1;
          func_80034AB0(0x3f);
          return 0;
        }
        return 0;
      }
      uVar15 = __floatsidf(0x3c);
      iVar11 = 0;
      puVar10 = &DAT_8008ed68;
      iVar8 = -0x3c;
      iVar13 = 0;
      iVar12 = 0;
      uVar15 = __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0x66666666,0x3ff66666);
      __fixdfsi((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      local_40 = D_80119714;
      do {
        local_68 = *(short *)(puVar10 + 0x28f);
        local_64 = *(short *)(puVar10 + 0x291);
        local_66 = *(short *)(puVar10 + 0x290) + -1;
        sVar2 = func_800202A4(3);
        local_68 = local_68 + -1 + sVar2;
        sVar2 = func_800202A4(3);
        local_64 = local_64 + -1 + sVar2;
        switch(param_3[0x25]) {
        case 0:
        case 4:
          local_68 = local_68 + (short)((0x54 - iVar12) / 0x3c);
          break;
        case 1:
          sVar14 = (short)((0x3c - iVar13) / 0x3c);
          sVar2 = (short)(iVar8 / 0x3c);
          goto LAB_800f28c0;
        case 2:
        case 6:
          local_64 = local_64 + (short)((0x54 - iVar12) / 0x3c);
          break;
        case 3:
          sVar14 = (short)((0x3c - iVar13) / 0x3c);
          sVar2 = -(short)(iVar8 / 0x3c);
LAB_800f28c0:
          local_64 = local_64 + sVar2;
          local_68 = local_68 + sVar14;
          break;
        case 5:
          sVar2 = (short)(iVar8 / 0x3c);
          sVar14 = (short)((0x3c - iVar13) / 0x3c);
          goto LAB_800f2964;
        case 7:
          sVar2 = (short)(iVar8 / 0x3c);
          sVar14 = -(short)((0x3c - iVar13) / 0x3c);
LAB_800f2964:
          local_68 = local_68 + sVar2;
          local_64 = local_64 + sVar14;
        }
        piVar5 = local_80 + iVar11;
        func_800FF0A0(*piVar5,&local_68,0xfffffff6);
        puVar10[0x28f] = (int)local_68;
        puVar10[0x290] = (int)local_66;
        puVar10[0x291] = (int)local_64;
        iVar4 = *piVar5;
        if ((*(int *)(iVar4 + 0x20) == 6) && (*(short *)(iVar4 + 0x24) == 0)) {
          *(undefined4 *)(iVar4 + 0x20) = 2;
          *(undefined2 *)(*piVar5 + 0x24) = 0;
        }
        puVar10 = puVar10 + 3;
        iVar8 = iVar8 + 0x3c;
        iVar13 = iVar13 + 0x3c;
        iVar11 = iVar11 + 1;
        iVar12 = iVar12 + 0x54;
      } while (iVar11 < 3);
      if (local_40 < 0x3c) {
        return 0;
      }
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
      goto LAB_800f2a30;
    }
    if (DAT_8008ee54 != 5) {
      if (4 < DAT_8008ee54) {
        if (DAT_8008ee54 != 99) {
          return 0;
        }
        goto LAB_800f2ee0;
      }
      goto LAB_800f2b64;
    }
  }
  if (*(int *)(local_80[0] + 0x20) != 9) {
    return 0;
  }
  if (*(short *)(local_80[0] + 0x24) != 0) {
    return 0;
  }
  func_80013928(local_80[0]);
  func_80013928(local_80[1]);
  func_80013928(local_80[2]);
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
LAB_800f2ee0:
  *(undefined1 *)(param_2 + 0x60d) = 2;
  return 1;
}

#undef local_80
#undef local_70
#undef local_68
#undef local_66
#undef local_64
#undef local_60
#undef local_5e
#undef local_5c
#undef auStack_58
#undef local_56
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef local_30
#undef local_2c
