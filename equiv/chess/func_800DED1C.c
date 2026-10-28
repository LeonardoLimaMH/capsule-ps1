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
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
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
#define DAT_80063953 (*(u8 *)0x80063953)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define DAT_8008f754 (*(u16 *)0x8008F754)
#define DAT_8008f756 (*(s16 *)0x8008F756)
#define DAT_800906a0 (*(s32 *)0x800906A0)
#define D_80118C18 (*(s32 *)0x80118C18)
#define D_80119714 (*(s32 *)0x80119714)
#define D_8011974C (*(u8 *)0x8011974C)
#define D_80119760 (*(s32 *)0x80119760)
#define D_80119764 (*(s32 *)0x80119764)
extern s32 RotTransPers();
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_800161C4 ((s32 (*)())0x800161C4)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_8009CA60 ((s32 (*)())0x8009CA60)
#define func_800A83E0 ((s32 (*)())0x800A83E0)
#define func_800D862C ((s32 (*)())0x800D862C)
#define func_800DD274 ((s32 (*)())0x800DD274)
#define func_800DD3D8 ((s32 (*)())0x800DD3D8)
#define func_800DD4A8 ((s32 (*)())0x800DD4A8)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FE958 ((s32 (*)())0x800FE958)
#define func_800FED90 ((s32 (*)())0x800FED90)
#define func_800FF190 ((s32 (*)())0x800FF190)
undefined4 func_800DED1C(undefined4 param_1,int param_2,int param_3,byte *param_4)

{
  union { u64 align; u8 bytes[0x18]; } recovered_local_frame;
#define local_40 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x0))
#define local_38 (*(short volatile *)(recovered_local_frame.bytes + 0x8))
#define local_36 (*(short volatile *)(recovered_local_frame.bytes + 0xA))
#define lStack_34 (*(long volatile *)(recovered_local_frame.bytes + 0xC))
#define alStack_30 (*(long volatile (*)[2])(recovered_local_frame.bytes + 0x10))

  bool bVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;






  iVar10 = *(int *)(param_3 + 0x78);
  iVar12 = *(int *)(param_4 + 0x70);
  iVar11 = *(int *)(param_4 + 0x74);
  bVar1 = false;
  switch(DAT_8008ee54) {
  case 0:
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    break;
  case 1:
    uVar2 = func_800A83E0(param_1,param_3,param_4);
    *(undefined1 *)(param_3 + 0x25) = uVar2;
    *(undefined1 *)(param_3 + 0x17) = 0x88;
    *(undefined1 *)(param_3 + 0x23) = 1;
    func_8009CA60(3);
    func_800FE958(0,0,600);
    D_8011974C = '\x01';
    goto LAB_800defec;
  case 2:
    iVar10 = func_800FED90(param_4);
    if (iVar10 != 0) {
      *(undefined1 *)(param_3 + 0x24) = 0x45;
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x8000;
      func_80034AB0(0x801d);
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
    }
    break;
  case 3:
    func_800FE188(param_4,&local_40);
    *(short *)(iVar10 + 0x6a) = local_40.vx;
    *(short *)(iVar10 + 0x6e) = local_40.vy + 0x23;
    *(undefined4 *)(iVar10 + 0x84) = 1;
    *(undefined4 *)(iVar10 + 0x88) = 1;
    *(short *)(iVar10 + 0x72) = local_40.vz;
    *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 0x90000000;
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  case 4:
    func_800FE188(param_4,&local_40);
    local_40.vy = local_40.vy + (short)D_80119714 * -0xb;
    func_800FF190(param_4,&local_40,1);
    if (D_80119714 < 0x3c) {
      return 0;
    }
    uVar5 = func_800D862C(*(undefined1 *)
                           ((uint)*(byte *)(param_3 + 0x16) * 4 +
                            (uint)*(byte *)(param_3 + 0x15) * 0x34 + D_80118C18 + 3),
                          *(s8 *)(param_2 + 0x712) << 7 | *(s8 *)(param_2 + 0x713) + 1U);
    func_800DD274(param_4,(uVar5 & 0xff) / 0xd,(uVar5 & 0xff) % 0xd);
    *(undefined1 *)(param_3 + 0x17) = 0x88;
    *(undefined1 *)(param_3 + 0x23) = 1;
    uVar2 = func_800A83E0(param_1,param_3,param_4);
    *(undefined1 *)(param_3 + 0x25) = uVar2;
    D_80119760 = CONCAT22(0xfda8,(undefined2)D_80119760);
    D_80119764 = 0;
LAB_800defec:
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    break;
  case 5:
    iVar10 = func_800FED90(param_4);
    if (iVar10 != 0) {
      DAT_8008f754 = 0x1d6;
      DAT_8008f756 = 5;
      func_80034AB0(0x2c);
      D_80119714 = 0;
      DAT_8008ee54 = DAT_8008ee54 + 1;
    }
    break;
  case 6:
    func_800FE188(param_4,&local_40);
    D_80119764 = D_80119764 + 40000;
    D_80119760 = D_80119760 + D_80119764;
    if (-1 < D_80119760) {
      iVar10 = 350000 - D_80119764;
      D_80119760 = 0;
      DAT_8008f754 = (short)(-(int)DAT_8008f754 / 2);
      (*(u16 *)((u8 *)&D_80119764 + 2)) = (short)((uint)iVar10 >> 0x10);
      iVar9 = (int)(*(u16 *)((u8 *)&D_80119764 + 2));
      DAT_8008f756 = DAT_8008f756 + -1;
      D_80119764 = iVar10;
      if (iVar9 < -1) {
        func_800DD3D8(-iVar9,iVar9 * -2);
        bVar1 = true;
      }
      else {
        D_80119760 = 0;
        *(undefined1 *)(iVar11 + 0x57) = 0;
        *(undefined1 *)(iVar12 + 0x57) = 0;
        DAT_8008f754 = 0;
        D_80119714 = 0;
        DAT_8008ee54 = DAT_8008ee54 + 1;
      }
    }
    local_40.vy = local_40.vy + (*(u16 *)((u8 *)&D_80119760 + 2));
    func_8002CEC0(&DAT_800906a0);
    lVar6 = RotTransPers(&local_40,(long *)&local_38,&lStack_34,alStack_30);
    local_38 = local_38 - (short)(DAT_8008ee70 / 2);
    *(short *)(iVar11 + 0x46) = local_38;
    *(short *)(iVar12 + 0x46) = local_38;
    local_36 = local_36 - (short)(DAT_8008ee74 / 2);
    *(short *)(iVar11 + 0x4a) = local_36;
    *(short *)(iVar12 + 0x4a) = local_36;
    uVar8 = (undefined2)(lVar6 + -10);
    *(undefined2 *)(iVar11 + 0x4e) = uVar8;
    *(undefined2 *)(iVar12 + 0x4e) = uVar8;
    uVar8 = (undefined2)(0x140000 / (lVar6 + -10));
    *(undefined2 *)(iVar11 + 0x52) = uVar8;
    *(undefined2 *)(iVar11 + 0x50) = uVar8;
    *(undefined2 *)(iVar12 + 0x52) = uVar8;
    *(undefined2 *)(iVar12 + 0x50) = uVar8;
    uVar2 = (undefined1)((int)-((byte)(&DAT_80063953)[(uint)*param_4 * 0x3c] & 0x3f) / 2);
    *(undefined1 *)(iVar11 + 0x57) = uVar2;
    *(undefined1 *)(iVar12 + 0x57) = uVar2;
    sVar3 = *(short *)(iVar12 + 0x54) + DAT_8008f754;
    *(short *)(iVar12 + 0x54) = sVar3;
    *(short *)(iVar11 + 0x54) = sVar3;
    if (bVar1) {
      iVar10 = 0;
      if (0 < DAT_8008f756 * 3) {
        do {
          iVar11 = func_80015B3C(func_800DD4A8,func_800161C4,1);
          uVar7 = func_80019F30(0x70013,0x5d);
          func_80015EF8(iVar11);
          func_80015CD0(iVar11 + 0x14,uVar7,2);
          sVar3 = func_800202A4(0x29);
          *(short *)(iVar11 + 0x46) = *(short *)(iVar12 + 0x46) + sVar3 + -0x14;
          sVar4 = func_800202A4(0x15);
          sVar3 = *(short *)(iVar12 + 0x4a);
          *(short *)(iVar11 + 0x4e) = (short)lVar6 + -0x15;
          *(short *)(iVar11 + 0x4a) = (sVar3 - sVar4) + 10;
          *(undefined2 *)(iVar11 + 0x50) = *(undefined2 *)(iVar12 + 0x50);
          uVar8 = *(undefined2 *)(iVar12 + 0x52);
          *(uint *)(iVar11 + 0x38) = *(uint *)(iVar11 + 0x38) | 0x70;
          *(undefined2 *)(iVar11 + 0x52) = uVar8;
          iVar10 = iVar10 + 1;
        } while (iVar10 < DAT_8008f756 * 3);
      }
      func_80034AB0(0x1c);
      return 0;
    }
    break;
  case 7:
    *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) ^ 0x90000000;
    *(undefined1 *)(iVar11 + 0x57) = 0;
    *(undefined1 *)(iVar12 + 0x57) = 0;
    *(undefined2 *)(iVar11 + 0x54) = 0;
    *(undefined2 *)(iVar12 + 0x54) = 0;
    D_8011974C = '\x02';
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    break;
  case 8:
    if (D_8011974C != '\0') {
      return 0;
    }
  case 99:
    return 1;
  }
  return 0;
}

#undef local_40
#undef local_38
#undef local_36
#undef lStack_34
#undef alStack_30
