#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80015540);

#include "common.h"

void func_800158C4(unsigned int arg0)
{
  extern M2C_UNK D_8008ED68[];
  func_80020844((s16) ((((s32) ((struct 
  {
    u8 _p[0x108];
    s32 v;
  } *) D_8008ED68)->v) / 2) * (-1)), (s16) ((arg0 + 0xAC) - (((s32) ((struct 
  {
    u8 _p[0x10C];
    s32 v;
  } *) D_8008ED68)->v) / 2)), 0x140, 0x44, 0, 0, 0, 0, 4);
}

#include "common.h"

void func_80015944(s32 arg0) {
    func_80020688(-0x3C, -8, 0x44, 0x10, 0x3A0, 0x40, 0x3F0, (arg0 + 0x160) & 0xFFFF, 0x80, 0x80, 0x80, 0, 0, 0);
    func_80020688(0xC, -0x20, 0x30, 0x30, 0x3B4, 0x40, 0x3F0, 0x173, 0x80, 0x80, 0x80, 0, 0, 0);
}

#include "common.h"

void func_80015A0C(void) {
    func_80020688(0xC, -0x20, 0x30, 0x30, 0x3B4, 0x40, 0x3F0, 0x173, 0x80, 0x80, 0x80, 0, 0, 0);
}

#include "common.h"

extern u32 D_8008ED80[];

void func_80015A74(void) {
    if (((*D_8008ED80) / 40) & 1) {
        func_80020688(-0x28, -8, 0x50, 0x10, 0x3A0, 0x50, 0x3F0, 0x172, 0x80, 0x80, 0x80, 0, 0, 0);
    }
}

#include "ghidra.h"
void func_80015B00(int param_1)

{
  *(undefined1 *)(param_1 + 0x5a) = 0x80;
  *(undefined1 *)(param_1 + 0x59) = 0x80;
  *(undefined1 *)(param_1 + 0x58) = 0x80;
  if (*(short *)(param_1 + 0x46) < -0xe0) {
    func_800185F8();
  }
  return;
}

#include "common.h"

extern u8 *D_80078B7C;

void func_80015B3C(s32 arg0, s32 arg1, s32 arg2) {
    func_800136C8(arg0, arg1, *(s32 *)(D_80078B7C + 0xC57C), arg2);
}

void func_80015B74(void *arg0) {
    s32 temp_a0;
    u32 temp_s1;
    u32 var_s0;

    temp_s1 = M2C_FIELD(arg0, u32 *, 8);
    var_s0 = (temp_s1 + (M2C_FIELD(arg0, s32 *, 0) * 0x24)) - 0x24;
    if (var_s0 >= temp_s1) {
        do {
            temp_a0 = M2C_FIELD(var_s0, s32 *, 4);
            var_s0 -= 0x24;
            {
                register s32 matching_a0 __asm__("$4") = (temp_a0);
                register s32 matching_a1 __asm__("$5") = (1);
                register s32 matching_a2 __asm__("$6") = 0;
                __asm__ volatile("" : "=r"(matching_a0), "=r"(matching_a1), "=r"(matching_a2)
                : "0"(matching_a0), "1"(matching_a1), "2"(matching_a2));
                func_80012A20(matching_a0, matching_a1, matching_a2, matching_a2);
            }
        } while (var_s0 >= temp_s1);
    }
}

void func_80015BE8(void *arg0) {
    func_80012A20(M2C_FIELD(M2C_FIELD(arg0, s32 *, 8) + M2C_FIELD(arg0, s32 *, 0) * 0x24 - 0x1c, s32 *, 0), 1, 0, 0);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80015C2C);

#include "ghidra.h"
void func_80015CD0(int param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;

  *(int *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffff8 | param_3 & 7;
  puVar2 = *(undefined4 **)(param_2 + 4);
  *(undefined4 *)(param_1 + 4) = *puVar2;
  uVar1 = *(undefined2 *)(puVar2 + 1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80015D14);

s32 func_80015E60(u8 *arg0) {
    extern u8 D_8008ED68[];
    u8 n = D_8008ED68[0x103];
    s32 h;
    if (n == 0) {
        if (*(s16 *)(arg0 + 0x24) > 0) return 0;
        if (*(s32 *)(arg0 + 0x20) + 1 == **(s32 **)(arg0 + 0x1C)) return 1;
        return *(s16 *)(arg0 + 0x24) < 0;
    }
    if (*(s16 *)(arg0 + 0x24) <= n - 1) {
        if (*(s32 *)(arg0 + 0x20) + 1 == **(s32 **)(arg0 + 0x1C)) return 1;
    }
    return *(s16 *)(arg0 + 0x24) < 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80015EF8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_8001602C);

u32 func_800160B0(u32 arg0) {
    extern u32 D_8008ED68[];
    u8 *base = (u8 *)D_8008ED68;
    if (arg0 < 0x2001) {
        *(u32 *)(base + 0xA6C) = arg0;
    }
    return *(u32 *)(base + 0xA6C);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_800160D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_800160F8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_8001611C);

void func_80016148(void *arg0) {
    extern u8 D_8008F702[];
    if ((*D_8008F702) == 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + M2C_FIELD(arg0, s32 *, 0x68));
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) + M2C_FIELD(arg0, s32 *, 0x6C));
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) + M2C_FIELD(arg0, s32 *, 0x70));
        M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) + M2C_FIELD(arg0, u16 *, 0x78));
        M2C_FIELD(arg0, u16 *, 0x50) = (u16) (M2C_FIELD(arg0, u16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
        M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76));
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_800161C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_800178F8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80017CA4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80018440);

void func_800185F8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void func_80018600(void) {

}

void func_80018608(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80018610);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_800186E4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_800187E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_800188F0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80018C00);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80018EF4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80018F90);

#include "common.h"

void func_80019088(void) {
    extern M2C_UNK D_8008F7E0[];
    func_8001A998(D_8008F7E0, 0x42C);
    M2C_FIELD(D_8008F7E0, s8 *, 0) = 0;
    M2C_FIELD(D_8008F7E0, s8 *, 2) = 2;
    M2C_FIELD(D_8008F7E0, u8 *, 3) = 0xFF;
    M2C_FIELD(D_8008F7E0, s8 *, 1) = 0;
    M2C_FIELD(D_8008F7E0, s32 *, 0x404) = 0;
    M2C_FIELD(D_8008F7E0, s8 *, 0x408) = 0;
    M2C_FIELD(D_8008F7E0, s8 *, 0x409) = 0;
    M2C_FIELD(D_8008F7E0, s8 *, 0x40C) = 1;
    M2C_FIELD(D_8008F7E0, s32 *, 0x414) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_800190F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80019654);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_800196A0);
