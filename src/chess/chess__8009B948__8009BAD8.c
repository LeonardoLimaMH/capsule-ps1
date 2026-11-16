#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 unk_00[0x54];
    s32 unk_54;
    s32 unk_58;
} ChessUnk69E4C;

void func_8009BAD8(u8 *arg0) {
    extern s32 D_801010B0[][13];
    extern u8 D_80118710[][13];
    register s32 lim asm("t3") = 0xA9;
    s32 i;
    u8 count;
    s32 (*table)[13];

    i = 0;
    count = 0;
    table = (s32 (*)[13])D_801010B0[arg0[0x5D9]][0];
    do {
        if (table[i / 13][i % 13] & 0x3F) {
            D_80118710[i / 13][i % 13] = count;
            count++;
        } else {
            D_80118710[i / 13][i % 13] = 0;
        }
        i++;
    } while (i < lim);
}

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
