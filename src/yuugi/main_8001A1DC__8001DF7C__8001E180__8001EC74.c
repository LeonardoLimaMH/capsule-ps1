#include "common.h"
#include "yuugi.h"

typedef struct {
    u8 data[0x18];
} Unk_800861B0;

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180__8001EC74", func_8001EC74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180__8001EC74", func_8001EEC4);

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

void func_8001F1A8(s32 x, s32 y, s32 a2, s32 a3, s32 a4, u8 *str, volatile s32 wide, u32 n, s32 a8) {
    extern u8 D_8008ED68[];
    s32 raw = wide;
    u8 *s = str;
    s32 i = 0;
    s32 _x = x;
    s32 _y = y;
    register s32 _a2 asm("s5") = a2;
    if (n != 0) {
        s32 w = (s16)raw;
        u8 *b = D_8008ED68;
        s32 xa = i;
        s32 xb = i;
        u16 *p = (u16 *)s;
        do {
            s32 c;
            if (w != 0) {
                c = *p;
            } else {
                c = s[i];
            }
            if (c != 0 && c != 0xFFFF) {
                if (a3 != 0) {
                    func_8001EA24((s16)(_x + *(s32 *)(b + 0x108) / 2 + xb),
                                  (s16)(_y + *(s32 *)(b + 0x10C) / 2), (s16)_a2, c, a4, a8);
                } else {
                    func_8001EC74((s16)(_x + *(s32 *)(b + 0x108) / 2 + xa),
                                  (s16)(_y + *(s32 *)(b + 0x10C) / 2), (s16)_a2, c, a4, a8);
                }
            }
            xa += 10;
            xb += 14;
            p++;
        } while (++i < n);
    }
}

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180__8001EC74", func_8001F524);

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
