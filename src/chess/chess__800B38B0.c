#include "ghidra.h"
#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B38B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B3AE4);

s32 func_800B3C4C(u8 *arg0, s32 arg1) {
    u32 f;
    u32 g;
    s32 r;
    if (arg1 == 0x4E) {
        r = 11;
    } else {
        f = *(u32 *)(arg0 + 0x10);
        if ((f & 3) == 0) {
            if (((f >> 21) & 7) != 0) {
                if (((f >> 2) & 0x1F) == 0x12) {
                    r = 3;
                } else {
                    r = (((f >> 17) & 0xF) == 6) << 1;
                }
            } else {
                r = 1;
            }
        } else {
            g = (f >> 2) & 0x1F;
            if (g == 0xC) {
                r = 10;
            } else if ((f & 0x1807C) == 0x8024) {
                r = 6;
            } else if (g == 0x11) {
                r = 9;
            } else if (g == 0xE) {
                r = 6;
            } else if (g == 0x10) {
                r = 7;
            } else if (g == 0xD) {
                r = 8;
            } else if (((f >> 21) & 7) != 0) {
                r = 4;
            } else {
                r = 5;
            }
        }
    }
    return r;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B3D24);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B3EC4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B40F0);

void func_800B4284(void) {
    extern u16 D_8008EE4C[];
    switch ((*D_8008EE4C)) {                           /* irregular */
    case 0:
        func_800B3D24();
        return;
    case 1:
        func_800B3EC4();
        return;
    case 2:
        func_800B40F0();
        return;
    }
}

void func_800B4304(u8 *arg0) {
    extern u16 D_8008EE4C[];
    extern u8 D_80085428[];
    u8 *p = D_80085428;
    s32 v;
    if (D_8008EE4C[0] >= 2) {
        func_800185F8();
    }
    v = *(u32 *)(arg0 + 0x34) & 0x7F;
    if (v != 10) {
        if (v != (s8)p[0xBF5]) {
            *(u16 *)(arg0 + 0x66) = 0;
        } else {
            *(u16 *)(arg0 + 0x66) = 2;
        }
    }
}

void func_800B4384(u8 *arg0) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    u8 *p = D_80085428;
    u8 *ed;
    if (p[0xD77] != 0) {
        func_800185F8(arg0);
        return;
    }
    ed = D_8008ED68;
    *(s32 *)(arg0 + 0x54) += ed[0x103] < 2 ? 1 : ed[0x103];
    func_800A360C(p, p[0xBCA], arg0, 0);
}

void func_800B4400(void *arg0) {
    extern u8 D_8006388C[];
    extern u8 D_80063890[];
    extern u8 D_80100F94[];
    M2C_UNK var_a2;
    M2C_UNK var_a2_2;

    func_80020844(-0x48, -0x28, 0x90, 0x30, 0, 0, 0, 0, 4);
    func_8001F1A8(-0x30, -0x20, 0, 1, 0, D_80100F94, 1, 7, 3);
    var_a2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0xD77) == 0) {
        var_a2 = 3;
    }
    func_8001F1A8(-0x28, -0xC, var_a2, 1, 0, D_8006388C, 0, 2, 3);
    var_a2_2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0xD77) != 0) {
        var_a2_2 = 3;
    }
    func_8001F1A8(0, -0xC, var_a2_2, 1, 0, D_80063890, 0, 3, 3);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B4518);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B48F0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B4CA4);

void func_800B5020(u8 *arg0) {
    extern u16 D_8008EE50[];
    extern void func_800B077C(u8 *, s32);
    extern void func_80012628(void);
    extern s32 func_800C9414(void);
    extern void func_8009C4B0(u8 *, s32, s32);
    extern void func_800125D8(void);

    u8 *s1 = arg0 + 0x5D0;
    s32 a1 = s1[0x5FA];
    s32 a2 = (s1 + a1)[0x5FB];
    u8 *s0 = s1 + (a1 * 0x2E8 + 0x18) + a2 * 0x7C;

    switch (*D_8008EE50) {
    case 0:
        s1[0x615] = 2;
        {
            u8 *p = s1;
            p += a1 * 2;
            p[0x601] = s0[0x15];
            p[0x602] = s0[0x16];
        }
        func_800B077C(arg0, 10);
        func_80012628();
        break;
    case 1:
        if (func_800C9414() == 0) {
            func_80012628();
        }
        break;
    case 2:
        if (a2 != 5) {
            if (s0[0] == 0x17 && s0[0x29] != 0) {
                s0[0x26] = 2;
            } else {
                s32 b = 0;
                if (s1[0x60E] != 0) {
                    b = s1[0x61E] == 7;
                }
                if (b == 0) {
                    s0[0x26] = 0;
                } else {
                    s0[0x26] = 2;
                }
            }
            func_8009C4B0(arg0, a1, a2);
        }
        func_800125D8();
        break;
    }
}

extern void func_800A84A0(void *, s32, s32, s32);
extern void func_800125AC(s32);

void func_800B5184(u8 *arg0) {
    extern struct { u8 pad[8]; u32 f8; u8 pad2[0x30]; } D_80063940[];
    extern void (*D_80100C20[])(u8 *, u8 *, s32, s32);
    extern u8 *func_800A8E84(u8 *);
    extern void func_800B5C4C(u8 *, u8 *, s32, s32);
    extern void func_800125D8(void);

    u8 *s0 = arg0 + 0x5D0;
    s32 s2 = s0[0x5FA];
    s32 s3 = (s0 + s2)[0x5FB];
    u8 *s1 = s0 + (s2 * 0x2E8 + 0x18) + s3 * 0x7C;
    u8 *s4 = func_800A8E84(s0);
    s32 a = 0;
    s32 b;

    if (s0[0x60E] != 0) {
        a = s0[0x61E] == 7;
    }
    if (a != 0) {
        s1[0x11] += s4[0x14];
    }

    if (s3 != 5) {
        D_80100C20[(D_80063940[s1[0]].f8 >> 8) & 0xF](s0, s1, s2, s3);
    } else {
        func_800B5C4C(s0, s1, s2, 5);
    }

    s0[0x706] = 0;
    b = 0;
    if (s0[0x60E] != 0) {
        b = s0[0x61E] == 7;
    }
    if (b != 0) {
        s1[0x11] -= s4[0x14];
    }
    func_800125D8();
}

extern void func_800A84A0(void *, s32, s32, s32);
extern void func_800125AC(s32);

void func_800B52FC(u8 *p) {
    extern s8 func_800A8378(u8 *);
    extern void func_800125D8(void);

    u8 *s1 = p + 0x5D0;
    u8 *a2 = p + 0xCB0;
    s32 v1 = s1[0x5FA];
    s32 s2 = (s1 + v1)[0x5FB];
    u8 *s0;
    s32 a1;

    s1[0x610] = 0;
    s0 = s1 + (v1 * 0x2E8 + 0x18) + s2 * 0x7C;

    for (a1 = 0; a1 < 2; a1++) {
        u8 *v1_p = a2 + a1;
        v1_p[4] = *(a2[0x26] * 2 + a2 + a1 + 8);
        v1_p[6] = (s0 + a1)[0x15];
    }

    a2[0x26]++;
    s0[0x25] = func_800A8378(p);

    if (s2 != 5 && s0[0] == 0x17 && s0[0x29] != 0) {
        s1[0x709] = 8;
        s1[0x708] = 8;
        s0[0x17] = 0x88;
        s0[0x23] = 0;
        *(s32 *)(s0 + 0x18) |= 0x80;
    } else {
        s1[0x709] = 0x1C;
        s1[0x708] = 0x1C;
        s0[0x17] = 0x82;
        s0[0x23] = 0;
    }
    func_800125D8();
}

extern void func_800A84A0(void *, s32, s32, s32);
extern void func_800125AC(s32);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5438);

void func_800B5780(u8 *arg0) {
    extern s32 func_800C9414();
    extern void func_800CAE14(u8 *);
    extern void func_800125AC(s32);

    struct S0 {
        u8 pad[0x5ED];
        struct {
            u8 val;
            u8 pad[5];
        } unk[2];
    };

    u8 *s0 = arg0 + 0x5D0;
    s32 s1 = s0[0x5FA];
    u8 *temp_a0 = s0 + s1;
    s32 s3 = temp_a0[0x5FB];
    u8 *s2 = s0 + (s1 * 0x2E8 + 0x18) + s3 * 0x7C;

    if (func_800C9414(temp_a0) != 0) {
        return;
    }

    s0[0x615] = 1;
    s0[0x614] = 0;

    if (s2[0] == 0x17 && s2[0x29] == 1 && s0[0x60D] != 0) {
        if (s3 != 5) {
            func_800125AC(10);
            return;
        }
    }
    if (s2[0] == 0x52 && s2[0x29] == 1) {
        func_800125AC(10);
        return;
    }

    {
        s32 b = 0;

        if (s0[0x60E] != 0) {
            b = s0[0x61E] == 7;
        }

        if (b == 0) {
            if (((struct S0 *)s0)->unk[s1].val != 4) {
                func_800125AC(3);
                return;
            }
        } else {
            if (((struct S0 *)s0)->unk[s1].val != 4) {
                func_800CAE14(arg0);
            }
        }
    }

    func_800125AC(10);
}

extern void func_800A84A0(void *, s32, s32, s32);
extern void func_800125AC(s32);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B58EC);

void func_800B5BE0(void *arg0) {
    extern u8 D_80085428[];
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
    if (M2C_GFIELD(D_80085428, u8, 0xD77) == 0xFF) {
        func_800185F8();
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x34) & 0x7F) {
        func_800B4400(D_80085428);
    }
}

void func_800B5C4C(u8 *arg0, u8 *arg1, s32 arg2) {
    extern struct { s32 f0; u8 pad[0x30]; } D_801010B0[];
    extern s32 func_800B74BC(void *, s32, s32, s32, u32, s32);
    extern s32 func_800B75C4(void *, s32, s32, s32, s32);
    struct S { u8 pad0[2]; u8 f2; u8 f3; u8 pad4[4]; struct { u8 a; u8 b; } e[15]; u8 f26; u8 f27; };
    struct S *p = (struct S *)(arg0 + 0x6E0);
    s32 i;
    u32 s7 = arg1[0x15];
    u32 s6 = arg1[0x16];
    s32 q = D_801010B0[arg0[9]].f0;
    s32 x;
    s32 y;

    for (i = 0; i < 8; i++) {
        y = s7;
        x = s6;
        p->f26 = 0;
        switch (i) {
        case 1:
            x++;
            goto case_0;
        case 2:
            x++;
            break;
        case 3:
            x++;
        case 4:
        case_4:
            y++;
            break;
        case 5:
            x--;
            goto case_4;
        case 6:
            x--;
            break;
        case 7:
            x--;
        case 0:
        case_0:
            y--;
            break;
        }

        if (func_800B74BC(p, q, x, y, arg2 & 0xFF, 1) != 0) {
            if (func_800B75C4(p, x, y, p->f27, 0) != 0) {
                break;
            }
        }
    }
}

extern void func_800A84A0(void *, s32, s32, s32);
extern void func_800125AC(s32);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5DA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5F8C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B61C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B63CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B65CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B678C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B698C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B6B70);

void func_800B6D2C(u8 *arg0, u8 *arg1, s32 arg2) {
    extern struct { s32 f0; u8 pad[0x30]; } D_801010B0[];
    extern u8 func_800B7630();
    extern s32 func_800B6E24();
    u8 buf[0xA9];
    struct { u8 *p; s32 q; s32 f8; s32 fc; s32 f10; s32 f14; } s;
    struct { u8 a; u8 b; u8 c; u8 d; } t;
    s32 i;
    s32 x;
    s32 y;
    func_8001A998(buf, 0xA9);
    s.p = buf;
    s.q = D_801010B0[arg0[9]].f0;
    s.f10 = arg1[0x11];
    x = arg1[0x15];
    s.f8 = x;
    y = arg1[0x16];
    s.fc = y;
    s.f14 = 0;
    if (func_800B7630(arg0, arg2, x, y) == 0) {
        i = 0;
        do {
            t.a = arg1[0x15];
            t.b = arg1[0x16];
            t.c = i;
            t.d = 0;
            arg0[0x706] = 0;
            if (func_800B6E24(arg0, &s, &t) != 0) {
                return;
            }
            i++;
        } while (i < 4);
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B6E24);

void func_800B711C(u8 *arg0, u8 *arg1) {
    extern struct { s32 f0; u8 pad[0x30]; } D_801010B0[];
    extern s32 func_800B7200();
    u8 buf[0xA9];
    struct { u8 *p; s32 q; s32 f8; s32 fc; s32 f10; s32 f14; } s;
    struct { u8 a; u8 b; u8 c; u8 d; } t;
    s32 i;
    func_8001A998(buf, 0xA9);
    s.p = buf;
    s.q = D_801010B0[arg0[9]].f0;
    s.f10 = arg1[0x11];
    s.f8 = arg1[0x15];
    s.fc = arg1[0x16];
    s.f14 = 0;
    i = 0;
    do {
        t.a = arg1[0x15];
        t.b = arg1[0x16];
        t.c = i;
        t.d = 0;
        arg0[0x706] = 0;
        if (func_800B7200(arg0, &s, &t) != 0) {
            return;
        }
        i++;
    } while (i < 4);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7200);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B74BC);

s32 func_800B75C4(void *a, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct S { u8 pad0[2]; u8 f2; u8 f3; u8 pad4[4]; struct { u8 a; u8 b; } e[15]; u8 f26; u8 f27; };
    struct S *arg0 = a;
    arg0->e[arg0->f26].a = arg2;
    arg0->e[arg0->f26].b = arg1;
    arg0->f26++;
    if (arg0->f2 == arg2 && arg0->f3 == arg1 && arg0->f27 == arg3 + arg4) {
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7630);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7734);

void func_800B7790(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3, u8 *arg4) {
    s32 i;
    s32 d;
    for (i = 0; i < 2; i++) {
        arg4[i] = *(arg2 + i + 0x15);
    }
    for (i = 0; i < 2; i++) {
        d = arg4[i] - *(arg3 + i + 0x15);
        if (d >= 2) {
            arg4[i] = arg4[i] - 1;
        } else if (d < -1) {
            arg4[i] = arg4[i] + 1;
        }
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B780C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7988);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7D64);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7F34);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B80E4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B81E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8310);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8478);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B862C);

void func_800B8740(u8 *arg0, u32 arg1) {
    s32 i = 0;
    s32 a;
    s32 b;
    u32 *q;
    u32 v;
    s32 n;
    s32 old;
    do {
        old = i;
        i++;
        if (old > 0x96) {
            return;
        }
        a = func_800202A4(0xD);
        b = func_800202A4(0xD);
        q = (u32 *)(b * 4 + (a * 0x34 + (u32)arg0));
        v = *q;
    } while ((v & 0x3F) != 2 || (n = (v >> 6) & 0x1FFF, n > 2) || n == 0 || ((v >> 22) & 3) != 0);
    *q = (v & ~0x3F) | (arg1 & 0x3F);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B881C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8A0C);

void func_800B8DA0(void *arg0) {
    extern u8 D_8008610F[];
    u16 temp_v1;
    u8 temp_v0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s32 *, 0x10) == 0) {
        func_800185F8();
    }
    if (M2C_FIELD(arg0, s32 *, 0x34) & 0x7F) {
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((*D_8008610F) != 0) {
                M2C_FIELD(arg0, u16 *, 0x7A) = 1U;
                return;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s16 *, 0x4A) = 0x1C;
            M2C_FIELD(arg0, s16 *, 0x4E) = 4;
            M2C_FIELD(arg0, u8 *, 0x5A) = 0U;
            M2C_FIELD(arg0, u8 *, 0x59) = 0U;
            M2C_FIELD(arg0, u8 *, 0x58) = 0U;
            M2C_FIELD(arg0, s16 *, 0x46) = 0;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            return;
        case 2:
            temp_v0 = M2C_FIELD(arg0, u8 *, 0x5A) + 2;
            M2C_FIELD(arg0, u8 *, 0x5A) = temp_v0;
            M2C_FIELD(arg0, u8 *, 0x59) = temp_v0;
            M2C_FIELD(arg0, u8 *, 0x58) = temp_v0;
            if ((temp_v0 & 0xFF) == 0x80) {
                M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            }
            break;
        }
    }
}

void func_800B8EC0(void *arg0) {
    extern u32 D_8008ED84[];
    extern u8 D_80086012[];
    if ((D_8008ED84[0] / 20) & 1) {
        M2C_FIELD(arg0, s32 *, 0x38) = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    }
    if (D_80086012[0] != 5) {
        func_800185F8(arg0);
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8F38);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B9020);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B90FC);

