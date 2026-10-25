#include "common.h"

/* inicializacao da tela: carrega recursos e cria os objetos */
extern s32 func_80019F30(s32, s32);
extern void func_80012A20(s32, s32, s32, s32);
extern u8 *func_80032DB0(s32, s32, s32, s32, s32, void *);
extern u8 *func_80032E78(s32, s32, s32, s32, s32, void *);
extern u8 *func_80032F50(s32, s32, s32, s32, void *);
extern u8 *func_80033020(s32, s32, s32, s32, void *);
extern s32 func_80012508(void);
extern void D_80033450(void);
extern void func_800A2E00(void), func_800A2D84(void), func_800A2DBC(void), func_800A2F1C(void);
extern void func_800A3060(void), func_800A2F88(void), func_800A3014(void), func_800A3128(void);
extern void func_800A3230(void), func_800A3718(void), func_800A378C(void), func_800A3814(void);
extern void func_800A39D8(void), func_800A32F0(void), func_800A3388(void), func_800A3570(void);
extern void func_800A3410(void), func_800A3654(void), func_800A3AB4(void), func_800A3BDC(void);
extern void func_800A3F70(void), func_800A4654(void), func_800A3C70(void), func_800A4720(void);
extern void func_800A4448(void), func_800A40DC(void), func_800A4038(void), func_800A3D44(void);
extern void func_800A4884(void), func_800A4820(void);

#define LOAD(id, n) func_80012A20(func_80019F30((id), (n)), 1, 0, 0)
#define CREATE func_80032DB0
#define CREATE2 func_80032E78
#define O32(o, x) (*(s32 *)((o) + (x)))
#define O16(o, x) (*(s16 *)((o) + (x)))
#define SET30(o) (O32(o, 0x30) = (O32(o, 0x30) & ~0x30) | 0x20)
#define SET30B(o) (O32(o, 0x30) = (((O32(o, 0x30) & ~0x1C0) | 0x40) & ~0x30) | 0x10)

s32 func_8009CB84(void) {
    s32 i, k, p, cnt, x, y;
    u8 *o;
    for (i = 0; i < 9; i++) LOAD(0x20010, i + 2);
    LOAD(0x50010, 0);
    for (i = 0; i < 8; i++) {
        if (i < 3) LOAD(0x20013, i + 0x10);
        else LOAD(0x20014, i + 0x18);
    }
    LOAD(0x50014, 5);
    for (i = 0; i < 3; i++) {
        y = 0x240 + i * 0x40;
        func_80012A20(func_80019F30(0x2001D, i), 2, y, 0x100);
        func_80012A20(func_80019F30(0x2001E, i), 2, y, 0x100);
    }
    for (i = 0; i < 2; i++) LOAD(0x2001E, i + 3);
    LOAD(0x5001D, 0);
    LOAD(0x5001D, 1);
    for (i = 0; i < 0x1A; i++) LOAD(0x20010, i + 0xB);
    LOAD(0x50010, 1);

    o = CREATE(-0x28, -0x68, 4, 0x10, 0x60, func_800A2E00);
    O32(o, 0x80) = 0;
    SET30(o);
    o = CREATE(-0x70, -0x10, 4, 0x10, 0x64, func_800A2E00);
    O32(o, 0x80) = 1;
    SET30(o);
    o = CREATE(0x20, -0x10, 4, 0x10, 0x66, func_800A2E00);
    O32(o, 0x80) = 2;
    SET30(o);
    o = CREATE(-0x88, 0x48, 4, 0x10, 0x5F, func_800A2D84);
    O32(o, 0x84) = 6;
    CREATE(-0x30, -0x20, 3, 0x10, 0x68, func_800A2DBC);
    CREATE2(-0x28, -0x18, 2, 0x10, 0xC, func_800A2F1C);
    for (i = 0; i < 8; i++) {
        o = func_80032F50(0x10 + i * 16, -0x60, 3, 0x16 + i, func_800A3060);
        O32(o, 0x80) = i;
    }
    for (i = 0; i < 8; i++) {
        o = func_80032F50(0x10 + i * 16, -0x50, 3, 0x16 + i, func_800A3060);
        O32(o, 0x80) = i;
    }
    CREATE2(-0x48, -0x60, 3, 0x10, 0, func_800A2F88);
    o = CREATE(-0x98, -0x68, 3, 0x10, 0, func_800A3014);
    O32(o, 0x84) = 7;
    o = CREATE(-0x50, -0x70, 4, 0x10, 7, func_800A2D84);
    O32(o, 0x84) = 0xF;
    cnt = 0;
    for (i = 0; i < 2; i++)
        for (k = 0; k < 4; k++) {
            o = CREATE(-0x90 + k * 0x48, i ? 0x10 : -0x50, 4, 0x10, 8, func_800A3128);
            O32(o, 0x80) = cnt++;
        }
    cnt = 0;
    for (i = 0; i < 2; i++)
        for (k = 0; k < 4; k++) {
            o = CREATE(-0x90 + k * 0x48, i ? 0x10 : -0x50, 4, 0x10, 9, func_800A3230);
            O32(o, 0x80) = cnt++;
        }
    o = CREATE(-0x50, -0x68, 4, 0x10, 0x18, func_800A2D84);
    O32(o, 0x84) = 0x14;
    CREATE(-0x30, -0x48, 4, 0x10, 0x19, func_800A3718);
    CREATE(0, -0x50, 4, 0x1D, 0xB, func_800A378C);
    o = CREATE(0, 0x50, 4, 0x10, 0x4D, func_800A3814);
    SET30(o);
    CREATE2(0, 0x20, 4, 0x10, 6, func_800A39D8);
    o = CREATE(-0x90, -0x68, 4, 0x10, 0x1D, func_800A2D84);
    O32(o, 0x84) = 0x12;
    o = CREATE(-0x90, -0x70, 4, 0x10, 0xA, func_800A32F0);
    O32(o, 0x80) = 1;
    CREATE2(-0x90, 0x20, 4, 0x10, 1, func_800A32F0);
    CREATE2(0x88, 0x20, 4, 0x10, 2, func_800A32F0);
    CREATE(0, -0x50, 4, 0x1D, 0, func_800A3388);
    o = CREATE(0x28, 0x48, 2, 0x10, 0x40, func_800A32F0);
    O32(o, 0x80) = 0;
    O32(o, 0x84) = 1;
    o = CREATE(-0x40, -0x68, 4, 0x10, 0x11, func_800A2D84);
    O32(o, 0x84) = 0x11;
    for (i = 0; i < 2; i++) {
        o = CREATE(i ? 0x18 : -0x78, -0x28, 4, 0x10, i ? 0x52 : 0x5A, func_800A3570);
        O32(o, 0x80) = i;
        SET30(o);
    }
    o = CREATE(-0x88, 0x50, 4, 0x10, 0x14, func_800A3410);
    O32(o, 0x84) = 0;
    O32(o, 0x80) = 0;
    o = CREATE(-0x58, 0x58, 4, 0x10, 0x16, func_800A3654);
    O32(o, 0x80) = 1;
    o = CREATE(0x38, 0x50, 4, 0x10, 0x3F, func_800A3410);
    O32(o, 0x84) = 1;
    O32(o, 0x80) = 1;
    SET30(o);
    o = CREATE(0x68, 0x58, 4, 0x10, 0x17, func_800A3654);
    O32(o, 0x80) = 0;
    for (i = 0; i < 2; i++) {
        o = CREATE(i ? -0x88 : 0x38, 0x58, 4, 0x10, 0x13, func_800A3410);
        O32(o, 0x84) = i;
        O32(o, 0x80) = 2;
    }
    o = func_80032F50(-0x88, -0x68, 4, 0x2E, func_800A3AB4);
    O32(o, 0x84) = 0;
    for (i = 0; i < 2; i++) {
        o = func_80032F50(i ? 0x48 : -0x40, 0x40, 3, 0xF, func_800A3AB4);
        O32(o, 0x80) = i;
        O32(o, 0x84) = 1;
        o = func_80033020(i ? 0x48 : -0x40, 0x40, 3, 1, func_800A3AB4);
        O32(o, 0x80) = i;
        O32(o, 0x84) = 2;
    }
    o = CREATE(-0x58, -0x70, 4, 0x10, 0x22, func_800A3BDC);
    O32(o, 0x84) = 0;
    for (p = 0; p < 2; p++) {
        o = CREATE(p ? -0x90 : 0x58, -0x20, 3, 0x10, p ? 0x15 : 0x14, func_800A3BDC);
        O32(o, 0x84) = 1;
        O32(o, 0x80) = 1;
        o = CREATE(p ? -0x80 : 0x70, -8, 3, 0x10, 0x23, func_800A3F70);
        O32(o, 0x84) = p;
        o = CREATE(-0x98, -0x40, 4, 0x10, 0x2A, func_800A4654);
        O32(o, 0x84) = p;
        o = CREATE(p ? -0x98 : 0x58, -0x10, 4, 0x10, 0x6E, func_800A3BDC);
        O32(o, 0x84) = p;
        o = CREATE(-0x78, p ? 0x18 : -0x20, 4, 0x10, 0x2B, func_800A3C70);
        O32(o, 0x80) = 0;
        O32(o, 0x84) = p;
        o = CREATE(8, p ? 0x18 : -0x20, 4, 0x10, 0x2C, func_800A3C70);
        O32(o, 0x80) = 1;
        O32(o, 0x84) = p;
        o = CREATE(0x20, p ? 0x28 : -0x60, 3, 0x12, 0x17, func_800A4720);
        O32(o, 0x84) = p;
        for (k = 0; k < 6; k++) {
            o = CREATE(-0x78 + k * 0x30, 0, 4, 0x10, 0x6F, func_800A4448);
            O32(o, 0x80) = k;
            O32(o, 0x84) = p;
            SET30B(o);
        }
        for (k = 0; k < 4; k++) {
            o = CREATE(-0x98 + k * 0x40, p ? 0x28 : -0x60, 3, 0x10, 0x6F, func_800A40DC);
            O32(o, 0x80) = k;
            O32(o, 0x84) = p;
            SET30B(o);
        }
        for (k = 0; k < 2; k++) {
            o = CREATE2(k ? -0x28 : -0x60, p ? 0x38 : -0x50, 3, 0x10, 5 - k, func_800A4038);
            O32(o, 0x84) = p;
        }
        o = CREATE(-0x48, p ? 0x10 : -0x60, 3, 0x10, 0x34, func_800A3D44);
        O16(o, 0x76) = 0x200;
        O16(o, 0x74) = 0x200;
        O32(o, 0x84) = p;
        o = CREATE(-0x88, -0x50, 3, 0x10, 0x35, func_800A4884);
        O32(o, 0x84) = p;
    }
    CREATE(-0x68, -0x70, 4, 0x10, 0x3E, func_800A4820);
    cnt = 0;
    for (i = 0, y = -0xA0; i < 5; i++, y += 0x40, cnt++) {
        for (x = -0xA0; x < 0xA1; x += 0x40) {
            u16 c;
            o = func_80032F50(x, y, 0x401, (cnt & 1) ? 0x1E : 0x1F, D_80033450);
            O16(o, 0x6A) = -1;
            O16(o, 0x6E) = 1;
            c = *(u16 *)(o + 0x66);
            o[0x5A] = 0x70;
            o[0x59] = 0x70;
            o[0x58] = 0x70;
            *(u32 *)(o + 0x38) |= 8;
            *(u16 *)(o + 0x66) = c + 1;
            cnt++;
        }
    }
    return func_80012508();
}
