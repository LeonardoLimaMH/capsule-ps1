#include "ghidra.h"
#include "matching.h"
#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8", func_8009BAD8);

void func_8009BB98(int param_1)

{
    extern int func_80012578();
    extern int func_8009C3BC();
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  iVar5 = 0;
  iVar7 = 0;
  do {
    iVar4 = 0;
    iVar6 = iVar7;
    do {
      iVar1 = func_800A8B14(param_1,iVar5,iVar4,0);
      if (iVar1 == 0) {
        uVar2 = func_800A8994(param_1,iVar5,iVar4);
        iVar1 = param_1 + iVar6;
        if (*(char *)(iVar1 + 0x5e8) == '\\') {
          uVar3 = func_800A8954(*(undefined1 *)(iVar1 + 0x612));
          func_8001A464(0x174,uVar3);
          *(char *)(param_1 + 0xd77) = (char)iVar5;
          *(char *)(param_1 + 0xd78) = (char)iVar4;
          func_80019F30(0x174,func_8009C3BC);
        }
        uVar3 = func_800A8954(*(undefined1 *)(iVar1 + 0x612));
        func_8001A464(uVar2,uVar3);
        func_80019F30(uVar2,0);
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0x7c;
    } while (iVar4 < 5);
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 0x2e8;
  } while (iVar5 < 2);
  func_800190F4(0xff,&func_80012578,0,0);
  return;
}

typedef struct {
    u8 unk_00[0x54];
    s32 unk_54;
    s32 unk_58;
} ChessUnk69E4C;

void func_8009BCC8(int param_1, undefined4 param_2)
{
    extern int func_8009C3BC();
    register int s3 asm("s3") = param_1;
    register int s7 asm("s7") = (int)param_2;
    register int s5 asm("s5") = 5;
    register int s1 asm("s1") = 0;
    register int s6 asm("s6") = 0x26c;
    register int s2 asm("s2") = s6;
    register int s4 asm("s4");
    register u8 *s0 asm("s0");
    int iVar1;
    undefined4 uVar3;

    do {
        iVar1 = func_800A89C8(s3, s1, s5);
        if (iVar1 != 0) {
            *(u8 *)(s3 + s2 + 0x612) = iVar1 - 1;
            continue;
        }
        if (s1 != 0 && *(u8 *)(s3 + s6 + 0x8d0) == *(u8 *)(s3 + s6 + 0x5e8)) {
            *(u8 *)(s3 + s2 + 0x612) = 10;
            continue;
        }
        s0 = (u8 *)s3 + s2;
        s0[0x612] = s1 + 10;
        s4 = func_800A8994(s3, s1, s5);
        if (s0[0x5e8] == 0x5c) {
            uVar3 = func_800A8954(s0[0x612]);
            func_8001A464(0x174, uVar3);
            *(u8 *)(s3 + 0xd77) = s1;
            *(u8 *)(s3 + 0xd78) = s5;
            func_80019F30(0x174, func_8009C3BC);
        }
        uVar3 = func_800A8954(s0[0x612]);
        func_8001A464(s4, uVar3);
        func_80019F30(s4, 0);
    } while (s2 += 0x2e8, ++s1 < 2);
    func_800190F4(0xff, s7, 0, 0);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8", func_8009BE30);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8", func_8009BFD4);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8", func_8009C1B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8", func_8009C278);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8", func_8009C3BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8", func_8009C4B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8", func_8009C5C4);

void func_8009C6F8(void) {
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20014, 3), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 1), 1, 0);
}

void func_8009C758(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20014, var_s0 + 6), 1, 0);
        var_s0 += 1;
    } while (var_s0 < 7);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 3), 1, 0);
}

void func_8009C7D4(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20014, var_s0 + 4), 1, 0);
        var_s0 += 1;
    } while (var_s0 < 2);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 2), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 7), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 6), 1, 0);
}

void func_8009C898(void) {
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20013, 0x1E), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 8), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 9), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x20014, 0x20), 1, 0);
    MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 0xA), 1, 0);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8", func_8009C964);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8", func_8009CA60);
