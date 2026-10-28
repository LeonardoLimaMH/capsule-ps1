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
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
/* real-callee: __adddf3 */
/* real-callee: __divdf3 */
/* real-callee: __fixdfsi */
/* real-callee: __floatsidf */
/* real-callee: __muldf3 */
/* real-callee: __negdf2 */
/* real-callee: __subdf3 */
/* real-callee: _add_mant_d */
/* real-callee: _comp_mant */
/* real-callee: _dbl_shift */
/* real-callee: _dbl_shift_us */
/* real-callee: _err_math */
/* real-callee: _mainasu */
/* real-callee: _mul_mant_d */
/* real-callee: func_80015D14 */
/* real-callee: func_8004FE2C */
/* real-callee: func_800DD428 */
/* real-callee: func_800DDA78 */
/* real-callee: func_800FE188 */
/* real-callee: func_800FE21C */
/* real-callee: func_800FE74C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FF460 */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* compiler: 2.8.1-psx */
/* arg2: 0x80140000 */
/* arg3: 0x80150000 */
/* rand-mem: 0x80140015 2 13 */
/* rand-mem: 0x80150015 2 13 */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_80069bbe (*(u16 *)0x80069BBE)
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008f760 (*(s32 *)0x8008F760)
#define DAT_8008f764 (*(s32 *)0x8008F764)
#define DAT_8008f7a4 (*(u32 *)0x8008F7A4)
#define DAT_8008f7a8 (*(u32 *)0x8008F7A8)
#define DAT_8008f7ac (*(u32 *)0x8008F7AC)
#define D_80119714 (*(s32 *)0x80119714)
extern s32 __fixdfsi();
extern u64 __floatsidf();
extern u64 __muldf3();
#define func_80013928 ((s32 (*)())0x80013928)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800A81D8 ((s32 (*)())0x800A81D8)
#define func_800DDA78 ((s32 (*)())0x800DDA78)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FE74C ((s32 (*)())0x800FE74C)
#define func_800FEBF4 ((s32 (*)())0x800FEBF4)
#define func_800FF0A0 ((s32 (*)())0x800FF0A0)
#define func_800FF3B4 ((s32 (*)())0x800FF3B4)
undefined4 func_800F1280(undefined4 param_1,int param_2,byte *param_3,uchar *param_4)

{
  union { u64 align; u8 bytes[0x30]; } recovered_local_frame;
#define local_58 (*(int volatile (*)[2])(recovered_local_frame.bytes + 0x0))
#define local_50 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x8))
#define auStack_48 (*(undefined1 volatile (*)[8])(recovered_local_frame.bytes + 0x10))
#define local_40 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x18))
#define local_38 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x20))
#define local_30 (*(int volatile *)(recovered_local_frame.bytes + 0x28))
#define local_2c (*(int volatile *)(recovered_local_frame.bytes + 0x2C))

  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;








  local_58[0] = DAT_8008f760;
  local_58[1] = DAT_8008f764;
  if (DAT_8008ee54 == 2) {
LAB_800f1704:
    iVar5 = D_80119714;
    func_800FE188(param_3,&local_40);
    func_800FE188(param_4,&local_38);
    if ((iVar5 + -2 < 0x1f) && (1 < iVar5)) {
      sVar4 = (short)(iVar5 + -2);
      local_40.vx = local_40.vx + (short)(((int)local_38.vx - (int)local_40.vx) / 0x1e) * sVar4;
      local_40.vy = local_40.vy + (short)(((int)local_38.vy - (int)local_40.vy) / 0x1e) * sVar4;
      local_40.vz = local_40.vz + (short)(((int)local_38.vz - (int)local_40.vz) / 0x1e) * sVar4;
      func_800FEBF4(&local_40);
    }
    iVar11 = 0;
    puVar9 = ((u32 *)0x8008ED68);
    local_38.vy = local_38.vy + -100;
    do {
      local_40.vx = *(short *)(puVar9 + 0x28f);
      local_40.vy = *(short *)(puVar9 + 0x290);
      local_40.vz = *(short *)(puVar9 + 0x291);
      sVar4 = func_800FE74C(&local_40,&local_38);
      func_800FF3B4(&local_40,&local_38,(int)sVar4,iVar5 * 0x21,auStack_48);
      piVar8 = local_58 + iVar11;
      puVar9 = puVar9 + 3;
      *(uint *)(*piVar8 + 0x38) = *(uint *)(*piVar8 + 0x38) | 0x40;
      *(uint *)(*piVar8 + 0x38) = *(uint *)(*piVar8 + 0x38) & 0xffffffcf | 0x10;
      iVar11 = iVar11 + 1;
      func_800FF0A0(*piVar8,auStack_48,0xfffffff6);
    } while (iVar11 < 2);
    if (iVar5 * 0x21 < (int)sVar4) {
      return 0;
    }
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    *(uint *)(param_4 + 0x1c) = *(uint *)(param_4 + 0x1c) | 8;
    func_800DDA78(param_4);
  }
  else {
    if (DAT_8008ee54 < 3) {
      if (DAT_8008ee54 == 0) {
        param_3[0x17] = 0x88;
        param_3[0x23] = 1;
        iVar5 = func_80015B3C(-0x7ffe7a00,-0x7ff0ad3c,1);
        iVar11 = 0;
        uVar6 = func_80019F30(*param_3 + 0x10d | 0x70000,0x45);
        bVar1 = *(byte *)(param_2 + 0x5fa);
        uVar2 = *(undefined1 *)(param_2 + (uint)bVar1 + 0x5fb);
        uVar14 = __floatsidf(0x3c);
        uVar14 = __muldf3(uVar14,0x3ff6666666666666);
        __fixdfsi(uVar14);
        do {
          iVar7 = func_80015B3C(-0x7ffe7a00,-0x7ff55220,1);
          piVar8 = local_58 + iVar11;
          *piVar8 = iVar7;
          func_80015EF8(iVar7);
          iVar11 = iVar11 + 1;
          func_80015CD0(*piVar8 + 0x14,uVar6,0);
          func_800A81D8(param_1,*piVar8,(uint)bVar1,uVar2);
        } while (iVar11 < 2);
        local_30 = 0xa8;
        iVar13 = 0;
        iVar11 = -0x3c;
        iVar12 = 0;
        iVar7 = 0;
        local_2c = 0x78;
        DAT_8008f760 = local_58[0];
        DAT_8008f764 = local_58[1];
        *(undefined1 *)(iVar5 + 0x28) = 0xff;
        *(undefined1 *)(iVar5 + 0x29) = 0xaa;
        *(undefined1 *)(iVar5 + 0x2a) = 0xaa;
        *(undefined1 *)(iVar5 + 0x30) = 1;
        *(undefined1 *)(iVar5 + 0x2c) = 0;
        *(undefined1 *)(iVar5 + 0x2d) = 0;
        *(undefined1 *)(iVar5 + 0x2e) = 0;
        *(undefined2 *)(iVar5 + 0x32) = 0x32;
        func_80034AB0(10);
        iVar5 = 0;
        do {
          *(ushort *)(*(int *)((int)local_58 + iVar13) + 0x54) =
               DAT_80069bbe + (ushort)param_3[0x25] * 0x200;
          func_800FE188(param_3,&local_50);
          local_50.vy = local_50.vy + -0xa0;
          sVar3 = (short)iVar11;
          sVar4 = (short)iVar12;
          switch(param_3[0x25]) {
          case 0:
            local_50.vz = local_50.vz + 0x28;
            break;
          case 1:
            local_50.vx = local_50.vx + 0x1d + sVar3;
            local_50.vz = local_50.vz + (0x59 - sVar4);
            goto LAB_800f15fc;
          case 2:
            local_50.vx = local_50.vx + 0x28;
            goto LAB_800f15bc;
          case 3:
            local_50.vx = local_50.vx + 0x1d + sVar3;
            local_50.vz = (local_50.vz + -0x1d) - (0x3c - sVar4);
LAB_800f15fc:
            goto switchD_800f14fc_default;
          case 4:
            local_50.vz = local_50.vz + -0x28;
            break;
          case 5:
            local_50.vz = local_50.vz + -0x1d + sVar3;
            goto LAB_800f1548;
          case 6:
            local_50.vx = local_50.vx + -0x28;
LAB_800f15bc:
            local_50.vz = local_50.vz + (0x54 - (short)iVar7);
            goto switchD_800f14fc_default;
          case 7:
            local_50.vz = (local_50.vz + 0x1d) - sVar3;
LAB_800f1548:
            local_50.vx = local_50.vx + (0x1f - sVar4);
          default:
            goto switchD_800f14fc_default;
          }
          local_50.vx = local_50.vx + (0x54 - (short)iVar7);
switchD_800f14fc_default:
          piVar8 = (int *)((int)local_58 + iVar13);
          (&DAT_8008f7a4)[iVar5 * 3] = (int)local_50.vx;
          iVar13 = iVar13 + 4;
          (&DAT_8008f7a8)[iVar5 * 3] = (int)local_50.vy;
          iVar10 = iVar5 + 1;
          *(int *)(((u16 *)0x8008F7AC) + iVar5 * 6) = (int)local_50.vz;
          iVar11 = iVar11 + local_2c;
          iVar12 = iVar12 + local_2c;
          *(uint *)(*piVar8 + 0x38) = *(uint *)(*piVar8 + 0x38) | 0x40;
          *(uint *)(*piVar8 + 0x38) = *(uint *)(*piVar8 + 0x38) & 0xffffffcf | 0x10;
          iVar7 = iVar7 + local_30;
          func_800FF0A0(*piVar8,&local_50,0xfffffff6);
          iVar5 = iVar10;
        } while (iVar10 < 2);
        D_80119714 = 0;
        DAT_8008ee54 = DAT_8008ee54 + 1;
      }
      else if (DAT_8008ee54 != 1) {
        return 0;
      }
      *(undefined2 *)(*(int *)(param_3 + 0x70) + 0x24) = 1;
      if (D_80119714 == 0x35) {
        func_80034AB0(0x8018);
      }
      if (D_80119714 < 0x3c) {
        return 0;
      }
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
      goto LAB_800f1704;
    }
    if (DAT_8008ee54 != 3) {
      if (DAT_8008ee54 != 99) {
        return 0;
      }
      goto LAB_800f1930;
    }
  }
  func_80013928(local_58[0]);
  func_80013928(local_58[1]);
  D_80119714 = 0;
  DAT_8008ee54 = DAT_8008ee54 + 1;
LAB_800f1930:
  *(undefined1 *)(param_2 + 0x60d) = 2;
  return 1;
}

#undef local_58
#undef local_50
#undef auStack_48
#undef local_40
#undef local_38
#undef local_30
#undef local_2c
