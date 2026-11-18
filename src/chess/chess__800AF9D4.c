#include "common.h"

/* tabuleiros 13x13 por partida (0x34 bytes cada) */
extern struct {
    u32 (*b)[13];
    u8 _pad[0x2C];
    u16 unk30;
    u16 unk32;
} D_801010B0[];

void func_800AF9D4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0xBE2) = 0;
}

void func_800AF9DC(u8 *arg0) {
    extern u8 D_8008ED68[];
    u8 *s1 = D_8008ED68;
    u8 *q;
    if (func_800CAE6C(arg0 + 0x5D0) == 0 && (q = arg0 + arg0[0xBCA], q[0x5E0] == 0)) {
        if (*(s32 *)(s1 + (arg0[0xBCA] << 4) + 0x80) == 0) {
            u16 v = *(u16 *)(arg0 + 0xBE2) + 1;
            *(u16 *)(arg0 + 0xBE2) = v;
            if (v >= 0x3840) {
                if (v == 0x3840) {
                    func_800AFACC(arg0, 0);
                } else if (v == 0x3841) {
                    func_800AFBDC(arg0);
                } else {
                    *(u16 *)(arg0 + 0xBE2) = 0x3842;
                }
            }
        } else {
            if (*(u16 *)(arg0 + 0xBE2) >= 0x3840) {
                func_800AFCE0(arg0);
            }
            *(u16 *)(arg0 + 0xBE2) = 0;
        }
    }
}

void func_800AFACC(u8 *p, s32 param_2) {
    extern s32 func_800A8E34(u8 *, s32, s32);
    extern void func_8009C4B0(u8 *, s32, s32);

    u8 *base = p + 0x5d0;
    s32 team = 0;
    s32 var_s6 = 0x18;
    s32 var_s5 = 0;
    s32 piece;
    s32 var_s2;
    u8 *var_s1;
    s32 ret;

    do {
        piece = 0;
        if (param_2 == 0 || ((base[0x611] & 6) >> 1) == team) {
            var_s2 = var_s5;
            var_s1 = base + var_s6;
            do {
                if (param_2 != 0 || ((ret = func_800A8E34(base, team, piece)) == 0 && var_s1[0x28] == 0)) {
                    register u8 *q asm("v1") = base + var_s2;
                    ret = 3;
                    q[0x3e] = ret;
                    func_8009C4B0(p, team, piece);
                }
                var_s2 += 0x7c;
                piece++;
                var_s1 += 0x7c;
            } while (piece < 5);
        }
        var_s6 += 0x2e8;
        team++;
        var_s5 += 0x2e8;
    } while (team < 2);
}

void func_800AFBDC(s32 arg0) {
    extern u8 D_80063940[];
    u8 *table;
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    void *var_s0;

    temp_s4 = arg0 + 0x5D0;
    var_s2 = 0;
    table = D_80063940;
    var_s3 = 0x18;
    do {
        var_s1 = 0;
        var_s0 = temp_s4 + var_s3;
loop_2:
        if ((func_800A8E34(temp_s4, var_s2, var_s1) == 0) && (M2C_FIELD(var_s0, u8 *, 0x28) == 0)) {
            M2C_FIELD(var_s0, u8 *, 0x17) = 0x84;
            M2C_FIELD(var_s0, s8 *, 0x23) = 0;
            func_800A84A0(var_s0, var_s2, var_s1, 1);
            M2C_FIELD(var_s0, s8 *, 0x25) = func_800C94DC(arg0, ((u32) M2C_GFIELD(((M2C_FIELD(var_s0, u8 *, 0) * 0x3C) + table), u32, 0x18) >> 2) & 7);
        }
        var_s1 += 1;
        var_s0 += 0x7C;
        if (var_s1 < 5) {
            goto loop_2;
        }
        var_s2 += 1;
        var_s3 += 0x2E8;
    } while (var_s2 < 2);
}

void func_800AFCE0(s32 arg0) {
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    void *var_s0;

    temp_s4 = arg0 + 0x5D0;
    var_s2 = 0;
    var_s3 = 0x18;
    do {
        var_s1 = 0;
        var_s0 = temp_s4 + var_s3;
loop_2:
        if ((func_800A8E34(temp_s4, var_s2, var_s1) == 0) && (M2C_FIELD(var_s0, u8 *, 0x28) == 0)) {
            M2C_FIELD(var_s0, s8 *, 0x17) = 1;
            M2C_FIELD(var_s0, s8 *, 0x25) = func_800A835C(arg0, var_s2);
            func_800A84A0(var_s0, var_s2, var_s1, 0);
        }
        var_s1 += 1;
        var_s0 += 0x7C;
        if (var_s1 < 5) {
            goto loop_2;
        }
        var_s2 += 1;
        var_s3 += 0x2E8;
    } while (var_s2 < 2);
}

s32 func_800AFDB0(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4) {
    register u32 b asm("a1");
    register u32 *p asm("v1");
    register s32 off asm("v0");
    s32 v;

    b = (u32)D_801010B0[arg0[0x5D9]].b;
    if (arg3 < 0) {
        return 0;
    }
    if (arg4 < 0) {
        return 0;
    }
    if (arg3 >= 13) {
        return 0;
    }
    if (arg4 >= 13) {
        return 0;
    }
    off = arg4 << 2;
    p = (u32 *)(off + (arg3 * 52 + b));
    v = (*p >> 6) & 0x1FFF;
    if (v == 0) {
        return 0;
    }
    if (v >= 3) {
        return 3;
    }
    if (((u8 *)p)[3] == 0) {
        return 1;
    }
    if (arg1[0x15] == arg3 && arg1[0x16] == arg4) {
        return 1;
    }
    if (arg2[0x15] == arg3 && arg2[0x16] == arg4) {
        return 1;
    }
    return 2;
}

s32 func_800AFEA4(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4) {
    u32 (*b)[13] = D_801010B0[arg0[0x5D9]].b;
    if (arg3 >= 0) {
        if (arg4 < 0) {
            return 0;
        }
        if (arg3 < 13 && arg4 < 13) {
            return ((b[arg3][arg4] >> 19) & 7) -
                   ((s32)(((b[arg1[0x15]][arg1[0x16]] >> 19) & 7) + ((b[arg2[0x15]][arg2[0x16]] >> 19) & 7)) >> 1);
        }
    }
    return 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800AFFA4);

s32 func_800B03B8(void *arg0, u8 *arg1, s32 arg2) {
    extern u8 D_80069AD4[];
    u8 *s0 = D_80069AD4;
    s32 s1 = 0;

    *(s16 *)(s0 + 0xEA) += 0x10;
    *(s16 *)(s0 + 0xEA) %= 0x1000;
    func_8002CC74();
    func_8002CD50();
    if ((*(s16 *)(s0 + 0xEA) & 0x1FF) == 0) {
        (arg1 + arg2)[0x605] = *(s16 *)(s0 + 0xEA) / 0x200;
        s1 = 1;
    }
    return s1;
}

void func_800B0478(u8 *arg0) {
    extern u8 D_80069AD4[];
    register u8 *ctx asm("a0") = D_80069AD4;
    u8 *tab = (u8 *)D_801010B0;
    register s32 val1 asm("a1") = 0;
    register u8 *b asm("v0");
    register s32 val2 asm("v1");
    u8 *entry;

    entry = tab + arg0[0x5D9] * 52;
    b = *(u8 **)entry;
    if (entry[0xA] & 1) {
        val1 = -0x32;
    }
    *(s32 *)(ctx + 0x44) = val1;
    *(s32 *)(ctx + 0x48) = ((*(u32 *)(b + 0x150) >> 19) & 7) * 50;
    entry = tab + arg0[0x5D9] * 52;
    val2 = 0;
    if (entry[0xB] & 1) {
        val2 = -0x32;
    }
    *(s32 *)(ctx + 0x4C) = val2;
}

void func_800B0530(u8 *arg0) {
    extern s16 D_80078C30[];
    register u8 *a2 asm("a2") = arg0;
    register u8 *v0 asm("v0") = (u8 *)D_801010B0;
    register u8 *v1 asm("v1");
    register u32 (*s2)[13] asm("s2");
    s32 s1;
    s32 s0;
    s32 a1;
    u8 *p;
    register s32 cmp asm("v0");
    register u32 word asm("v0");
    register u32 val asm("a3");

    a1 = a2[0x5D9];
    v1 = v0 + a1 * 52;
    cmp = a1 < 2;
    p = &a2[a2[0xBCA] * 2];
    s2 = *(u32 (**) [13])v1;
    s1 = p[0xBD1];
    s0 = p[0xBD2];

    if (a1 >= 0) {
        if (cmp) {
            *D_80078C30 = 0;
        } else if (a1 < 5) {
            if (a1 >= 3) {
                *D_80078C30 = 0;
            } else {
                *D_80078C30 = 1;
            }
        } else {
            *D_80078C30 = 1;
        }
    } else {
        *D_80078C30 = 1;
    }

    v1 = (u8 *)(s1 * 4);
    v1 = v1 + (s0 * 52 + (u32)s2);
    word = *(u32 *)v1;
    val = word >> 19;
    val &= 7;
    if (a2[0x5D9] == 10 || a2[0x5D9] == 6) {
        val = 1;
    }

    {
        register u8 *entry_tab asm("a1") = (u8 *)D_801010B0;
        register s32 entry_idx asm("v1") = a2[0x5D9];
        register u8 *entry asm("v0") = entry_tab + entry_idx * 52;
        func_80025FC0(1, entry[0xB], entry[0xA], val);
    }
    func_80025CEC(1, 13 - s1, s0 + 1, (s2[s0][s1] >> 19) & 7);
    func_80025DA8(1);
}

void func_800B06A0(u8 *arg0, s32 arg1) {
    struct Entry {
        u32 (*b)[13];
        u8 *unk4;
        u8 _pad[0x2C];
    };
    u8 *p = arg0 + 0x5D0;
    register struct Entry *tab asm("a1") = (struct Entry *)D_801010B0;
    struct Entry *e = &tab[p[9]];
    u8 *q = p + (p[0x5FA] << 1);
    u32 (*b)[13] = e->b;
    u8 *s0 = e->unk4;
    s32 y = q[0x602];
    s32 x = q[0x601];

    if (p[9] != 4) {
        func_80025CEC(1, 13 - y, x + 1, (b[x][y] >> 19) & 7);
    } else {
        func_80025CEC(1, 13 - y, x + 1, (b[6][6] >> 19) & 7);
    }
    func_80024990(*(s32 *)(s0 + 0x98), 1, arg1, 0);
}

s32 func_800B077C(u8 *arg0, s32 arg1) {
    u8 *s0;
    u8 *a0;
    s32 s1;
    s32 s2;

    s0 = arg0 + 0x5D0;
    s2 = 0;
    s1 = s0[0x5FA];
    if (s0[0x615] != 0) {
        if (func_800C9414() == 0) {
            a0 = s0 + (s1 << 1);
            if (s0[0x616] != a0[0x601] || s0[0x617] != a0[0x602]) {
                func_800B06A0(arg0, arg1);
                s2 = 1;
            }
        }
    }

    s0[0x616] = *(s0 + (s1 << 1) + 0x601);
    s0[0x617] = *(s0 + (s1 << 1) + 0x602);
    return s2;
}

void func_800B0844(u8 *arg0) {
    extern u8 D_8008ED68[];
    u8 *s2 = D_8008ED68;
    s32 s1;
    u8 *s0;
    u8 *a0;
    s32 s3;
    s32 s4;

    if (*(u16 *)(s2 + 0xE0) != 0 || *(u16 *)(s2 + 0xE4) == 3) {
        if (s2[0x103] == 2) {
            s1 = 5;
        } else {
            s1 = 10;
        }
    } else {
        if (s2[0x103] == 2) {
            s1 = 15;
        } else {
            s1 = 30;
        }
    }

    s0 = arg0 + 0x5D0;
    if (func_800CAE6C(s0) != 0) {
        s2[0xA66] = 0;
        return;
    }

    s2[0xA66] = func_800AFFA4(arg0);
    if (s2[0xA66] != 0) {
        arg0[0xCFD] = 0;
    }

    s4 = 0;
    s3 = s0[0x5FA];
    if (s0[0x615] != 0) {
        if (func_800C9414() == 0) {
            a0 = s0 + (s3 << 1);
            if (s0[0x616] != a0[0x601] || s0[0x617] != a0[0x602]) {
                func_800B06A0(arg0, s1);
                s4 = 1;
            }
        }
    }

    s0[0x616] = *(s0 + (s3 << 1) + 0x601);
    s0[0x617] = *(s0 + (s3 << 1) + 0x602);
    s2[0xA66] += s4;
    func_8002CC74();
    func_8002CD50();
}

s32 func_800B09B0(u8 *arg0) {
    typedef struct {
        u8 pad0[0x44];
        s32 unk44[3];
        u8 pad50[0xE0 - 0x50];
        s32 unkE0;
        u8 padE4[4];
        s16 unkE8;
        u8 padEA[0x140 - 0xEA];
        s32 unk140;
        u8 pad144[4];
        s16 unk148;
    } D69AD4_t;
    extern u16 D_8008EE54[];
    extern D69AD4_t D_80069AD4;
    extern s32 func_800CB960(s32, s32, u16, s32, s32);
    extern void func_80012668(void);
    extern void func_8002CC74(void);
    extern void func_8002CD50(void);

    s32 idx = arg0[0x5D9];
    s32 ret = 0;
    s32 i;

    switch (*D_8008EE54) {
    case 0: {
        D69AD4_t *q;
        u8 *r;
        i = 0;
        arg0[0xBEA] = 3;
        *(u16 *)(arg0 + 0xC) = 0;
        D_80069AD4.unk148 = 0x400;
        D_80069AD4.unk140 = D_801010B0[idx].unk30;
        q = &D_80069AD4;
        r = arg0;
        do {
            *(s32 *)(r + 0xD5C) = q->unk44[0];
            q = (D69AD4_t *)((u8 *)q + 4);
            i++;
            r += 4;
        } while (i < 3);
        func_80012668();
    }
    case 1: {
        D69AD4_t *q;
        u8 *r;
        if (D_80069AD4.unkE8 == D_80069AD4.unk148) {
            arg0[0xBEA] = 5;
            ret = 1;
        } else {
            D_80069AD4.unkE8 += 0x90;
            D_80069AD4.unkE0 += (D_801010B0[idx].unk30 - 0x660) / 4;
        }
        D_80069AD4.unkE8 %= 0x1000;
        D_80069AD4.unkE0 %= 0x1000;
        i = 0;
        q = &D_80069AD4;
        r = arg0;
        do {
            q->unk44[0] = func_800CB960(*(s32 *)(r + 0xD5C), 0, *(u16 *)(arg0 + 0xC), 4, 0);
            r += 4;
            i++;
            q = (D69AD4_t *)((u8 *)q + 4);
        } while (i < 3);
        *(u16 *)(arg0 + 0xC) += 1;
        func_8002CC74();
        func_8002CD50();
        break;
    }
    }
    return ret;
}

void func_800B0BB0(u8 *arg0) {
    extern u8 D_80069AD4[];
    extern u8 D_8008ED68[];
    u8 *a0 = arg0 + 0x5D0;
    s32 a3 = a0[0x5FA];
    u8 *a2;

    switch (a0[0x61A]) {
    case 5:
        break;
    case 6: {
        u8 *p = D_80069AD4;
        if (*(s16 *)(p + 0xEA) == *(s16 *)(p + 0x14A)) {
            a0[0x61A] = 5;
        } else {
            *(s16 *)(p + 0xEA) += 0x40;
        }
        break;
    }
    case 7: {
        u8 *p = D_80069AD4;
        if (*(s16 *)(p + 0xEA) == *(s16 *)(p + 0x14A)) {
            a0[0x61A] = 5;
        } else {
            *(s16 *)(p + 0xEA) += 0xFC0;
        }
        break;
    }
    }

    a2 = D_80069AD4;
    *(s16 *)(a2 + 0xE8) %= 0x1000;
    *(s16 *)(a2 + 0xEA) %= 0x1000;
    *(s32 *)(a2 + 0xE0) %= 0x1000;

    if (a0[0x61A] == 5) {
        u8 *ed = D_8008ED68;
        u32 flags = *(u32 *)(ed + (a3 << 4) + 0x88);
        if (flags & 8) {
            u8 *q = a0 + a3;
            q[0x605]++;
            if (q[0x605] == 8) {
                q[0x605] = 0;
            }
            a0[0x61A] = 6;
            *(s16 *)(a2 + 0x14A) = q[0x605] << 9;
        } else if (flags & 4) {
            u8 *q = a0 + a3;
            if (q[0x605] == 0) {
                q[0x605] = 8;
            }
            q[0x605]--;
            a0[0x61A] = 7;
            *(s16 *)(a2 + 0x14A) = q[0x605] << 9;
        }
    }

    func_8002CC74();
    func_8002CD50();
}

s32 func_800B0D70(u8 *arg0) {
    typedef struct {
        u8 pad0[0x44];
        s32 unk44[3];
        u8 pad50[0xE0 - 0x50];
        s32 unkE0;
        u8 padE4[4];
        s16 unkE8;
        u8 padEA[0x140 - 0xEA];
        s32 unk140;
        u8 pad144[4];
        s16 unk148;
    } D69AD4_t;
    extern u16 D_8008EE54[];
    extern D69AD4_t D_80069AD4;
    extern s32 func_800CB960(s32, s32, u16, s32, s32);
    extern void func_80012668(void);
    extern void func_8002CC74(void);
    extern void func_8002CD50(void);

    s32 idx = arg0[0x5D9];
    s32 ret = 0;

    switch (*D_8008EE54) {
    case 0:
        arg0[0xBEA] = 4;
        *(u16 *)(arg0 + 0xC) = 0;
        D_80069AD4.unk148 = 0x1C0;
        D_80069AD4.unk140 = 0x660;
        func_80012668();
    case 1: {
        D69AD4_t *q;
        u8 *r;
        s32 i;
        if (D_80069AD4.unkE8 == D_80069AD4.unk148) {
            arg0[0xBEA] = 0;
            ret = 1;
        } else {
            D_80069AD4.unkE8 += 0xF70;
            D_80069AD4.unkE0 += 0x1000 - ((D_801010B0[idx].unk30 - 0x660) / 4);
        }
        D_80069AD4.unkE8 %= 0x1000;
        D_80069AD4.unkE0 %= 0x1000;
        i = 0;
        q = &D_80069AD4;
        r = arg0;
        do {
            q->unk44[0] = func_800CB960(0, *(s32 *)(r + 0xD5C), *(u16 *)(arg0 + 0xC), 4, 0);
            r += 4;
            i++;
            q = (D69AD4_t *)((u8 *)q + 4);
        } while (i < 3);
        *(u16 *)(arg0 + 0xC) += 1;
        func_8002CC74();
        func_8002CD50();
        break;
    }
    }
    return ret;
}

void func_800B0F1C(void *arg0)
{
  int new_var;
  s8 *new_var2;
  new_var2 = (s8 *) (((s8 *) (arg0 + ((*((u8 *) (((s8 *) arg0) + 0x5FA))) * 2))) + 0x601);
  *new_var2 = 6;
  new_var = (*((u8 *) (((s8 *) arg0) + 0x5FA))) * 2;
  *((s8 *) (((s8 *) (arg0 + new_var)) + 0x602)) = 6;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B0F48);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B2ABC);

s32 func_800B2F48(u8 *arg0, s32 arg1) {
    typedef struct {
        u8 pad0[0x44];
        s32 unk44[3];
        u8 pad50[0xDC - 0x50];
        s32 unkDC;
        s32 unkE0;
    } D69AD4_local;
    typedef struct {
        u8 pad0[0x77C];
        s32 unk77C[3];
        u8 pad788[4];
        s32 unk78C[3];
        u8 pad798[0x7A4 - 0x798];
        u8 unk7A4;
    } Unit_local;
    extern u8 D_8008ED68[];
    extern D69AD4_local D_80069AD4;
    u8 *t5 = D_8008ED68;
    s32 ret = 0;
    s32 count = 1;
    Unit_local *a0 = (Unit_local *)(arg0 + 0x5D0);
    s32 i;

    if (t5[0x103] != 0) {
        count = t5[0x103];
    }

    i = 0;
    if (ret < count) {
        D69AD4_local *t2 = &D_80069AD4;
        do {
            s32 j;

            if (arg1 != 0) {
                a0->unk7A4--;
                if (a0->unk7A4 == 0) {
                    ret = 2;
                }
            } else {
                a0->unk7A4++;
                if (a0->unk7A4 == 0x10) {
                    ret = 1;
                }
            }

            t2->unkE0 = 0x660 - (a0->unk7A4 << 5);
            t2->unkDC = -((-(a0->unk7A4 * 50)) / 16);

            for (j = 0; j < 3; j++) {
                t2->unk44[j] = a0->unk78C[j] + ((a0->unk77C[j] - a0->unk78C[j]) * a0->unk7A4) / 16;
            }

            t2->unkDC %= 0x1000;
            t2->unkE0 %= 0x1000;

            if (ret != 0) {
                break;
            }
            i++;
        } while (i < count);
    }

    t5[0xA66] = 1;
    func_8002CC74();
    func_8002CD50();
    return ret;
}

s32 func_800B30F8(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    extern u8 D_80069AD4[];
    u8 *s5 = D_8008ED68;
    u8 *s1;
    s32 ret = 0;
    s32 count = 1;
    s32 i;

    s1 = arg0 + 0x5D0;
    if (s5[0x103] != 0) {
        count = s5[0x103];
    }
    i = 0;
    if (ret < count) {
        do {
            u8 v0 = s1[0x7A4] + 1;
            s32 val;
            u8 *s6;
            s1[0x7A4] = v0;
            val = rsin(((s32)v0 << 12) / 6) / 64 + 0x460;
            s6 = D_80069AD4;
            *(s32 *)(s6 + 0xE0) = val;
            if (val == 0x460 && arg1 != 0) {
                ret = 1;
                break;
            }
            i++;
        } while (i < count);
    }
    s5[0xA66] = 1;
    func_8002CC74();
    func_8002CD50();
    return ret;
}

s32 func_800B3218(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    extern u8 D_80069AD4[];
    u8 *s5 = D_8008ED68;
    u8 *s1;
    s32 ret = 0;
    s32 count = 1;
    s32 i;

    s1 = arg0 + 0x5D0;
    if (s5[0x103] != 0) {
        count = s5[0x103];
    }
    i = 0;
    if (ret < count) {
        do {
            u8 v0 = s1[0x7A4] + 1;
            s32 val;
            u8 *s6;
            s1[0x7A4] = v0;
            val = rsin(((s32)v0 << 12) / 6) / 64 + 0x660;
            s6 = D_80069AD4;
            *(s32 *)(s6 + 0xE0) = val;
            if (val == 0x660 && arg1 != 0) {
                ret = 1;
                break;
            }
            i++;
        } while (i < count);
    }
    s5[0xA66] = 1;
    func_8002CC74();
    func_8002CD50();
    return ret;
}

s32 func_800B3338(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    extern u8 D_80069AD4[];
    u8 *t5;
    s32 *t4;
    register s32 count asm("t3");
    register s32 *piVar7 asm("t2");
    register s32 iVar6 asm("t1");
    register s32 ret asm("s0");

    ret = 0;
    t5 = D_8008ED68;
    count = 1;
    if (t5[0x103] != 0) {
        count = t5[0x103];
    }
    piVar7 = (s32 *)(arg0 + 0xD68);
    if (arg1 == 0) {
        piVar7 = (s32 *)(arg0 + 0xD4C);
    }
    iVar6 = 0;
    if (count != 0) {
        t4 = (s32 *)D_80069AD4;
loop_start:
        do {
            s32 iVar5 = 0;
            register s32 iVar4 asm("a2") = iVar5;
            register s32 *piVar3 asm("a1") = piVar7;
            register s32 *puVar2 asm("a0") = t4;

            do {
                register s32 v0 asm("v0") = *piVar3;
                register s32 v1 asm("v1") = puVar2[0x11];
                v0 = v0 - v1;
                v1 = v0;
                if (v0 < 0) {
                    v1 = -v1;
                }
                if (iVar5 < v1) {
                    iVar5 = v1;
                }
                piVar3++;
                iVar4++;
                puVar2++;
            } while (iVar4 < 3);

            iVar5 = (iVar5 + 1) / 10;

            {
                register s32 *p1 asm("a1") = piVar7;
                register s32 *p2 asm("a2") = t4;
                register s32 *end asm("t0") = p1 + 3;

                do {
                    if (iVar5 != 0) {
                        p2[0x11] += (*p1 - p2[0x11]) / iVar5;
                    } else {
                        ret = 1;
                        p2[0x11] = *p1;
                    }
                    p1++;
                    p2++;
                } while ((s32)p1 < (s32)end);
            }

            iVar6++;
            if (ret != 0) {
                goto exit;
            }
            if (iVar6 < count) {
                goto loop_start;
            }
        } while (0);
    }
exit:
    t5[0xA66] = 1;
    func_8002CC74();
    func_8002CD50();
    return ret;
}

void func_800B3488(u8 *arg0, u8 *arg1) {
    s32 v;

    *(s32 *)(arg0 + 0x77C) = (arg1[0x15] * 2 - 11) * -50;
    v = (D_801010B0[arg0[9]].b[arg1[0x15]][arg1[0x16]] >> 19) & 7;
    *(s32 *)(arg0 + 0x780) = v * 50;
    *(s32 *)(arg0 + 0x784) = (arg1[0x16] * 2 - 11) * -50;
}

void func_800B3558(u8 *arg0, s32 arg1, s32 arg2) {
    s32 v;
    *(s32 *)(arg0 + 0x77C) = (arg1 * 2 - 11) * -50;
    v = (D_801010B0[arg0[9]].b[arg1][arg2] >> 19) & 7;
    *(s32 *)(arg0 + 0x784) = (arg2 * 2 - 11) * -50;
    *(s32 *)(arg0 + 0x780) = v * 50;
}

void func_800B360C(u8 *arg0, u8 *arg1, u8 *arg2) {
    s32 v;

    *(s32 *)(arg0 + 0x77C) = (arg1[0x15] + arg2[0x15] - 11) * -50;
    v = ((D_801010B0[arg0[9]].b[arg1[0x15]][arg1[0x16]] >> 19) & 7) +
        ((D_801010B0[arg0[9]].b[arg2[0x15]][arg2[0x16]] >> 19) & 7);
    *(s32 *)(arg0 + 0x780) = v * 25;
    *(s32 *)(arg0 + 0x784) = (arg1[0x16] + arg2[0x16] - 11) * -50;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3714);
