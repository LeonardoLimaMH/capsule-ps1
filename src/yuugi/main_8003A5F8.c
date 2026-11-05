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

s32 func_8003A5F8(void) {
    extern s32 D_80078C84;
    extern s32 D_80078C88;
    extern s32 D_80078C90;
    extern s32 D_80078CC0[];
    if (((*D_80078CC0) == 0) || (D_80078C84 != 0)) {
        return 1;
    }
    if (D_80078C88 == 0) {
        D_80078C88 = 1;
        func_8003C390();
        if (D_80078C90 >= 0xB) {
            func_800383C8();
            func_8003CAD8();
            D_80078C90 = 0;
        }
        D_80078C88 = 0;
        D_80078C90 += 1;
    }
    return 0;
}

#include "common.h"

extern s32 D_80078C94;
extern s32 D_80078D5C;
extern s32 D_80078C84;
extern s32 func_8003A5F8();
extern s32 func_8004FE3C();

void func_8003A690(void) {
    if (D_80078C94 == 0) {
        D_80078C94 = 1;
        func_8004FEDC();
        D_80078D5C = func_8004FE3C(0xF2000002, 2, 0x1000, func_8003A5F8);
        func_8004FE7C(D_80078D5C);
        SetRCnt(0xF2000002, 0x1C00, 0x1000);
        StartRCnt(0xF2000002);
        func_8004FEEC();
        D_80078C84 = 0;
        D_80078C94 = 0;
    }
}

void func_8003A71C(void) {
    extern s32 D_80078C84;
    extern s32 D_80078C94;
    extern s32 D_80078D5C;
    D_80078C94 = 1;
    func_8004FEDC();
    StopRCnt(0xF2000002);
    func_8004FE8C(D_80078D5C);
    func_8004FE4C(D_80078D5C);
    func_8004FEEC();
    D_80078C84 = 0;
}

void func_8003A774(void) {
    extern s32 D_80078C84;
    extern s32 D_80078C94;
    D_80078C94 = 1;
    func_8004FEDC();
    StopRCnt(0xF2000002);
    func_8004FEEC();
    D_80078C84 = 0;
}

void func_8003A7B4(void) {
    extern s32 D_80078C88;
    extern s32 D_80078C8C;
    if (D_80078C88 == 0) {
        D_80078C88 = 1;
        if (D_80078C8C != 0) {
            func_8003C390();
            func_8003C390();
            func_8003C390();
            func_8003C390();
            func_8003C390();
            func_8003C390();
            func_8003C390();
            func_8003C390();
            func_8003C390();
            func_8003C390();
        }
        func_800383C8();
        func_8003CAD8();
        D_80078C88 = 0;
    }
}

void func_8003A84C(void) {

}

#include "common.h"

s32 func_8003A854(u8 *a, u8 *b, s32 n) {
    if (n == 0) {
        return -1;
    }
    while (--n != 0) {
        if (*a != *b) {
            return *a - *b;
        }
        a++;
        b++;
    }
    return *a - *b;
}

s32 func_8003A8A4(u32 arg0) {
    extern u8 D_80078CA4[];
    register u32 pos asm("a3") = arg0;
    u8 *pattern = D_80078CA4;
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    u8 *data = e->unk_0x284;
    u8 *a;
    u8 *b;
    s32 n;
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
        if (diff == 0) return pos + 4;
        pos++;
    } while (pos <= e->unk_0x294);
    return -1;
}

s32 func_8003A940(u32 arg0) {
    extern u8 D_80078CAC[];
    register u32 pos asm("a3") = arg0;
    u8 *pattern = D_80078CAC;
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    u8 *data = e->unk_0x284;
    u8 *a;
    u8 *b;
    s32 n;
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
        if (diff == 0) return pos + 4;
        pos++;
    } while (pos <= e->unk_0x294);
    return -1;
}

s32 func_8003A9DC(u32 arg0) {
    extern u8 D_80078CB4[];
    register u32 pos asm("a3") = arg0;
    register u8 *pattern asm("t2") = D_80078CB4;
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    u8 *data = e->unk_0x284;
    u8 *a;
    u8 *b;
    s32 n;
    s32 x, y, diff;
    do {
        a = pattern;
        b = data + pos;
        n = 2;
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
        if (diff == 0) return pos + 3;
        pos++;
    } while (pos <= e->unk_0x294);
    return -1;
}

#include "yuugi.h"

extern s32 D_80078C94;
extern s32 D_80078D5C;
extern s32 D_80078C84;
extern s32 func_8003A5F8();
extern s32 func_8004FE3C();


s32 func_8003AA78(u8 *s) {
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    u8 *data = *(u8 *volatile *)&e->unk_0x284;
    register u32 pos asm("a0") = *(volatile u32 *)s;
    u8 c = data[pos];
    pos++;
    *(u32 *)s = pos;
    if (e->unk_0x294 < pos) { s[0x20] = 1; return -1; }
    return c;
}


extern u8 D_800949A8[];

s32 func_8003AAF0(u8 *s) {
    register u8 *stream asm("a2") = s;
    register s32 byte asm("a0");
    u32 value;
    register u32 result asm("v0");
    {
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    u8 *data = *(u8 *volatile *)&e->unk_0x284;
    register u32 pos asm("a0") = *(volatile u32 *)stream;
    register u8 c asm("v1") = data[pos];
    pos++;
    *(u32 *)stream = pos;
    if (e->unk_0x294 < pos) { stream[0x20] = 1; byte = -1; }
    else byte = c;
}
    result = 0;
    if (byte != 0) {
        register s32 end asm("v0") = 0xFF;
        if (byte == end) {
            register s32 flag asm("v0") = 1;
            stream[0x20] = flag;
            result = 0;
        } else {
            value = byte;
            if (value & 0x80) {
                register u32 test asm("v0");
                value &= 0x7F;
                do {
                    Unk_800944B8 *e = &D_800944B8[D_80078C9C];
                    u32 pos = *(u32 *)stream;
                    register u8 c asm("v1") = e->unk_0x284[pos];
                    *(u32 *)stream = ++pos;
                    if (e->unk_0x294 < pos) { stream[0x20] = 1; byte = -1; }
                    else byte = c;
                    {
                        register u32 high asm("v0") = value << 7;
                        register u32 low asm("v1") = byte & 0x7F;
                        value = high + low;
                    }
                    test = byte & 0x80;
                } while (test);
            }
            result = value;
        }
    }
    return result;
}

s32 func_8003AC20(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return ((((((arg0 & 0xFF) << 8) + (arg1 & 0xFF)) << 8) + (arg2 & 0xFF)) << 8) | (arg3 & 0xFF);
}

s32 func_8003AC4C(s32 arg0, s32 arg1) {
    return ((arg0 & 0xFF) << 8) | (arg1 & 0xFF);
}

s32 func_8003AC60(u8 *s) {
    register u8 *stream asm("a1") = s;
    s32 cur;
    register s32 hi asm("t0");
    s32 mid;
    register s32 lo asm("a0");
    {
        register Unk_800944B8 *base asm("a0") = D_800944B8;
        Unk_800944B8 *e = &base[D_80078C9C];
        u8 *data = *(u8 *volatile *)&e->unk_0x284;
        register u32 pos asm("a0") = *(volatile u32 *)stream;
        register u8 c asm("v1") = data[pos];
        pos++;
        *(u32 *)stream = pos;
        if (e->unk_0x294 < pos) { stream[0x20] = 1; cur = -1; }
        else cur = c;
    }
    hi = cur;
    {
        register Unk_800944B8 *base asm("a0") = D_800944B8;
        Unk_800944B8 *e = &base[D_80078C9C];
        u8 *data = *(u8 *volatile *)&e->unk_0x284;
        register u32 pos asm("a0") = *(volatile u32 *)stream;
        register u8 c asm("v1") = data[pos];
        pos++;
        *(u32 *)stream = pos;
        if (e->unk_0x294 < pos) { stream[0x20] = 1; cur = -1; }
        else cur = c;
    }
    mid = cur;
    {
        register Unk_800944B8 *base asm("a0") = D_800944B8;
        Unk_800944B8 *e = &base[D_80078C9C];
        u8 *data = *(u8 *volatile *)&e->unk_0x284;
        register u32 pos asm("a0") = *(volatile u32 *)stream;
        register u8 c asm("v1") = data[pos];
        pos++;
        *(u32 *)stream = pos;
        if (e->unk_0x294 < pos) { stream[0x20] = 1; cur = -1; }
        else cur = c;
    }
    {
        register Unk_800944B8 *base asm("a0") = D_800944B8;
        Unk_800944B8 *e = &base[D_80078C9C];
        u8 *data = *(u8 *volatile *)&e->unk_0x284;
        register u32 pos asm("a0") = *(volatile u32 *)stream;
        register u8 c asm("v1") = data[pos];
        pos++;
        *(u32 *)stream = pos;
        if (e->unk_0x294 < pos) { stream[0x20] = 1; lo = -1; }
        else lo = c;
    }
    {
        register s32 acc asm("v1") = (((((hi & 0xFF) << 8) + (mid & 0xFF)) << 8) + (cur & 0xFF)) << 8;
        register s32 tmp asm("v0") = lo & 0xFF;
        return acc | tmp;
    }
}

s32 func_8003AE48(u8 *s) {
    register u8 *stream asm("a2") = s;
    register s32 hi asm("a1");
    register s32 lo asm("v1");
    {
        register Unk_800944B8 *base asm("a0") = D_800944B8;
        Unk_800944B8 *e = &base[D_80078C9C];
        u8 *data = *(u8 *volatile *)&e->unk_0x284;
        register u32 pos asm("a0") = *(volatile u32 *)stream;
        register u8 c asm("v1") = data[pos];
        pos++;
        *(u32 *)stream = pos;
        if (e->unk_0x294 < pos) { stream[0x20] = 1; hi = -1; }
        else hi = (u8)c;
    }
    {
        register Unk_800944B8 *base asm("a0") = D_800944B8;
        Unk_800944B8 *e = &base[D_80078C9C];
        u8 *data = *(u8 *volatile *)&e->unk_0x284;
        register u32 pos asm("a0") = *(volatile u32 *)stream;
        register u8 c asm("v1") = data[pos];
        pos++;
        *(u32 *)stream = pos;
        if (e->unk_0x294 < pos) { stream[0x20] = 1; lo = -1; }
        else lo = (u8)c;
    }
    return ((hi & 0xFF) << 8) | (lo & 0xFF);
}

s32 func_8003AF34(s32 idx) {
    extern s32 D_80078C98;
    Unk_800944B8 *s = &D_800944B8[idx];
    register Unk_800944B8 *e asm("v0");
    register u32 a asm("a1");

    D_80078C9C = idx;
    s->unk_0x2A6[3] = 0;
    e = &D_800944B8[D_80078C9C];
    e->unk_0x298 = 0;
    *(s32 *)e->unk_0x29C = 0;
    s->unk_0x0[0].unk_0x0 = 8;
    s->unk_0x2A4 = func_8003AE48(s);
    s->unk_0x2A2 = 1;
    s->unk_0x2A0 = 0;
    s->unk_0x294 = 0x10000;
    a = (u32)func_8003AC60(s) >> 8;
    {
        register u32 num asm("v0") = 60000000;
        a = num / a;
    }
    a = (a * 100) / 115;
    if (a >= 0x100) {
        a = 0xFF;
    }
    switch (s->unk_0x2A4) {
    case 0x18:
    case 0x3C:
        a >>= 1;
        break;
    case 0x1E:
        a >>= 2;
        break;
    }
    {
        register u32 v asm("v0") = a & 0xFF;
        *(s16 *)((u8 *)s + 0x16) = v;
        *(s16 *)((u8 *)s + 0x14) = v;
    }
    {
        Unk_800944B8 *base = D_800944B8;
        register u32 n asm("a0");
        n = s->unk_0x0[0].unk_0x0;
        n++;
        s->unk_0x0[0].unk_0x0 = n;
        if (base[D_80078C9C].unk_0x294 < n) {
            s->unk_0x0[0].unk_0x20 = 1;
        }
        if (base[idx].unk_0x2A4 >= 0x60) {
            D_80078C98 = base[idx].unk_0x2A4;
        } else {
            D_80078C98 = 0;
        }
        {
            register Unk_800944B8 *final_base asm("a0") = D_800944B8;
            D_80078C98 = final_base[idx].unk_0x2A4;
        }
    }
    return 1;
}

void func_8003B15C(s32 *arg0, s32 arg1) {
    *arg0 += arg1;
}

void func_8003B170(void) {

}

void func_8003B178(Unk_800944B8Stream *arg0, s32 type) {
    Unk_800944B8Stream *stream = arg0;
    Unk_800944B8 *base;
    register s32 a asm("a1");
    register s32 b asm("a3");
    register s32 c asm("v0");
    register u32 t asm("a2");
    register u32 bpm asm("a2");
    switch((u8)type) {
    case 0 ... 15:
        break;
    case 0x2F:
        { register u32 pos asm("a1") = stream->unk_0x0;
        register s32 flag asm("a2") = 1;
        stream->unk_0x20 = flag;
        t = pos;
        stream->unk_0x0 = t + 1; }
        return;
    case 0x51:
        {
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    u8 *data = *(u8 *volatile *)&e->unk_0x284;
    register u32 pos asm("a0") = *(volatile u32 *)stream;
    register u8 c asm("v1") = data[pos];
    pos++;
    stream->unk_0x0 = pos;
    if (e->unk_0x294 < pos) { stream->unk_0x20 = 1; a = -1; }
    else a = c;
}
        {
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    u8 *data = *(u8 *volatile *)&e->unk_0x284;
    register u32 pos asm("a0") = *(volatile u32 *)stream;
    register u8 c asm("v1") = data[pos];
    pos++;
    stream->unk_0x0 = pos;
    t = a << 16;
    if (e->unk_0x294 < pos) { stream->unk_0x20 = 1; b = -1; }
    else b = c;
}
        {
    register Unk_800944B8 *base asm("a0") = D_800944B8;
    Unk_800944B8 *e = &base[D_80078C9C];
    register u8 *data asm("v1") = *(u8 *volatile *)&e->unk_0x284;
    register u32 pos asm("a0") = *(volatile u32 *)stream;
    register u8 byte asm("a1") = data[pos];
    pos++;
    { register s32 mid asm("v1") = b << 8;
    stream->unk_0x0 = pos;
    t |= mid; }
    if (e->unk_0x294 < pos) { stream->unk_0x20 = 1; c = -1; }
    else c = byte;
}
        t |= c;
        { register u32 num asm("v0") = 60000000; bpm = num / t; }
        bpm = (bpm * 100) / 115;
        if (bpm >= 0x100) bpm = 0xFF;
        switch(D_800944B8[D_80078C9C].unk_0x2A4) {
        case 0x18:
        case 0x3C: bpm >>= 1; break;
        case 0x1E: bpm >>= 2; break;
        }
        {
            Unk_800944B8 *base = D_800944B8;
            register s32 idx asm("a1") = D_80078C9C;
            register u32 count asm("v0") = base[idx].unk_0x2A2;
            register u32 i asm("a0") = 0;
            if (count != 0) {
                Unk_800944B8 *b2 = base;
                u32 off = 0;
                do {
                    register u32 offset asm("v0") = idx * 0x2AC;
                    register Unk_800944B8Stream *line asm("v1") = (Unk_800944B8Stream *)(off + offset + (u32)b2);
                    line->unk_0x16 = bpm;
                    line->unk_0x14 = bpm;
                    off += 0x28;
                } while (b2[idx].unk_0x2A2 > ++i);
            }
        }
        return;
    case 0x54:
        base = D_800944B8;
        {
            register u32 pos asm("a0") = stream->unk_0x0;
            pos++;
            stream->unk_0x0 = pos;
            if (base[D_80078C9C].unk_0x294 < pos) stream->unk_0x20 = 1;
        }
        {
            register u32 pos asm("a0") = stream->unk_0x0;
            pos++;
            stream->unk_0x0 = pos;
            if (base[D_80078C9C].unk_0x294 < pos) stream->unk_0x20 = 1;
        }
        {
            register u32 pos asm("a0") = stream->unk_0x0;
            pos++;
            stream->unk_0x0 = pos;
            if (base[D_80078C9C].unk_0x294 < pos) stream->unk_0x20 = 1;
        }
        goto skip3;
    case 0x58:
        {
            register Unk_800944B8 *base asm("a0") = D_800944B8;
            register u32 pos asm("a1") = stream->unk_0x0;
            pos++;
            stream->unk_0x0 = pos;
            if (base[D_80078C9C].unk_0x294 < pos) stream->unk_0x20 = 1;
        }
        func_8003AC60((u8 *)stream);
        return;
    case 0x59:
        base = D_800944B8;
    skip3:
        {
            register u32 pos asm("a0") = stream->unk_0x0;
            pos++;
            stream->unk_0x0 = pos;
            if (base[D_80078C9C].unk_0x294 < pos) stream->unk_0x20 = 1;
        }
        {
            register u32 pos asm("a0") = stream->unk_0x0;
            pos++;
            stream->unk_0x0 = pos;
            if (base[D_80078C9C].unk_0x294 < pos) stream->unk_0x20 = 1;
        }
        {
            register u32 pos asm("a0") = stream->unk_0x0;
            pos++;
            stream->unk_0x0 = pos;
            if (base[D_80078C9C].unk_0x294 < pos) stream->unk_0x20 = 1;
        }
        return;

    }
    stream->unk_0x0 += func_8003AAF0((u8 *)stream);
}

s32 func_8003B6F4(u8 *s) {
    u32 i = 0;
    u32 n = func_8003AAF0(s);
    s32 result;
    register s32 more asm("v0");
    do {
        Unk_800944B8 *e = &D_800944B8[D_80078C9C];
        u32 pos = *(u32 *)s;
        u8 c = e->unk_0x284[pos];
        *(u32 *)s = ++pos;
        i++;
        if (e->unk_0x294 < pos) { s[0x20] = 1; result = -1; }
        else result = c;
        if ((u8)result == 0xF7) {
            more = i < n;
            break;
        }
        more = i < n;
    } while (more);
    return more;
}

s32 func_8003B6F4(u8 *s) {
    u32 i = 0;
    u32 n = func_8003AAF0(s);
    s32 result;
    register s32 more asm("v0");
    do {
        Unk_800944B8 *e = &D_800944B8[D_80078C9C];
        u32 pos = *(u32 *)s;
        u8 c = e->unk_0x284[pos];
        *(u32 *)s = ++pos;
        i++;
        if (e->unk_0x294 < pos) { s[0x20] = 1; result = -1; }
        else result = c;
        if ((u8)result == 0xF7) {
            more = i < n;
            break;
        }
        more = i < n;
    } while (more);
    return more;
}

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

void func_8003C73C(void) {
    extern Unk_800947E8 D_800947E8[];
    extern s32 D_80094768[];
    extern s32 D_80078D64;
    s32 i;
    for (i = 0; i < 16; i++) {
        D_800947E8[i].unk_0x0 = -1;
        D_800947E8[i].unk_0x19 = 0x7F;
        D_800947E8[i].unk_0x1A = 0x7F;
        D_800947E8[i].unk_0x1B = 0x40;
        {
            s32 *q = &D_80094768[i * 2];
            q[1] = 0;
            q[0] = 0;
        }
    }
    for (i = 0; i < 1; i++) {
        Unk_800944B8Init *e = &((Unk_800944B8Init *)D_800944B8)[i];
        e->unk_0x288 = -1;
        e->unk_0x28A = 0;
        e->unk_0x28E = 0x7F;
        e->unk_0x28C = 0x7F;
    }
    D_80078D64 = 0x1000;
}

#include "common.h"

extern u8 D_800949A8[];

void func_8003C7C8(void) {
    SpuInit();
    func_80038890();
    func_8003C73C();
    SpuInitMalloc(0x10, D_800949A8);
}
