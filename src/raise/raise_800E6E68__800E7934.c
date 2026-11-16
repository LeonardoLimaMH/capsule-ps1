#include "common.h"

s32 func_800E7934(u16 arg0) {
    typedef struct {
        u8 pad[0xEE];
        s16 unkEE;
        u8 pad2[0x1A8 - 0xF0];
    } S_E7934;
    extern S_E7934 D_80091618[];
    extern s32 func_800202A4(s32);
    s16 t = D_80091618[arg0].unkEE / 3;
    s32 v = t + 12;
    return (func_800202A4(100) < v) * 2;
}

extern u8 D_800859F2[];
extern u8 D_800F2C68[];

