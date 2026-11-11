#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_80099B40(void) {

}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_80099B48);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_80099D38);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A0B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A30C);

void func_8009A48C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xF) = 3;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A498);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A608);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A75C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A8B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009AAA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009AC88);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009B23C);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009B4C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009B814);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009B948);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009BAD8);

#include "common.h"

#include "ghidra.h"
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

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009BCC8);

void func_8009BE30(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a3;
    void *temp_s0;

    var_a3 = 0;
    temp_s0 = (void *)arg0 + ((arg1 * 0x2E8) + 0x5E8) + (arg2 * 0x7C);
    if (arg2 != 5) {
        var_a3 = func_800A89C8(arg0, arg1, arg2) != 0;
    } else if (((u8) M2C_FIELD(temp_s0, u8 *, 0x2A) < 0xAU) || (arg1 != (M2C_FIELD(temp_s0, u8 *, 0x2A) - 0xA))) {
        var_a3 = 1;
    }
    if (var_a3 == 0) {
        func_8001A49C(func_800A8954((s32) M2C_FIELD(temp_s0, u8 *, 0x2A)));
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009BEE0);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009BFD4);

#include "ghidra.h"
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

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C1B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C278);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C3BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C4B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C5C4);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009C964);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009CA60);
