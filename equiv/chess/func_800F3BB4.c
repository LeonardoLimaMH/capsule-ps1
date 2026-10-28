#include "common.h"

/* compiler: 2.8.1-psx */
#include "common.h"

/* arg2: 0x80140000 */
/* arg3: 0x80150000 */
/* rand-mem: 0x80140015 2 13 */
/* rand-mem: 0x80150015 2 13 */
/* rand-ptr: 0x8008F7A4 2 */
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
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008ee6a (*(u8 *)0x8008EE6A)
#define DAT_8008f7a4 (*(s32 *)0x8008F7A4)
#define DAT_8008f7a8 (*(s32 *)0x8008F7A8)
#define DAT_8008f7c0 (*(u32 *)0x8008F7C0)
#define D_80119714 (*(s32 *)0x80119714)
#define _DAT_8008f7b0 (*(s32 *)0x8008F7B0)
extern s32 GetClut();
extern s32 GetTPage();
#define func_80013928 ((s32 (*)())0x80013928)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80018600 ((s32 (*)())0x80018600)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_80028200 ((s32 (*)())0x80028200)
#define func_80033974 ((s32 (*)())0x80033974)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800374E8 ((s32 (*)())0x800374E8)
#define func_800DD3D8 ((s32 (*)())0x800DD3D8)
#define func_800DD428 ((s32 (*)())0x800DD428)
#define func_800F5188 ((s32 (*)())0x800F5188)
#define func_800F52C4 ((s32 (*)())0x800F52C4)
#define func_800F7DE4 ((s32 (*)())0x800F7DE4)
#define func_800F8B48 ((s32 (*)())0x800F8B48)
#define func_800FA548 ((s32 (*)())0x800FA548)
#define func_800FE188 ((s32 (*)())0x800FE188)
#define func_800FEBF4 ((s32 (*)())0x800FEBF4)
undefined4 func_800F3BB4(undefined4 param_1,undefined4 param_2,uchar *param_3,uchar *param_4)

{
  union { u64 align; u8 bytes[0x30]; } recovered_local_frame;
#define local_58 (*(int volatile (*)[2])(recovered_local_frame.bytes + 0x0))
#define local_50 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x8))
#define local_4f (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x9))
#define local_4e (*(undefined1 volatile *)(recovered_local_frame.bytes + 0xA))
#define local_48 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x10))
#define local_47 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x11))
#define local_46 (*(undefined1 volatile *)(recovered_local_frame.bytes + 0x12))
#define local_40 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x18))
#define local_38 (*(SVECTOR volatile *)(recovered_local_frame.bytes + 0x20))
#define local_30 (*(int volatile (*)[2])(recovered_local_frame.bytes + 0x28))

  undefined2 uVar1;
  int iVar2;
  int iVar3;
  s8 cVar4;
  int *piVar5;
  s8 cVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  undefined4 *puVar10;











  iVar3 = _DAT_8008f7b0;
  local_58[0] = DAT_8008f7a4;
  local_58[1] = DAT_8008f7a8;
  switch(DAT_8008ee54) {
  case 0:
    param_3[0x17] = 0x87;
    param_3[0x23] = '\x01';
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    func_800374E8(0x8003);
    local_50 = 0x60;
    local_4f = 0x60;
    local_4e = 0x60;
    local_48 = 0x10;
    local_47 = 0x10;
    local_46 = 0x10;
    func_800DD428(&local_50,&local_48,0x14);
  case 1:
    if (D_80119714 == 0x14) {
      iVar3 = func_80015B3C(func_80018600,func_800F52C4,1);
      *(undefined1 *)(iVar3 + 0x28) = 0xfa;
      *(undefined1 *)(iVar3 + 0x29) = 0xaa;
      *(undefined1 *)(iVar3 + 0x2a) = 0xaa;
      *(undefined1 *)(iVar3 + 0x2c) = 0;
      *(undefined1 *)(iVar3 + 0x2d) = 0;
      *(undefined1 *)(iVar3 + 0x2e) = 0;
      *(undefined1 *)(iVar3 + 0x30) = 1;
      *(undefined2 *)(iVar3 + 0x32) = 0x1e;
      local_50 = 0x60;
      local_4f = 0x60;
      local_4e = 0x60;
      local_48 = 0x20;
      local_47 = 1;
      local_46 = 1;
      func_800DD428(&local_50,&local_48,0x50);
      func_80028200(*param_3,1);
      func_80028200(*param_3,0);
    }
    if ((int)D_80119714 < 0x23) {
      return 0;
    }
    iVar3 = D_80119714 - 0x23;
    if (iVar3 < 0x1e) {
      func_800FE188(param_3,&local_40);
      func_800FE188(param_4,&local_38);
      local_40.vx = local_40.vx + (short)((((int)local_38.vx - (int)local_40.vx) * iVar3) / 0x1e);
      local_40.vy = local_40.vy + (short)((((int)local_38.vy - (int)local_40.vy) * iVar3) / 0x1e);
      local_40.vz = local_40.vz + (short)((((int)local_38.vz - (int)local_40.vz) * iVar3) / 0x1e);
      func_800FEBF4(&local_40);
      return 0;
    }
    if ((int)D_80119714 < 0x50) {
      return 0;
    }
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    func_800DD3D8(10,0x38);
  case 2:
    puVar10 = &DAT_8008ed68;
    sVar9 = 0x46;
    sVar8 = 0x28;
    iVar7 = 0;
    cVar6 = '\0';
    iVar3 = 0;
    do {
      iVar2 = func_80015B3C(func_80018600,func_800F8B48,1);
      local_30[iVar3] = iVar2;
      func_800FE188(param_4,(SVECTOR *)(iVar2 + 0x28));
      cVar4 = -0x6a - cVar6;
      *(s8 *)(local_30[iVar3] + 0x30) = cVar4;
      *(s8 *)(local_30[iVar3] + 0x31) = cVar4;
      *(s8 *)(local_30[iVar3] + 0x32) = cVar4;
      *(undefined1 *)(local_30[iVar3] + 0x34) = 1;
      *(undefined1 *)(local_30[iVar3] + 0x35) = 1;
      *(undefined1 *)(local_30[iVar3] + 0x36) = 1;
      *(undefined1 *)(local_30[iVar3] + 0x38) = 10;
      uVar1 = GetTPage(0,1,0x280,0x100);
      *(undefined2 *)(local_30[iVar3] + 0x3a) = uVar1;
      uVar1 = GetClut(iVar7,0x1f0);
      *(undefined2 *)(local_30[iVar3] + 0x3c) = uVar1;
      *(undefined1 *)(local_30[iVar3] + 0x3e) = 0x40;
      *(undefined1 *)(local_30[iVar3] + 0x3f) = 0;
      cVar6 = cVar6 + 'Z';
      *(undefined1 *)(local_30[iVar3] + 0x40) = 1;
      iVar2 = iVar3 + 1;
      *(undefined2 *)(local_30[iVar3] + 0x42) = 10;
      iVar7 = iVar7 + 0x90;
      *(short *)(local_30[iVar3] + 0x44) = sVar8;
      sVar8 = sVar8 + 3;
      *(short *)(local_30[iVar3] + 0x46) = sVar9;
      sVar9 = sVar9 + 0x1e;
      puVar10[0x28f] = local_30[iVar3];
      puVar10 = puVar10 + 1;
      iVar3 = iVar2;
    } while (iVar2 < 2);
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    func_80034AB0(0x8003);
    return 0;
  case 3:
    if ((D_80119714 & 1) == 0) {
      iVar7 = 0;
      piVar5 = local_58;
      iVar3 = 300;
      do {
        iVar2 = iVar3 * D_80119714;
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + -0x32;
        *(short *)(*piVar5 + 0x42) = (short)(iVar2 / 10);
        uVar1 = func_800202A4(0x1000);
        *(undefined2 *)(*piVar5 + 0x48) = uVar1;
        piVar5 = piVar5 + 1;
      } while (iVar7 < 2);
    }
    if (10 < (int)D_80119714) {
      D_80119714 = 0;
      DAT_8008ee6a = 2;
      DAT_8008ee54 = DAT_8008ee54 + 1;
    }
    break;
  case 4:
    if ((D_80119714 & 1) == 0) {
      iVar3 = 0;
      piVar5 = local_58;
      do {
        uVar1 = func_800202A4(0x1000);
        iVar3 = iVar3 + 1;
        *(undefined2 *)(*piVar5 + 0x48) = uVar1;
        piVar5 = piVar5 + 1;
      } while (iVar3 < 2);
    }
    if ((int)D_80119714 < 0x2e) {
      return 0;
    }
    iVar3 = func_80015B3C(func_80018600,func_800F52C4,1);
    func_80013928(local_58[0]);
    func_80013928(local_58[1]);
    *(undefined1 *)(iVar3 + 0x28) = 0xfa;
    *(undefined1 *)(iVar3 + 0x29) = 0xb4;
    *(undefined1 *)(iVar3 + 0x2a) = 0xb4;
    *(undefined1 *)(iVar3 + 0x30) = 1;
    *(undefined1 *)(iVar3 + 0x2c) = 0;
    *(undefined1 *)(iVar3 + 0x2d) = 0;
    *(undefined1 *)(iVar3 + 0x2e) = 0;
    *(undefined2 *)(iVar3 + 0x32) = 0x14;
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    break;
  case 5:
    iVar3 = func_80015B3C(func_80018600,func_800FA548,1);
    func_800FE188(param_4,(SVECTOR *)(iVar3 + 0x28));
    *(undefined1 *)(iVar3 + 0x30) = 0xff;
    *(undefined1 *)(iVar3 + 0x31) = 0xff;
    *(undefined1 *)(iVar3 + 0x32) = 0xff;
    *(undefined2 *)(iVar3 + 0x36) = 0x32;
    *(undefined2 *)(iVar3 + 0x38) = 0x32;
    *(undefined2 *)(iVar3 + 0x34) = 10;
    *(undefined2 *)(iVar3 + 0x3e) = 1;
    *(undefined2 *)(iVar3 + 0x3c) = 10;
    *(undefined2 *)(iVar3 + 0x42) = 10;
    *(undefined2 *)(iVar3 + 0x44) = 0;
    uVar1 = GetTPage(0,0,0x280,0x100);
    *(undefined2 *)(iVar3 + 0x46) = uVar1;
    uVar1 = GetClut(0x10,0x1f0);
    *(undefined2 *)(iVar3 + 0x48) = uVar1;
    *(undefined1 *)(iVar3 + 0x4a) = 0;
    *(undefined2 *)(iVar3 + 0x3a) = 0;
    *(undefined2 *)(iVar3 + 0x40) = 0;
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    _DAT_8008f7b0 = iVar3;
    func_80034AB0(0x3f);
    return 0;
  case 6:
    if (D_80119714 == 2) {
      func_800DD3D8(0x1e,0x54);
    }
    *(short *)(iVar3 + 0x34) = ((short)(D_80119714 << 4) - (short)D_80119714) * 2 + 10;
    *(short *)(iVar3 + 0x3a) = (short)D_80119714 * 2000;
    if (0x15e < *(short *)(iVar3 + 0x34)) {
      *(undefined2 *)(iVar3 + 0x34) = 0x15e;
    }
    if ((int)D_80119714 < 0x56) {
      return 0;
    }
    func_80034AB0(0x1c);
    func_80033974(0x8000);
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
    func_80013928(iVar3);
    local_50 = 0x20;
    local_4f = 1;
    local_4e = 1;
    local_48 = 0x60;
    local_47 = 0x60;
    local_46 = 0x60;
    func_800DD428(&local_50,&local_48,100);
    func_800DD3D8(0x3c,0xf);
    DAT_8008ee6a = 0;
    break;
  case 7:
    iVar3 = func_80015B3C(func_800F5188,func_800F7DE4,1);
    func_800FE188(param_4,(SVECTOR *)(iVar3 + 0x28));
    *(undefined1 *)(iVar3 + 0x30) = 0x7f;
    *(undefined1 *)(iVar3 + 0x31) = 0x7f;
    *(undefined1 *)(iVar3 + 0x32) = 0x7f;
    *(undefined1 *)(iVar3 + 0x38) = 0x10;
    *(undefined1 *)(iVar3 + 0x34) = 0;
    *(undefined1 *)(iVar3 + 0x35) = 0;
    *(undefined1 *)(iVar3 + 0x36) = 0;
    *(undefined2 *)(iVar3 + 0x3a) = 0x30;
    *(undefined2 *)(iVar3 + 0x3c) = 0;
    *(short *)(iVar3 + 0x2a) = *(short *)(iVar3 + 0x2a) + -0x20;
    uVar1 = GetTPage(0,1,0x280,0x100);
    *(undefined2 *)(iVar3 + 0x42) = uVar1;
    uVar1 = GetClut(0x80,0x1f0);
    *(undefined2 *)(iVar3 + 0x44) = uVar1;
    *(undefined1 *)(iVar3 + 0x46) = 0x40;
    *(undefined1 *)(iVar3 + 0x47) = 0;
    *(undefined1 *)(iVar3 + 0x40) = 1;
    DAT_8008f7c0 = 0;
    D_80119714 = 0;
    DAT_8008ee54 = DAT_8008ee54 + 1;
  case 8:
    if (D_80119714 == 1) {
      iVar3 = func_80015B3C(func_80018600,func_800F52C4,1);
      *(undefined1 *)(iVar3 + 0x28) = 0xff;
      *(undefined1 *)(iVar3 + 0x29) = 0xe6;
      *(undefined1 *)(iVar3 + 0x2a) = 0xe6;
      *(undefined1 *)(iVar3 + 0x2c) = 0;
      *(undefined1 *)(iVar3 + 0x2d) = 0;
      *(undefined1 *)(iVar3 + 0x2e) = 0;
      *(undefined1 *)(iVar3 + 0x30) = 1;
      *(undefined2 *)(iVar3 + 0x32) = 0x1e;
    }
    if (D_80119714 == 0x10) {
      func_800DD3D8(10,0x2c);
    }
    if (0x3b < (int)D_80119714) {
      return 1;
    }
  }
  return 0;
}

#undef local_58
#undef local_50
#undef local_4f
#undef local_4e
#undef local_48
#undef local_47
#undef local_46
#undef local_40
#undef local_38
#undef local_30
