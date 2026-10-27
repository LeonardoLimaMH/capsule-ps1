/* rand-u16: 0x80100E62 1 0,1,5,0x1F */
#include "common.h"

extern s16 D_80100E60[];
extern s16 D_80100E68;
extern u8 D_80085428[], D_80103EF0[], D_80078BF0[], D_80091618[], D_80091620[];
extern u16 D_800638D4[];
extern s32 D_8008ED80;
extern u8 D_800F1D00;
extern u8 *D_80085440;
extern s32 func_8001F8B0(s32, s32, s32), rand(void), func_80019F30(s32, s32);
extern void func_800DC9E4(s32, s32), func_800A8340(s32), func_80012A20(s32, s32, s32, s32), func_800220B8(u8 *);

#define X32(o) (*(s32 *)(D_80085428 + (o)))

s32 func_800C0898(void) {
    s16 *D = D_80100E60;
    s16 i, a2, s1;
    u16 s2, j, sum;
    D[3] -= 1;
    i = D[1];
    a2 = D[0x25 + i];
    s1 = D[5 + i];
    s2 = D[0x45 + i];
    if (i == 0x1F) D[1] = 0;
    else D[1] = (u16)D[1] + 1;
    D_80100E68 = a2;
    if (a2 == 0) {
        D_80085428[0x5E4] = 0;
        X32(0x24) = 0x1A;
        X32(0x28) = s1;
        X32(0x14) = func_8001F8B0(0x1A, s1, 0x1A);
        func_800DC9E4(s2, (u16)s1);
    } else if (a2 == 2) {
        X32(0x14) = (s32)(D_80103EF0 + i * 160);
        D_80085428[0x5E4] = 0;
        X32(0x24) = 0x1A;
        X32(0x28) = s1;
        if ((u32)(s1 - 5) < 2) func_800A8340(s2);
    } else {
        s32 t;
        u8 *r;
        if (D_80085428[6] & 0x10) D_80085428[0x5E4] = (rand() + D_8008ED80) & 7;
        else D_80085428[0x5E4] = (u32)(rand() + D_8008ED80) % 7;
        X32(0x28) = s1;
        t = D_80085428[0x5E4] + 0x10;
        X32(0x24) = t;
        r = (u8 *)func_8001F8B0(t, s1, t);
        X32(0x14) = (s32)r;
        if (s1 == 0x20) {
            *(u16 *)(r + 2) = D_800638D4[D_80085428[0x5E4]] + s2;
            *(u16 *)((u8 *)X32(0x14) + D_80078BF0[D_80085428[0x5E4]] * 2) = s2 + 0xC3;
        }
    }
    func_80012A20(func_80019F30(0x2000E, D_80085428[0x5E4] + 0x20), 1, 0, 0);
    func_800220B8(D_80085428);
    if (D_80100E68 != 1) return D_80100E68;
    sum = 0;
    for (j = 0; j < 8; j++) sum += D_80091618[(s16)s2 * 0x1A8 + 8 + j];
    if (sum != 0) {
        D_80085440 = D_80091620 + (s16)s2 * 0x1A8;
    } else {
        D_800F1D00 = s2 - 0x3D;
        D_80085440 = &D_800F1D00;
    }
    return D_80100E68;
}
