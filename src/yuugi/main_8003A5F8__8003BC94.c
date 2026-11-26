#include "common.h"
#include "yuugi.h"

typedef struct {
    s16 unk_0x0;
    u8 unk_0x2[0x17];
    u8 unk_0x19;
    u8 unk_0x1A;
    u8 unk_0x1B;
} Unk_800947E8;

typedef struct {
    u8 unk_0x0[0x288];
    s16 unk_0x288;
    s16 unk_0x28A;
    s16 unk_0x28C;
    s16 unk_0x28E;
    u8 unk_0x290[0x1C];
} Unk_800944B8Init;

typedef struct {
    s32 unk_0x0;
    s32 unk_0x4;
    u8 unk_0x8[0xC];
    u16 unk_0x14;
    u16 unk_0x16;
    u16 unk_0x18;
    u16 unk_0x1A;
    u16 unk_0x1C;
    u16 unk_0x1E;
    u8 unk_0x20;
    u8 unk_0x21;
    u8 unk_0x22;
    u8 unk_0x23;
    u8 unk_0x24;
    u8 unk_0x25;
    u8 unk_0x26;
    u8 unk_0x27;
} Unk_800944B8Stream;

#ifndef UNK_800944B8_DEFINED
#define UNK_800944B8_DEFINED
typedef struct {
    struct {
        s32 unk_0x0;
        u8 unk_0x4[0x1C];
        u8 unk_0x20;
        u8 unk_0x21[7];
    } unk_0x0[16];
    u8 unk_0x280[4];
    u8 *unk_0x284;
    s16 unk_0x288;
    s16 unk_0x28A;
    s16 unk_0x28C;
    s16 unk_0x28E;
    u8 unk_0x290[4];
    u32 unk_0x294;
    u32 unk_0x298;
    u8 unk_0x29C[4];
    u16 unk_0x2A0;
    u16 unk_0x2A2;
    u16 unk_0x2A4;
    u8 unk_0x2A6[6];
} Unk_800944B8;

extern Unk_800944B8 D_800944B8[];
extern s32 D_80078C9C;
#endif

extern s32 D_80078C94;
extern s32 D_80078D5C;
extern s32 D_80078C84;
extern s32 func_8003A5F8();
extern s32 func_8004FE3C();
extern u8 D_800949A8[];

s32 func_8003BC94(Unk_800944B8Stream *p) {
    extern s32 D_800714A0[];
    extern void func_8003B7B4(Unk_800944B8Stream *, s32, s32, s32);
    extern void func_8003B178(Unk_800944B8Stream *, s32);
    extern s32 func_8003AAF0(u8 *);

    register s32 i asm("s0");
    register s32 a1 asm("a1");
    register s32 a2 asm("a2");
    register s32 a3 asm("a3") = 0;
    register s32 v1 asm("v1");
    s32 t0;
    u32 n;

    /* Read 1: into a1 */
    {
        register Unk_800944B8 *base asm("a0") = D_800944B8;
        Unk_800944B8 *e = &base[D_80078C9C];
        u8 *data = *(u8 *volatile *)&e->unk_0x284;
        register u32 pos asm("a0") = *(volatile u32 *)&p->unk_0x0;
        register u8 c asm("v1") = data[pos];
        pos++;
        *(u32 *)&p->unk_0x0 = pos;
        if (e->unk_0x294 < pos) { p->unk_0x20 = 1; a1 = -1; }
        else a1 = (u8)c;
    }

    a2 = a1;
    if (!(a1 & 0x80)) {
        a1 = p->unk_0x25;
        p->unk_0x24 = 1;
    } else {
        if ((a2 & 0xFF) != 0xFF) {
            p->unk_0x25 = a1;
        }
        p->unk_0x24 = 0;
    }

    v1 = (u32)a1 >> 2;
    {
        register u8 *table asm("v0") = (u8 *)D_800714A0;
        t0 = *(s32 *)(table + (v1 & 0x3C));
    }
    v1 = (u8)a2;
    if (t0 != 0) {
        if (p->unk_0x24 == 0) {
            /* Read 2: into v1 then a2 */
            register s32 lo asm("v1");
            register Unk_800944B8 *base asm("a0") = D_800944B8;
            Unk_800944B8 *e = &base[D_80078C9C];
            u8 *data = *(u8 *volatile *)&e->unk_0x284;
            register u32 pos asm("a0") = *(volatile u32 *)&p->unk_0x0;
            register u8 c asm("v1") = data[pos];
            pos++;
            *(u32 *)&p->unk_0x0 = pos;
            if (e->unk_0x294 < pos) { p->unk_0x20 = 1; lo = -1; }
            else lo = (u8)c;
            a2 = lo;
        }
        if (t0 == 2) {
            /* Read 3: into a3 */
            register Unk_800944B8 *base asm("a0") = D_800944B8;
            Unk_800944B8 *e = &base[D_80078C9C];
            u8 *data = *(u8 *volatile *)&e->unk_0x284;
            register u32 pos asm("a0") = *(volatile u32 *)&p->unk_0x0;
            register u8 c asm("v1") = data[pos];
            pos++;
            *(u32 *)&p->unk_0x0 = pos;
            if (e->unk_0x294 < pos) { p->unk_0x20 = 1; a3 = -1; }
            else a3 = (u8)c;
        }
        func_8003B7B4(p, a1 & 0xFF, a2 & 0xFF, a3 & 0xFF);
        return 0;
    }

    if (v1 == 0xF0) goto do_f0;

    if (v1 == 0xFF) {
        /* Read 5: into a1 */
        register Unk_800944B8 *base asm("a0") = D_800944B8;
        Unk_800944B8 *e = &base[D_80078C9C];
        u8 *data = *(u8 *volatile *)&e->unk_0x284;
        register u32 pos asm("a0") = *(volatile u32 *)&p->unk_0x0;
        register u8 c asm("a1") = data[pos];
        pos++;
        *(u32 *)&p->unk_0x0 = pos;
        if (e->unk_0x294 < pos) { p->unk_0x20 = 1; a1 = -1; }
        else a1 = (u8)c;
        func_8003B178(p, a1 & 0xFF);
    }
    return 0;

do_f0:
    i = 0;
    n = func_8003AAF0((u8 *)p);
    do {
        register s32 byte asm("v0");
        register u32 pos asm("a0") = *(volatile u32 *)&p->unk_0x0;
        Unk_800944B8 *base = D_800944B8;
        Unk_800944B8 *e = &base[D_80078C9C];
        u8 *data = *(u8 *volatile *)&e->unk_0x284;
        register u8 c asm("v1") = data[pos];
        pos++;
        *(u32 *)&p->unk_0x0 = pos;
        i++;
        if (e->unk_0x294 < pos) { p->unk_0x20 = 1; byte = -1; }
        else byte = (u8)c;
        if ((byte & 0xFF) == 0xF7) {
            break;
        }
    } while (i < n);
    return 0;
}

s32 func_8003BFCC(u32 *s) {
    extern u8 D_80078CAC[];
    u8 *pattern = D_80078CAC;
    u32 found = -1;
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    register u32 pos asm("a3") = *s;
    register u8 *data = e->unk_0x284;
    register u8 *a asm("a1");
    register u8 *b asm("a2");
    register s32 n asm("a0");
    s32 x, y, diff;
    do {
        a = pattern;
        b = data + pos;
        n = 3;
        do {
            x = *a++;
            y = *b;
            if (x != y) goto compare;
            b++;
        } while (--n);
        x = *a;
        y = *b;
compare:
        diff = x - y;
        if (diff == 0) goto found;
        pos++;
    } while (pos <= e->unk_0x294);
done:
    *s = found;
    if (found == -1U) goto fail;
    s[2] = func_8003AC60(s);
    s[4] = s[0];
    s[3] = s[0] + s[2];
    return 0;
found:
    found = pos + 4;
    goto done;
fail:
    return 1;
}

void func_8003C0C8(Unk_800944B8Stream *s) {
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];

    switch ((s32)e->unk_0x2A4) {
    case 0x30:
        s->unk_0x1C *= 10;
        s->unk_0x1C += s->unk_0x18;
        s->unk_0x18 = s->unk_0x1C & 3;
        s->unk_0x1C >>= 2;
        break;
    case 0x60:
        s->unk_0x1C *= 5;
        s->unk_0x1C += s->unk_0x18;
        s->unk_0x18 = s->unk_0x1C & 3;
        s->unk_0x1C >>= 2;
        break;
    case 0xC0:
    case 0xF0:
        s->unk_0x1C += s->unk_0x18;
        s->unk_0x18 = s->unk_0x1C & 1;
        s->unk_0x1C >>= 1;
        break;
    case 0x120:
    case 0x168:
        s->unk_0x1C /= 3;
        break;
    case 0x180:
    case 0x1E0:
        s->unk_0x1C += s->unk_0x18;
        s->unk_0x18 = s->unk_0x1C & 3;
        s->unk_0x1C >>= 2;
        break;
    case 0x300:
    case 0x3C0:
        s->unk_0x1C += s->unk_0x18;
        s->unk_0x18 = s->unk_0x1C & 7;
        s->unk_0x1C >>= 3;
        break;
    }
}

s32 func_8003C29C(s32 n) {
    extern s32 D_80078C98;
    u8 *base = (u8 *)D_800944B8;
    s32 offset = n * sizeof(Unk_800944B8);
    Unk_800944B8 *e = (Unk_800944B8 *)(base + offset);
    register s32 i asm("s1") = 0;
    D_80078C98 = 0;
    ((u8 *)e)[0x2A8] = 0;
    D_80078C9C = n;
    func_8003AF34(n);
    if (e->unk_0x2A2 != 0) {
        s32 bank = offset;
        Unk_800944B8 *bankptr = e;
        u8 *p = base;
        do {
            Unk_800944B8Stream *t = (Unk_800944B8Stream *)(bank + (u32)p);
            s32 v, state;
            register u16 count asm("v0");
            t->unk_0x4 = t->unk_0x0;
            v = func_8003AAF0(t);
            t->unk_0x20 = 0;
            t->unk_0x23 = 0;
            t->unk_0x25 = 0;
            t->unk_0x24 = 0;
            state = D_80078C98;
            t->unk_0x1C = v;
            t->unk_0x18 = 0;
            if (state != 0) func_8003C0C8(t);
            count = *(volatile u16 *)&bankptr->unk_0x2A2;
            i++;
            p += 0x28;
            if (i >= count) break;
        } while (1);
    }
    return 0;
}

s32 func_8003C390(void) {
    extern s32 D_80078C98;
    s32 saved = D_80078C9C;
    Unk_800944B8 *base = D_800944B8;
    s32 i;

    for (D_80078C9C = 0; D_80078C9C < 1; D_80078C9C++) {
        s32 offset = D_80078C9C * sizeof(Unk_800944B8);
        Unk_800944B8 *bank = (Unk_800944B8 *)((u32)offset + (u32)base);
        if (bank->unk_0x28A == 1) {
            for (i = 0; i < bank->unk_0x2A2; i++) {
                Unk_800944B8Stream *s = (Unk_800944B8Stream *)&bank->unk_0x0[i];
                if (s->unk_0x20 == 0) {
                    s->unk_0x14 += s->unk_0x16;
                    if (s->unk_0x14 >= 0x100) {
                        s->unk_0x14 &= 0xFF;
                        if (i == bank->unk_0x2A0) {
                            bank->unk_0x298++;
                        }
                        if (s->unk_0x1C != 0) {
                            s->unk_0x1C--;
                        } else {
                            do {
                                func_8003BC94(s);
                                if (s->unk_0x20 != 0) break;
                                s->unk_0x1C = func_8003AAF0(s);
                                if (s->unk_0x1C == 0) continue;
                                if (D_80078C98 != 0) func_8003C0C8(s);
                            } while (s->unk_0x1C == 0);
                            if (s->unk_0x1C != 0) {
                                s->unk_0x1C--;
                            }
                        }
                    }
                }
            }
        }
    }
    D_80078C9C = saved;
    return 0;
}

void func_8003C530(s32 n) {
    s32 i;
    for (i = 0; i < D_800944B8[n].unk_0x2A2; i++) {
        D_800944B8[n].unk_0x0[i].unk_0x20 = 1;
        D_800944B8[n].unk_0x0[i].unk_0x0 = 0;
    }
}

s32 func_8003C5BC(s32 n) {
    s32 i;
    s32 off;
    for (i = 0; i < D_800944B8[n].unk_0x2A2; i++) {
        off = n * sizeof(D_800944B8[0]);
        if (((__typeof__(D_800944B8[0].unk_0x0[0]) *)((u8 *)D_800944B8 + (i * 0x28 + off)))->unk_0x20 != 1) return 1;
    }
    return 3;
}
