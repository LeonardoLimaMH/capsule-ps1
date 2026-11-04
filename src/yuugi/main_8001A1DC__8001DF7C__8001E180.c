#include "common.h"
#include "yuugi.h"

void func_8001E180(void) {
    register s32 i asm("s0") = 0;
    do {
        register s32 id asm("a0") = 0x20001;
        i += 1;
        func_80012C7C(func_80019F30(id, i));
    } while (i < 12);
    func_80012E54(func_80019F30(0x50001, 1));
}

#include "common.h"

void func_8001E1E4(void) {
    extern s32 D_8008F6D0[];
    (*D_8008F6D0) = 0;
    func_8001F160();
}

#include "ghidra.h"
void func_8001E208(undefined4 param_1)

{
  func_8001A998(param_1,0x18);
  return;
}

void func_8001E228(void) {
    extern u8 D_800861B0[];
    u32 i = 0;
    s32 off = i;
    do {
        func_8001A998((void *)(off + (u32)D_800861B0), 0x18);
        i++;
        off += 0x18;
    } while (i < 5);
}

s32 *func_8001E284(void) {
    extern u8 D_800861B0[];
    register u8 *ret asm("v0");
    register u8 *p asm("v1") = D_800861B0;
    register s32 i asm("a0") = 0;
loop:
    ret = p;
    if (*(s32 *)p != 0) {
        i++;
        p += 0x18;
        if (i >= 5) ret = 0;
        else goto loop;
    }
    return (s32 *)ret;
}

void func_8001E2BC(void *arg0, s32 arg1, s32 arg2, s32 arg3, volatile s32 arg4, volatile s32 arg5) {
    extern u8 D_8008ED68[];
    u8 *b = D_8008ED68;
    s32 a, c, h;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 0x14) = arg2 + *(s32 *)(b + 0x108) / 2;
    a = arg4;
    c = arg5;
    h = *(s32 *)(b + 0x10C);
    M2C_FIELD(arg0, s8 *, 8) = a;
    arg3 += h / 2;
    M2C_FIELD(arg0, s8 *, 0xD) = c;
    M2C_FIELD(arg0, s16 *, 0x16) = arg3;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001E310);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001E388);

s32 func_8001E404(void) {
    extern s32 D_8008F6F8[];
    return (*D_8008F6F8);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001E414);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001E4A4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001EA24);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001EC74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001EEC4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001F160);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001F1A8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001F35C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001F524);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001F7A4);
