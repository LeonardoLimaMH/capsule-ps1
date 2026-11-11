#include "common.h"

extern u8 D_800916E8[];
extern s16 D_800EC588[][17];
extern s16 D_800ECB84[][17];

s16 func_800A76C0(u16 a)
{
    extern u8 D_80091618[];
    u8 *b = D_80091618;
    u8 *e = b + a * 0x1A8;
    u16 v = *(u16 *)(e + 0xD4);
    *(u16 *)(e + 0xC2) = v;
    if ((s16)v < *(s16 *)(e + 0xD6)) {
        *(u16 *)(e + 0xC2) = *(u16 *)(e + 0xD6);
    }
    *(u16 *)(e + 0xC2) = 0xFF - *(u16 *)(e + 0xC2);
    return *(u16 *)(e + 0xC2);
}

