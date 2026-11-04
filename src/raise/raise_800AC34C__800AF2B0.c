#include "common.h"

/* entrada de 0x1A8 bytes da tabela D_80091618 */
typedef struct {
    u16 unk0;
    u8 pad2[0xE];
    u16 unk10;
    u8 pad12[0x1A8 - 0x12];
} S_80091618;
extern S_80091618 D_80091618[];

void func_800AF2B0(void) {
    func_800AF380();
    func_800AF760();
    func_800AF98C();
    if (func_800AFEB8() == 0) {
        func_800B026C();
    }
}

s32 func_800AF2F8(void) {
    return 0;
}

void func_800AF300(void) {

}

#include "ghidra.h"
void func_800AF308(undefined4 param_1)

{
    extern s32 D_8006AF84[];
  func_800B0A8C(param_1,((*D_8006AF84) % 0x7080) / 0x4b0);
  return;
}

/* entrada de 0x1A8 bytes da tabela D_80091618 */

void func_800AF380(void) {
    typedef struct {
        u8 _p00[0x10];
        u16 unk10;
        u8 _p12[0x78];
        u16 unk8A;
        u8 _p8C[0x11C];
    } S_91618;
    extern u16 D_8006AF80[];
    extern void func_800AFAC0(void);
    extern void func_800D533C(void);
    extern void func_800B1088(s32, s32, s32);
    s32 i;
    S_91618 *p;

    func_800AFAC0();
    func_800D533C();
    p = ((S_91618 *)D_80091618);
    for (i = 0; i < 6; i++) {
        u16 a0 = i;
        s32 val;

        if (p[a0].unk10 == 0xFFFF) {
            val = -1;
        } else if (a0 == *D_8006AF80) {
            val = 1;
        } else {
            val = (a0 != p[*D_8006AF80].unk8A) * 2;
        }
        func_800B1088(val, i, 0);
    }
}

extern u16 (*D_800EEAA8[])(u16, u16);
extern s32 func_800D1548(s32, s32);
extern s32 func_800202A4(s32);
extern s32 func_800B1260(s32);
extern s32 func_800E1820(u16), func_800E17F8(u16), func_800E16AC(u16), func_800E1674(u16), func_800E14C4(u16);
extern s32 func_800E1140(u16), func_800E1388(u16), func_800E1594(u16), func_800E1624(u16);
extern void func_800B0740(u16, u16, u16, u16);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800AF468);

/* entrada de 0x1A8 bytes da tabela D_80091618 */

void func_800AF760(void) {
    typedef struct {
        u8 _p00[0x10];
        u16 unk10;
        u8 _p12[0x78];
        u16 unk8A;
        u8 _p8C[0x11C];
    } S_91618;
    extern u16 D_8006AF80[];
    extern void func_800E68D8(u16);
    extern void func_800AF468(s32, u16);
    s32 *g;
    s32 timer;
    s32 i;
    u16 a0;
    s32 val;

    g = (s32 *)D_8006AF80;
    timer = g[1];
    if (timer != 0 && (timer % 28800) == 0) {
        i = 0;
        for (; i < 6; i++) {
            a0 = i;
            if (((S_91618 *)D_80091618)[a0].unk10 == 0xFFFF) {
                val = -1;
            } else if (a0 == *D_8006AF80) {
                val = 1;
            } else {
                val = (a0 != ((S_91618 *)D_80091618)[*D_8006AF80].unk8A) * 2;
            }

            if (val != -1) {
                func_800E68D8(i);
            }
        }
    }

    if (timer != 0) {
        i = 0;
        if ((timer % 200) == 0) {
            for (; i < 6; i++) {
                a0 = i;
                if (((S_91618 *)D_80091618)[a0].unk10 == 0xFFFF) {
                    val = -1;
                } else if (a0 == *D_8006AF80) {
                    val = 1;
                } else {
                    val = (a0 != ((S_91618 *)D_80091618)[*D_8006AF80].unk8A) * 2;
                }

                if (val != -1) {
                    func_800AF468(val, i);
                }
            }
        }
    }
}

extern u16 (*D_800EEAA8[])(u16, u16);
extern s32 func_800D1548(s32, s32);
extern s32 func_800202A4(s32);
extern s32 func_800B1260(s32);
extern s32 func_800E1820(u16), func_800E17F8(u16), func_800E16AC(u16), func_800E1674(u16), func_800E14C4(u16);
extern s32 func_800E1140(u16), func_800E1388(u16), func_800E1594(u16), func_800E1624(u16);
extern void func_800B0740(u16, u16, u16, u16);

/* entrada de 0x1A8 bytes da tabela D_80091618 */

void func_800AF98C(void) {
    typedef struct {
        u8 _p00[0x10];
        u16 unk10;
        u8 _p12[0x78];
        u16 unk8A;
        u8 _p8C[0x11C];
    } S_91618;
    extern u16 D_8006AF80[];
    extern void func_800E6948(u16);
    s32 *g;
    s32 timer;
    s32 i;
    u16 a0;
    s32 val;
    S_91618 *p;

    g = (s32 *)D_8006AF80;
    timer = g[1];
    if (timer != 0) {
        i = 0;
        if ((timer % 86400) == 0) {
            p = ((S_91618 *)D_80091618);
            for (; i < 6; i++) {
                a0 = i;
                if (p[a0].unk10 == 0xFFFF) {
                    val = -1;
                } else if (a0 == *D_8006AF80) {
                    val = 1;
                } else {
                    val = (a0 != p[*D_8006AF80].unk8A) * 2;
                }

                if (val != -1) {
                    func_800E6948(i);
                }
            }
        }
    }
}

extern u16 (*D_800EEAA8[])(u16, u16);
extern s32 func_800D1548(s32, s32);
extern s32 func_800202A4(s32);
extern s32 func_800B1260(s32);
extern s32 func_800E1820(u16), func_800E17F8(u16), func_800E16AC(u16), func_800E1674(u16), func_800E14C4(u16);
extern s32 func_800E1140(u16), func_800E1388(u16), func_800E1594(u16), func_800E1624(u16);
extern void func_800B0740(u16, u16, u16, u16);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800AFAC0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800AFEB8);

/* entrada de 0x1A8 bytes da tabela D_80091618 */

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800B026C);

extern u16 (*D_800EEAA8[])(u16, u16);
extern s32 func_800D1548(s32, s32);
extern s32 func_800202A4(s32);
extern s32 func_800B1260(s32);
extern s32 func_800E1820(u16), func_800E17F8(u16), func_800E16AC(u16), func_800E1674(u16), func_800E14C4(u16);
extern s32 func_800E1140(u16), func_800E1388(u16), func_800E1594(u16), func_800E1624(u16);
extern void func_800B0740(u16, u16, u16, u16);

extern u16 (*D_800EEAA8[])(u16, u16);
extern s32 func_800D1548(s32, s32);
extern s32 func_800202A4(s32);
extern s32 func_800B1260(s32);
extern s32 func_800E1820(u16), func_800E17F8(u16), func_800E16AC(u16), func_800E1674(u16), func_800E14C4(u16);
extern s32 func_800E1140(u16), func_800E1388(u16), func_800E1594(u16), func_800E1624(u16);
extern void func_800B0740(u16, u16, u16, u16);

/* entrada de 0x1A8 bytes da tabela D_80091618 */

extern u16 (*D_800EEAA8[])(u16, u16);
extern s32 func_800D1548(s32, s32);
extern s32 func_800202A4(s32);
extern s32 func_800B1260(s32);
extern s32 func_800E1820(u16), func_800E17F8(u16), func_800E16AC(u16), func_800E1674(u16), func_800E14C4(u16);
extern s32 func_800E1140(u16), func_800E1388(u16), func_800E1594(u16), func_800E1624(u16);
extern void func_800B0740(u16, u16, u16, u16);
u16 func_800B0440(s32 a0, s32 a1) {
    s32 a = a0;
    u16 b = a1;
    s32 lo, hi, i, j;
    u16 r;
    s32 c;
    u16 k;

    if (func_800D1548(a0, a1) == 1) {
        return 0;
    }
    if (func_800202A4(2)) {
        lo = 0;
        hi = 1;
    } else {
        lo = 2;
        hi = 3;
    }
    for (i = 1; i >= 0; i--) {
        j = (u16)func_800B1260(i);
        if (j == 0xFFFF) {
            continue;
        }
        k = j;
        if (D_80091618[k].unk10 == 0xFFFF) {
            c = 1;
        } else {
            c = D_80091618[k].unk0 == 0xFFFF;
        }
        if (c == 1) {
            continue;
        }
        if (func_800E1820((u16)j) != 0) return 0;
        if (func_800E17F8((u16)j) == 0) return 0;
        if (func_800E16AC((u16)j) == 1) return 0;
        if (func_800E1674((u16)j) == 1) return 0;
        if (func_800E14C4((u16)j) != 0) return 0;
        if (func_800E1140((u16)j) == 0) return 0;
        if (func_800E1388((u16)j) != 1) return 0;
        if (func_800E1594((u16)j) == 1) return 0;
        if (func_800E1624((u16)j) == 1) return 0;
    }
    for (j = lo; j <= hi; j++) {
        r = D_800EEAA8[j](a, b);
        if (r != 0) {
            func_800B0740(a, b, j, r);
            return j + 1;
        }
    }
    return 0;
}

/* entrada de 0x1A8 bytes da tabela D_80091618 */

extern u16 (*D_800EEAA8[])(u16, u16);
extern s32 func_800D1548(s32, s32);
extern s32 func_800202A4(s32);
extern s32 func_800B1260(s32);
extern s32 func_800E1820(u16), func_800E17F8(u16), func_800E16AC(u16), func_800E1674(u16), func_800E14C4(u16);
extern s32 func_800E1140(u16), func_800E1388(u16), func_800E1594(u16), func_800E1624(u16);
extern void func_800B0740(u16, u16, u16, u16);

u16 func_800B065C(s32 a0, s32 a1) {
    s32 j;
    u16 s;

    s = a0;
    if (func_800E1820(s) != 0) {
        return 0;
    }
    if (func_800E17F8(s) == 0) {
        return 0;
    }
    s = a1;
    if (s != 0xFFFF) {
        if (func_800E1820(s) != 0) {
            return 0;
        }
        if (func_800E17F8(s) == 0) {
            return 0;
        }
    }
    for (j = 4; j < 15; j++) {
        if (D_800EEAA8[j](a0, a1) != 0) {
            return j + 1;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800B0740);

void func_800B0A8C(void) {

}
