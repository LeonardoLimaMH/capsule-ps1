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
#define DAT_80063949 (*(u8 *)0x80063949)
#define DAT_80085a10 (*(u8 *)0x80085A10)
#define D_80118C18 (*(s32 *)0x80118C18)
#define func_800D3A2C ((s32 (*)())0x800D3A2C)
#define func_800D3D2C ((s32 (*)())0x800D3D2C)
byte func_800D4100(int param_1,uint param_2,int param_3,s8 param_4)

{
  union { u64 align; u8 bytes[0x30]; } recovered_local_frame;
#define bStack_58 (*(byte volatile *)(recovered_local_frame.bytes + 0x0))
#define bStack_57 (*(byte volatile *)(recovered_local_frame.bytes + 0x1))
#define local_56 (*(s8 volatile *)(recovered_local_frame.bytes + 0x2))
#define local_55 (*(byte volatile *)(recovered_local_frame.bytes + 0x3))
#define local_50 (*(byte volatile *)(recovered_local_frame.bytes + 0x8))
#define local_48 (*(byte volatile *)(recovered_local_frame.bytes + 0x10))
#define local_40 (*(uint volatile *)(recovered_local_frame.bytes + 0x18))
#define local_3c (*(int volatile *)(recovered_local_frame.bytes + 0x1C))
#define local_38 (*(uint volatile *)(recovered_local_frame.bytes + 0x20))
#define local_34 (*(uint volatile *)(recovered_local_frame.bytes + 0x24))
#define local_30 (*(uint volatile *)(recovered_local_frame.bytes + 0x28))

  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;












  iVar12 = 0;
  local_38 = param_2 & 0xff;
  uVar11 = 0;
  local_34 = local_38 >> 7;
  pbVar8 = (byte *)(param_1 + local_34 * 0x2a + (param_2 & 0x7f) * 7 + 9);
  local_55 = *pbVar8;
  local_50 = pbVar8[1];
  local_40 = (uint)local_55;
  local_3c = (uint)local_50 << 2;
  uVar4 = (uint)pbVar8[5];
  local_30 = (uint)(uVar4 != 0);
  local_48 = (&DAT_80063949)
             [(uint)(byte)(&DAT_80085a10)[((param_2 & 0x7f) - 1) * 0x7c + local_34 * 0x2e8] * 0x3c]
             & 0xf;
  local_56 = param_4;
  bVar3 = func_800D3D2C(param_1,local_38,param_3,param_4);
  do {
    bVar2 = local_48;
    if (iVar12 == 1) {
      return bVar3;
    }
    uVar9 = 0;
    bStack_58 = local_55;
    bStack_57 = local_50;
    uVar10 = *(uint *)(local_3c + local_40 * 0x34 + D_80118C18) >> 0x13 & 7;
    if (local_30 != 0) {
      uVar13 = local_34 & 0xff;
      while (iVar12 = func_800D3A2C(local_38,uVar11 & 0xff,&bStack_58,&bStack_57), iVar12 == 0) {
        uVar6 = *(uint *)((uint)bStack_57 * 4 + (uint)bStack_58 * 0x34 + D_80118C18);
        uVar7 = uVar6 >> 6 & 0x1fff;
        if (((uVar7 == 0) || (2 < uVar7)) || ((uVar6 & 0x3f) < 2)) break;
        bVar1 = *(byte *)((uint)bStack_58 * 0xd + param_1 + (uint)bStack_57 + 100);
        if ((bVar1 != 0) && ((bVar1 >> 7 != uVar13 || ((bVar1 & 0x7f) == 6)))) break;
        if (bVar2 == 8) {
          if ((uVar9 & 0xff) == 0) goto joined_r0x800d4438;
LAB_800d4380:
          if ((uVar7 != 2) || (bVar1 != 0)) goto LAB_800d43d0;
        }
        else {
          if (bVar2 == 1) goto LAB_800d4380;
          if ((uVar7 == 2) && (bVar2 != 0)) break;
          uVar6 = uVar6 >> 0x13 & 7;
          iVar5 = uVar6 - uVar10;
          uVar10 = uVar6;
          if ((0 < iVar5 * 0x1000000) && (uVar9 = uVar9 + iVar5, uVar4 <= (uVar9 & 0xff))) break;
LAB_800d43d0:
          if (local_56 == '\0') {
            *(s8 *)(param_3 + (uint)bStack_58 * 0xd + (uint)bStack_57) = (s8)uVar9 + '\x01';
          }
          else {
            *(byte *)(param_3 + (uint)bVar3) = bStack_57 + bStack_58 * '\r';
          }
          bVar3 = bVar3 + 1;
joined_r0x800d4438:
          if (bVar1 != 0) break;
        }
        uVar9 = uVar9 + 1;
        if (uVar4 <= (uVar9 & 0xff)) break;
      }
    }
    uVar11 = uVar11 + 1;
    if (7 < (int)uVar11) {
      return bVar3;
    }
  } while( true );
}

#undef bStack_58
#undef bStack_57
#undef local_56
#undef local_55
#undef local_50
#undef local_48
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30

/* arg0: 0x80118FAA */
/* arg2: 0x80150000 */
/* real-callee: func_800D3D2C */
/* real-callee: func_800D3A2C */
/* rand-u16: 0x80085A10 1 0 */
/* rand-u16: 0x80085CF8 1 0 */
/* rand-u16: 0x80085A06 1 0,257 */
/* rand-u16: 0x80063948 1 0,256,512,1024,1536,1792,2048 */
/* rand-u16: 0x80118FBA 1 0,257,1542,3084 */
/* rand-u16: 0x80118FBE 1 0,256,512,768 */
/* rand-u16: 0x80118FE4 1 0,257,1542,3084 */
/* rand-u16: 0x80118FE8 1 0,256,512,768 */
/* rand-u16: 0x8011900E 85 0,257,1542,33153,34438 */
/* rand-u16: 0x80118C18 1 0 */
/* rand-u16: 0x80118C1A 1 32790 */
/* rand-u32-strided: 0x80160000 169 4 0,0x42,0x82,0x80042,0x380042 */
/* arg1: 0x00000001 */
/* arg3: 0x00000000 */
