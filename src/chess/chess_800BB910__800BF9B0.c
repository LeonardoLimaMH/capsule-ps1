#include "ghidra.h"
#include "common.h"

void func_800BF9B0(void *arg0) {
    extern u16 D_8008EE50[];
    switch ((*D_8008EE50)) {                           /* irregular */
    case 0:
        if (func_800A1330(arg0, M2C_FIELD(arg0, u8 *, 0xBCA)) != 0) {
            func_800220B8(arg0);
            func_80012628();
            return;
        }
        func_8001264C(2);
        return;
    case 1:
        if (func_800220D4(arg0, 1, M2C_FIELD(arg0, u8 *, 0xBCA), 0) != 0) {
            func_80012628();
            return;
        }
        return;
    case 2:
        func_800125D8();
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0", func_800BFA84);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0", func_800BFC70);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0", func_800BFD34);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0", func_800BFE18);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0", func_800BFFAC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0", func_800C01F4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0", func_800C0440);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0", func_800C0658);

void func_800C087C(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_800B3338(param_1,1);
  if (iVar1 != 0) {
    func_800125D8();
  }
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0", func_800C08AC);

void func_800C0A94(s32 arg0)
{
    extern u16 D_8008EE50[];
    u8 *temp_s1;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a1;
    u8 new_var;
    void *temp_a2;
    temp_a2 = arg0 + 0x5D0;
    temp_v1 = M2C_FIELD(temp_a2, u8 *, 0x5FA);
    new_var = M2C_FIELD(temp_a2 + temp_v1, u8 *, 0x5FB);
    temp_s1 = temp_a2 + (temp_v1 * 0x2E8 + 0x18) + new_var * 0x7C;
    temp_a1 = temp_a2 + (M2C_FIELD(temp_a2, u8 *, 0x712) * 0x2E8 + 0x18) + M2C_FIELD(temp_a2, u8 *, 0x713) * 0x7C;
    switch (*D_8008EE50) {
    case 0:
        if (((M2C_FIELD(func_800A8E84(temp_a2, temp_a1, temp_a2, arg0), u32 *, 0x10) >> 11) & 15) == 1) {
            temp_v1_2 = *temp_s1;
            if (temp_v1_2 == 0x2B || temp_v1_2 == 0x30) {
                func_800125D8();
            } else {
                func_80012628();
                break;
            }
        }
        func_800125D8();
        break;
    case 1:
        func_800B3488(temp_a2, temp_a1, temp_a2, arg0);
        func_80012628();
        break;
    case 2:
        if (func_800B3338(arg0, 0, temp_a2, arg0) != 0) {
            func_800125D8();
        }
        break;
    }
}
