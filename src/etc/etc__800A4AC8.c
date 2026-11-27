#include "common.h"
#include "ghidra.h"

typedef struct {
    u8 p0[0x88];
    u32 f88;
    u8 p8c[0xC];
    u32 f98;
    u8 p9c[0x8];
    u32 fa4[4];
    u32 fb4[4];
    u8 pc4[0x1C];
    u16 fe0;
} Pad800A6F10;

void func_800A4AC8(void) {
    func_8001A49C(0x80110000);
    func_80012508();
}

void func_800A4AF0(void) {
    extern u16 D_8008EE48[];
    extern u8 D_800859F0[];
    extern s32 D_800B3C18[];
    switch ((s32)D_8008EE48[0]) {
    case 0:
        D_800B3C18[0] = 0;
        if (D_800859F0[0] & 4) func_80012578();
        else func_80012508();
        break;
    case 1:
        if (func_80019654()) func_80012578();
        break;
    case 2:
        func_800338DC(0x7017);
        func_80012578();
        break;
    case 3:
        if (D_800859F0[0] & 4) {
            if (func_800337EC() & 0x80) func_80012508();
        } else func_80012508();
        break;
    }
}

#define A4BCC_CREATE(x, y, z, id, cb) func_80032DB0(x, y, z, 0xC, id, cb)
static inline void A4BCC_clamp(u16 *p, s16 value) {
    p[0x60] = value;
    if (value >= 0) {
        if (value > 150) value = 150;
    } else value = 0;
    p[0x60] = value;
}
static inline void A4BCC_clamp2(u16 *p, s32 value) {
    p[0x60] = value;
    if ((s16)value >= 0) {
        if ((s16)value > 150) value = 150;
    } else value = 0;
    p[0x60] = value;
}
static inline void A4BCC_clamp3(u16 *p, s16 value) {
    if (value >= 0) {
        if (value > 150) value = 150;
    } else value = 0;
    p[0x60] = value;
}
static inline void A4BCC_clamp4(u16 *p, s32 value) {
    p[0x60] = value;
    if ((s16)value < 0) value = 0;
    else if ((s16)value > 150) value = 150;
    p[0x60] = value;
}
void func_800A4BCC(void) {
    extern u8 D_80033450[], D_80091618[];
    extern struct { u8 pad0[0xB]; u8 unkB; u8 padC[0x30]; } D_80063940[];
    extern s32 D_800B3C1C[];
    extern u8 *func_80032DB0(s32, s32, s32, s32, s32, void *);
    extern u8 *func_80032E78(s32, s32, s32, s32, s32, void *);
    extern u8 *func_80032F50(s32, s32, s32, s32, void *);
    extern void func_800A81F4(), func_800A822C(), func_800A8278(), func_800A8350();
    extern void func_800A83CC(), func_800A847C(), func_800A8534(), func_800A8638();
    extern void func_800A86A4(), func_800A8758(), func_800A8810(), func_800A88DC();
    extern void func_800A8988(), func_800A8B74();
    struct Flags30 { u8 pad[0x30]; u32 pad30:4; u32 blend:2; u32 mode:3; u32 rest:23; };
    s32 i, x, n, alt, row;
    register u8 *obj asm("t0");
    register u16 *p asm("a2");
    u8 *table;
    u8 *base;
    register u32 v asm("a0");
    s16 value;
    register s32 sum asm("v1");
    register s32 term asm("a0");
    
    for (i = 0; i < 19; i++)
        func_80012A20(func_80019F30(0x2000C, i), 1, 0, 0);
    for (i = 0; i < 2; i++)
        func_80012A20(func_80019F30(0x2000C, i + 19), 1, 0, 0);
    func_80012A20(func_80019F30(0x5000C, 0), 1, 0, 0);
    {
    void (*cb)();
    i = 0;
    cb = func_800A8278;
    n = 6;
    for (; i < 4; i++, n += 2) {
        s32 ax, ay;
        ax = (i & 1) ? 0x28 : -0x78;
        ay = (i / 2) ? -0x10 : -0x68;
        obj = A4BCC_CREATE(ax, ay, 4, i ? n : 5, cb);
        *(s32 *)(obj + 0x80) = i;
        ((struct Flags30 *)obj)->blend = 2;
    }
    }
    A4BCC_CREATE(-0x58, -0x70, 4, 1, func_800A8350);
    for (i = 0; i < 2; i++) {
        s32 bx, by;
        bx = i ? -0x48 : -0x58;
        by = i ? 0x50 : 0x48;
        obj = A4BCC_CREATE(bx, by, i ? 3 : 4, i ? 0x6D : 0x70, func_800A822C);
        *(s32 *)(obj + 0x80) = 5;
        *(s32 *)(obj + 0x84) = 8;
        ((struct Flags30 *)obj)->blend = 2;
    }
    obj = A4BCC_CREATE(-0x60, -0x20, 3, 0x71, func_800A8534);
    *(u16 *)(obj + 0x76) = 0x200;
    *(u16 *)(obj + 0x74) = 0x200;
    *(u16 *)(obj + 0x52) = 0;
    *(u16 *)(obj + 0x50) = 0;
    obj = A4BCC_CREATE(0x20, -0x50, 0x401, 0x19, func_800A822C);
    *(s32 *)(obj + 0x80) = 6;
    *(s32 *)(obj + 0x84) = 7;
    A4BCC_CREATE(0, 0, 0x401, 0x10, func_800A83CC);
    obj = A4BCC_CREATE(-0x88, -0x50, 0x401, 0x14, func_800A81F4);
    *(s32 *)(obj + 0x84) = 6;
    obj = A4BCC_CREATE(-0x68, -0x50, 0x401, 0x1C, func_800A81F4);
    *(s32 *)(obj + 0x84) = 7;
    obj = A4BCC_CREATE(-0x88, -0x50, 0x401, 0x1B, func_800A81F4);
    *(s32 *)(obj + 0x84) = 7;
    A4BCC_CREATE(-0x68, -0x50, 5, 0x22, func_800A8638);
    A4BCC_CREATE(-0x68, -0x50, 5, 0x2E, func_800A86A4);
    for (i = 0; i < 3; i++) {
        obj = A4BCC_CREATE(-0x80, i * 0x14 - 0x44, 5, i + 0x36, func_800A8758);
        *(s32 *)(obj + 0x84) = i;
        ((struct Flags30 *)obj)->blend = 2;
    }
    for (i = 0; i < 6; i++) {
        s32 cx;
        cx = i / 3 ? 0x80 : 0x47;
        obj = func_80032E78(cx, (i % 3) * 22 + 10, 5, 0xC, i + 4, func_800A8810);
        *(s32 *)(obj + 0x84) = i;
        ((struct Flags30 *)obj)->blend = 2;
    }
    obj = func_80032E78(0x50, -0x10, 5, 0xC, 0xB, func_800A8988);
    ((struct Flags30 *)obj)->mode = 1;
    ((struct Flags30 *)obj)->blend = 1;
    for (i = 0; i < 3; i++) {
        obj = A4BCC_CREATE(i * 14 + 0x58, -0x40, 5, 0x73, func_800A8B74);
        *(s32 *)(obj + 0x84) = i;
    }
    for (i = 0; i < 2; i++) {
        obj = A4BCC_CREATE(i * 0x70 - 0x68, 0x50, 4, 0x11, func_800A847C);
        *(s32 *)(obj + 0x84) = i;
        ((struct Flags30 *)obj)->blend = 2;
    }
    for (i = 0; i < 3; i++) {
        obj = A4BCC_CREATE(i * 0x60 - 0x88, -0x40, 4, 0x6F, func_800A81F4);
        *(s32 *)(obj + 0x84) = 8;
        ((struct Flags30 *)obj)->blend = 2;
        obj = A4BCC_CREATE(i * 0x60 - 0x60, 8, 3, i + 0x59, func_800A88DC);
        *(s32 *)(obj + 0x84) = i;
        ((struct Flags30 *)obj)->blend = 2;
    }
    obj = A4BCC_CREATE(-0xA0, -0x48, 0x401, 0x68, func_800A81F4);
    *(s32 *)(obj + 0x84) = 9;
    ((struct Flags30 *)obj)->blend = 2;
    alt = 0;
    for (row = 0; row < 5; row++, alt++) {
        for (x = -0xA0; x < 0xA1; x += 0x40, alt++) {
            obj = func_80032F50(x, row * 0x40 - 0xA0, 0x401, (alt & 1) ? 0x1E : 0x1F, D_80033450);
            *(s16 *)(obj + 0x6A) = -1;
            *(s16 *)(obj + 0x6E) = 1;
            obj[0x5A] = 0x70;
            obj[0x59] = 0x70;
            obj[0x58] = 0x70;
            *(u32 *)(obj + 0x38) |= 8;
        }
    }
    table = (u8 *)D_80063940;
    base = D_80091618;
    p = (u16 *)base;
    do {
        if (p[8] != 0xFFFF) {
            v = table[p[0] * 0x3C + 0xB] | 0x80;
            p[0x4F] = v;
            {
                s32 qvalue = (s16)p[0x73] * 100 / (s32)v;
                register u16 *q asm("a0") = p;
                p[0x60] = qvalue;
                if ((s16)qvalue >= 0) {
                    if ((s16)qvalue > 150) qvalue = 150;
                } else qvalue = 0;
                q[0x60] = qvalue;
            }
            p[0x61] = p[0x6A];
            if ((s16)p[0x61] < (s16)p[0x6B]) p[0x61] = p[0x6B];
            p[0x61] = 255 - p[0x61];
            term = p[0x69];
            sum = term + p[0x6D];
            sum += p[0x6E];
            term = p[0x6F];
            sum += term;
            sum += p[0x70];
            term = p[0x6C];
            sum += term;
            value = (s16)sum / 367 + 1;
            {
                register s16 val2 asm("a0") = value;
                if (value > 5) val2 = 5;
                p[0x5E] = val2;
            }
        }
        p += 0xD4;
    } while ((s32)p < (s32)(base + 6 * 0x1A8));
    *D_800B3C1C = 0;
    func_80012508();
}

void func_800A5400(void) {
    extern struct { u8 pad0[0x88]; u32 f88; u8 pad8c[0xC]; u32 f98; } D_8008ED68[];
    extern char D_800B2DA8[];
    extern s32 D_800B3C1C[], D_800B3C24[], D_800B3C20[];
    extern u8 D_800B3C28[], D_800B3C29[], D_8008542A[];
    register u32 a asm("a0");
    u32 b;
    register u32 mask asm("v0");
    func_8001F1A8(-0x38, 0x50, 0, 1, 0, D_800B2DA8, 1, 9, 2);
    a = D_8008ED68[0].f88;
    if ((a & 0x1000) || (D_8008ED68[0].f98 & 0x1000)) {
        if (D_800B3C1C[0] >= 2) {
            func_80034AB0(0x84);
            D_800B3C1C[0] -= 2;
        }
    } else if ((a & 0x4000) || (D_8008ED68[0].f98 & 0x4000)) {
        if (D_800B3C1C[0] < 2) {
            func_80034AB0(0x84);
            D_800B3C1C[0] += 2;
        }
    } else if ((a & 0x8000) || (D_8008ED68[0].f98 & 0x8000)) {
        if (D_800B3C1C[0] & 1) {
            func_80034AB0(0x84);
            D_800B3C1C[0]--;
        }
    } else if ((mask = a & 0x2000) || (D_8008ED68[0].f98 & 0x2000)) {
        if (!(D_800B3C1C[0] & 1)) {
            func_80034AB0(0x84);
            D_800B3C1C[0]++;
        }
    }
    a = D_8008ED68[0].f88;
    if ((a & 0x830) || ((b = D_8008ED68[0].f98) & 0x830)) {
        if (D_800B3C1C[0] == 0 && D_8008542A[0] == 0) {
            func_80034AB0(0x4C);
        } else {
            func_80034AB0(0x48);
            D_800B3C28[0] = 1;
            func_80012544((u16)(*(u16 *)D_800B3C1C + 6));
            D_800B3C24[0] = 0;
            D_800B3C20[0] = 0;
            D_800B3C1C[0] = 0;
            D_800B3C29[0] = 1;
        }
    } else if ((mask = a & 0x40) || (b & 0x40)) {
        func_80034AB0(0x5D);
        func_80034BD8(-3, 0);
        func_80033974(0x7017);
        func_80012544(0xA);
    }
}

#define L base
#define E(k) (entries + (k) * 14)
#define M(k) (D_80063940 + E(k)[0] * 60)
#define D32(o) (*(u32 *)((u8 *)D_8008ED68 + (o)))
#define PADS(m) ((D_8008ED68[0].f88 & (m)) || (D_8008ED68[0].f98 & (m)))
#define REP15(x) ((x) >= 15 && (x) % 15 == 0)

typedef struct {
    u8 p0[0x8];
    u32 f8;
    u8 pc[0x30];
} Card800A6198;

static inline s32 rep15_800A5654(u32 *p) {
    u32 x = *p;
    return x >= 15 && x % 15 == 0;
}
void func_800A5654(void) {
extern Pad800A6F10 D_8008ED68[];
extern u8 D_80085428[];
extern Card800A6198 D_80063940[];
extern s32 D_800B3C20[], D_800B3C1C[], D_800B3C24[];
extern u8 D_800B3C28[], D_800B3C29[];
extern char D_8006D670[], D_8006B2A4[];
extern char D_800B2CFC[], D_800B2D30[], D_800B2D9C[], D_800B2DA0[], D_800B2D40[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);
extern s32 func_8001F35C(s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_8001F7A4(s32, s32, s32, s32, s32, s32);
extern s32 func_80018EF4(s32, s32, s32, s32, s32);
extern s32 func_80034AB0(s32);
extern void func_800A790C(s32), func_800A7D2C(void);
extern s32 func_80012578(void), func_80012544(s32), func_800125AC(s32);
#define PP(p, m) ((p->f88 & (m)) || (p->f98 & (m)))

    register Pad800A6F10 *pad asm("v1") = D_8008ED68;
    u32 *a = pad->fa4;
    u32 *b = pad->fb4;
    u8 *base = D_80085428;
    register u8 *entries asm("s7") = base + 0x50;
    s32 i, s2, t;
    if (pad->fe0 < 2) {
        i = 0;
        if (L[2] < 4) {
            if (((volatile u8 *)base)[2] != 0) {
                do {
                    func_8001F35C(-0x78, (s16)(i * 16 - 0x44), i == D_800B3C20[0], 0, 0, i + 1, 2, 5);
                    func_8001F1A8(-0x60, (s16)(i * 16 - 0x47), i == D_800B3C20[0], 1, 0, E(i) + 1, 0, 8, 5);
                    i++;
                } while (i < L[2]);
            }
        } else {
            s2 = D_800B3C20[0] - 1;
            for (; i < 4; i++) {
                s32 hl;
                if (s2 < 0) s2 = L[2] - 1;
                else if (s2 >= L[2]) s2 = 0;
                hl = i == 1;
                func_8001F35C(-0x78, (s16)(i * 16 - 0x44), hl, 0, 0, s2 + 1, 2, 5);
                func_8001F1A8(-0x60, (s16)(i * 16 - 0x47), hl, 1, 0, E(s2) + 1, 0, 8, 5);
                s2++;
            }
        }
        func_8001F1A8(-0x60, 0xA, 2, 1, 0, E(D_800B3C20[0]) + 1, 0, 8, 5);
        func_8001F1A8(-0x60, 0x1D, 2, 0, 0, &D_80063940[E(D_800B3C20[0])[0]], 0, 9, 5);
        func_8001F7A4(-0x60, 0x2C, 2, 0, (D_80063940[E(D_800B3C20[0])[0]].f8 >> 8) & 0xF, 5);
        t = D_80063940[E(D_800B3C20[0])[0]].f8 >> 12;
        t &= 3;
        func_80018EF4(-0xF, 0x29, t, 1, 5);
        func_8001F1A8(4, 0x2C, 2, 0, 0, D_8006D670 + t * 8, 0, t == 1 ? 4 : 3, 5);
        t = D_80063940[E(D_800B3C20[0])[0]].f8 >> 17;
        t &= 0x7F;
        func_8001F1A8(-0x60, 0x39, 2, 1, 0, D_8006B2A4 + t * 88, 1, 8, 5);
        func_8001F35C(0x20, 0x1D, 2, 0, 0, E(D_800B3C20[0])[0xD], 1, 5);
        func_8001F35C(0x62, 0xC, 2, 0, 0, E(D_800B3C20[0])[9], 3, 5);
        func_8001F35C(0x62, 0x1C, 2, 0, 0, E(D_800B3C20[0])[0xA], 3, 5);
        func_8001F35C(0x62, 0x2C, 2, 0, 0, E(D_800B3C20[0])[0xB], 3, 5);
        func_8001F35C(0x76, 0x3B, 2, 0, 0, E(D_800B3C20[0])[0xC], 1, 5);
    }
    {
    Pad800A6F10 *pd = D_8008ED68;
    switch ((s32)pd->fe0) {
    case 0: {
        s32 v;
        u32 m;
        if (!D_800B3C29[0]) return;
        if (D_800B3C28[0]) {
            D_800B3C28[0] = 0;
            func_800A790C(E(D_800B3C20[0])[0]);
        }
        if (PP(pd, 0xA000)) {
            func_80034AB0(0x84);
            D_800B3C1C[0] ^= 1;
        }
        if (PADS(0x1000) || REP15(a[0]) || REP15(b[0])) {
            func_80034AB0(0x84);
            if ((D_800B3C20[0] = D_800B3C20[0] - 1) < 0
                && (D_800B3C20[0] = L[2] - 1) < 0) {
                D_800B3C20[0] = 0;
            }
            goto sel;
        }
        if (PADS(0x4000) || REP15(a[2]) || REP15(b[2])) {
            func_80034AB0(0x84);
            v = D_800B3C20[0] + 1;
            D_800B3C20[0] = v;
            D_800B3C20[0] = v % L[2];
        sel:
            func_800A790C(E(D_800B3C20[0])[0]);
        }
        m = D_8008ED68[0].f88;
        if ((m & 0x20) || (D_8008ED68[0].f98 & 0x20)) {
            s32 c;
            func_80034AB0(0x48);
            c = D_800B3C1C[0];
            D_800B3C29[0] = 0;
            if (c == 0) {
                D_800B3C24[0] = 1;
                { func_80012578(); return; }
            }
            D_800B3C1C[0] = 0;
            { func_80012544(5); return; }
        }
        if (!(m & 0x40) && !(D_8008ED68[0].f98 & 0x40)) return;
        func_80034AB0(0x5D);
        D_800B3C1C[0] = 0;
        { func_80012544(5); return; }
    }
    case 1: {
        u32 m;
        if (!D_800B3C29[0]) return;
        func_8001F1A8(-0x40, -0x18, 0, 1, 0, D_800B2CFC, 1, 0xA, 2);
        func_8001F1A8(-0x40, -8, 0, 1, 0, D_800B2D30, 1, 8, 2);
        func_8001F1A8(-0x30, 0x18, D_800B3C24[0] == 0 ? 3 : 0, 1, 0, D_800B2D9C, 1, 2, 2);
        func_8001F1A8(8, 0x18, D_800B3C24[0] ? 3 : 0, 1, 0, D_800B2DA0, 1, 3, 2);
        if (PADS(0xA000)) {
            func_80034AB0(0x84);
            D_800B3C24[0] ^= 1;
        }
        m = D_8008ED68[0].f88;
        if ((m & 0x20) || (D_8008ED68[0].f98 & 0x20)) {
            if (D_800B3C24[0] == 0) {
                func_80034AB0(0x48);
                func_800A7D2C();
                { func_80012578(); return; }
            }
            func_80034AB0(0x5D);
            D_800B3C29[0] = 0;
            { func_800125AC(0); return; }
        }
        if (!(m & 0x40) && !(D_8008ED68[0].f98 & 0x40)) return;
        func_80034AB0(0x5D);
        D_800B3C29[0] = 0;
        { func_800125AC(0); return; }
    }
    case 2: {
        s32 v;
        func_8001F1A8(-0x38, -8, 0, 1, 0, D_800B2D40, 1, 9, 2);
        if (!PADS(0x8F0)) return;
        func_80034AB0(0x48);
        if (L[2] == 0) { func_80012544(5); return; }
        v = D_800B3C20[0];
        D_800B3C29[0] = 0;
        func_800A790C(E(v)[0]);
        { func_800125AC(0); return; }
    }
    }
    }
}

typedef struct {
    u8 p0[0x88];
    u32 f88;
    u8 p8c[0xC];
    u32 f98;
    u8 p9c[0x8];
    u32 fa4[4];
    u32 fb4[4];
    u8 pc4[0x1C];
    u16 fe0;
} Pad800A6198;
typedef struct {
    u16 id;
    u8 p2[6];
    u8 name[8];
    u16 f10;
    u8 p12[0xAA];
    s16 fbc;
    u8 pbe[0xEA];
} Ent800A6198;
void func_800A6198(void) {
    extern Pad800A6198 D_8008ED68[];
    extern Ent800A6198 D_80091618[];
    extern Card800A6198 D_80063940[];
    extern s16 D_800B3C38[];
    extern u8 D_8008542A[];
    extern s32 D_800B3C20[], D_800B3C1C[], D_800B3C24[];
    extern u8 D_800B3C28[], D_800B3C29[], D_800B3C2A[];
    extern u8 D_8006D670[][8];
    extern u8 *D_800B2DDC[];
    extern u8 D_800B2D10[], D_800B2D20[], D_800B2D30[], D_800B2D9C[], D_800B2DA0[], D_800B2D54[];
    extern u8 D_800B2D68[], D_800B2D84[];
    Pad800A6198 *pad = D_8008ED68;
    u32 *a = pad->fa4;
    u32 *b = pad->fb4;
    s32 t;
    register s32 v asm("a1");
    s32 i = D_800B3C20[0];

    if (D_80091618[i].f10 != 0xFFFF) {
        func_8001F1A8(-0x72, 0xA, 2, 1, 0, D_80091618[i].name, 0, 8, 5);
        func_8001F1A8(-0x72, 0x1C, 2, 0, 0, &D_80063940[D_80091618[D_800B3C20[0]].id], 0, 9, 5);
        func_8001F35C(0xE, 0x1D, 2, 0, 0, D_80091618[D_800B3C20[0]].fbc, 1, 5);
        func_8001F7A4(-0x72, 0x2C, 2, 0, (D_80063940[D_80091618[D_800B3C20[0]].id].f8 >> 8) & 0xF, 5);
        t = (D_80063940[D_80091618[D_800B3C20[0]].id].f8 >> 12) & 3;
        func_80018EF4(-0x1F, 0x2A, t, 1, 5);
        func_8001F1A8(-0x11, 0x2C, 2, 0, 0, D_8006D670[t], 0, t == 1 ? 4 : 3, 5);
        func_8001F35C(-0x70, 0x3B, 2, 0, 0, D_800B3C38[6], 2, 5);
        func_8001F1A8(-0x20, 0x3B, 2, 0, 0, D_800B2DDC[D_800B3C38[7]], 0, 4, 5);
    }
    switch ((s32)D_8008ED68[0].fe0) {
    case 0:
        if (D_800B3C29[0] == 0) break;
        if (D_800B3C28[0] != 0) {
            s16 *entries = (s16 *)D_80091618;
            s32 id = entries[D_800B3C20[0] * (0x1A8 / 2)];
            D_800B3C28[0] = 0;
            func_800A790C(id);
        }
        if ((D_8008ED68[0].f88 & 0xA000) || (D_8008ED68[0].f98 & 0xA000)) {
            func_80034AB0(0x84);
            D_800B3C1C[0] ^= 1;
        }
        if ((D_8008ED68[0].f88 & 0x1000) || (D_8008ED68[0].f98 & 0x1000)
            || REP15(a[0]) || REP15(b[0])) {
            func_80034AB0(0x84);
            D_800B3C20[0]--;
            if (D_800B3C20[0] < 0) D_800B3C20[0] = 5;
            func_800A790C((s16)D_80091618[D_800B3C20[0]].id);
        } else if ((D_8008ED68[0].f88 & 0x4000) || (D_8008ED68[0].f98 & 0x4000)
            || REP15(a[2]) || REP15(b[2])) {
            func_80034AB0(0x84);
            v = (D_800B3C20[0] + 1) % 6;
            {
                s32 id = *(s16 *)&D_80091618[v].id;
                D_800B3C20[0] = v;
                func_800A790C(id);
            }
        }
        if (D_800B3C2A[0] && D_80091618[D_800B3C20[0]].f10 != 0xFFFF) {
            func_800A7984((s16)D_800B3C20[0]);
        }
        if ((D_8008ED68[0].f88 & 0x20) || (D_8008ED68[0].f98 & 0x20)) {
            if (D_800B3C1C[0] == 0) {
                if (D_80091618[D_800B3C20[0]].f10 != 0xFFFF) {
                    func_80034AB0(0x48);
                    D_800B3C29[0] = 0;
                    D_800B3C24[0] = 1;
                    func_80012578();
                } else {
                    func_80034AB0(0x4C);
                }
            } else {
                func_80034AB0(0x48);
                D_800B3C1C[0] = 0;
                D_800B3C29[0] = 0;
                func_80012544(5);
            }
        } else if ((D_8008ED68[0].f88 & 0x40) || (D_8008ED68[0].f98 & 0x40)) {
            func_80034AB0(0x5D);
            D_800B3C1C[0] = 1;
            func_80012544(5);
        }
        break;
    case 1:
        if (D_800B3C29[0] == 0) break;
        func_8001F1A8(-0x40, -0x18, 0, 1, 0, D_800B2D10, 1, 8, 2);
        func_8001F1A8(-0x40, -8, 0, 1, 0, D_800B2D20, 1, 7, 2);
        func_8001F1A8(-0x40, 8, 0, 1, 0, D_800B2D30, 1, 8, 2);
        func_8001F1A8(-0x30, 0x18, D_800B3C24[0] == 0 ? 3 : 0, 1, 0, D_800B2D9C, 1, 2, 2);
        func_8001F1A8(8, 0x18, D_800B3C24[0] ? 3 : 0, 1, 0, D_800B2DA0, 1, 3, 2);
        if ((D_8008ED68[0].f88 & 0xA000) || (D_8008ED68[0].f98 & 0xA000)) {
            func_80034AB0(0x84);
            D_800B3C24[0] ^= 1;
        }
        if ((D_8008ED68[0].f88 & 0x20) || (D_8008ED68[0].f98 & 0x20)) {
            if (D_800B3C24[0] != 0) {
                func_80034AB0(0x5D);
                D_800B3C29[0] = 0;
                func_800125AC(0);
            } else {
                func_80034AB0(0x48);
                if (D_8008542A[0] == 0x32) {
                    func_800125AC(3);
                } else {
                    func_800A7EB0();
                    func_800125AC(2);
                }
            }
        } else if ((D_8008ED68[0].f88 & 0x40) || (D_8008ED68[0].f98 & 0x40)) {
            func_80034AB0(0x5D);
            D_800B3C29[0] = 0;
            func_800125AC(0);
        }
        break;
    case 2:
        func_8001F1A8(-0x38, -8, 0, 1, 0, D_800B2D54, 1, 9, 2);
        if ((D_8008ED68[0].f88 & 0x8F0) || (D_8008ED68[0].f98 & 0x8F0)) {
            s32 id;
            s16 *entries;
            func_80034AB0(0x48);
            entries = (s16 *)D_80091618;
            id = entries[D_800B3C20[0] * (0x1A8 / 2)];
            D_800B3C29[0] = 0;
            func_800A790C(id);
            func_800125AC(0);
        }
        break;
    case 3:
        func_8001F1A8(-0x58, -0x18, 1, 1, 0, D_800B2D68, 1, 0xE, 2);
        func_8001F1A8(-0x50, -8, 1, 1, 0, D_800B2D84, 1, 0xC, 2);
        func_8001F1A8(-0x30, 0x18, D_800B3C24[0] == 0 ? 3 : 0, 1, 0, D_800B2D9C, 1, 2, 2);
        func_8001F1A8(8, 0x18, D_800B3C24[0] ? 3 : 0, 1, 0, D_800B2DA0, 1, 3, 2);
        if ((D_8008ED68[0].f88 & 0xA000) || (D_8008ED68[0].f98 & 0xA000)) {
            func_80034AB0(0x84);
            D_800B3C24[0] ^= 1;
        }
        if ((D_8008ED68[0].f88 & 0x20) || (D_8008ED68[0].f98 & 0x20)) {
            func_80034AB0(0x48);
            if (D_800B3C24[0] != 0) {
                D_800B3C29[0] = 0;
                func_800125AC(0);
            } else {
                D_800B3C28[0] = 1;
                func_80012544(6);
                D_800B3C20[0] = 0;
                D_800B3C1C[0] = 0;
                D_800B3C24[0] = 0;
                D_800B3C29[0] = 1;
            }
        } else if ((D_8008ED68[0].f88 & 0x40) || (D_8008ED68[0].f98 & 0x40)) {
            func_80034AB0(0x5D);
            D_800B3C29[0] = 0;
            func_800125AC(0);
        }
        break;
    }
}

void func_800A6D68(void) {
    extern u8 D_80065164[];
    extern struct { s16 count; s16 entries[3]; } D_8006AF90[];
    extern struct { u8 p0[0x88]; u32 f88; u8 p8c[0xC]; u32 f98; } D_8008ED68[];
    extern u8 D_800B2DA8[];
    extern s32 D_800B3C1C[];
    s32 i;
    func_8001F1A8(-0x38, 0x50, 0, 1, 0, D_800B2DA8, 1, 9, 2);
    for (i = 0; i < 3; i++) {
        func_80020844((s16)(i * 0x60 - 0x88), 0x10, 0x50, 0x18, 0, 0, 0, 0, 5);
    }
    if (D_8006AF90[0].count > 0) {
        for (i = 0; i < D_8006AF90[0].count; i++) {
            func_8001F1A8((s16)(i * 0x60 - 0x84), 0x14, 0, 1, 0,
                D_80065164 + D_8006AF90[0].entries[i] * 12, 1, 6, 2);
        }
    }
    if ((D_8008ED68[0].f88 & 0x40) || (D_8008ED68[0].f98 & 0x40)) {
        func_80034AB0(0x5D);
        D_800B3C1C[0] = 2;
        func_80012544(5);
    }
}

typedef struct {
    u8 p0[0x8];
    u32 f8;
    u8 pc[0x8];
    u32 f14;
    u8 p18[0x24];
} Card800A6F10;
#define REPEAT15(x) ((x) >= 15 && (x) % 15 == 0)
typedef struct {
    u8 p0[0x8];
    u32 f8;
    u8 pc[0x8];
    u32 f14_lo : 5;
    u32 owned : 1;
    u32 f14_hi : 26;
    u8 p18[0x24];
} CardB800A6F10;
void func_800A6F10(void) {
    extern Pad800A6F10 D_8008ED68[];
    extern CardB800A6F10 D_80063940[];
    extern u8 D_8006B2A4[][0x58];
    extern u8 D_8006D670[][8];
    extern u8 D_80085428[];
    extern u8 D_8008542E[];
    extern u16 *D_800B1A74[];
    extern u8 *D_800B241C[];
    extern u8 D_800B2DBC[];
    extern u8 D_800B2DF4[];
    extern s32 D_800B3C1C[];
    extern u8 D_800B3C28[];
    Pad800A6F10 *pad = D_8008ED68;
    u32 *a = pad->fa4;
    u32 *b = pad->fb4;
    u8 *save;
    s32 i;
    s32 flag;
    s32 kind;
    s32 n;

    switch ((s32)pad->fe0) {
    case 0:
        if (D_800B3C28[0] != 0) {
            D_800B3C28[0] = 0;
            func_800A790C(0);
        }
        if (!(D_8008542E[0] & 2)) {
            i = 0x54;
            flag = 0;
            do {
                if (D_80063940[i].owned != 1) {
                    flag = 1;
                }
                i++;
            } while (i < 0x5A);
            if (flag == 0) {
                D_80085428[6] |= 2;
            }
        }
        if (!(D_8008542E[0] & 4)) {
            i = 0x26;
            flag = 0;
            do {
                if (D_80063940[i].owned != 1) {
                    flag = 1;
                }
                i++;
            } while (i < 0x33);
            if (flag == 0) {
                D_80085428[6] |= 4;
            }
        }
        save = D_80085428;
        if ((*(s32 *)(save + 4) & 0x4000FF) == 0x67) {
            save[6] |= 0x40;
            func_80034AB0(0x8081);
            func_800125AC(2);
        } else {
            func_80012578();
        }
        break;
    case 1:
        func_8001F1A8(0x10, -0x30, 0, 1, 0, D_800B241C[D_800B3C1C[0]], 1, 9, 2);
        func_8001F7A4(4, -0x1C, 0, 0, (D_80063940[D_800B3C1C[0]].f8 >> 8) & 0xF, 2);
        kind = (D_80063940[D_800B3C1C[0]].f8 >> 12) & 3;
        func_8001F1A8(0x5E, -0x1C, 0, 0, 0, D_8006D670[kind], 0, kind == 1 ? 4 : 3, 2);
        func_800A7680(D_800B1A74[D_800B3C1C[0]]);
        func_8001F1A8(-0x90, 0x30, 3, 1, 0, D_800B2DBC, 1, 3, 2);
        func_8001F1A8(-0x68, 0x30, 3, 1, 0, D_8006B2A4[D_800B3C1C[0]], 1, 8, 2);
        func_800A7754(D_8006B2A4[D_800B3C1C[0]] + 0x18, D_800B2DF4[D_800B3C1C[0]]);
        if ((D_8008ED68[0].f88 & 0x6000) || (D_8008ED68[0].f98 & 0x6000)
            || REPEAT15(a[2]) || REPEAT15(b[2]) || REPEAT15(a[1]) || REPEAT15(b[1])) {
            u32 owned;
            func_80034AB0(0x84);
            n = D_800B3C1C[0] + 1;
            n %= 103;
            owned = D_80063940[n].owned;
            D_800B3C1C[0] = n;
            if (!owned) {
                func_800A7840(0);
            }
            func_800A790C((s16)D_800B3C1C[0]);
        } else if ((D_8008ED68[0].f88 & 0x9000) || (D_8008ED68[0].f98 & 0x9000)
            || REPEAT15(a[0]) || REPEAT15(b[0]) || REPEAT15(a[3]) || REPEAT15(b[3])) {
            func_80034AB0(0x84);
            D_800B3C1C[0]--;
            if (D_800B3C1C[0] < 0) {
                D_800B3C1C[0] = 0x66;
            }
            if (!D_80063940[D_800B3C1C[0]].owned) {
                func_800A7840(1);
            }
            func_800A790C((s16)D_800B3C1C[0]);
        }
        if ((D_8008ED68[0].f88 & 0x40) || (D_8008ED68[0].f98 & 0x40)) {
            func_80034AB0(0x5D);
            D_800B3C1C[0] = 3;
            func_80012544(5);
        }
        break;
    case 2:
        func_800125AC(1);
        break;
    }
}

void func_800A7654(void) {
    extern int func_80099394();
    func_80013668();
    func_80012200(&func_80099394);
}

void func_800A7680(u16 *arg0) {
    extern u8 D_8008ED68[];
    extern void func_8001EA24(s16, s16, s32, s32, s32, s32);
    s32 left = -0x90;
    s16 y = 0;
    u8 *p = D_8008ED68;
    u16 *s = arg0;
    s32 x = 0;
    s32 c;
    while (1) {
        c = *s;
        if (c == 0xFFEE) break;
        if (c == 0xFFF0) {
            x = 0;
            y += 0x10;
        } else {
            func_8001EA24(left + *(s32 *)(p + 0x108) / 2 + x,
                         y + *(s32 *)(p + 0x10C) / 2, 0, c, 0, 3);
            x += 0xE;
        }
        s++;
    }
}

void func_800A7754(u16 *arg0, u8 arg1) {
    extern u8 D_8008ED68[];
    extern void func_8001EA24(s16, s16, s32, s32, s32, s32);
    s32 left = -0x80;
    s32 y = 0x40;
    u32 i = 0;
    u8 *p = D_8008ED68;
    u16 *s = arg0;
    s32 x = i;
    s32 c;
    for (; i < 0x20; x += 0xE) {
        c = *s;
        if (i == arg1) {
            x = 0;
            y += 0x10;
        }
        s++;
        i++;
        func_8001EA24(left + *(s32 *)(p + 0x108) / 2 + x,
                     y + *(s32 *)(p + 0x10C) / 2, 3, c, 0, 3);
    }
}

void func_800A7840(int param_1)

{
    extern u8 D_80063940[];
    extern s32 D_800B3C1C[];
  if (param_1 == 0) {
    (*D_800B3C1C) = ((*D_800B3C1C) + 1) % 0x67;
  }
  else {
    (*D_800B3C1C) = (*D_800B3C1C) + -1;
    if ((*D_800B3C1C) < 0) {
      (*D_800B3C1C) = 0x66;
    }
  }
  { u8 *base = D_80063940;
  if ((*(u32 *)(base + (*D_800B3C1C) * 0x3c + 0x14) >> 5 & 1) == 0) {
    func_800A7840(param_1);
  }
  }
  return;
}

void func_800A790C(int param_1) {
 extern s8 D_800B3C2A[];
 int i=0;
 int shifted=(param_1<<16)>>15;
 do {
 int arg=i+0x13;
 int r=func_80019F30(0x2000c,shifted+arg);
 func_80012A20(r,1,0,0);
 ++i;
 } while(i<2);
 D_800B3C2A[0]=1;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__800A4AC8", func_800A7984);

void func_800A7D2C(void) {
    extern u8 D_80085428[];
    extern s32 D_800B3C20[];
    s32 i = D_800B3C20[0];
    u8 *base = D_80085428;
    s32 next;
    s32 j;
    u8 *src;
    u8 *dst;
    if (i != 0x31 && (i != 0 || base[2] != 1)) {
        next = i + 1;
        if (next < base[2]) {
            src = base + next * 14;
            dst = base + i * 14;
            do {
                {
                    register u8 *d asm("a2");
                    register u8 *s asm("a1");
                    j = 0;
                    d = dst;
                    dst[0x50] = src[0x50];
                    s = src;
                    do {
                        *(d + j + 0x51) = *(s + j + 0x51);
                        j++;
                    } while (j < 8);
                }
                {
                    register u8 *d asm("a2");
                    register u8 *s asm("a1");
                    j = 0;
                    d = dst;
                    s = src;
                    do {
                        u8 *v = d + j;
                        u8 value = *(s + j + 0x59);
                        j++;
                        v[0x59] = value;
                    } while (j < 5);
                }
                dst += 14;
                i++;
                src += 14;
            } while (base[2] > ++next);
        }
    }
    {
        u8 *p = base + i * 14;
        p[0x50] = 0;
        j = 7;
        p += 7;
        for (; j >= 0; j--) { p[0x51] = 0; p--; }
        j = 4;
        p = base + i * 14 + 4;
        for (; j >= 0; j--) { p[0x59] = 0; p--; }
    }
    base[2]--;
    if (base[2] == 0) D_800B3C20[0] = 0;
    else if (D_800B3C20[0] >= base[2]) D_800B3C20[0] = base[2] - 1;
}

typedef struct {
    u16 id;
    u8 pad2[6];
    u8 name[8];
    u16 unk10;
    u8 pad12[0x78];
    u16 unk8A;
    u16 unk8C;
    u8 pad8E[0x10E];
    u16 unk19C;
    u16 unk19E;
    u16 unk1A0;
    u8 pad1A2[6];
} Ent1A8;
typedef struct {
    u8 id;
    u8 name[8];
    u8 b[5];
} Rec14;
typedef struct {
    u8 pad0[2];
    u8 count;
    u8 pad3;
    u8 unk4;
    u8 pad5[0x4B];
    Rec14 recs[240];
    u8 padD70[0xC];
    u8 unkD7C[1];
} Save85428;
void func_800A7EB0(void) {
    typedef struct {
        u16 id;
        u8 pad2[6];
        u8 name[8];
        u16 unk10;
        u8 pad12[0x78];
        u16 unk8A;
        u16 unk8C;
        u8 pad8E[0x26];
        u16 stats[5];
        u8 padBE[0xDE];
        u16 unk19C;
        u16 unk19E;
        u16 unk1A0;
        u8 pad1A2[6];
    } Ent1A8_A7EB0;
    typedef struct {
        u8 pad0[0x14];
        u32 pad14_0 : 5;
        u32 seen : 1;
        u32 pad14_6 : 26;
        u8 pad18[0x24];
    } Mon63940_A7EB0;
    typedef struct {
        u16 unk0;
        u16 pad2;
        s32 unk4;
    } S6AF80_A7EB0;
    typedef struct {
        u8 pad0[8];
        s32 unk8[5];
        s32 unk1C[5];
        u16 unk30[11];
        u16 pad46;
        s32 unk48[11];
        u16 unk74[11];
    } S6AFCC_A7EB0;
    extern Ent1A8_A7EB0 D_80091618[];
    extern Save85428 D_80085428;
    extern Mon63940_A7EB0 D_80063940[];
    extern S6AF80_A7EB0 D_8006AF80[];
    extern S6AFCC_A7EB0 D_8006AFCC;
    extern s32 D_800B3C20[];
    extern void func_80027C14(u16);
    extern void func_80027E04(u16);
    extern void func_80026514(u16);

    Save85428 *s = &D_80085428;
    u32 n = s->count;
    s32 j;
    u16 *src;
    Ent1A8_A7EB0 *e;
    s32 v;
    s32 any;

    s->recs[n].id = D_80091618[D_800B3C20[0]].id;
    for (j = 0; j < 8; j++) {
        s->recs[n].name[j] = D_80091618[D_800B3C20[0]].name[j];
    }
    src = D_80091618[D_800B3C20[0]].stats;
    for (j = 0; j < 5; ) {
        s->recs[n].b[j++] = *src;
        src++;
    }
    s->count++;
    if (D_80063940[D_80091618[D_800B3C20[0]].id].seen != 1) {
        D_80063940[D_80091618[D_800B3C20[0]].id].seen = 1;
        s->unk4++;
    }
    func_80027C14(D_800B3C20[0]);
    func_80027E04(D_800B3C20[0]);
    e = &D_80091618[D_800B3C20[0]];
    if (e->unk8A != 0xFFFF) {
        D_80091618[e->unk8A].unk8A = 0xFFFF;
        D_80091618[e->unk8A].unk8C = 0;
    }
    func_80026514(D_800B3C20[0]);
    v = D_800B3C20[0];
    D_80091618[v].unk19C = 0;
    D_80091618[v].unk19E = 0;
    D_80091618[v].unk1A0 = 0;
    s->unkD7C[v] = 0;
    {
        register u32 empty asm("a2");
        any = 0;
        j = 0;
        empty = 0xFFFF;
        for (; j < 6; j++) {
            if (D_80091618[j].unk10 != empty) {
                any = 1;
            }
        }
    }
    if (any == 0) {
        D_8006AF80->unk0 = 0;
        D_8006AF80->unk4 = 0x20D0;
        for (j = 0; j < 5; j++) {
            D_8006AFCC.unk8[j] = -1;
            D_8006AFCC.unk1C[j] = 0;
        }
        for (j = 0; j < 11; j++) {
            D_8006AFCC.unk30[j] = 0;
            D_8006AFCC.unk48[j] = 0;
            D_8006AFCC.unk74[j] = 0;
        }
    }
}
