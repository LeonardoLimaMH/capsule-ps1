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
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define D_800113F8 (*(u8 (*)[18])0x800113F8)
#define D_8001140C (*(u8 (*)[39])0x8001140C)
#define D_80011434 (*(u8 (*)[22])0x80011434)
#define D_8001144C (*(u8 (*)[22])0x8001144C)
#define D_80011464 (*(u8 (*)[22])0x80011464)
extern s32 GetGraphDebug();
extern s32 printf();
int func_8004CC60(undefined4 *param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int *piVar2;

  iVar1 = GetGraphDebug();
  if (iVar1 == 2) {
    printf(D_800113F8);
  }
  iVar1 = GetGraphDebug();
  if (iVar1 == 2) {
    printf(D_8001140C,*param_1,param_1[1],param_1[2],param_2);
  }
  iVar1 = GetGraphDebug();
  if (iVar1 == 2) {
    printf(D_80011434,param_1[param_2 * 7 + 3],(param_1 + param_2 * 7 + 3)[1]);
  }
  iVar1 = GetGraphDebug();
  if (iVar1 == 2) {
    printf(D_8001144C,param_1[param_2 * 7 + 5],param_1[param_2 * 7 + 6]);
  }
  iVar1 = GetGraphDebug();
  if (iVar1 == 2) {
    printf(D_80011464,param_1[param_2 * 7 + 7],param_1[param_2 * 7 + 8]);
  }
  piVar2 = param_1 + param_2 * 7 + 3;
  *param_4 = (int)param_1 + *piVar2 + 0xc;
  *param_5 = (int)param_1 + piVar2[2] + 0xc;
  *param_3 = (int)param_1 + piVar2[4] + 0xc;
  return piVar2[5];
}

/* arg0: 0x80130000 */
/* arg1: small */
/* arg2: 0x80140000 */
/* arg3: 0x80150000 */
/* arg4: 0x80160000 */
/* rand-u32-strided: 0x80130000 120 4 0,4,8,16,100,0x100,0xFFFFFFFC */
/* real-callee: GetGraphDebug */
/* rand-u16: 0x8007891E 1 0,2 */
