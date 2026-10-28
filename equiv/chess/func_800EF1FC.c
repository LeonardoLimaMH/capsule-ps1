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
/* real-callee: func_800459CC */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FE21C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FF460 */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FE74C */
/* real-callee: func_800DD428 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800DDA78 */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
#define DAT_80069bbe (*(s16 *)0x80069BBE)
#define DAT_8006b2b4 (*(s32 *)0x8006B2B4)
#define DAT_8006b2b8 (*(s16 *)0x8006B2B8)
#define DAT_80085a10 (*(s32 *)0x80085A10)
#define DAT_8008f7a4 (*(u32 *)0x8008F7A4)
#define DAT_8008f7a8 (*(u32 *)0x8008F7A8)
#define DAT_8008f7c8 (*(s32 *)0x8008F7C8)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800A835C ((s32 (*)())0x800A835C)
#define func_800D7CC4 ((s32 (*)())0x800D7CC4)
#define func_800FE188 ((s32 (*)())0x800FE188)
int func_800EF1FC(int param_1,undefined4 param_2,int param_3,int param_4)

{
  short sVar1;
  s8 cVar2;
  uchar uVar3;
  int iVar4;
  int iVar5;
  uchar *unit;
  byte *pbVar6;

  unit = ((u8 *)0x80085A10) + param_3 * 0x2e8 + param_4 * 0x7c;
  iVar4 = func_80015B3C(-0x7ff11340,-0x7ff034a4,1);
  pbVar6 = (byte *)(param_1 + (uint)*(byte *)(param_1 + 0xbca) * 0x2e8 + 0x5e8 +
                   (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + 0xbca) + 0xbcb) * 0x7c);
  *(uint *)(iVar4 + 0x5c) = *(uint *)(((u8 *)0x8006B2B4) + (uint)*pbVar6 * 0x58) >> 0x1a & 7;
  iVar5 = (int)*(short *)(((u8 *)0x8006B2B8) + (uint)*pbVar6 * 0x58) +
          ((uint)pbVar6[0x12] - (uint)unit[0x12]) * 10;
  if (iVar5 < 5) {
    iVar5 = 5;
  }
  else if (100 < iVar5) {
    iVar5 = 100;
  }
  cVar2 = func_800D7CC4((int)(short)iVar5);
  if (cVar2 != '\0') {
    uVar3 = func_800A835C(param_1,param_3);
    unit[0x25] = uVar3;
    unit[0x17] = '\x01';
    unit[0x28] = ((byte)((uint)*(undefined4 *)(((u8 *)0x8006B2B4) + (uint)*pbVar6 * 0x58) >> 0x19) & 0xe)
                 + 1;
  }
  DAT_8008f7c8 = (uint)(cVar2 != '\0');
  DAT_8008f7a4 = (int)*(short *)(*(int *)(unit + 0x70) + 0x46);
  DAT_8008f7a8 = (int)*(short *)(*(int *)(unit + 0x70) + 0x4a);
  func_800FE188(unit,(SVECTOR *)(iVar4 + 0x28));
  *(undefined1 *)(iVar4 + 0x30) = 5;
  *(undefined1 *)(iVar4 + 0x31) = 5;
  *(undefined1 *)(iVar4 + 0x32) = 5;
  *(undefined1 *)(iVar4 + 0x38) = 5;
  *(undefined2 *)(iVar4 + 0x3a) = 0xffff;
  *(undefined2 *)(iVar4 + 0x42) = 0x96;
  *(undefined2 *)(iVar4 + 0x44) = 0x3c;
  *(undefined1 *)(iVar4 + 0x34) = 1;
  *(undefined1 *)(iVar4 + 0x35) = 1;
  *(undefined1 *)(iVar4 + 0x36) = 1;
  *(undefined1 *)(iVar4 + 0x40) = 1;
  *(undefined2 *)(iVar4 + 0x46) = 0x5a;
  sVar1 = *(short *)(*(int *)(unit + 0x70) + 0x4e);
  *(undefined4 *)(iVar4 + 0x50) = 0;
  *(int *)(iVar4 + 0x4c) = (int)sVar1;
  iVar5 = (int)DAT_80069bbe;
  *(uchar **)(iVar4 + 0x58) = unit;
  *(int *)(iVar4 + 0x54) = iVar5;
  iVar4 = func_80034AB0(7);
  return iVar4;
}

/* arg0: 0x80140000 */
/* real-callee: func_800D7CC4 */
/* real-callee: func_800202A4 */
/* real-callee: rand */
/* real-callee: func_800A835C */
/* rand-u16: 0x80140BCA 1 0,1 */
/* rand-u16: 0x80140BCB 1 0,257,1285 */
/* rand-u16: 0x801405DE 1 257,514 */
/* rand-u32-strided: 0x801405E8 12 124 0,1,2,3 */
/* rand-u32-strided: 0x801405F8 12 124 0,0x00010000,0x00FF0000 */
/* rand-u32-strided: 0x8006B2B4 4 88 0,0x4000000,0xC000000,0x1C000000 */
/* rand-u16: 0x80118C18 1 0 */
/* rand-u16: 0x80118C1A 1 32790 */
/* rand-u32-strided: 0x80160000 169 4 0,0x80000,0x100000,0x380000 */
/* rand-u16: 0x80150046 5 0,100,32767,32768,65535 */
/* rand-u16: 0x8006b2b8 1 0,5,50,100,32767,65535 */
/* rand-u16: 0x8006b310 1 0,5,50,100,32767,65535 */
/* rand-u16: 0x8006b368 1 0,5,50,100,32767,65535 */
/* rand-u16: 0x8006b3c0 1 0,5,50,100,32767,65535 */
/* arg2: 0x00000000 */
/* arg3: 0x00000000 */
/* rand-u32-strided: 0x80085a20 1 4 0,0x00010000,0x00FF0000 */
/* rand-u32-strided: 0x80085a24 1 4 0,0x00010100,0x000C0C00 */
/* rand-u32-strided: 0x80085a80 1 4 0x80150000 */
