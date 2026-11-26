#include "common.h"

extern u8 D_800EEB9C[];
extern s32 D_800EE5D0[], D_800F2DBC[];
extern u8 *D_800F2DC0[];
extern s32 func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);
extern s32 func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);
extern s32 func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700__800B284C", func_800B284C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700__800B284C", func_800B2984);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700__800B284C", func_800B2C64);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700__800B284C", func_800B2EA4);

extern s32 func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);

s32 func_800B3008(s32 arg0, s32 arg1) {
    typedef struct {
        u8 pad0[0x62];
        u16 f62;
        u16 f64;
        u8 pad66[0xA];
        s32 f70;
        u8 pad74[0xFE];
        u16 f172;
        u8 pad174[0x1A8 - 0x174];
    } Rec3008;
    typedef struct {
        s16 f0[10];
        s16 f14[10];
    } BufAF90;
    extern Rec3008 D_80091618[];
    extern s32 D_800EEB78[];
    extern s16 D_800EEB84[];
    extern s32 D_800F2DB8[];
    extern s32 D_8006AF84[];
    extern BufAF90 D_8006AF90[];
    extern s32 func_800B21F0(u16, u16);
    extern s32 func_800202A4(s32);
    extern void func_800B2C64(u16, u16);
    extern s32 func_800D1CC4(u16, s32, s32, s32);

    Rec3008 *p0;
    s32 val;

    {
        Rec3008 *b = D_80091618;
        p0 = &b[(u16)arg0];
    }
    if (p0->f64 != 0) {
        return 0;
    }

    if (D_800EEB78[0] == 1) {
        D_800EEB78[0] = 0;
        goto ok;
    } else {
        u16 s0 = p0->f62;
        if (s0 != 1 || D_800EEB84[0] != 0) {
            return 0;
        }
        if (D_800F2DB8[0] > 0) {
            D_800F2DB8[0]--;
            return 0;
        }
        if (func_800B21F0((u16)arg0, (u16)arg1) < 0) {
            return 0;
        }
        if (func_800202A4(8) == 4) {
ok:
            {
                s32 now = D_8006AF84[0];
                Rec3008 *b = D_80091618;
                Rec3008 *r0 = &b[(u16)arg0];
                Rec3008 *r1 = &b[(u16)arg1];
                r0->f64 = 1;
                r1->f64 = 1;
                r0->f70 = now;
                r1->f70 = now;
                r0->f172++;
                r1->f172++;
                func_800B2C64((u16)arg0, (u16)arg1);
            }

            if (D_8006AF90->f0[0] < 3) {
                val = D_8006AF90->f0[D_8006AF90->f0[0]];
            } else {
                val = D_8006AF90->f14[D_8006AF90->f14[0]];
            }
            func_800D1CC4(val, 0x1B, 4, 0);
            D_800EEB84[0] = 1;
            return 1;
        }
        D_800EEB84[0] = s0;
    }

    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700__800B284C", func_800B3204);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700__800B284C", func_800B34FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700__800B284C", func_800B3824);

s32 func_800B3C38(s32 arg0) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    extern s16 D_80105990[];
    register s32 id asm("s1") = arg0;
    register s32 t asm("a0") = D_8006AF84[0];
    s32 state;
    u8 *s = D_8006AFCC;
    
    if (*(u16 *)(s + 0x32) == 0 && (state = *(u16 *)(s + 0x30)) == 1) {
        if (D_80105990[0] != state) {
            if (t >= 1200) {
                t %= 1200;
                if (t != 0) {
                    if (t == (t / 600) * 600) {
                        if (func_800202A4(0x24) == 0x12) {
                            *(u16 *)(s + 0x32) = 2;
                            func_800DC770(id & 0xFFFF, 0x11);
                            return 1;
                        }
                        goto done;
                    }
                    return 0;
                }
                goto done;
            }
            return 0;
        }
done:
        return 0;
    }
    return 0;
}

s32 func_800B3D44(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    extern s32 func_800202A4();
    extern s32 func_800B46EC();
    extern void func_800DC718(), func_800DC8C8(), func_8003422C(), func_800DC640();
    s32 t = D_8006AF84[0];
    u8 *s = D_8006AFCC;
    s32 st = *(u16 *)(s + 0x34);
    if (st != 1) {
        if (st < 2) {
            if (st != 0) {
                return 0;
            }
            if (*(u16 *)(s + 0x32) != 1) {
                return 0;
            }
            if (t - *(s32 *)(s + 0x4C) < 0x13B) {
                return 0;
            }
            if (func_800202A4(0x10) == 8) {
                *(u16 *)(s + 0x34) = 2;
                func_800DC718(arg0 & 0xFFFF, 0x12);
                return 1;
            }
        }
        return 0;
    }
    if (t - *(s32 *)(s + 0x50) < func_800B46EC(3)) {
        return 0;
    }
    func_800DC8C8(arg0 & 0xFFFF, 0x24);
    func_8003422C(0x1F);
    func_800DC640(arg0 & 0xFFFF, arg1 & 0xFFFF);
    return 0;
}

s32 func_800B3E44(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern M2C_UNK D_8006AFCC[];
    extern s16 D_80078C28[];
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = (*D_8006AF84);
    if ((M2C_GFIELD(D_8006AFCC, u16, 0x36) == 0) && ((*D_80078C28) == 0)) {
        temp_s1 = arg0 & 0xFFFF;
        if (func_800E13C8(temp_s1, arg1 & 0xFFFF) != 0) {
            if (temp_s0 >= 0x4B0) {
                if (temp_s0 != ((temp_s0 / 1200) * 0x4B0)) {
                    if (temp_s0 == ((temp_s0 / 600) * 0x258)) {
                        if (func_800202A4(0x1E0) == 0xF0) {
                            M2C_GFIELD(D_8006AFCC, u16, 0x36) = 2U;
                            func_800D1CC4(temp_s1, 0x13, 0, 0);
                            return 1;
                        }
                        goto block_8;
                    }
                    /* Duplicate return node #9. Try simplifying control flow for better match */
                    return 0;
                }
                goto block_8;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return 0;
        }
block_8:
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 func_800B3F54(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern M2C_UNK D_8006AFCC[];
    extern s16 D_80078C28[];
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = (*D_8006AF84);
    if ((M2C_GFIELD(D_8006AFCC, u16, 0x38) == 0) && ((*D_80078C28) == 0)) {
        temp_s1 = arg0 & 0xFFFF;
        if (func_800E13C8(temp_s1, arg1 & 0xFFFF) != 0) {
            if (temp_s0 >= 0x4B0) {
                if (temp_s0 != ((temp_s0 / 1200) * 0x4B0)) {
                    if (temp_s0 == ((temp_s0 / 600) * 0x258)) {
                        if (func_800202A4(0x12C0) == 0x960) {
                            M2C_GFIELD(D_8006AFCC, u16, 0x38) = 2U;
                            func_800D1CC4(temp_s1, 0x14, 0, 0);
                            return 1;
                        }
                        goto block_8;
                    }
                    /* Duplicate return node #9. Try simplifying control flow for better match */
                    return 0;
                }
                goto block_8;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return 0;
        }
block_8:
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

s32 func_800B4064(s32 arg0) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    register s32 id asm("s0") = arg0;
    register s32 t asm("a0") = D_8006AF84[0];
    u8 *s = D_8006AFCC;
    register s32 r asm("v0");
    register u32 hour asm("v1");
    if (*(u16 *)(s + 0x3A) == 0) {
        r = t % 28800;
        hour = r / 1200 - 5;
        if (hour < 17) return 0;
        if (t != (t / 1200) * 1200) {
            if (t == (t / 600) * 600) {
                if (func_800202A4(0x30) == 0x18) {
                    *(u16 *)(s + 0x3A) = 2;
                    func_800DC7F4((u16)id, 0x15);
                    return 1;
                }
                goto done;
            }
            return 0;
        }
done:
        return 0;
    }
    return 0;
}

s32 func_800B418C(s32 arg0, s32 arg1) {
    typedef struct { u8 pad[0x10]; u16 kind; u8 rest[0x196]; } Rec418C;
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    extern s16 D_8006B008[];
    extern u8 D_8008ED90[];
    extern Rec418C D_80091618[];
    s32 t = D_8006AF84[0];
    u8 *s = D_8006AFCC;
    s32 state = *(u16 *)(s + 0x3C);
    s32 other;
    s32 dt;
    u16 kind;
    if (state != 1) {
        if (state >= 2) return 0;
        if (state != 0) return 0;
        { register u32 id asm("v1") = arg0 & 0xFFFF;
          kind = D_80091618[id].kind; }
        if (kind == 6 && ((other = arg1 & 0xFFFF) == 0xFFFF || D_80091618[other].kind == kind)
            && (u32)((t % 28800) / 1200 - 5) >= 17) {
            if (t != (t / 1200) * 1200) {
                if (t == (t / 600) * 600) {
                    if (func_800202A4(0x24) == 0x12) {
                        D_8006B008[0] = 2;
                        func_800DC79C((u16)arg0, 0x16);
                        return 1;
                    }
                    goto done;
                }
                return 0;
            }
done:
            return 0;
        }
        return 0;
    }
    {
        dt = t - *(s32 *)(s + 0x60);
        if (dt >= func_800B46EC(2) && D_8008ED90[0] == 0) {
            *(s32 *)(s + 0x60) = t;
            func_800DC984((u16)arg0, 0xFFFF);
        }
        return 0;
    }
}

s32 func_800B4390(s32 arg0) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    register s32 id asm("s0") = arg0;
    register s32 t asm("a0") = D_8006AF84[0];
    u8 *s = D_8006AFCC;
    register s32 r asm("v0");
    register u32 hour asm("v1");
    if (*(u16 *)(s + 0x3E) == 0) {
        r = t % 28800;
        hour = r / 1200 - 5;
        if (hour < 17) return 0;
        if (t != (t / 1200) * 1200) {
            if (t == (t / 600) * 600) {
                if (func_800202A4(0x2D0) == 0x168) {
                    *(u16 *)(s + 0x3E) = 2;
                    func_800DC7C8((u16)id, 0x17);
                    return 1;
                }
                goto done;
            }
            return 0;
        }
done:
        return 0;
    }
    return 0;
}

s32 func_800B44B8(s32 arg0) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    extern s32 func_800202A4();
    extern void func_800DC84C();
    register s32 id asm("s0") = arg0;
    s32 t = D_8006AF84[0];
    u8 *s = D_8006AFCC;
    if (*(u16 *)(s + 0x40) != 0) {
        return 0;
    }
    if (t != (t / 1200) * 1200) {
        if (t != (t / 600) * 600) {
            return 0;
        }
        if (func_800202A4(0x4B0) == 600) {
            *(u16 *)(s + 0x40) = 2;
            func_800DC84C(id & 0xFFFF, 0x18);
            return 1;
        }
    }
    return 0;
}

s32 func_800B4588(s32 arg0) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    register s32 id asm("s1") = arg0;
    register s32 t asm("a0") = D_8006AF84[0];
    u8 *s = D_8006AFCC;
    register s32 r asm("v0");
    register u32 hour asm("v1");
    if (*(u16 *)(s + 0x42) != 0) return 0;
    if (*(u16 *)(s + 0x30) != 0) return 0;
    {
        r = t % 28800;
        hour = r / 1200 - 18;
        if (hour >= 5) goto done;
        if (t != (t / 1200) * 1200) {
            if (t == (t / 600) * 600) {
                if (func_800202A4(0x12) == 9) {
                    *(u16 *)(s + 0x42) = 2;
                    func_800DC820((u16)id, 0x19);
                    return 1;
                }
                goto done;
            }
            return 0;
        }
done:
        return 0;
    }
    return 0;
}
