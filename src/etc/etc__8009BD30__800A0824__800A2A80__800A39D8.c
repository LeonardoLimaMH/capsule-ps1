#include "common.h"

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80__800A39D8", func_800A39D8);

void func_800A3AB4(u8 *arg0) {
    extern u8 D_80065390[];
    extern u8 D_8008ED68[];
    extern s16 D_800B3B38[];
    extern u8 D_800B3B88[];
    u8 *q = D_8008ED68;
    s32 temp;

    *(s32 *)(arg0 + 0x38) |= 1;
    if ((*(u16 *)(q + 0xDC) == 0x13 && *(u16 *)(q + 0xE0) == 0) || (*(u16 *)(q + 0xDC) == 0x1B && *(u16 *)(q + 0xE0) == 4)) {
        temp = *(s32 *)(arg0 + 0x84);
        switch (temp) {
        case 1:
            *(s32 *)(arg0 + 0x38) &= ~1;
            if (*(s32 *)(arg0 + 0x84) == 1) {
                *(s32 *)(arg0 + 0x18) = func_8001A434(*(s32 *)(arg0 + 0x7C) + D_800B3B88[*(s32 *)(arg0 + 0x80)], D_80065390);
            }
            break;
        case 2:
            if (((struct { u8 _p[8]; s16 v; } *)(D_800B3B38 + *(s32 *)(arg0 + 0x80)))->v == 0) {
                break;
            }
        case 0:
            *(s32 *)(arg0 + 0x38) &= ~1;
            break;
        }
    }
}

void func_800A3BDC(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    u8 *p = D_80085428;
    if (D_8008EE44[0] == 0x18) {
        if (p[0x5D0] == 2) {
            *(s16 *)(arg0 + 0x4A) = -0x10;
            *(s32 *)(arg0 + 0x38) &= ~1;
            if (*(s32 *)(arg0 + 0x80) != 0) {
                *(s16 *)(arg0 + 0x4A) = -0x20;
            }
            return;
        }
        if (*(s32 *)(arg0 + 0x84) == 0) {
            *(s16 *)(arg0 + 0x4A) = -0x68;
            *(s32 *)(arg0 + 0x38) &= ~1;
            return;
        }
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

void func_800A3C70(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    u8 *p = D_80085428;
    register s16 *t asm("v0");
    s16 *q;
    if (D_8008EE44[0] == 0x18 && *(q = (t = D_800B3B38) + *(s32 *)(arg0 + 0x84)) == 0) {
        if (q[6] == *(s32 *)(arg0 + 0x80)) {
            arg0[0x5A] = 0x80;
            arg0[0x59] = 0x80;
            arg0[0x58] = 0x80;
        } else {
            arg0[0x5A] = 0x30;
            arg0[0x59] = 0x30;
            arg0[0x58] = 0x30;
        }
        if (p[0x5D0] == 2) {
            s16 v = -0x50;
            *(s32 *)(arg0 + 0x38) &= ~1;
            if (*(s32 *)(arg0 + 0x84) != 0) {
                v = 0x38;
            }
            *(s16 *)(arg0 + 0x4A) = v;
            return;
        }
        if (*(s32 *)(arg0 + 0x84) == 0) {
            *(s16 *)(arg0 + 0x4A) = 0x10;
            *(s32 *)(arg0 + 0x38) &= ~1;
            return;
        }
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

void func_800A3D44(u8 *arg0) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    extern s32 D_800B3BF8[];
    extern u8 D_800B3C00[];
    register u8 *a2 asm("a2") = arg0;
    u8 *p = D_80085428;
    s32 idx = *(s32 *)(a2 + 0x84);
    s16 temp_v1;

    if (D_8008EE44[0] == 0x18 && ((temp_v1 = D_800B3B38[idx]) == 1 || temp_v1 == 5)) {
        if (p[0x5D0] == 2) {
            *(s32 *)(a2 + 0x38) &= ~1;
            if (idx != 0) {
                *(s16 *)(a2 + 0x4A) = 0x28;
            } else {
                *(s16 *)(a2 + 0x4A) = -0x58;
            }
            if (D_800B3C00[idx] == 0) {
                if (D_800B3BF8[idx] != 0) {
                    *(u16 *)(a2 + 0x52) = 0;
                    *(u16 *)(a2 + 0x50) = 0;
                    return;
                } else {
                    *(u16 *)(a2 + 0x52) -= *(u16 *)(a2 + 0x76);
                    *(u16 *)(a2 + 0x50) -= *(u16 *)(a2 + 0x74);
                    if ((s16)*(u16 *)(a2 + 0x50) <= 0) {
                        D_800B3BF8[idx] = 1;
                    }
                    return;
                }
            } else {
                if (D_800B3BF8[idx] != 0) {
                    *(u16 *)(a2 + 0x52) = 0x1000;
                    *(u16 *)(a2 + 0x50) = 0x1000;
                    return;
                } else {
                    *(u16 *)(a2 + 0x50) += *(u16 *)(a2 + 0x74);
                    *(u16 *)(a2 + 0x52) += *(u16 *)(a2 + 0x76);
                    if (*(s16 *)(a2 + 0x50) >= 0x1000) {
                        D_800B3BF8[idx] = 1;
                    }
                    return;
                }
            }
        } else if (idx == 0) {
            *(s16 *)(a2 + 0x4A) = 0x10;
            *(u16 *)(a2 + 0x52) = 0x1000;
            *(u16 *)(a2 + 0x50) = 0x1000;
            *(s32 *)(a2 + 0x38) &= ~1;
            return;
        }
    } else {
        u8 *q = D_8008ED68;
        if (*(u16 *)(q + 0xDC) == 0xE && *(u16 *)(q + 0xE0) == 3) {
            *(u16 *)(a2 + 0x52) = 0x1000;
            *(u16 *)(a2 + 0x50) = 0x1000;
            *(s16 *)(a2 + 0x4A) = 0;
            *(s32 *)(a2 + 0x38) &= ~1;
            return;
        }
        q = D_8008ED68;
        if (*(u16 *)(q + 0xDC) == 0x1B && (*(u16 *)(q + 0xE0) == 1 || *(u16 *)(q + 0xE0) == 8)) {
            *(s16 *)(a2 + 0x4A) = -0x14;
            *(u16 *)(a2 + 0x52) = 0x1000;
            *(u16 *)(a2 + 0x50) = 0x1000;
            *(s32 *)(a2 + 0x38) &= ~1;
            return;
        }
    }
    *(s32 *)(a2 + 0x38) |= 1;
}

void func_800A3F70(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    u8 *p = D_80085428;
    if (D_8008EE44[0] == 0x18) {
        s16 *t = D_800B3B38;
        *(s32 *)(arg0 + 0x18) = func_80019F30(0x60010, *(s16 *)((u8 *)(t + *(s32 *)(arg0 + 0x84)) + 4) + 0x23);
        if (p[0x5D0] == 2) {
            *(s16 *)(arg0 + 0x4A) = -8;
            *(s32 *)(arg0 + 0x38) &= ~1;
            return;
        }
        if (*(s32 *)(arg0 + 0x84) == 0) {
            *(s16 *)(arg0 + 0x4A) = -0x60;
            *(s32 *)(arg0 + 0x38) &= ~1;
            return;
        }
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

void func_800A4038(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    u8 *p = D_80085428;
    s16 v;
    if (D_8008EE44[0] == 0x18) {
        if (D_800B3B38[*(s32 *)(arg0 + 0x84)] == 2) {
            if (p[0x5D0] == 2) {
                v = -0x50;
                *(s32 *)(arg0 + 0x38) &= ~1;
                if (*(s32 *)(arg0 + 0x84) != 0) {
                    v = 0x38;
                }
                *(s16 *)(arg0 + 0x4A) = v;
                return;
            }
            if (*(s32 *)(arg0 + 0x84) == 0) {
                *(s16 *)(arg0 + 0x4A) = 0x38;
                *(s32 *)(arg0 + 0x38) &= ~1;
                return;
            }
        }
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

void func_800A40DC(u8 *arg0) {
    typedef struct {
        u8 unk0[2];
        u8 unk2[2];
        u8 pad4[0x5CC];
        u8 unk5D0;
    } S_80085428_A40DC;
    typedef struct {
        s16 f0[4];
        s16 f8[4];
    } S_800B3B38_A40DC;
    typedef struct {
        u8 pad0[0x14];
        u32 f14;
        u8 pad18[0x3C - 0x18];
    } S_80063940_A40DC;
    extern S_80085428_A40DC D_80085428[];
    extern u16 D_8008EE44[];
    extern S_800B3B38_A40DC D_800B3B38[];
    extern u8 D_800B3B90[][50];
    extern S_80063940_A40DC D_80063940[];
    extern u16 D_800B3C08[][2];
    extern s32 func_80019F30(s32, s32);

    u8 *p = (u8 *)D_80085428;
    u16 r = *(u16 *)(arg0 + 0x84);

    if (D_8008EE44[0] == 0x18) {
        s32 idx;

        if (((S_80085428_A40DC *)p)->unk5D0 == 2) {
            if (r != 0) {
                *(s16 *)(arg0 + 0x4A) = 0x60;
            } else {
                *(s16 *)(arg0 + 0x4A) = -0x30;
            }
        } else {
            *(s16 *)(arg0 + 0x4A) = 0x50;
        }

        idx = D_800B3B38[0].f8[(s16)r] + *(s32 *)(arg0 + 0x80) - 1;
        if (idx < 0) {
            idx = ((S_80085428_A40DC *)p)->unk2[(s16)r] - 1;
        } else {
            u8 lim = ((S_80085428_A40DC *)p)->unk2[(s16)r];
            if (idx >= (s32)lim) {
                idx -= lim;
            }
        }

        switch ((s32)D_800B3B38[0].f0[(s16)r]) {
        case 2:
            *(s32 *)(arg0 + 0x38) &= ~1;
            {
                u8 *e = p + (idx * 14 + (s16)r * 0x2BC);
                s32 x;
                *(s32 *)(arg0 + 0x18) = func_80019F30(0x60010, e[0x50] + 0x6F);
                *(s16 *)(arg0 + 0x2E) = (D_80063940[e[0x50]].f14 >> 1) & 0xE;
                x = *(s32 *)(arg0 + 0x80);
                *(s16 *)(arg0 + 0x46) = (x << 6) - 0x80;
                if (D_800B3B90[(s16)r][idx] != 0) {
                    *(s32 *)(arg0 + 0x38) |= 0x40;
                } else {
                    *(s32 *)(arg0 + 0x38) &= ~0x40;
                }
            }
            return;
        case 3:
            *(s32 *)(arg0 + 0x38) &= ~1;
            {
                s32 x = *(s32 *)(arg0 + 0x80);
                *(s16 *)(arg0 + 0x46) = ((x << 6) - D_800B3C08[(s16)r][0]) - 0x80;
            }
            return;
        case 4:
            {
                s32 c = *(s32 *)(arg0 + 0x80);
                *(s32 *)(arg0 + 0x38) &= ~1;
                if (c == 3) {
                    u8 *e;
                    idx -= 3;
                    if (idx < 0) {
                        idx += ((S_80085428_A40DC *)p)->unk2[(s16)r];
                    }
                    e = p + (idx * 14 + (s16)r * 0x2BC);
                    *(s32 *)(arg0 + 0x18) = func_80019F30(0x60010, e[0x50] + 0x6F);
                    *(s16 *)(arg0 + 0x46) = D_800B3C08[(s16)r][0] - 0xC0;
                    *(s16 *)(arg0 + 0x2E) = (D_80063940[e[0x50]].f14 >> 1) & 0xE;
                    if (D_800B3B90[(s16)r][idx] != 0) {
                        *(s32 *)(arg0 + 0x38) |= 0x40;
                    } else {
                        *(s32 *)(arg0 + 0x38) &= ~0x40;
                    }
                    return;
                }
                *(s16 *)(arg0 + 0x46) = (D_800B3C08[(s16)r][0] + (c << 6)) - 0x80;
            }
            return;
        }
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

void func_800A4448(u8 *arg0) {
    typedef struct {
        s16 unk0[6];
    } Row_800B3B38;
    typedef struct {
        u8 pad[0x10];
        s16 unk10[6];
    } RowAt10_800B3B38;
    typedef struct {
        s16 unk0[8];
        s16 unk10[2][6];
    } S_800B3B38;
    typedef struct {
        u8 pad[0x14];
        u32 f14;
        u8 pad2[0x24];
    } S_80063940;
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    extern S_80063940 D_80063940[];
    extern u16 D_800B25B8[];

    u8 *p = D_80085428;
    s32 c;
    s32 r;
    u16 m;
    u32 row;
    s16 *ent;

    *(s32 *)(arg0 + 0x38) |= 1;
    c = *(s32 *)(arg0 + 0x80);
    m = D_8008EE44[0];
    r = *(s32 *)(arg0 + 0x84);
    if ((u32)(m - 0x18) >= 3) {
        return;
    }
    if (p[0x5D0] == 2 && m == 0x18) {
        u16 t = ((u16 *)D_800B3B38)[r];
        if ((u32)(t - 2) < 3 || (s16)t == 6) {
            return;
        }
    }
    {
        Row_800B3B38 *tbl = (Row_800B3B38 *)D_800B3B38;
        row = (u32)((RowAt10_800B3B38 *)&tbl[r])->unk10;
        ent = (s16 *)(c * 2 + row);
    }
    if (*ent < 0) {
        return;
    }
    *(s32 *)(arg0 + 0x38) &= ~1;
    *(s32 *)(arg0 + 0x18) = func_80019F30(0x60010, *ent + 0x6F);
    *(u16 *)(arg0 + 0x2E) = (D_80063940[*ent].f14 >> 1) & 0xE;
    *(u16 *)(arg0 + 0x4A) = D_800B25B8[*ent];
    if (p[0x5D0] == 2) {
        u16 base;
        if (r == 0) {
            *(s16 *)(arg0 + 0x4A) = -0x20;
        } else {
            *(s16 *)(arg0 + 0x4A) = 0x60;
        }
        base = *(u16 *)(arg0 + 0x4A);
        *(u16 *)(arg0 + 0x4A) = base + D_800B25B8[((S_800B3B38 *)D_800B3B38)->unk10[r][c]];
    }
    if (((S_800B3B38 *)D_800B3B38)->unk10[r][c] == 0x31) {
        *(u16 *)(arg0 + 0x52) = 0xE80;
        *(u16 *)(arg0 + 0x50) = 0xE80;
    } else {
        *(u16 *)(arg0 + 0x52) = 0x1000;
        *(u16 *)(arg0 + 0x50) = 0x1000;
    }
}

void func_800A4654(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    u8 *p = D_80085428;
    s32 idx;
    s32 f;
    u16 m;
    f = *(s32 *)(arg0 + 0x38) | 1;
    *(s32 *)(arg0 + 0x38) = f;
    m = D_8008EE44[0];
    idx = *(s32 *)(arg0 + 0x84);
    if (m == 0x18) {
        if (p[0x5D0] != 2) {
            *(s32 *)(arg0 + 0x38) = f & ~1;
            return;
        }
        if (D_800B3B38[idx] == 1 || D_800B3B38[idx] == 5) {
            *(s32 *)(arg0 + 0x38) = f & ~1;
            if (idx == 0) {
                *(s16 *)(arg0 + 0x4A) = -0x60;
            } else {
                *(s16 *)(arg0 + 0x4A) = 0x20;
            }
        } else {
            *(s16 *)(arg0 + 0x4A) = -0x40;
        }
    } else if ((u32)(m - 0x19) < 2) {
        *(s32 *)(arg0 + 0x38) = f & ~1;
        *(s16 *)(arg0 + 0x4A) = -0x40;
        if (p[0x5D0] == 2) {
            if (idx != 0) {
                *(s16 *)(arg0 + 0x4A) = 0x20;
            } else {
                *(s16 *)(arg0 + 0x4A) = -0x60;
            }
        }
    }
}

void func_800A4720(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern u16 D_800B3B38[];
    u8 *p = D_80085428;
    s16 v;
    if (D_8008EE44[0] == 0x18 && (u32)(D_800B3B38[*(s32 *)(arg0 + 0x84)] - 2) < 3) {
        *(s16 *)(arg0 + 0x46) = 0x20;
        if (p[0x5D0] == 2) {
            v = -0x60;
            *(s32 *)(arg0 + 0x38) &= ~1;
            if (*(s32 *)(arg0 + 0x84) != 0) {
                v = 0x28;
            }
            *(s16 *)(arg0 + 0x4A) = v;
            return;
        }
        if (*(s32 *)(arg0 + 0x84) == 0) {
            *(s16 *)(arg0 + 0x4A) = 0x20;
            *(s32 *)(arg0 + 0x38) &= ~1;
            return;
        }
    } else if ((u32)(D_8008EE44[0] - 0x19) < 2 && p[0x5D0] != 2) {
        *(s16 *)(arg0 + 0x46) = -0x40;
        *(s16 *)(arg0 + 0x4A) = 0x20;
        *(s32 *)(arg0 + 0x38) &= ~1;
        return;
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

#include "common.h"

extern u8 D_80085428[];
extern u16 D_8008EE44[];

void func_800A4820(void *arg0) {
    u8 *p = D_80085428;
    s16 var_a1;

    if ((u32) (D_8008EE44[0] - 0x19) < 2U) {
        M2C_FIELD(arg0, s32 *, 0x38) &= ~1;
        var_a1 = -0x70;
        if (p[0x5D0] == 2) {
            var_a1 = -0x10;
        }
        M2C_FIELD(arg0, s16 *, 0x4A) = var_a1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) |= 1;
    }
}

void func_800A4884(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    u8 *p = D_80085428;
    s16 v;
    if ((u32)(D_8008EE44[0] - 0x19) < 2) {
        *(s16 *)(arg0 + 0x4A) = -0x50;
        *(volatile s32 *)(arg0 + 0x38) &= ~1;
        if (p[0x5D0] == 2) {
            v = -0x70;
            if (*(s32 *)(arg0 + 0x84) != 0) {
                v = 0x10;
            }
            *(s16 *)(arg0 + 0x4A) = v;
        } else if (*(s32 *)(arg0 + 0x84) != 0) {
            *(volatile s32 *)(arg0 + 0x38) |= 1;
        }
        if (D_8008EE44[0] == 0x19) {
            *(s16 *)(arg0 + 0x46) = ((struct { s16 a, b, c; } *)&D_800B3B38[*(s32 *)(arg0 + 0x84)])->c * 0x30 - 0x88;
        }
    } else {
        *(s32 *)(arg0 + 0x38) |= 1;
    }
}

void func_800A4964(u8 *arg0) {
    extern u16 D_8008ED68[];
    u8 t;
    if (D_8008ED68[0xDC / 2] == 0xE) {
        *(u32 *)(arg0 + 0x38) &= ~1;
        if (D_8008ED68[0xE0 / 2] == 0) {
            t = arg0[0x58] + 1;
            arg0[0x58] = t;
            if (t >= 0x80) {
                func_80012578();
            } else {
                arg0[0x5A] = t;
                arg0[0x59] = t;
            }
        }
    } else {
        *(u32 *)(arg0 + 0x38) |= 1;
    }
    if (D_8008EE44[0] < 0xE) {
        func_800185F8(arg0);
    }
}

#include "common.h"

extern u8 D_8008ED68[];
extern void (*D_800B2E5C[])(void);

void func_800A4A28(void) {
    if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 1) {
        func_8001FD98(5);
    }
    D_800B2E5C[M2C_GFIELD(D_8008ED68, u16, 0xDC)]();
}

void func_800A4A8C(void) {
    extern int func_80012508();
    func_8001A464(0xC, 0x80110000);
    func_80019F30(0xC, func_80012508);
    func_80012508();
}
