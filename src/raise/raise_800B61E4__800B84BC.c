#include "common.h"

typedef struct { s32 w[0x6A]; } Blk_800B89F4;

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B84BC", func_800B8898);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4__800B84BC", func_800B89F4);

extern s16 D_800EFA4A[];
extern s16 D_800EFA4C[];
extern u16 D_8006AF80[];
extern u8 D_80091618[];
void func_80024990(s32, s32, s32, s32);
void func_800B8AD0(s16 arg0)
{
    s32 *p;
    if (arg0 != -1) {
        if (arg0 == 1) {
            *D_800EFA4C = *D_800EFA4A + 1;
            if (*D_800EFA4C < 0) {
                *D_800EFA4C = 0;
            } else if (*D_800EFA4C > 2) {
                *D_800EFA4C = 2;
            }
        }
    } else {
        *D_800EFA4C = *D_800EFA4A - 1;
        if (*D_800EFA4C < 0) {
            *D_800EFA4C = 0;
        } else if (*D_800EFA4C > 2) {
            *D_800EFA4C = 2;
        }
    }
    if (*D_800EFA4C != *D_800EFA4A) {
        p = (s32 *)(D_80091618 + *D_8006AF80 * 0x1A8);
        func_80024990(p[0x18C / 4], 1, 0x32, 0);
    }
}
