#include "common.h"

/* Estado do player de filme (MDEC/stream) do loader; layout deduzido de func_80110F10/801111D4/80111464. */
typedef struct {
  s16 x, y, w, h;
} LdrRect;

typedef struct {
  u8 *buf[2];   /* 0x00 */
  s32 cur;      /* 0x08 */
  u8 *ring;     /* 0x0C */
  LdrRect r[2]; /* 0x10 */
  s32 sel;      /* 0x20 */
  s16 x, y;     /* 0x24 */
  s16 w, h;     /* 0x28 */
  s32 done;     /* 0x2C */
} LdrMovie;

extern char D_80110060[];
extern char D_80110070[];
extern char D_80110080[];
INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80110D1C);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80110E10);

void func_80110E70(s16 arg0, s16 arg1)
{
  extern s32 D_80133484;
  extern s32 D_80133488;
  s16 new_var;
  D_80133484 = (s32) arg0;
  D_80133484 = (s32) arg0;
  new_var = arg1;
 do { } while (0);
  D_80133488 = (s32) new_var;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80110E90);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80110F10);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80110FDC);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_801111D4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80111268);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80111464);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80111538);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80111584);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_801119E4);

void func_80111A40(void) {

}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", __SN_ENTRY_POINT_loader);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80111B04);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80111B14);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80111B24);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", slpm__96_remove);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80111B54);
