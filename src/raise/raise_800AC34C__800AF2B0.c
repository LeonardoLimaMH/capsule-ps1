#include "common.h"

/* entrada de 0x1A8 bytes da tabela D_80091618 */
typedef struct {
    u16 unk0;
    u8 pad2[0xE];
    u16 unk10;
    u8 pad12[0x1A8 - 0x12];
} S_80091618;

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

#include "common.h"

#include "ghidra.h"
void func_800AF308(undefined4 param_1)

{
    extern s32 D_8006AF84[];
  func_800B0A8C(param_1,((*D_8006AF84) % 0x7080) / 0x4b0);
  return;
}

void func_800AF380(void) {
    typedef struct {
        u8 _p00[0x10];
        u16 unk10;
        u8 _p12[0x78];
        u16 unk8A;
        u8 _p8C[0x11C];
    } S_91618;
    extern u16 D_8006AF80[];
    extern S_91618 D_80091618[];
    extern void func_800AFAC0(void);
    extern void func_800D533C(void);
    extern void func_800B1088(s32, s32, s32);
    s32 i;
    S_91618 *p;

    func_800AFAC0();
    func_800D533C();
    p = D_80091618;
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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800AF468);

void func_800AF760(void) {
    typedef struct {
        u8 _p00[0x10];
        u16 unk10;
        u8 _p12[0x78];
        u16 unk8A;
        u8 _p8C[0x11C];
    } S_91618;
    extern u16 D_8006AF80[];
    extern S_91618 D_80091618[];
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
            if (D_80091618[a0].unk10 == 0xFFFF) {
                val = -1;
            } else if (a0 == *D_8006AF80) {
                val = 1;
            } else {
                val = (a0 != D_80091618[*D_8006AF80].unk8A) * 2;
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
                if (D_80091618[a0].unk10 == 0xFFFF) {
                    val = -1;
                } else if (a0 == *D_8006AF80) {
                    val = 1;
                } else {
                    val = (a0 != D_80091618[*D_8006AF80].unk8A) * 2;
                }

                if (val != -1) {
                    func_800AF468(val, i);
                }
            }
        }
    }
}

void func_800AF98C(void) {
    typedef struct {
        u8 _p00[0x10];
        u16 unk10;
        u8 _p12[0x78];
        u16 unk8A;
        u8 _p8C[0x11C];
    } S_91618;
    extern u16 D_8006AF80[];
    extern S_91618 D_80091618[];
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
            p = D_80091618;
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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800AFAC0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800AFEB8);

s32 func_800B026C(void) {
    typedef struct {
        u16 unk0;
        u8 _p02[0xE];
        u16 unk10;
        u8 _p12[0x78];
        u16 unk8A;
        u8 _p8C[0x11C];
    } S_91618;
    typedef struct {
        u8 _p00[0xC];
        s32 unkC;
        u8 _p10[0x14];
        s32 unk24;
        u8 _p28[0xA8];
        s32 unkD0;
    } S_800EEB9C_local;
    extern u16 D_8006AF80[];
    extern S_91618 D_80091618[];
    extern S_800EEB9C_local D_800EEB9C;
    extern u32 D_8008EDF0[];
    extern s32 D_800EEBA8[];
    extern s32 D_800F1924[];
    extern u16 func_800B065C(s32, s32);
    extern s32 func_800E0FB8(s32, s32);
    extern s32 func_800E0DF8(void);
    extern u16 func_800B0440(s32, s32);
    S_800EEB9C_local *p;
    u16 a2;
    u16 a0;
    s32 c;
    s32 s1;
    s32 s0;
    u32 edf0;
    s32 ret;

    a2 = *D_8006AF80;
    a0 = a2;
    if (a0 == 0xFFFF) {
        return 0;
    }

    if (D_80091618[a0].unk10 == 0xFFFF) {
        c = 1;
    } else {
        c = D_80091618[a0].unk0 == 0xFFFF;
    }
    if (c == 1) {
        return 0;
    }

    p = &D_800EEB9C;
    if ((u32)(p->unkC - 0x29) < 4) {
        return 0;
    }

    edf0 = *D_8008EDF0;
    if (edf0 & 0xC) {
        return 0;
    }
    if (edf0 & 3) {
        return 0;
    }
    if (edf0 & 0x20) {
        return 0;
    }

    if (p->unkC == 3 && p->unk24 == 6 && p->unkD0 == 1) {
        return 0;
    }

    if ((u32)(*D_800EEBA8 - 0x24) < 4) {
        if (*D_800F1924 == 0x1C) {
            return 0;
        }
    }

    s1 = D_80091618[*D_8006AF80].unk8A;
    if (s1 == 0xFFFF) {
        return (u16)func_800B065C(a2, 0xFFFF);
    }

    s0 = a2;
    if (func_800E0FB8(s0, s1) == 0) {
        ret = (u16)func_800B065C(s0, s1);
        if (ret != 0) {
            return ret;
        }
        if (func_800E0DF8() != 0) {
            return 0;
        }
    }
    return (u16)func_800B0440(s0, s1);
}

extern S_80091618 D_80091618[];
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
