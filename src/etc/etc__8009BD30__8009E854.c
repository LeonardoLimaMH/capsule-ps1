#include "common.h"


extern u8 D_80085428[];
extern u16 D_8008EE44[];
extern void (*D_800B2C2C[])(u8 *);

void func_800A4964();

void func_8009E854(u8 *arg0) {
    extern void D_8002E2AC(void);
    extern struct {
        u8 pad0[0xA18];
        s32 unkA18;
        s32 unkA1C;
        s32 unkA20;
        s32 unkA24;
    } D_8008ED68[];
    extern s32 D_8008EDF0[];
    extern u16 D_8008EE48[];
    extern s32 D_8008F7D0[];
    extern u8 D_800B29DC[];
    extern u8 D_800B29E0[];
    extern u8 D_800B29E8[];
    extern u16 D_800B2C0C[];
    extern s16 D_800B3B38[];
    extern u16 D_800B3B40[];
    extern s32 D_800B3C08[];
    extern u16 D_800B3C14[];
    extern void func_800A8CAC(void);
    extern void func_800220B8(u8 *);
    extern s32 func_800220D4(u8 *, s32, s32, s32);
    extern s32 func_8001F8B0(s32, s32);
    extern void func_80012578(void);
    extern void func_800A2588(s32);
    extern void func_80012544(s32);
    extern void func_80034BD8(s32, s32);
    extern void func_80033974(s32);
    extern void func_8001AD74(s32);
    extern void func_800125AC(s32);
    extern s32 func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);
    extern void func_80034AB0(s32);
    extern void func_80013668(void);
    extern void func_80012200(void (*)(void));

    switch (*D_8008EE48) {
    case 1:
        D_8008ED68[0].unkA24 = 0;
        D_8008ED68[0].unkA18 = 0;
        func_800220B8(arg0);
        if (D_8008ED68[0].unkA1C == 0) {
            *(s32 *)(arg0 + 0x14) = func_8001F8B0(arg0[0x5E5] + 8, 1);
        } else if (D_8008ED68[0].unkA1C == 2) {
            *(s32 *)(arg0 + 0x14) = func_8001F8B0(0x1E, 0);
        } else {
            *(s32 *)(arg0 + 0x14) = func_8001F8B0(arg0[0x5E5] + 8, 0xB);
        }
        func_80012578();
        break;
    case 2:
        if (func_800220D4(arg0, 1, 1, 5) != 0) {
            if (D_8008ED68[0].unkA1C == 0) {
                u16 v = D_800B2C0C[arg0[0x5E5]];
                *D_800B3B40 = v;
                func_800A2588((s16)v);
                *D_800B3C08 = 0;
                func_80012544(0x10);
            } else if (D_8008ED68[0].unkA1C == 2) {
                D_8008ED68[0].unkA1C = 0;
                arg0[0x5D4] = 0;
                func_80034BD8(-3, 0);
                func_80033974(*D_800B3C14);
                func_8001AD74(4);
                func_800125AC(5);
            } else {
                D_8008ED68[0].unkA1C = 0;
                *D_800B3B40 = 0;
                func_80012578();
            }
        }
        break;
    case 3:
        func_8001F1A8(-0x44, 8, 0, 1, 0, D_800B29E8, 1, 0xA, 2);
        func_8001F1A8(-0x34, 0x20, D_800B3B38[4] == 0 ? 3 : 0, 1, 0, D_800B29DC, 1, 2, 2);
        func_8001F1A8(8, 0x20, D_800B3B38[4] == 1 ? 3 : 0, 1, 0, D_800B29E0, 1, 3, 2);
        if (*D_8008EDF0 & 0xA000) {
            func_80034AB0(0x84);
            D_800B3B38[4] ^= 1;
        } else if (*D_8008EDF0 & 0x20) {
            func_80034AB0(0x48);
            func_800220B8(arg0);
            *(s32 *)(arg0 + 0x14) = func_8001F8B0(arg0[0x5E5] + 8, D_800B3B38[4] + 9);
            func_80012578();
        }
        break;
    case 4:
        if (func_800220D4(arg0, 1, 1, 5) != 0) {
            if (D_800B3B38[4] == 0) {
                s16 v = D_800B2C0C[arg0[0x5E5]];
                D_800B3B38[4] = v;
                func_800A2588(v);
                *D_800B3C08 = 0;
                func_80012544(0x10);
            } else {
                func_80013668();
                func_80034BD8(-3, 0);
                func_80033974(*D_800B3C14);
                func_80012200(D_8002E2AC);
            }
        }
        break;
    case 5:
        if (*D_8008F7D0 == 0) {
            func_80013668();
            func_80012200(func_800A8CAC);
        }
        break;
    }
}


