/* stub-ret: mixed */
/* rand-u16: 0x80101068 1 0,5,1,2,3 */
#include "common.h"

extern u8 D_80100F38[], D_80091618[], D_800F07F4[];
extern s16 D_800ED8E4;
extern s32 func_800B1260(s32), func_800E17F8(s32);
extern void func_800E1848(s32), func_800E186C(s32, s32);

#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C14D4(s32 a0, s32 a1) {
    s32 k = func_800B1260(a1);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    u8 *e = D_80091618 + (u16)k * 0x1A8;
    s32 v = P32(0x2B8);
    u16 i;
    s32 r;
    if (*(u16 *)(e + 0x66) == 1) {
        if (*(u16 *)(e + 0x68) == 1) {
            if (v != 0x30005) return P32(0x2BC);
        } else if (v != 0x20005 && v != 0x30005) {
            return P32(0x2BC);
        }
    } else if (*(u16 *)(e + 0x62) == 1) {
        if (*(u16 *)(e + 0x64) == 1) {
            if (v == 5 || v != 0x10005) return P32(0x2BC);
        } else if (v != 5 && v != 0x10005) {
            return P32(0x2BC);
        }
    }
    func_800E1848((u16)k);
    if (func_800E17F8((u16)k) == 0) {
        func_800E186C(a1, (u16)k);
        goto reset;
    }
    switch (PS16(0x2B8)) {
    case 1:
    case 2:
        *(u16 *)(D_80091618 + (u16)k * 0x1A8 + 0x110) = 0;
        break;
    case 4:
        *(u16 *)(D_80091618 + (u16)k * 0x1A8 + 0x110) = 0;
        P16(0x228) = 0;
        if (PS16(0x36E) == 1) {
            r = P32(0x2BC);
            P16(0x2B8) = 6;
            P16(0x2BA) = 2;
            return r;
        }
        break;
    case 6:
        if (PS16(0x2BA) == 0 || PS16(0x2BA) == 2) return P32(0x2BC);
        break;
    }
    if (PS16(0x228) == 0) {
        P16(0x2CA) = 0;
        *(u8 **)(p + 0x2BC) = D_800F07F4;
        P16(0x2B8) = 0;
        P16(0x2C0) = 0;
        P16(0x2BA) = 0;
        P16(0x2C2) = 0;
    } else {
        P16(0x2CA) = 1;
    }
reset:
    for (i = 0; i < 5; i++) {
        *(u16 *)(p + 0x2CE + i * 2) = 0;
        *(s32 *)(p + 0x2DC + i * 4) = 0;
        *(s32 *)(p + 0x2F4 + i * 4) = 0;
        *(u16 *)(p + 0x30C + i * 2) = 0;
        *(u16 *)(p + 0x318 + i * 2) = 1;
    }
    r = P32(0x2BC);
    P16(0x368) = -1;
    P16(0x372) = 1;
    P16(0x220) = 0x32;
    P16(0x2CC) = 0;
    P16(0x36A) = 0;
    P16(0x374) = 0;
    P16(0x376) = 0;
    P16(0x344) = 0;
    P16(0x342) = 0;
    P16(0x37E) = 0;
    D_800ED8E4 = 0;
    return r;
}
