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
#define DAT_80069bb0 (*(s32 *)0x80069BB0)
#define DAT_80069bbc (*(s16 *)0x80069BBC)
#define DAT_80069bbe (*(u16 *)0x80069BBE)
#define DAT_80085428 (*(s32 *)0x80085428)
#define DAT_8008ee48 (*(u16 *)0x8008EE48)
#define D_80069BB4 (*(s32 *)0x80069BB4)
#define D_80070000 (*(s32 *)0x80070000)
#define func_80012508 ((s32 (*)())0x80012508)
#define func_80012578 ((s32 (*)())0x80012578)
#define func_8001AD74 ((s32 (*)())0x8001AD74)
#define func_800220D4 ((s32 (*)())0x800220D4)
#define func_8002CC74 ((s32 (*)())0x8002CC74)
#define func_80033974 ((s32 (*)())0x80033974)
#define func_80034BD8 ((s32 (*)())0x80034BD8)
int func_801007D8(void)

{
  undefined *puVar1;
  int iVar2;

  if (DAT_8008ee48 == 1) {
    iVar2 = func_800220D4(((u8 *)0x80085428),1,1,4);
    puVar1 = (undefined *)0x0;
    if (iVar2 != 0) {
      puVar1 = (undefined *)func_80012578();
    }
  }
  else {
    puVar1 = (undefined *)0x2;
    if ((1 < DAT_8008ee48) && (puVar1 = &D_80070000, DAT_8008ee48 == 2)) {
      iVar2 = DAT_80069bb0 + -2;
      if (DAT_80069bb0 < 1) {
        DAT_80069bbe = DAT_80069bbe + 8;
        if (DAT_80069bbc < 0x140) {
          DAT_80069bbc = DAT_80069bbc + 1;
        }
        iVar2 = DAT_80069bb0;
        if (D_80069BB4 < 0xc80) {
          D_80069BB4 = D_80069BB4 + 6;
        }
      }
      DAT_80069bb0 = iVar2;
      func_8002CC74();
      puVar1 = (undefined *)(uint)(D_80069BB4 < 0xc80);
      if ((puVar1 == (undefined *)0x0) &&
         (puVar1 = (undefined *)(uint)(DAT_80069bbc < 0x140), puVar1 == (undefined *)0x0)) {
        func_8001AD74(2);
        func_80034BD8(0xfffffffd,0);
        func_80033974(0x701f);
        puVar1 = (undefined *)func_80012508();
      }
    }
  }
  return (int)puVar1;
}
