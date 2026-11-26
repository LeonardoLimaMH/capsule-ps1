#include "common.h"
#include "yuugi.h"

extern u8 D_800922FA[];
extern u8 D_800922F0[];
extern void func_80036DB0();

struct VoiceE {
    u8 _p0[0xC];
    u16 l;
    u16 r;
    u8 _p1[0x2E];
    s16 cur;
    u8 _p2[6];
    s16 last;
    u8 _p3[0x4E - 0x48];
};

typedef struct {
    u8 pad0[2];
    u8 f2;
    u8 pad3[0x11];
    u16 f14;
    u8 pad16[6];
    s16 f1c;
    s16 f1e;
    s16 f20;
    u8 pad22[4];
    s16 f26;
    s16 f28;
    s16 f2a;
    u16 f2c;
    u16 f2e;
} OscObj;

s32 func_8003742C(u16 a, s16 b) {
    s32 x[4];
    s32 y[4];
    register s32 *py asm("a0");

    if (!(D_800922FA[0] & 2)) {
        if (a > 0x8021) {
            if (a <= 0x8320) {
                return 0;
            }
        }
    }
    if (!(a & 0x8000)) {
        return 0;
    }
    ((u8 *)x)[0] = 0x24;
    ((u16 *)x)[1] = a & 0x7FFF;
    func_80036DB0(x);
    py = y;
    ((u8 *)y)[0] = 0x29;
    y[2] = b;
    ((u8 *)py)[1] = 0xFF;
    func_80036DB0(py);
    *(u16 *)D_800922F0 = (*(u16 *)D_800922F0 | 1) & 0xFFFB;
    return 1;
}

void func_800374E8(s32 a) {
    s32 b[4];
    s32 c[4];
    register u32 t asm("v1");
    register u32 m asm("a1");
    register s32 *pc asm("a0");
    register s32 value asm("v0");

    if (!(a & 0x8000)) {
        return;
    }
    if (*(u16 *)D_800922F0 & 0xF) {
        pc = c;
        value = 0x2A;
        ((u8 *)c)[0] = value;
        value = -0x20;
        pc[2] = value;
        ((u8 *)c)[1] = 0;
        func_80036DB0(pc);
        ((u8 *)b)[0] = 0x26;
        func_80036DB0(b);
    }
    m = 0xFFFFFF;
    *(u16 *)D_800922F0 |= 1;
    t = *(u32 *)(*(u8 **)(D_800922F0 + 0x1170) + (a & 0x7FFF) * 8);
    ((u8 *)b)[0] = 0x21;
    m = t & m;
    t = m + *(s32 *)(D_800922F0 + 0x1188);
    b[2] = t;
    func_80036DB0(b);
}

void func_800375B0(void) {

}

void func_800375B8(void) {

}

extern u16 D_8007082C[][128];
u16 func_800375C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    register s32 v0 asm("v0");
    u16 ret;
    s32 v1;
    s16 m;
    s32 t;

    a1 = (s16)(a1 + a3);
    v0 = a1 / 128;
    v1 = a0 + v0;
    v0 = v0 * 128;
    a3 = a1 - v0;
    v0 = v1 - a2;
    v1 = v0 << 16;
    a1 = v1 >> 16;
    if (a1 < 0) {
        m = (s16)(-v0) % 12;
        a1 = (s16)(-v0);
        t = 12 - m;
        v0 = D_8007082C[t % 12][(s16)a3];
        ret = v0 >> ((a1 + 11) / 12);
    } else {
        m = a1 % 12;
        ret = D_8007082C[m][(s16)a3] << (a1 / 12);
    }
    return ret;
}

extern u8 D_80093790[];
extern s32 D_8007142C[];
extern u16 D_80078D54, D_80078D56;
extern void SpuSetVoiceAttr();

void func_80037704(u8 *v) {
    s32 n, t, m, l;
    s8 ph;

    if (*(u16 *)(v + 0x36) == 0) {
        return;
    }
    if (v[0x32] != v[0x39]) {
        v[0x32]++;
    } else {
        if (!(v[0x38] < v[0x3A])) {
            *(u16 *)(v + 0x34) = *(u16 *)(v + 0x36);
        } else {
            if (v[0x38] != 0) {
                *(u16 *)(v + 0x34) = *(u16 *)(v + 0x34) + *(u16 *)(v + 0x3C);
            } else {
                *(u16 *)(v + 0x34) = *(u16 *)(v + 0x3C);
            }
            v[0x38]++;
        }
        v[0x33] += v[0x3B];
        v[0x31] = 0;
        ph = v[0x33];
        if (ph < 0) {
            n = -ph;
            l = n << 1;
            t = l;
            if ((n << 25) < 0) {
                t = -l;
            }
            m = *(u16 *)(v + 0x34) * (s8)t;
            if (m > 0) {
                m = -m;
            }
        } else {
            n = ph;
            l = n << 1;
            t = l;
            if ((n << 25) < 0) {
                t = -l;
            }
            m = *(u16 *)(v + 0x34) * (s8)t;
            if (m < 0) {
                m = -m;
            }
        }
        if (m != 0) {
            *(s16 *)(v + 0x3E) = m / 256;
        } else {
            *(s16 *)(v + 0x3E) = 0;
        }
    }
    if (*(s16 *)(v + 0x46) == *(s16 *)(v + 0x3E)) {
        return;
    }
    *(u16 *)(v + 0x46) = *(u16 *)(v + 0x3E);
    M2C_GFIELD(D_80093790, s32, 4) = 0xF;
    *(s32 *)D_80093790 = D_8007142C[v[0]];
    l = *(u16 *)(v + 0xC) + *(s16 *)(v + 0x3E);
    if (l < 0) {
        l = 0;
    } else if (l >= 0x4000) {
        l = 0x3FFF;
    }
    M2C_GFIELD(D_80093790, s16, 8) = (l * D_80078D54) >> 7;
    l = *(u16 *)(v + 0xE) + *(s16 *)(v + 0x3E);
    if (l < 0) {
        l = 0;
    } else if (l >= 0x4000) {
        l = 0x3FFF;
    }
    M2C_GFIELD(D_80093790, s16, 0xC) = 0;
    M2C_GFIELD(D_80093790, s16, 0xE) = 0;
    M2C_GFIELD(D_80093790, s16, 0xA) = (l * D_80078D56) >> 7;
    SpuSetVoiceAttr(D_80093790);
}

void func_8003793C(u8 *p) {
    u16 temp_a1 = *(u16 *)(p + 0x26);
    if (temp_a1 != 0) {
        if (p[0x22] != p[0x29]) {
            p[0x22]++;
            return;
        }
        if (p[0x28] >= p[0x2A]) {
            *(u16 *)(p + 0x24) = temp_a1;
        } else {
            if (p[0x28] != 0) {
                *(u16 *)(p + 0x24) += *(u16 *)(p + 0x2C);
            } else {
                *(u16 *)(p + 0x24) = *(u16 *)(p + 0x2C);
            }
            p[0x28]++;
        }
        p[0x23] += p[0x2B];
        p[0x21] = 0;
        {
            s8 c = (s8)p[0x23];
            s32 prod;
            register s32 v1 asm("v1");
            s32 a1;
            if (c < 0) {
                s32 v0 = -c;
                v1 = v0 * 2;
                if ((v0 << 25) >= 0) {
                    a1 = v1;
                } else {
                    a1 = -v1;
                }
                prod = *(u16 *)(p + 0x24) * (s8)a1;
                if (prod > 0) {
                    prod = -prod;
                }
            } else {
                v1 = c * 2;
                if ((c << 25) >= 0) {
                    a1 = v1;
                } else {
                    a1 = -v1;
                }
                prod = *(u16 *)(p + 0x24) * (s8)a1;
                if (prod < 0) {
                    prod = -prod;
                }
            }
            if (prod != 0) {
                if (prod < 0) {
                    prod += 0x3FF;
                }
                *(s16 *)(p + 0x2E) = prod >> 10;
                return;
            }
            *(s16 *)(p + 0x2E) = 0;
        }
    }
}

extern u8 D_80078CC8[];
extern u16 D_80078C7C;
INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80037A7C);

extern u16 D_80078D54;
extern u16 D_80078D56;

void func_80037CAC(s32 n, s32 x, s32 y)
{
  s32 new_var;
  ((struct 
  {
    u8 _p[4];
    s32 v;
  } *) D_80093790)->v = 0xF;
  new_var = D_8007142C[n];
  ((struct 
  {
    u8 _p[0xC];
    s16 v;
  } *) D_80093790)->v = 0;
  ((struct 
  {
    u8 _p[0xE];
    s16 v;
  } *) D_80093790)->v = 0;
  *((s32 *) D_80093790) = new_var;
  ((struct 
  {
    u8 _p[8];
    s16 v;
  } *) D_80093790)->v = (x * D_80078D54) >> 7;
  ((struct 
  {
    u8 _p[0xA];
    s16 v;
  } *) D_80093790)->v = (y * D_80078D56) >> 7;
  SpuSetVoiceAttr(D_80093790);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80037D28);

void func_80037E40(s32 ch) {
    extern u8 D_800937D0[];
    extern u8 D_80093790[];
    extern struct VoiceE D_80093D68[];
    extern s32 D_8007142C[];
    extern s32 D_80078C78;
    extern u16 D_80078D54;
    extern u16 D_80078D56;
    extern void func_80037A7C();
    extern void SpuSetVoiceAttr();

    s32 i = 0;
    s32 x, y;

    if (i < D_80078C78) {
        do {
            struct VoiceE *e = &D_80093D68[i];
            if ((e->_p0[3] >> 4) == ch) {
                func_80037A7C(e, D_800937D0 + e->_p0[3] * 84);
                x = e->l * D_80078D54;
                y = e->r * D_80078D56;
                M2C_GFIELD(D_80093790, s32, 4) = 0xF;
                *(s32 *)D_80093790 = D_8007142C[i];
                M2C_GFIELD(D_80093790, s16, 0xC) = 0;
                M2C_GFIELD(D_80093790, s16, 0xE) = 0;
                M2C_GFIELD(D_80093790, s16, 8) = x >> 7;
                M2C_GFIELD(D_80093790, s16, 0xA) = y >> 7;
                SpuSetVoiceAttr(D_80093790);
            }
        } while (++i < D_80078C78);
    }
}

extern s32 D_80078C78;
extern struct VoiceE D_80093D68[];
void func_80037F64(void) {
    s32 i = 0;
    s16 t;
    s32 x, y;

    if (i < D_80078C78) {
        do {
            struct VoiceE *e = &D_80093D68[i];
            t = e->cur;
            if (e->last != t) {
                x = (e->l + t) * D_80078D54;
                y = (e->r + t) * D_80078D56;
                M2C_GFIELD(D_80093790, s32, 4) = 0xF;
                *(s32 *)D_80093790 = D_8007142C[i];
                M2C_GFIELD(D_80093790, s16, 0xC) = 0;
                M2C_GFIELD(D_80093790, s16, 0xE) = 0;
                M2C_GFIELD(D_80093790, s16, 8) = x >> 7;
                M2C_GFIELD(D_80093790, s16, 0xA) = y >> 7;
                SpuSetVoiceAttr(D_80093790);
            }
        } while (++i < D_80078C78);
    }
}

s16 func_8003804C(u8 *p, u32 a) {
    s16 r;
    if (a < 0x40U) {
        if (p[0x1D] == 0) {
            return 0;
        }
        r = -((p[0x1D] << 1) * (0x40 - a));
    } else {
        register u32 d asm("v1");
        if (a == 0x40) {
            return 0;
        }
        d = a - 0x3F;
        if (p[0x1C] == 0) {
            return 0;
        }
        r = (p[0x1C] << 1) * d;
    }
    return r;
}

static inline s32 func_800380C8_helper(u8 *p, u32 a) {
    s32 r;
    if (a < 0x40U) {
        if (p[0x1D] == 0) {
            return 0;
        }
        r = -((p[0x1D] << 1) * (0x40 - a));
    } else {
        u32 d;
        if (a == 0x40) {
            return 0;
        }
        d = a - 0x3F;
        if (p[0x1C] == 0) {
            return 0;
        }
        r = (((volatile u8 *)p)[0x1C] << 1) * d;
    }
    return r;
}

static inline s32 func_800380C8_helper_b(u8 *p, u32 a) {
    s32 r;
    if (a < 0x40U) {
        register u32 diff asm("v0");
        if (p[0x1D] == 0) {
            return 0;
        }
        diff = 0x40 - a;
        r = -((p[0x1D] << 1) * diff);
    } else {
        u32 d;
        if (a == 0x40) {
            return 0;
        }
        d = a - 0x3F;
        if (p[0x1C] == 0) {
            return 0;
        }
        r = (((volatile u8 *)p)[0x1C] << 1) * d;
    }
    return r;
}

void func_800380C8(u8 *v, s32 force) {
    extern u8 D_800937D0[];
    u8 *t = D_800937D0 + v[3] * 0x54;
    s32 a3, d;
    register s32 a1 asm("a1");
    s32 pitch;
    if (*(u16 *)(v + 0x26) != 0 || t[2] != 0 || *(s16 *)(t + 0x26) != 0 || t[7] != *(u16 *)(v + 0x48) || force != 0) {
        *(u16 *)(v + 0x48) = t[7];
        a3 = *(u16 *)(v + 0x2E) + (*(u16 *)(t + 0x1E) + *(u16 *)(t + 0x28));
        d = func_800380C8_helper_b(v, t[7]);
        a1 = *(u16 *)(v + 8);
        M2C_GFIELD(D_80093790, s32, 4) = 0x10;
        a1 = a3 + ((a1 << 7) + d);
        pitch = a1 << 16;
        *(s32 *)D_80093790 = D_8007142C[v[0]];
        M2C_GFIELD(D_80093790, s16, 0x14) = func_800375C0(pitch >> 23, a1 & 0x7F, v[0x1E], v[0x1F]);
        SpuSetVoiceAttr(D_80093790);
    }
    if (*(u16 *)(v + 0x26) != 0 && SpuGetKeyStatus(D_8007142C[v[0]]) == 0) {
        *(u16 *)(v + 0x26) = 0;
        *(u16 *)(v + 0x2E) = 0;
    }
}

extern u8 D_800944B8[], D_800937D0[];

extern s32 SpuSetKey(s32, s32), SpuGetKeyStatus(s32);

extern s32 D_8007142C[], D_80078C78;

extern s32 SpuSetKey(s32, s32);

extern s32 SpuGetKeyStatus(s32);

extern u8 D_800947E8[];

extern u8 D_800947E8[], D_800944B8[];

void func_80038294(OscObj *p) {
    if (p->f2 != 0) {
        if (p->f14 != 0) {
            if (p->f1e + p->f1c < p->f20) {
                p->f1e = p->f1e + p->f1c;
            } else {
                p->f14 = 0;
                p->f1e = p->f20;
            }
        } else {
            if (p->f1e - p->f1c > -p->f20) {
                p->f1e = p->f1e - p->f1c;
            } else {
                p->f14 = 1;
                p->f1e = -p->f20;
            }
        }
    } else {
        p->f1e = 0;
    }
}

void func_80038348(OscObj *p) {
    if (p->f26 != 0) {
        if (p->f2e != 0) {
            if (p->f28 + p->f2a < p->f2c) {
                p->f28 = p->f28 + p->f2a;
            } else {
                p->f28 = p->f2c;
            }
        } else {
            if (p->f2a - p->f28 < p->f2c) {
                p->f28 = p->f28 - p->f2a;
            } else {
                p->f28 = -p->f2c;
            }
        }
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_800383C8);
