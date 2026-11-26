#include "common.h"

#include "ghidra.h"

#define AA280_CREATE(x, y, z, id, cb) func_80032DB0(x, y, z, 0x12, id, cb)
#define AA280_CREATE(x, y, z, id, cb) func_80032DB0(x, y, z, 0x12, id, cb)
void func_800AA280(s32 arg0) {
    extern u8 D_800B3D20[];
    extern u8 D_800B3D24[];
    extern s32 D_800B3D30[];
    extern u8 *func_80032DB0(s32, s32, s32, s32, s32, void *);
    extern int func_800AC4A4();
    extern int func_800AC570();
    extern int func_800AC650();
    extern int func_800AC780();
    extern int func_800AC9EC();
    extern int func_800ACC04();
    extern int func_800ACCA8();
    extern int func_800ACD40();
    extern int func_800ACD98();
    extern int func_800ACEDC();
    struct AA280Player { u8 status; u8 pad[0x2E7]; };
    struct AA280State { u8 pad[0x87A]; struct AA280Player player[2]; };
    s32 i;
    s32 j;
    register u8 *p asm("a3");
    u8 selected;

    func_80097B24(arg0, 0, 5);
    func_80097B24(arg0, 1, 5);
    ((struct AA280State *)arg0)->player[D_800B3D24[0]].status = 3;
    func_80097C6C(arg0, D_800B3D24[0], 5);
    for (i = 0; i < 2; i++) {
        func_80012A20(func_80019F30(0x20012, i + 8), 1, 0, 0);
    }
    func_80012A20(func_80019F30(0x50012, 2), 1, 0, 0);
    for (i = 0; i < 2; i++) {
        p = AA280_CREATE(i ? 0xA0 : -0x128, -0x60, 5, 0x3B, func_800AC4A4);
        M2C_FIELD(p, s16 *, 0x6A) = i ? -2 : 2;
        M2C_FIELD(p, s32 *, 0x84) = i;
        M2C_FIELD(p, s32 *, 0x80) = i;
        M2C_FIELD(p, u32 *, 0x38) |= 8;
    }
    for (i = 0; i < 2; i++) {
        if (i == 0) {
            p = AA280_CREATE(-0x120, -0x68, 4, 0x3C, func_800AC4A4);
        } else {
            p = AA280_CREATE(0xA8, -0x68, 4, M2C_FIELD(arg0, u8 *, 0x5D0) == 2 ? 0x3D : 0x3E, func_800AC4A4);
        }
        M2C_FIELD(p, s16 *, 0x6A) = i ? -2 : 2;
        M2C_FIELD(p, s32 *, 0x84) = i;
        M2C_FIELD(p, s32 *, 0x80) = i + 2;
        M2C_FIELD(p, u32 *, 0x38) |= 8;
    }
    for (i = 0; i < 2; i++) {
        p = AA280_CREATE(i ? 0x40 : -0x58, -0x70, 4, D_800B3D24[0] == i ? 0x3F : 0x40, func_800AC570);
        M2C_FIELD(p, s32 *, 0x84) = i;
        M2C_FIELD(p, s16 *, 0x76) = 0x80;
        M2C_FIELD(p, s16 *, 0x52) = 0;
    }
    p = AA280_CREATE(-0x90, -0x18, 2, 0x44, func_800AC780);
    M2C_FIELD(p, s16 *, 0x52) = 0;
    M2C_FIELD(p, s16 *, 0x50) = 0;
    M2C_FIELD(p, s16 *, 0x76) = 0x200;
    M2C_FIELD(p, s16 *, 0x74) = 0x200;
    for (i = 0; i < 2; i++) {
        M2C_FIELD(AA280_CREATE(i ? 0x10 : -0x90, 0x10, 2, i + 0x18, func_800ACD40), s32 *, 0x84) = i;
        M2C_FIELD(AA280_CREATE(i ? 0x10 : -0x88, 0x10, 2, 0x17, func_800ACCA8), s32 *, 0x84) = i;
        M2C_FIELD(AA280_CREATE(i ? 0xC : -0x98, -0x68, 2, 0x42, func_800AC9EC), s32 *, 0x84) = i;
        M2C_FIELD(AA280_CREATE(i ? 0xA0 : -0x138, -0x68, 4, 0x45, func_800ACC04), s32 *, 0x84) = i;
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            p = AA280_CREATE(0, 0, 3, 0x41, func_800AC650);
            M2C_FIELD(p, s32 *, 0x7C) = i;
            M2C_FIELD(p, s32 *, 0x80) = j;
            M2C_FIELD(p, s16 *, 0x4A) = (j >> 1) * 0x38 - 0x40;
            if (i != 0) {
                M2C_FIELD(p, s16 *, 0x46) = (j & 1) ? 0x18 : 0x50;
            } else {
                M2C_FIELD(p, s16 *, 0x46) = (j & 1) ? -0x80 : -0x48;
            }
            M2C_FIELD(p, s32 *, 0x84) = i;
        }
    }
    for (i = 0; i < 2; i++) {
        p = AA280_CREATE(i ? 0xB8 : -0x110, 0x28, 3, 0x43, func_800ACEDC);
        M2C_FIELD(p, s16 *, 0x6A) = i ? -2 : 2;
        M2C_FIELD(p, s32 *, 0x7C) = i;
        M2C_FIELD(p, u32 *, 0x38) |= 8;
        p = AA280_CREATE(i ? 0xC8 : -0x100, 0x58, 4, 0xD, func_800ACEDC);
        M2C_FIELD(p, s32 *, 0x7C) = i;
        M2C_FIELD(p, s32 *, 0x80) = 5;
        M2C_FIELD(p, s16 *, 0x6A) = i ? -2 : 2;
        M2C_FIELD(p, u32 *, 0x38) |= 8;
    }
    p = AA280_CREATE(-0x98, -0x34, 2, 0x47, func_800ACD98);
    selected = D_800B3D24[0];
    M2C_FIELD(p, s16 *, 0x52) = 0;
    M2C_FIELD(p, s16 *, 0x50) = 0;
    M2C_FIELD(p, s16 *, 0x76) = 0x200;
    M2C_FIELD(p, s16 *, 0x74) = 0x200;
    func_80033100(arg0, 3, selected);
    D_800B3D30[0] = 0x4C;
    D_800B3D20[0] = 0;
    func_800ABEA0();
    func_80012508();
}

#define M14(i) (*(u32 *)(D_80063940 + (i) * 60 + 0x14))

