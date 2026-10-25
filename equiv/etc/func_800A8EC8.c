/* rand-mem: 0x80085A00 1 0xC8 */
#include "common.h"

extern u16 D_800B3974[], D_800B3988[];
extern u8 D_800B3C58[];
extern u16 D_800B3C4E, D_800B3CF4, D_800B3CF6, D_800B3D0C;
extern s32 D_800B3CF8, D_800B3D08, D_800B3CFC, D_800B3D04, D_800B3D00;
extern u8 D_800B3C4C, D_80085A00;
extern s32 D_8008F780;
extern s32 func_80019F30(s32, s32);
extern void func_80012A20(s32, s32, s32, s32);
extern u8 *func_80032E78(s32, s32, s32, s32, s32, s32 (*)(u8 *));
extern u8 *func_80032DB0(s32, s32, s32, s32, s32, void (*)(void));
extern s32 func_800A9ABC(u8 *);
extern void func_800A98FC(void);
extern s32 func_80012508(void);

s32 func_800A8EC8(void) {
    s32 i;
    u8 *o;
    u32 v;
    for (i = 0; i < 0xB; i++) func_80012A20(func_80019F30(0x2000B, i), 1, 0, 0);
    for (i = 0; i < 3; i++) func_80012A20(func_80019F30(0x5000B, i), 1, 0, 0);
    for (i = 0; i < 0xA; i++) {
        o = func_80032E78(0, 0xA0, 5, 0xB, i, func_800A9ABC);
        *(u16 *)(o + 0x6A) = D_800B3974[i];
        *(s32 *)(o + 0x84) = i;
        *(u16 *)(o + 0x6E) = D_800B3988[i];
    }
    o = func_80032DB0(0, 0, 3, 0xB, 0x21, func_800A98FC);
    D_800B3C4E = 0x7FFF;
    *(u16 *)(o + 0x52) = 0x7FFF;
    *(u16 *)(o + 0x50) = 0x7FFF;
    *(u16 *)(o + 0x76) = 0x800;
    *(u16 *)(o + 0x74) = 0x800;
    for (i = 0x4E; i >= 0; i--) *(u16 *)(D_800B3C58 + i * 2) = 0x80;
    D_800B3CF4 = 0x90;
    D_800B3CF8 = 0;
    D_800B3C4C = 0;
    D_800B3D08 = 0;
    D_800B3CFC = 0;
    D_800B3D0C = 0;
    D_800B3CF6 = -0x98;
    D_800B3D04 = 2;
    v = D_80085A00;
    D_800B3D00 = v;
    if ((s32)v >= 100) {
        D_800B3D04 = 3;
        D_800B3CF6 = -0xA0;
    } else if ((s32)v < 10) {
        D_800B3D04 = 1;
        D_800B3CF6 = -0x9A;
    }
    D_8008F780 = 0;
    return func_80012508();
}
