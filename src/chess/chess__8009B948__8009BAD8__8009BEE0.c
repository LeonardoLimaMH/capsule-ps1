#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 unk_00[0x54];
    s32 unk_54;
    s32 unk_58;
} ChessUnk69E4C;

void func_8009BEE0(int param_1)
{
    u8 value;
    int i;
    int result;
    int j;
    u8 *out;
    u8 *dst;
    u8 *base;
    u32 side;

    side = *(u8 *)(param_1 + 0x5FA);
    result = func_800A8E34(param_1, side, *(u8 *)(param_1 + side + 0x5FB));
    if (result != 0) {
        i = 0;
        do {
            result = func_800A8E34(param_1, side, i);
            if (result == 0) {
                *(u8 *)(param_1 + side + 0x5FB) = i;
                break;
            }
            i++;
        } while (i < 5);
    }
    j = 0;
    base = (u8 *)(side * 2 + param_1 + 0x601);
    do {
        dst = base + j;
        out = (u8 *)(param_1 + j);
        value = *(u8 *)(param_1 + (side * 0x2E8 + *(u8 *)(param_1 + side + 0x5FB) * 0x7C) + j + 0x2D);
        j++;
        out[0x616] = value;
        *dst = value;
    } while (j < 2);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8__8009BEE0", func_8009BFD4);

void func_8009C0E4(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;

  uVar1 = func_800CA480();
  uVar2 = func_80019F30(uVar1 | 0x50000,0);
  MATCHING_CALL4_REPEAT(func_80012A20, uVar2, 1, 0);
  iVar3 = 0;
  do {
    uVar2 = func_80019F30(uVar1 | 0x20000,iVar3);
    MATCHING_CALL4_REPEAT(func_80012A20, uVar2, 1, 0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}

void func_8009C178(char arg1)
{
  s32 new_var;
  func_80012A20(func_80019F30(0x20013, new_var + 0x10), 3, 0x380, 0x100);
  new_var = arg1;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8__8009BEE0", func_8009C1B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8__8009BEE0", func_8009C278);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8__8009BEE0", func_8009C3BC);
