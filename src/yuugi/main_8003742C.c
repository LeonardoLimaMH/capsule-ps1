#include "common.h"
#include "yuugi.h"

extern u8 D_800922FA;
extern u8 D_800922F0[];
extern void func_80036DB0();

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

s32 func_8003742C(s32 a, s32 b) {
    s32 x[4];
    s32 y[4];
    u16 v;

    if (!(D_800922FA & 2)) {
        v = a;
        if (v > 0x8021 && v <= 0x8320) {
            return 0;
        }
    }
    if (!(a & 0x8000)) {
        return 0;
    }
    ((u8 *)x)[0] = 0x24;
    ((u16 *)x)[1] = a & 0x7FFF;
    func_80036DB0(x);
    ((u8 *)y)[0] = 0x29;
    y[2] = (s16)b;
    ((u8 *)y)[1] = 0xFF;
    func_80036DB0(y);
    *(u16 *)D_800922F0 = (*(u16 *)D_800922F0 | 1) & 0xFFFB;
    return 1;
}

void func_800374E8(s32 a) {
    s32 b[4];
    s32 c[4];

    if (!(a & 0x8000)) {
        return;
    }
    if (*(u16 *)D_800922F0 & 0xF) {
        ((u8 *)c)[0] = 0x2A;
        ((u8 *)c)[1] = 0;
        c[2] = -0x20;
        func_80036DB0(c);
        ((u8 *)b)[0] = 0x26;
        func_80036DB0(b);
    }
    *(u16 *)D_800922F0 |= 1;
    ((u8 *)b)[0] = 0x21;
    b[2] = (*(u32 *)(*(u8 **)(D_800922F0 + 0x1170) + (a & 0x7FFF) * 8) & 0xFFFFFF)
         + *(s32 *)(D_800922F0 + 0x1188);
    func_80036DB0(b);
}

void func_800375B0(void) {

}

void func_800375B8(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_800375C0);

#include "common.h"

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_8003793C);

extern u8 D_80078CC8[];
extern u16 D_80078C7C;
void func_80037A7C(u8 *v, u8 *p) {
    extern u8 D_800944B8[], D_800947E8[], D_80078CC8[];
    register u8 *base asm("a0") = D_800944B8;
    u8 *e = base + (v[3] >> 4) * 0x2AC;
    s32 k = *(s16 *)(e + 0x288);
    register s32 pan asm("a0") = 0x40;
    s32 vol, l, r;
    register u8 *bank asm("v1");
    

    if (D_80078CC8[0] == 0) {
        bank = D_800947E8;
        pan = bank[k * 0x1C + 0x1B] + v[0x12] + v[0x13] + p[1] - 0xC0;
    }
    if (pan < 0) {
        pan = 0;
    }
    if (pan >= 0x80) {
        pan = 0x7F;
    }
    *(s16 *)(v + 0x14) = pan;
    bank = D_800947E8;
    vol = (s32)(bank[k * 0x1C + 0x18] * D_80078C7C * p[5] * p[3]) >> 14;
    vol = (s32)(vol * v[0x10] * v[0x11]) >> 14;
    if (pan < 0x40) {
        l = vol;
        r = (pan * (vol << 1)) >> 7;
    } else if (pan == 0x40) {
        r = vol;
        l = vol;
    } else {
        r = vol;
        l = ((0x40 - (pan & 0x3F)) * (vol << 1)) >> 7;
    }
    base = D_800944B8;
    e = base + (v[3] >> 4) * 0x2AC;
    l = (l * *(s16 *)(e + 0x28C)) >> 7;
    r = (r * *(s16 *)(e + 0x28E)) >> 7;
    *(s16 *)(v + 0xC) = (l * (v[0x1A] & 0x7F)) >> 7;
    *(s16 *)(v + 0xE) = (r * (v[0x1A] & 0x7F)) >> 7;
    if (p[0x11] >= 0x40) {
        l = *(u16 *)(v + 0xC) * *(u16 *)(v + 0xC);
        r = *(u16 *)(v + 0xE) * *(u16 *)(v + 0xE);
        *(s16 *)(v + 0xC) = l >> 14;
        *(s16 *)(v + 0xE) = r >> 14;
    }
}

#include "common.h"

extern u8 D_80093790[];
extern s32 D_8007142C[];
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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80037E40);

extern u8 D_80093790[];
extern s32 D_8007142C[];
extern s32 D_80078C78;
extern u8 D_80093D68[];
void func_80037F64(void) {
    u8 *e = D_80093D68;
    s32 *ids = D_8007142C;
    u8 *s = D_80093790;
    s32 i;
    s16 t;
    s32 x, y;

    for (i = 0; i < D_80078C78; i++, ids++, e += 0x4E) {
        t = *(s16 *)(e + 0x3E);
        if (*(s16 *)(e + 0x46) == t) {
            continue;
        }
        x = (*(u16 *)(e + 0xC) + t) * D_80078D54;
        y = (*(u16 *)(e + 0xE) + t) * D_80078D56;
        *(s32 *)(s + 4) = 0xF;
        *(s16 *)(s + 0xC) = 0;
        *(s16 *)(s + 0xE) = 0;
        *(s32 *)s = *ids;
        *(s16 *)(s + 8) = x >> 7;
        *(s16 *)(s + 0xA) = y >> 7;
        SpuSetVoiceAttr(s);
    }
}

s16 func_8003804C(u8 *p, u32 a) {
    u32 k;
    if (a < 0x40U) {
        if (p[0x1D] != 0) {
            k = p[0x1D];
            return -(k * 2 * (0x40 - a));
        }
        return 0;
    }
    if (a == 0x40) {
        return 0;
    }
    if (p[0x1C] != 0) {
        return (p[0x1C] * 2) * (a - 0x3F);
    }
    return 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_800380C8);

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_8003860C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80038890);

void func_800389E8(void) {

}

#include "common.h"

extern u8 D_80093790[];
extern s32 D_8007142C[];

void func_800389F0(s32 n, u8 *p) {
    M2C_GFIELD(D_80093790, s32, 4) = 0x60100;
    *(s32 *)D_80093790 = D_8007142C[n];
    M2C_GFIELD(D_80093790, u16, 0x3A) = *(u16 *)(p + 0x40);
    M2C_GFIELD(D_80093790, u16, 0x3C) = *(u16 *)(p + 0x42);
    M2C_GFIELD(D_80093790, s32, 0x24) = *(u16 *)(p + 0x44);
    SpuSetVoiceAttr(D_80093790);
}

#include "common.h"

extern u8 D_80093790[];
extern s32 D_8007142C[];

void func_80038A60(s32 n)
{
  unsigned long new_var;
  ((struct 
  {
    u8 _p[4];
    s32 v;
  } *) D_80093790)->v = 0x60100;
  new_var = (unsigned long) D_8007142C[n];
  ((struct 
  {
    u8 _p[0x3A];
    s16 v;
  } *) D_80093790)->v = 0;
  ((struct 
  {
    u8 _p[0x3C];
    s16 v;
  } *) D_80093790)->v = 0;
  ((struct 
  {
    u8 _p[0x24];
    s32 v;
  } *) D_80093790)->v = 5;
  *((s32 *) D_80093790) = new_var;
  SpuSetVoiceAttr(D_80093790);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80038ABC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80038CA8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80039724);

void func_800398B4(void) {

}

s32 func_800398BC(u8 *p, u16 sub, u8 prog) {
    extern u8 D_800944B8[], D_800947E8[];
    register u8 *bank asm("t0") = D_800947E8;
    register u8 *seq asm("a3") = D_800944B8;
    register s32 k asm("v0");
    s32 data, offset;
    k = *(s16 *)(seq + (prog >> 4) * 0x2AC + 0x288);
    data = *(s32 *)(bank + k * 0x1C + 4);
    offset = (p[0] * 16 + sub) * 32 + 0x820;
    return data + offset;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_8003992C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C", func_80039E60);
