#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 unk_00[0x54];
    s32 unk_54;
    s32 unk_58;
} ChessUnk69E4C;

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

void func_8009C1B4(u8 *arg0, s32 arg1, s32 arg2) {
    extern s32 func_80012A20();
    extern s32 func_80019F30();
    extern s32 func_800CA48C();
    extern s32 func_800CA4AC();
    struct {
        u8 pad[0x5E4];
        u8 unk5E4[1];
    } *s = (void *)arg0;
    s32 s1;
    s32 a1;

    if (arg2 != 0) {
        MATCHING_CALL4_REPEAT(func_80012A20, func_80019F30(0x50014, 5), 1, 0);
        return;
    }

    if (s->unk5E4[arg1] < 3) {
        s1 = 0x13;
        a1 = func_800CA48C(arg0, arg1);
    } else {
        s1 = 0x14;
        a1 = func_800CA4AC(arg0, arg1);
    }
    if (a1 != -1) {
        func_80012A20(func_80019F30(s1 | 0x20000, a1), 3, (s16)(arg1 * 0x40 + 0x200), 0x100);
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009B948__8009BAD8__8009BEE0__8009C0E4", func_8009C278);

void func_8009C3BC(void) {
    extern u8 D_80085428[];
    extern s32 func_800A8954();
    extern void func_8001A49C();
    extern s32 func_80019F30();
    extern void func_80012A20();
    register u8 *p asm("a1") = D_80085428;
    register s32 s0 asm("s0");
    register s32 s1 asm("s1");
    s32 off1;
    s32 off2;
    s32 a0;

    s0 = 0;
    s1 = 0x03C00000;
    off1 = p[0xD78] * 0x7C;
    off2 = p[0xD77] * 0x2E8;
    off1 += off2;
    off1 += (s32)p;
    a0 = *(u8 *)(off1 + 0x612);

    func_8001A49C(func_800A8954(a0));
    do {
        register s32 step asm("v0");
        func_80012A20(func_80019F30(0x20174, s0), 3, s1 >> 16, 0x180);
        step = 0x00200000;
        s1 += step;
        s0++;
    } while (s0 < 2);
    s0 = 0;
    s1 = 0x03C00000;
    do {
        register s32 step asm("v0");
        func_80012A20(func_80019F30(0x20174, s0 + 2), 3, s1 >> 16, 0x80);
        step = 0x00200000;
        s1 += step;
        s0++;
    } while (s0 < 2);
}
