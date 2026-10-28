#include "common.h"

/* real-callee: func_800459CC */
/* arg0: small */
/* arg1: 0x80150000 */
/* rand-u16: 0x80073364 1 0,1,2,3,4,255 */
/* rand-u16: 0x80073365 1 0,1,2,3,4,255 */
/* rand-u16: 0x80073366 1 0,1,2,3,4,255 */
/* rand-mem: 0x80094C18 24 256 */
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
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define DAT_800730a5 (*(u8 *)0x800730A5)
#define DAT_80073365 (*(u8 *)0x80073365)
#define DAT_80073366 (*(u8 *)0x80073366)
#define DAT_80094c18 (*(s32 *)0x80094C18)
#define DAT_80094c20 (*(u8 *)0x80094C20)
#define DAT_80094c28 (*(u8 *)0x80094C28)
#define DAT_80094c30 (*(s32 *)0x80094C30)
#define DAT_80094c34 (*(s32 *)0x80094C34)
#define DAT_80094c38 (*(volatile u8 **)0x80094C38)
#define D_8001109C (*(u8 (*)[13])0x8001109C)
#define D_800110AC (*(u8 (*)[27])0x800110AC)
#define D_8001112C (*(u8 (*)[9])0x8001112C)
#define D_80073084 (*(code **)0x80073084)
#define D_80073088 (*(code **)0x80073088)
#define D_800730AC (*(s32 *)0x800730AC)
#define D_8007312C (*(s32 *)0x8007312C)
#define D_8007334C (*(volatile u8 **)0x8007334C)
#define D_80073364 (*(u8 *)0x80073364)
extern s32 CD_flush();
extern s32 CheckCallback();
extern s32 VSync();
#define func_800459CC ((s32 (*)())0x800459CC)
extern s32 printf();
extern s32 puts();
uint CD_ready(int param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;

  iVar4 = VSync(0xffffffff);
  DAT_80094c30 = iVar4 + 0x3c0;
  DAT_80094c34 = 0;
  DAT_80094c38 = D_8001112C;
  while( true ) {
    iVar4 = VSync(0xffffffff);
    if ((DAT_80094c30 < iVar4) ||
       (iVar4 = DAT_80094c34 + 1, bVar3 = 0x3c0000 < DAT_80094c34, DAT_80094c34 = iVar4, bVar3)) {
      puts(D_8001109C);
      printf(D_800110AC,DAT_80094c38,(&D_800730AC)[DAT_800730a5],(&D_8007312C)[D_80073364],
             (&D_8007312C)[DAT_80073365]);
      CD_flush();
      iVar4 = -1;
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = CheckCallback();
    if (iVar4 != 0) {
      bVar1 = *D_8007334C;
      while( true ) {
        uVar5 = func_800459CC();
        if (uVar5 == 0) break;
        if (((uVar5 & 4) != 0) && (D_80073088 != (code *)0x0)) {
          (*D_80073088)(DAT_80073365,&DAT_80094c20);
        }
        if (((uVar5 & 2) != 0) && (D_80073084 != (code *)0x0)) {
          (*D_80073084)(D_80073364,((u8 *)0x80094C18));
        }
      }
      *D_8007334C = bVar1 & 3;
    }
    uVar5 = (uint)DAT_80073366;
    if (uVar5 != 0) break;
    uVar5 = (uint)DAT_80073365;
    if (uVar5 != 0) {
      DAT_80073365 = 0;
      puVar6 = &DAT_80094c20;
      iVar4 = 7;
      if (param_2 == (undefined1 *)0x0) {
        DAT_80073365 = 0;
        return uVar5;
      }
      do {
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        iVar4 = iVar4 + -1;
        *param_2 = uVar2;
        param_2 = param_2 + 1;
      } while (iVar4 != -1);
      return uVar5;
    }
    if (param_1 != 0) {
      return 0;
    }
  }
  DAT_80073366 = 0;
  puVar6 = &DAT_80094c28;
  if (param_2 == (undefined1 *)0x0) {
    DAT_80073366 = 0;
    return uVar5;
  }
  iVar4 = 7;
  do {
    uVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    iVar4 = iVar4 + -1;
    *param_2 = uVar2;
    param_2 = param_2 + 1;
  } while (iVar4 != -1);
  return uVar5;
}
