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
#include "ghidra.h"
#define DAT_80085a10 (*(u8 *)0x80085A10)
#define DAT_80085a25 (*(u8 *)0x80085A25)
#define DAT_80085a26 (*(u8 *)0x80085A26)
#define D_80118C18 (*(s32 *)0x80118C18)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_800D3274 ((s32 (*)())0x800D3274)
uint func_800D862C(uint param_1,uint param_2)

{
  union { u64 align; u8 bytes[0x8]; } recovered_local_frame;
#define bStack_20 (*(byte volatile *)(recovered_local_frame.bytes + 0x0))
#define abStack_1f (*(byte volatile (*)[7])(recovered_local_frame.bytes + 0x1))

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;



  if ((&DAT_80085a10)[((param_1 & 0x7f) - 1) * 0x7c + ((param_1 & 0xff) >> 7) * 0x2e8] == '\x05') {
    do {
      do {
        bStack_20 = func_800202A4(0xd);
        uVar1 = func_800202A4(0xd);
        puVar6 = (uint *)((uVar1 & 0xff) * 4 + (uint)bStack_20 * 0x34 + D_80118C18);
        uVar4 = *puVar6;
        uVar2 = uVar4 >> 6 & 0x1fff;
        abStack_1f[0] = (byte)uVar1;
      } while (uVar2 == 0);
    } while (((1 < uVar2) || ((uVar4 & 0x3f) < 2)) ||
            (((uVar4 >> 0x16 & 3) != 0 || (*(s8 *)((int)puVar6 + 3) != '\0'))));
    uVar1 = uVar1 + (uint)bStack_20 * 0xd & 0xff;
  }
  else {
    uVar1 = 0xff;
    if ((&DAT_80085a10)[((param_1 & 0x7f) - 1) * 0x7c + ((param_1 & 0xff) >> 7) * 0x2e8] == '?') {
      iVar3 = func_800202A4(8);
      iVar8 = 0;
      do {
        iVar7 = ((param_2 & 0x7f) - 1) * 0x7c + ((param_2 & 0xff) >> 7) * 0x2e8;
        bStack_20 = (&DAT_80085a25)[iVar7];
        iVar5 = iVar3 + iVar8;
        abStack_1f[0] = (&DAT_80085a26)[iVar7];
        iVar7 = iVar5;
        if (iVar5 < 0) {
          iVar7 = iVar5 + 7;
        }
        iVar7 = func_800D3274(iVar5 + (iVar7 >> 3) * -8 & 0xff,&bStack_20,abStack_1f);
      } while ((((iVar7 != 0) ||
                (puVar6 = (uint *)((uint)abStack_1f[0] * 4 + (uint)bStack_20 * 0x34 + D_80118C18),
                (*puVar6 >> 6 & 0x1fff) == 2)) || (*(s8 *)((int)puVar6 + 3) != '\0')) &&
              (iVar8 = iVar8 + 1, iVar8 < 8));
      if (iVar8 < 8) {
        uVar1 = (uint)abStack_1f[0] + (uint)bStack_20 * 0xd & 0xff;
      }
      else {
        uVar1 = 0xff;
      }
    }
  }
  return uVar1;
}

#undef bStack_20
#undef abStack_1f
