#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001E180);

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001E228);

s32 *func_8001E284(void) {
    typedef struct {
        s32 f0;
        u8 pad[0x14];
    } Entry;
    extern u8 D_800861B0[];
    Entry *p = (Entry *)D_800861B0;
    s32 i;

    for (i = 0; i < 5; i++, p++) {
        if (p->f0 == 0) {
            return (s32 *)p;
        }
    }
    return NULL;
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

void func_8001E414(void) {
    extern u8 D_8008ED68[], D_800861B0[];
    u8 *b = D_8008ED68;
    s32 i;
    u8 *p;
    switch (*(u32 *)(b + 0x990)) {
    case 0: break;
    case 1: *(s32 *)(b + 0x990) = 2; break;
    case 2: *(s32 *)(b + 0x990) = 3; break;
    case 3:
        p = D_800861B0;
        for (i = 0; i < 5; i++) {
            func_8001E4A4(p);
            p += 0x18;
        }
        break;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001E4A4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001EA24);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001EC74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001EEC4);

void func_8001F160(void) {
    extern u8 D_8008ED68[];
    u8 *b = D_8008ED68;
    func_8001A998(b + 0x96c, 0x18);
    *(s32 *)(b + 0x988) = 0;
    *(s32 *)(b + 0x98c) = 0;
    *(s16 *)(b + 0x986) = 0;
    *(s16 *)(b + 0x984) = 0;
    *(s16 *)(b + 0x994) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001F1A8);

void func_8001F35C(s32 x, s32 y, s32 z, s32 big, s32 c4, u32 val, u32 count, s32 c7) {
    extern u8 D_8008ED68[];
    register u32 n asm("s4") = count;
    s32 started = 0;
    register u32 i asm("s0") = started;
    s32 _x = x;
    s32 _y = y;
    if (n != 0) {
        u8 *b = D_8008ED68;
        s32 zs = z << 16;
        s32 xa = i;
        s32 xb = i;
        do {
            u32 d = (val / (u32)func_8001AA44(10, n - i - 1)) % 10;
            if (d != 0 || started || i >= n - 1) {
                d += 0xC2;
                started = 1;
                if (big) func_8001EA24((s16)(_x + *(s32 *)(b + 0x108) / 2 + xb),
                    (s16)(_y + *(s32 *)(b + 0x10C) / 2), zs >> 16, d, c4, c7);
                else func_8001EC74((s16)(_x + *(s32 *)(b + 0x108) / 2 + xa),
                    (s16)(_y + *(s32 *)(b + 0x10C) / 2), zs >> 16, d, c4, c7);
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
