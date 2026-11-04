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

void func_8001E310(void) {
    extern u8 D_8008ED68[], D_800861B0[];
    u8 *b = D_8008ED68;
    u32 i;
    s32 off;
    *(s32 *)(b + 0x968) = 0;
    func_8001F160();
    i = 0;
    off = i;
    do {
        func_8001A998(off + D_800861B0, 0x18);
        i++;
        off += 0x18;
    } while (i < 5);
    *(s32 *)(b + 0x990) = 0;
}

void func_8001E388(void) {
    extern u8 D_8008ED68[], D_800861B0[];
    u8 *b = D_8008ED68;
    u32 i;
    s32 off;
    *(s32 *)(b + 0x968) = 0;
    func_8001F160();
    i = 0;
    off = i;
    do {
        func_8001A998(off + D_800861B0, 0x18);
        i++;
        off += 0x18;
    } while (i < 5);
    *(s32 *)(b + 0x990) = 1;
}

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

void func_8001F35C(s32 arg_x, s32 arg_y, s32 z, volatile s32 big, s32 c4, volatile u32 val, u32 count, s32 c7) {
    extern u8 D_8008ED68[];
    register u32 n asm("s4") = count;
    s32 started = 0;
    register u32 i asm("s0") = started;
    register s32 x asm("s7") = arg_x;
    register s32 y asm("s6") = arg_y;
    if (n != 0) {
        u8 *b = D_8008ED68;
        register s32 zs asm("s5") = z << 16;
        register s32 xa asm("s2") = i;
        register s32 xb asm("s1") = i;
        do {
            register u32 q asm("v0") = val / (u32)func_8001AA44(10, n - i - 1);
            u32 d = q % 10;
            if (d != 0 || started || i >= n - 1) {
                register s32 large asm("t0");
                d += 0xC2;
                large = big;
                started = 1;
                if (large) func_8001EA24((s16)(x + *(s32 *)(b + 0x108) / 2 + xb),
                    (s16)(y + *(s32 *)(b + 0x10C) / 2), zs >> 16, d, c4, c7);
                else func_8001EC74((s16)(x + *(s32 *)(b + 0x108) / 2 + xa),
                    (s16)(y + *(s32 *)(b + 0x10C) / 2), zs >> 16, d, c4, c7);
            }
            xa += 10;
            i++;
            xb += 14;
        } while (i < n);
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001F524);

void func_8001F7A4(s32 x, s32 y, s32 z, s32 a3, s32 idx, s32 e6) {
    extern u8 D_8008ED68[], D_8006D60C[];
    register s32 _e6 asm("s7") = e6;
    s32 _y = y;
    s32 _z = z;
    u8 *b = D_8008ED68;
    u16 *p = (u16 *)(D_8006D60C + idx * 10);
    u32 i = 0;
    s32 off = i;
    u16 c;
    do {
        c = *p;
        if (c != 0 && c != 0xFFFF) {
            func_8001EC74((s16)(x + *(s32 *)(b + 0x108) / 2 + off),
                          (s16)(_y + *(s32 *)(b + 0x10C) / 2), (s16)_z, c, 0, _e6);
        }
        off += 10;
        i++;
        p++;
    } while (i < 5);
}
