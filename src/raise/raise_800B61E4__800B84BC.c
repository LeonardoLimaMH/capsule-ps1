#include "common.h"

u16 func_800B84BC(s32 arg0, s32 arg1)
{
  extern M2C_UNK D_80091618[];
  s8 *new_var;
  s8 *new_var2;
  ;
  new_var = D_80091618;
  new_var2 = (s8 *) ((((arg0 & 0xFFFF) * 0x1A8) + new_var) + (arg1 * 2));
  return *((u16 *) (new_var2 + 0x134));
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B84BC", func_800B84FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B84BC", func_800B8700);

extern u8 D_80091618[];
extern u16 D_8006AF80[];
extern s16 D_80078C20[];
extern s16 D_800EFA50[];
extern s32 D_800EFF50[];
s32 func_800B84FC(u16 arg0, u16 arg1, s32 arg2);
void func_80013928(s32 arg0);
s16 func_800B8898(u16 arg0, u16 arg1, s32 arg2)
{
    switch (D_800EFA50[0]) {
    case 0:
        if (arg2 == 1) {
            *(u16 *)(D_80091618 + D_8006AF80[0] * 0x1A8 + 0x8A) = arg0;
            D_800EFA50[0]++;
        }
        break;
    case 1:
        D_800EFF50[0] = func_800B84FC(arg0, arg1, 1 - D_80078C20[0]);
        D_800EFA50[0]++;
        break;
    case 2:
        if (arg2 == 0) {
            D_800EFA50[0]++;
        }
        break;
    case 3:
        *(u16 *)(D_80091618 + D_8006AF80[0] * 0x1A8 + 0x8A) = 0xFFFF;
        if (D_800EFF50[0] != 0) {
            func_80013928(D_800EFF50[0]);
        }
        D_800EFA50[0]++;
        break;
    case 6:
        D_800EFA50[0] = 0;
        break;
    }
    return D_800EFA50[0];
}
