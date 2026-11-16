#include "ghidra.h"
#include "common.h"


typedef struct {
    s16 vx, vy, vz, pad;
    s16 dx, dx_pad;
    s16 dz, dz_pad;
    s16 sx, sy;
    s32 p;
    s32 flag;
} S_800EFCF4_Work;

typedef struct { u8 b[4]; } U4_800DD;

extern u8 D_8008ED68[];
extern s32 func_800FF190();
extern s32 func_800202A4();
extern void func_80013920();

typedef struct {
    u8 pad0[0x10];
    u32 a;
    u32 b;
    u8 pad18[0x24];
} S_800DD_Tab;

typedef struct {
    u8 pad0[0x13];
    u8 f13;
    u8 pad14[0x28];
} S_800DD_Tab8;



typedef struct { u8 pad0[0x28]; u16 x28; u16 x2a; u16 x2c; u8 b2e, b2f, b30, pad31; u8 b32, b33, b34, pad35; u16 x36; u16 x38; } ChessObjA;





s32 func_800F2F2C(s32 arg0, s32 arg1, void *arg2) {
    extern u8 D_80018600[];
    extern u8 D_8008ED68[];
    extern s32 D_80119710[];
    extern s32 D_80119714[];
    extern int func_800F865C();
    u8 *b = D_8008ED68;
    u8 *p;
    u8 *q;
    s32 r;
    s32 w, h;

    switch (*(u16 *)(b + 0xEC)) {
    case 0:
        p = func_80015B3C(D_80018600, func_800F865C, 1);
        w = *(s32 *)(b + 0x108) / 2;
        *(s16 *)(p + 0x28) = w;
        h = *(s32 *)(b + 0x10C) / 2;
        *(u8 *)(p + 0x2C) = 0xFF;
        *(u8 *)(p + 0x2D) = 0x64;
        *(u8 *)(p + 0x2E) = 0x64;
        *(u8 *)(p + 0x30) = 0x32;
        *(s16 *)(p + 0x32) = 0x3C;
        *(s16 *)(p + 0x2A) = h - 5;
        D_80119714[0] = 0;
        *(u16 *)(b + 0xEC) += 1;
        func_800374E8(0x8012);
    case 1:
        if (D_80119710[1] < 0x32) {
            return 0;
        }
        *(u8 *)((u8 *)arg2 + 0x17) = 0x87;
        *(u8 *)((u8 *)arg2 + 0x23) = 1;
        q = D_8008ED68;
        D_80119710[1] = 0;
        *(u16 *)(q + 0xEC) += 1;
        func_80034AB0(0x8012, D_80119710);
    case 2:
        r = 1;
        if (D_80119714[0] < 0x3C) {
            goto zero;
        }
        return r;
    default:
    zero:
        return 0;
    }
}




