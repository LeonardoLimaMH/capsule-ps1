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
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* arg0: 0x80130000 */
/* arg2: 0x80140000 */
/* arg3: 0x80150000 */
/* rand-mem: 0x80140015 2 13 */
/* rand-mem: 0x80150015 2 13 */
/* rand-u16: 0x80140070 1 0 */
/* rand-u16: 0x80140072 1 32790 */
/* rand-u16: 0x80150070 1 4096 */
/* rand-u16: 0x80150072 1 32790 */
/* rand-u16: 0x8008F7B8 1 24576 */
/* rand-u16: 0x8008F7BA 1 32790 */
/* rand-u16: 0x8008EE70 1 320 */
/* rand-u16: 0x8008EE72 1 0 */
/* rand-u16: 0x8008EE74 1 240 */
/* rand-u16: 0x8008EE76 1 0 */
/* rand-u16: 0x8008F7BC 1 8192 */
/* rand-u16: 0x8008F7BE 1 32790 */
/* rand-u16: 0x8008F7C0 1 12288 */
/* rand-u16: 0x8008F7C2 1 32790 */
/* rand-u16: 0x8008F7C4 1 16384 */
/* rand-u16: 0x8008F7C6 1 32790 */
/* rand-u16: 0x8008F7C8 1 20480 */
/* rand-u16: 0x8008F7CA 1 32790 */
/* rand-u16: 0x8008F7A4 1 0,1,29,30,31,69,70,71,100,65535 */
/* rand-u16: 0x8008F7A6 1 0,32768,65535 */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_80069bb0 (*(s32 *)0x80069BB0)
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008ee6a (*(u8 *)0x8008EE6A)
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define DAT_8008f7a4 (*(u32 *)0x8008F7A4)
#define DAT_8008f7a8 (*(u32 *)0x8008F7A8)
#define DAT_8008f7b8 (*(s32 *)0x8008F7B8)
#define DAT_8008f7bc (*(s32 *)0x8008F7BC)
#define D_80069BB4 (*(s32 *)0x80069BB4)
#define D_80119714 (*(s32 *)0x80119714)
extern s32 GetClut();
extern s32 GetTPage();
#define func_80013928 ((s32 (*)())0x80013928)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015CD0 ((s32 (*)())0x80015CD0)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_80019F30 ((s32 (*)())0x80019F30)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_80033900 ((s32 (*)())0x80033900)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800DD428 ((s32 (*)())0x800DD428)
#define func_800FE188 ((s32 (*)())0x800FE188)
extern s32 rcos();
extern s32 rsin();
undefined4 func_800BC49C(int param_1,undefined4 param_2,int param_3,uchar *param_4,int param_5)

{
  union { u64 align; u8 bytes[0x28]; } recovered_local_frame;
#define local_50 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x0))
#define local_4f (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x1))
#define local_4e (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x2))
#define local_48 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x8))
#define local_47 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x9))
#define local_46 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0xA))
#define local_40 (*(int volatile *)(recovered_local_frame.bytes + 0x10))
#define local_3c (*(int volatile *)(recovered_local_frame.bytes + 0x14))
#define local_38 (*(int volatile (*)[4])(recovered_local_frame.bytes + 0x18))

  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;










  iVar10 = DAT_8008f7b8;
  iVar14 = 0;
  puVar7 = &DAT_8008ed68;
  puVar12 = &local_50;
  do {
    puVar1 = puVar7 + 0x295;
    puVar7 = puVar7 + 1;
    iVar14 = iVar14 + 1;
    *(undefined4 *)(puVar12 + 0x18) = *puVar1;
    puVar12 = puVar12 + 4;
  } while (iVar14 < 4);
  local_40 = *(int *)(param_3 + 0x70);
  local_3c = *(int *)(param_4 + 0x70);
  if (DAT_8008ee54 == 1) {
    if ((param_5 != 0) && (iVar14 = 0, DAT_8008f7a4 < 0x46)) {
      puVar12 = &local_50;
      do {
        iVar14 = iVar14 + 1;
        *(short *)(*(int *)(puVar12 + 0x18) + 0x40) =
             *(short *)(*(int *)(puVar12 + 0x18) + 0x40) + 5;
        puVar12 = puVar12 + 4;
      } while (iVar14 < 4);
      if (300 < *(ushort *)(local_38[0] + 0x40)) {
        iVar14 = func_80015B3C(-0x7ffe7a00,-0x7ff0ad3c,1);
        *(undefined1 *)(iVar14 + 0x28) = 0xff;
        *(undefined1 *)(iVar14 + 0x29) = 0xff;
        *(undefined1 *)(iVar14 + 0x2a) = 0xff;
        *(undefined1 *)(iVar14 + 0x30) = 1;
        *(undefined1 *)(iVar14 + 0x2c) = 0;
        *(undefined1 *)(iVar14 + 0x2d) = 0;
        *(undefined1 *)(iVar14 + 0x2e) = 0;
        *(undefined2 *)(iVar14 + 0x32) = 0x1e;
        DAT_8008f7a8 = 1;
        D_80119714 = 0;
        DAT_8008ee54 = DAT_8008ee54 + 1;
      }
    }
    uVar16 = (DAT_8008f7a4 << 1) / 3;
    iVar14 = D_80119714;
    if (100 < D_80119714) {
      iVar14 = 100;
    }
    iVar15 = 0;
    uVar11 = (undefined1)((iVar14 * 0xff) / 100);
    *(undefined1 *)(iVar10 + 0x2c) = uVar11;
    *(undefined1 *)(iVar10 + 0x2d) = uVar11;
    *(s8 *)(iVar10 + 0x2e) = (s8)((iVar14 * 200) / 100);
    do {
      iVar14 = rcos((D_80119714 << 0xc) / 100);
      iVar10 = ((iVar15 % 2) * -2 + 1) * uVar16;
      iVar8 = iVar10 * 3;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 3;
      }
      iVar14 = (iVar8 >> 2) * iVar14;
      if (iVar14 < 0) {
        iVar14 = iVar14 + 0xfff;
      }
      *(short *)(local_38[iVar15] + 0x2a) = (short)(DAT_8008ee70 / 2) + (short)(iVar14 >> 0xc);
      iVar14 = rsin((D_80119714 << 0xc) / 100);
      iVar14 = ((iVar10 * 2) / 5) * iVar14;
      if (iVar14 < 0) {
        iVar14 = iVar14 + 0xfff;
      }
      *(short *)(local_38[iVar15] + 0x2e) = (short)(DAT_8008ee74 / 2) + (short)(iVar14 >> 0xc);
      piVar2 = local_38 + iVar15;
      iVar15 = iVar15 + 1;
      *(short *)(*piVar2 + 0x48) = *(short *)(*piVar2 + 0x48) + 0x3a;
    } while (iVar15 < 4);
    iVar10 = 0;
    do {
      iVar15 = func_80015B3C(-0x7ff444ac,-0x7ffe9e3c,1);
      uVar9 = func_80019F30(0x70013,0x5c);
      func_80015EF8(iVar15);
      func_80015CD0(iVar15 + 0x14,uVar9,1);
      sVar5 = func_800202A4(0x1b);
      *(short *)(iVar15 + 0x46) =
           (*(short *)(local_38[iVar10] + 0x2a) + sVar5) - ((short)(DAT_8008ee70 / 2) + 0xd);
      sVar4 = func_800202A4(0x1b);
      iVar14 = DAT_8008ee74;
      uVar3 = *(uint *)(iVar15 + 0x38) & 0xffffffcf;
      sVar5 = *(short *)(local_38[iVar10] + 0x2e);
      *(undefined2 *)(iVar15 + 0x4e) = 1;
      *(undefined2 *)(iVar15 + 0x52) = 0x1000;
      *(undefined2 *)(iVar15 + 0x50) = 0x1000;
      *(undefined4 *)(iVar15 + 0x3c) = 0x4b;
      *(uint *)(iVar15 + 0x38) = uVar3 | 0x50;
      *(undefined2 *)(iVar15 + 0x78) = 0x51;
      *(short *)(iVar15 + 0x4a) = (sVar5 - sVar4) - ((short)(iVar14 / 2) + -0xd);
      *(uint *)(iVar15 + 0x38) = uVar3 | 0x58;
      iVar14 = func_800202A4(0x21);
      *(uint *)(iVar15 + 0x7c) = uVar16 + iVar14 + -0x10;
      *(int *)(iVar15 + 0x80) = iVar10 * -2 + 1;
      iVar8 = func_800202A4(9);
      iVar14 = D_80119714;
      iVar10 = iVar10 + 1;
      *(undefined4 *)(iVar15 + 0x20) = 2;
      *(int *)(iVar15 + 0x84) = iVar14 * 2 + iVar8 + -4;
    } while (iVar10 < 2);
    DAT_8008f7a4 = DAT_8008f7a4 - 1;
    if (DAT_8008f7a4 < 0x1e) {
      DAT_8008f7a4 = 0x1e;
    }
  }
  else if (DAT_8008ee54 < 2) {
    if (DAT_8008ee54 != 0) {
      return 0;
    }
    DAT_8008f7b8 = func_80015B3C(-0x7ffe7a00,-0x7ff040c0,1);
    iVar14 = 0;
    *(short *)(DAT_8008f7b8 + 0x28) = (short)(DAT_8008ee70 / 2);
    iVar10 = DAT_8008ee74;
    *(undefined1 *)(DAT_8008f7b8 + 0x30) = 5;
    *(undefined1 *)(DAT_8008f7b8 + 0x2c) = 1;
    *(undefined1 *)(DAT_8008f7b8 + 0x2d) = 1;
    *(undefined1 *)(DAT_8008f7b8 + 0x2e) = 1;
    *(undefined2 *)(DAT_8008f7b8 + 0x32) = 300;
    *(short *)(DAT_8008f7b8 + 0x2a) = (short)(iVar10 / 2) + 5;
    *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 0x40000000;
    do {
      iVar15 = 0;
      sVar5 = 0;
      iVar10 = iVar14;
      do {
        iVar8 = func_80015B3C(-0x7ffe7a00,-0x7ff0440c,1);
        iVar13 = iVar15 << 9;
        iVar15 = iVar15 + 1;
        *(undefined1 *)(iVar8 + 0x4d) = 0x78;
        *(undefined2 *)(iVar8 + 0x42) = 0x1e;
        *(undefined2 *)(iVar8 + 0x32) = 0;
        *(short *)(iVar8 + 0x40) = 0x32 - sVar5;
        *(short *)(iVar8 + 0x48) = (short)iVar13;
        *(undefined1 *)(iVar8 + 0x44) = 0xfa;
        *(undefined1 *)(iVar8 + 0x45) = 0xfa;
        *(undefined1 *)(iVar8 + 0x46) = 200;
        (&DAT_8008f7bc)[iVar10] = iVar8;
        sVar5 = sVar5 + 10;
        iVar10 = iVar10 + 2;
      } while (iVar15 < 2);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 2);
    DAT_8008ee6a = 2;
    DAT_8008f7a8 = 0;
    D_80119714 = 0;
    DAT_8008f7a4 = DAT_8008f7a4 * 3 >> 1;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  else {
    if (DAT_8008ee54 != 2) {
      if (DAT_8008ee54 != 3) {
        return 0;
      }
      if (D_80119714 == (D_80119714 / 3) * 3) {
        param_4[0x25] = param_4[0x25] + '\x01';
        param_4[0x25] = param_4[0x25] & 7;
      }
      if (D_80119714 == 100) {
        *(uint *)(local_3c + 0x38) = *(uint *)(local_3c + 0x38) & 0xffffffbf;
      }
      if (D_80119714 < 100) {
        sVar5 = 0x3000 - (short)((D_80119714 << 0xd) / 100);
        *(short *)(local_3c + 0x52) = sVar5;
        *(short *)(local_3c + 0x50) = sVar5;
        D_80069BB4 = D_80069BB4 + -0x17;
        DAT_80069bb0 = DAT_80069bb0 + -2;
      }
      else {
        iVar10 = rsin(((D_80119714 + -100) * 0x1000) / 0x19);
        *(short *)(local_3c + 0x52) = 0x1000 - (short)(iVar10 / 2);
      }
      if (D_80119714 == 0x6e) {
        iVar10 = func_80015B3C(-0x7ff43048,-0x7ff0821c,3);
        func_800FE188(param_4,(SVECTOR *)(iVar10 + 0x28));
        *(undefined1 *)(iVar10 + 0x30) = 0x7f;
        *(undefined1 *)(iVar10 + 0x31) = 0x7f;
        *(undefined1 *)(iVar10 + 0x32) = 0x7f;
        *(undefined1 *)(iVar10 + 0x34) = 0;
        *(undefined1 *)(iVar10 + 0x35) = 0;
        *(undefined1 *)(iVar10 + 0x36) = 0;
        *(undefined1 *)(iVar10 + 0x38) = 0xc;
        *(short *)(iVar10 + 0x2a) = *(short *)(iVar10 + 0x2a) + -0x20;
        uVar6 = GetTPage(0,1,0x280,0x100);
        *(undefined2 *)(iVar10 + 0x42) = uVar6;
        uVar6 = GetClut(0x20,0x1f0);
        *(undefined2 *)(iVar10 + 0x44) = uVar6;
        *(undefined1 *)(iVar10 + 0x46) = 0x40;
        *(undefined1 *)(iVar10 + 0x47) = 0;
        *(undefined1 *)(iVar10 + 0x40) = 1;
        func_80034AB0(0x3e);
      }
      if (D_80119714 < 0x8c) {
        return 0;
      }
      *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) ^ 0x40000000;
      return 1;
    }
    func_80034AB0(5);
    func_80034AB0(0x2c);
    *(undefined1 *)(local_40 + 0x5a) = 0x80;
    *(undefined1 *)(local_40 + 0x59) = 0x80;
    *(undefined1 *)(local_40 + 0x58) = 0x80;
    *(undefined1 *)(local_3c + 0x5a) = 0x80;
    *(undefined1 *)(local_3c + 0x59) = 0x80;
    *(undefined1 *)(local_3c + 0x58) = 0x80;
    param_4[0x17] = '\x01';
    *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) ^ 0x200;
    local_50 = 0x10;
    local_4f = 0x10;
    local_4e = 0x10;
    local_48 = 0x60;
    local_47 = 0x60;
    local_46 = 0x60;
    func_800DD428(&local_50,&local_48,0xb4);
    *(undefined2 *)(local_3c + 0x46) = 0;
    *(undefined2 *)(local_3c + 0x4a) = 0x19;
    *(undefined2 *)(local_3c + 0x4e) = 0x14;
    *(undefined2 *)(local_3c + 0x52) = 0x3000;
    *(undefined2 *)(local_3c + 0x50) = 0x3000;
    iVar10 = 0;
    puVar12 = &local_50;
    *(uint *)(local_3c + 0x38) = *(uint *)(local_3c + 0x38) | 0x40;
    do {
      piVar2 = (int *)(puVar12 + 0x18);
      puVar12 = puVar12 + 4;
      iVar10 = iVar10 + 1;
      func_80013928(*piVar2);
    } while (iVar10 < 4);
    DAT_8008ee6a = 0;
    func_80033900(*(undefined2 *)(param_1 + 8),2);
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  }
  return 0;
}

#undef local_50
#undef local_4f
#undef local_4e
#undef local_48
#undef local_47
#undef local_46
#undef local_40
#undef local_3c
#undef local_38
