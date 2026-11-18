#include "common.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4", func_800D24B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4", func_800D28C0);

#include "ghidra.h"
undefined1 func_800D2C9C(int param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;

  if (((param_2 & 0xff) < 0xd) && ((param_3 & 0xff) < 0xd)) {
    uVar1 = *(undefined1 *)((param_2 & 0xff) * 0xd + param_1 + (param_3 & 0xff));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

u8 func_800D2CE4(u32 arg0, u32 arg1) {
    extern u8 D_80085428[];
    u8 *base = D_80085428;
    u8 *p;
    u8 *q;
    s32 dx;
    register s32 ret asm("v0");
    u8 a, b;

    p = (((arg0 & 0x7F) - 1) * 0x7C + ((arg0 & 0xFF) >> 7) * 0x2E8) + base;
    q = (((arg1 & 0x7F) - 1) * 0x7C + ((arg1 & 0xFF) >> 7) * 0x2E8) + base;
    a = p[0x5FD];
    b = q[0x5FD];
    dx = a - b;
    if (dx < 0) {
        dx = b - a;
    }
    a = p[0x5FE];
    b = q[0x5FE];
    if (a - b >= 0) {
        ret = dx + (a - b);
    } else {
        ret = dx + (b - a);
    }
    return ret;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4", func_800D2DA8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4__SsQuit__800CFC9C__800CFE1C__800D00B0__800D0360__800D08FC__800D09D8__800D10A0__800D113C__800D23F0__800D24B4", func_800D2EEC);

u32 func_800D2FA0(u8 arg0) {
    typedef struct {
        u8 pad[0xE];
        u8 unkE;
        u8 unkF;
        u8 unk10;
        u8 unk11;
        u8 pad2[0x7C - 0x12];
    } D85428Unit;
    extern struct {
        u8 pad[0x5E8];
        D85428Unit units[2][6];
    } D_80085428;
    s32 n;
    u32 result;

    n = (s32)((((D_80085428.units[arg0 >> 7][(arg0 & 0x7F) - 1].unkE - 115) * 0.5 +
                (D_80085428.units[arg0 >> 7][(arg0 & 0x7F) - 1].unkF - 60) +
                (D_80085428.units[arg0 >> 7][(arg0 & 0x7F) - 1].unk10 - 30) +
                (D_80085428.units[arg0 >> 7][(arg0 & 0x7F) - 1].unk11 - 3) * 10.0 + 25.0) /
               18.0) +
              1.0);
    if (n > 0) {
        if (n < 6) {
            result = n;
        } else {
            result = 5;
        }
    } else {
        result = 1;
    }
    return result & 0xFF;
}
