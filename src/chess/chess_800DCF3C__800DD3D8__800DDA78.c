#include "ghidra.h"
#include "common.h"

#include "common.h"

typedef struct {
    s16 vx, vy, vz, pad;
    s16 dx, dx_pad;
    s16 dz, dz_pad;
    s16 sx, sy;
    s32 p;
    s32 flag;
} S_800EFCF4_Work;

typedef struct { u8 b[4]; } U4_800DD;

typedef struct {
    u8 pad0[0x10];
    u32 a;
    u32 b;
    u8 pad18[0x24];
} S_800DD_Tab;

typedef struct {
    u8 pad0[0x13];
    u8 f13;
    u8 pad14[0x28];
} S_800DD_Tab8;

void func_800DDA78(void *arg0) {
    extern u8 D_80018600[];
    extern int func_800DD920();
    void *temp_v0;

    temp_v0 = func_80015B3C(&func_800DD920, D_80018600, 1);
    M2C_FIELD(temp_v0, void **, 0x14) = arg0;
    func_800FE188(arg0, temp_v0 + 0x2C);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) | 0x80000000);
}

s32 func_800DDAD4(u8 *arg0, s32 arg1) {
    extern S_800DD_Tab D_80063940[];
    u32 x = D_80063940[arg0[0]].a;
    u32 lo = x >> 30;
    s32 m = (((D_80063940[arg0[0]].b & 3) << 2) | lo) * 8 + 0x100;
    return (s32)((x >> 24) & 0x3F) * m / arg1;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78", func_800DDB38);

void func_800DDBC8(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    extern int func_800DDEDC();
    s32 var_a0;
    s32 var_s0;
    void *temp_v0;

    var_s0 = 0;
    do {
        if (var_s0 == 0) {
            var_a0 = M2C_FIELD(arg0, s32 *, 0x70);
        } else {
            var_a0 = M2C_FIELD(arg0, s32 *, 0x74);
        }
        temp_v0 = func_80020CE4(var_a0, &func_800DDEDC, 5);
        M2C_FIELD(temp_v0, s8 *, 0x5A) = arg3;
        M2C_FIELD(temp_v0, s8 *, 0x59) = arg3;
        M2C_FIELD(temp_v0, s8 *, 0x58) = arg3;
        M2C_FIELD(temp_v0, s32 *, 0x84) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (((M2C_FIELD(temp_v0, s32 *, 0x38) | 0x40) & ~0x30) | 0x10);
        M2C_FIELD(temp_v0, u16 *, 0x6A) = (u16) M2C_FIELD(arg1, u16 *, 0);
        M2C_FIELD(temp_v0, u16 *, 0x6E) = (u16) M2C_FIELD(arg1, u16 *, 2);
        var_s0 += 1;
        M2C_FIELD(temp_v0, u16 *, 0x72) = (u16) M2C_FIELD(arg1, u16 *, 4);
    } while (var_s0 < 2);
}

void func_800DDC98(void *arg0, void *arg1, s32 arg2, s8 arg3) {
    extern int func_800DDEDC();
    void *temp_v0;

    temp_v0 = func_80020CE4(M2C_FIELD(arg0, s32 *, 0x70), &func_800DDEDC, 5);
    M2C_FIELD(temp_v0, s8 *, 0x5A) = arg3;
    M2C_FIELD(temp_v0, s8 *, 0x59) = arg3;
    M2C_FIELD(temp_v0, s8 *, 0x58) = arg3;
    M2C_FIELD(temp_v0, s32 *, 0x84) = arg2;
    M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (((M2C_FIELD(temp_v0, s32 *, 0x38) | 0x40) & ~0x30) | 0x10);
    M2C_FIELD(temp_v0, u16 *, 0x6A) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(temp_v0, u16 *, 0x6E) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(temp_v0, u16 *, 0x72) = (u16) M2C_FIELD(arg1, u16 *, 4);
}

void func_800DDD34(u8 *arg0) {
    extern u8 D_80069AD4[];
    extern u8 D_8008ED68[];
    u8 *ed = D_8008ED68;
    u8 *d;
    s32 total;
    s32 cur;
    s32 rem;
    s32 v;
    s32 a;
    register s32 b asm("v0");

    total = *(u16 *)(arg0 + 0x32);
    *(u16 *)(arg0 + 0x34) += (ed[0x103] >= 2U) ? ed[0x103] : 1;
    cur = *(u16 *)(arg0 + 0x34);
    rem = total - cur;
    if (rem < 0) {
        func_80013920(arg0);
        return;
    }
    a = arg0[0x28] * rem;
    b = arg0[0x2C] * cur;
    v = ((a + b) << 12) / total;
    d = D_80069AD4;
    if (v < 0) {
        v += 0xFF;
    }
    *(s16 *)(d + 0x70) = v >> 8;
    a = arg0[0x29] * rem;
    b = arg0[0x2D] * cur;
    v = ((a + b) << 12) / total;
    if (v < 0) {
        v += 0xFF;
    }
    *(s16 *)(d + 0x76) = v >> 8;
    a = arg0[0x2A] * rem;
    b = arg0[0x2E] * cur;
    v = ((a + b) << 12) / total;
    if (v < 0) {
        v += 0xFF;
    }
    *(s16 *)(d + 0x7C) = v >> 8;
}

void func_800DDE7C(u8 *arg0) {
    extern u8 D_8008ED68[];
    u8 *ed = D_8008ED68;
    s32 v = *(s32 *)(arg0 + 0x3C);

    if (ed[0x103] >= 2U) {
        v += ed[0x103];
    } else {
        v += 1;
    }
    *(s32 *)(arg0 + 0x3C) = v;
    if (*(u32 *)(arg0 + 0x84) < v) {
        func_80013920();
    }
}

void func_800DDEDC(u8 *arg0) {
    extern u8 D_8008ED68[];
    u8 *ed = D_8008ED68;
    s32 v;
    s16 buf[3];

    v = *(s32 *)(arg0 + 0x3C);
    if (ed[0x103] >= 2U) {
        v += ed[0x103];
    } else {
        v += 1;
    }
    *(s32 *)(arg0 + 0x3C) = v;
    if (*(u32 *)(arg0 + 0x84) < v) {
        func_80013920(arg0);
    } else {
        buf[0] = *(u16 *)(arg0 + 0x6A);
        buf[1] = *(u16 *)(arg0 + 0x6E);
        buf[2] = *(u16 *)(arg0 + 0x72);
        func_800FF0A0(arg0, buf, 0);
    }
}

s32 func_800DDF6C(s32 arg0, u8 *arg1, u8 *arg2) {
    extern u8 D_8008ED68[];
    extern s32 D_80119710[];
    extern s32 D_80119714[];
    extern s32 func_80034AB0();
    u8 *ed = D_8008ED68;

    switch (*(u16 *)(ed + 0xEC)) {
    case 0: {
        s32 v = arg2[0];
        arg2[0x17] = 0x88;
        arg2[0x23] = 1;
        switch (v) {
        case 6:
            *(s16 *)(ed + 0x9EC) = 0x14;
            *(s16 *)(ed + 0x9EE) = -0x7FF1;
            break;
        case 0x31:
            *(s16 *)(ed + 0x9EC) = 0x14;
            *(s16 *)(ed + 0x9EE) = 0x85;
            break;
        case 0x5B:
            *(s16 *)(ed + 0x9EC) = 1;
            *(s16 *)(ed + 0x9EE) = -0x7FF0;
            break;
        }
        {
            u8 *q = D_8008ED68;
            *(u16 *)(q + 0xEC) += 1;
            D_80119714[0] = 0;
        }
        break;
    }
    case 1: {
        s32 *t = D_80119710;
        struct { s16 a; u16 b; } *p = (void *)(ed + 0x9EC);
        if (t[1] == p->a) {
            func_80034AB0(p->b);
        }
        if (*(s32 *)(*(u8 **)(arg2 + 0x70) + 0x1C) != 0) {
            return 0;
        }
        t[1] = 0;
        *(u16 *)(ed + 0xEC) += 1;
        break;
    }
    case 2:
        if (D_80119714[0] < 0x1E) {
            break;
        }
    case 99:
        arg1[0x60D] = 2;
        return 1;
    }
    return 0;
}

void func_800DE0F4(u8 *arg0) {
    extern u8 D_8008ED68[];
    extern s32 D_80119714[];
    extern u8 D_8011974C[];
    register s32 n50 asm("s2") = 0x32;
    register s32 n60 asm("s3") = 0x3c;
    s32 cnt;
    s32 st;
    register s32 t asm("v0");
    register s32 u asm("v1");
    u8 *q;

    st = arg0[0x15];
    cnt = *(s16*)(arg0 + 0x16);
    cnt = cnt + 1;
    switch (st) {
    case 0: {
        register s32 k asm("v1") = 0x12C;
        t = (cnt * 0x7F) / n50;
        u = (cnt * k) / n50;
        arg0[0x32] = t;
        arg0[0x31] = t;
        arg0[0x30] = t;
        *(s16*)(arg0 + 0x34) = u;
        *(s16*)(arg0 + 0x38) = u;
        if (cnt >= 0x32) {
            func_800FBB90(0x1E, cnt);
            st = 1;
            cnt = 0;
        } else {
            break;
        }
    }
    case 1:
        t = cnt < n50;
        if (t) {
            break;
        }
        func_800FE958(0x190, 0, -0x12C);
        D_8011974C[0] = 1;
        st += 1;
        cnt = 0;
    case 2:
        t = ((n60 - cnt) * 0xFF) / n60;
        arg0[0x32] = t;
        arg0[0x31] = t;
        arg0[0x30] = t;
        t = cnt < n60;
        if (t) {
            break;
        }
    case 3:
        func_80013920(arg0);
        q = D_8008ED68;
        D_80119714[0] = 0;
        *(u16*)(q + 0xEC) = *(u16*)(q + 0xEC) + 1;
        return;
    }
    *(s16*)(arg0 + 0x16) = cnt;
    arg0[0x15] = st;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78", func_800DE26C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78", func_800DE518);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78", func_800DE944);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78", func_800DED1C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800DD3D8__800DDA78", func_800DF3A0);
