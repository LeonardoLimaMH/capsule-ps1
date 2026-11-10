#include "common.h"

void func_800A6DBC(void) {
    func_8001AD74(8);
}

s32 func_800A6DDC(void)
{
  extern s32 D_8008F7D0[];
  if ((*D_8008F7D0) == 0)
  {
    func_800E1B30();
    return 1;
  }
  if (D_8008F7D0)
  {
    return 0;
  }
  else
  {
    return 0;
  }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A6E14);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A6ED4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A70F8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A7280);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A72E0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A7340);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A74C0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A752C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A7600);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A76C0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A7730);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A79D8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A7C7C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A7F20);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A8184);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A8340);

void func_800A847C(void) {

}

extern u8 D_800916E8[];
extern s16 D_800EC588[][17];

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A8484);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A865C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A875C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A88E4);

extern u8 D_800916E8[];
extern s16 D_800ECB84[][17];
void func_800A89E0(u16 a0, s16 a1) {
    s16 *e = (s16 *)(D_800916E8 + a0 * 0x1A8);
    s16 i;
    for (i = 1; i < 17; i++, e++) {
        s16 v = *e;
        v += D_800ECB84[a1][i];
        if (i >= 2) {
            v = (v < 0) ? 0 : ((v > 0xFF) ? 0xFF : v);
        }
        if (i >= 13) {
            v = (v < 0) ? 0 : ((v > 100) ? 100 : v);
        }
        *e = v;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC", func_800A8AE0);

void func_800A8C10(void) {

}

void func_800A8C18(void) {

}

void func_800A8C20(void) {

}

s32 func_800A8C28(void) {
    return 0;
}
