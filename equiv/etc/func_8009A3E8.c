/* rand-mem: 0x8008F780 1 3 */
#include "common.h"

extern u8 D_8008ED68[], D_80085428[];
extern u8 D_800AF000[], D_800AF0B4[];
extern u16 D_800AF168[], D_800AF174[];
extern s16 D_800AF1A0[];
extern s32 D_800B3AF8[];
extern s32 D_800B3AE4, D_800B3AEC, D_800B3B20, D_800B3AE0;
extern s32 func_80019F30(s32, s32);
extern void func_80012A20(s32, s32, s32, s32);
typedef s32 (*Cb)(u8 *);
extern u8 *func_80032DB0(s32, s32, s32, s32, s32, void *);
extern u8 *func_80032E78(s32, s32, s32, s32, s32, void *);
extern s32 func_8009B060(u8 *), func_8009B1CC(u8 *), func_8009B624(u8 *), func_8009B500(u8 *);
extern s32 func_8009B564(u8 *), func_8009B6D0(u8 *), func_8009B738(u8 *), func_8009B774(u8 *);
extern s32 func_8009B7EC(u8 *), func_8009B864(u8 *), func_8009BBD0(u8 *), func_8009BD30(u8 *);
extern s32 func_80012544(s32), func_80012508(void);
extern void func_8001AD48(s32);

#define O32(o, x) (*(s32 *)((o) + (x)))
#define O16(o, x) (*(s16 *)((o) + (x)))
#define SHOW(o) (*(u32 *)((o) + 0x38) &= ~8)

s32 func_8009A3E8(void) {
    s32 i, k, row, col, alt;
    u8 *o, *e;
    for (i = 0; i < 0x11; i++) func_80012A20(func_80019F30(0x20008, i + 4), 1, 0, 0);
    for (i = 0; i < 6; i++) func_80012A20(func_80019F30(0x50008, i + 1), 1, 0, 0);
    o = func_80032DB0(0, -0x18, 4, 8, 2, func_8009B060);
    O16(o, 0x52) = 0;
    O16(o, 0x50) = 0;
    O16(o, 0x76) = 0;
    O16(o, 0x74) = 0;
    O32(o, 0x3C) = 0;
    for (i = 0, e = D_800AF000; i < 0xA; i++, e += 0x12) {
        s16 v;
        o = func_80032DB0(O16(e, 0), O16(e, 2), 4, 8, O16(e, 4) * 2 + 7, func_8009B1CC);
        v = O16(e, 6);
        O32(o, 0x84) = i;
        O32(o, 0x80) = (s16)(v - (v / 50) * 50);
        for (k = 0; k < 5; k++) {
            u16 a, b;
            o = func_80032DB0(O16(e, 0), O16(e, 2), 4, 8, k + 0x2E, func_8009B624);
            a = D_800AF168[k];
            O16(o, 0x6A) = a;
            b = D_800AF174[k];
            O32(o, 0x88) = k;
            SHOW(o);
            O32(o, 0x84) = i;
            O16(o, 0x6E) = b;
        }
        o = func_80032DB0(O16(e, 0), O16(e, 2), 4, 8, 8, func_8009B500);
        O32(o, 0x84) = i;
        D_800B3AF8[i] = 0;
    }
    for (i = 0; i < 5; i++) {
        o = func_80032E78(D_800AF1A0[i], i < 2 ? 0x50 : 0x40, 2, 8, 0x12, func_8009B564);
        O32(o, 0x84) = i;
    }
    o = func_80032DB0(0, 0x150, 4, 8, 0x61, func_8009B6D0);
    O16(o, 0x6E) = -2;
    SHOW(o);
    func_80032DB0(-3, 0x50, 3, 8, 1, func_8009B738);
    o = func_80032DB0(0, 0x44, 3, 8, 3, func_8009B774);
    O32(o, 0x84) = 0x64;
    for (i = 0; i < 2; i++) {
        o = func_80032DB0(-0x40 + i * 0x80, 0x44, 3, 8, i + 0x63, func_8009B7EC);
        O32(o, 0x84) = i;
    }
    alt = 0;
    for (row = 0; row < 6; row++) {
        s32 q = row / 3;
        for (col = 0; col < 8; col++) {
            o = func_80032DB0(-0xA0 + col * 0x28, q ? row * 40 : row * 40 - 0xF0, 3, 8, alt ? 0x4F : 0x50,
                              func_8009B864);
            O32(o, 0x80) = col;
            O32(o, 0x84) = row;
            O16(o, 0x6E) = q ? -4 : 4;
            alt ^= 1;
            SHOW(o);
        }
        alt ^= 1;
    }
    for (i = 0, e = D_800AF0B4; i < 0xF; i++, e += 0xC) {
        o = func_80032DB0(0, 0xA0, 4, 8, i + 0x51, func_8009BBD0);
        O32(o, 0x80) = i;
        O32(o, 0x84) = O16(e, 0);
        O32(o, 0x88) = 0;
        O32(o, 0x3C) = 0;
        SHOW(o);
    }
    for (row = 0; row < 4; row++) {
        for (col = 0; col < 3; col++) {
            o = func_80032DB0(row * 128 - 0x100, -0xC0 + col * 0x80, 5, 8, 0x60, func_8009BD30);
            o[0x5A] = 0x70;
            o[0x59] = 0x70;
            o[0x58] = 0x70;
            SHOW(o);
        }
    }
    D_80085428[0xF] = 0;
    D_80085428[0xE] = 0;
    D_80085428[1] = 0;
    D_800B3AE4 = 0;
    D_800B3AEC = 0;
    D_800B3B20 = 0;
    if (O32(D_8008ED68, 0xA18) == 1) {
        D_800B3AE0 = 0;
        O32(D_8008ED68, 0xA18) = 0;
        D_800B3AE0 = 1;
        return func_80012544(0xB);
    }
    D_800B3AE0 = 0;
    func_8001AD48(3);
    return func_80012508();
}
