#include "common.h"

s32 func_800CC1FC(s32 a0, u16 a1, u16 a2) {
    typedef struct {
        u8 pad[0xC];
        u32 unkC;
        u8 pad2[0x8];
        u32 unk18;
        u8 pad3[0x20];
    } Entry3C;
    extern Entry3C D_80063940[];
    extern u8 D_8006B1D4[];
    extern u8 D_80100F38[];
    extern s32 func_800B1260(s32);
    extern void func_80034AB0(s32);
    register s32 var asm("a0");
    register u8 *base asm("v1");
    register s32 offset asm("v0");
    register u8 *tbl asm("a2");
    register u32 w asm("v0");
    u8 *p;
    u16 v;

    p = D_80100F38 + (u16)func_800B1260(a0) * 0x79C;
    var = 3;
    if (a2 != 1) {
        if (*(s16 *)(p + 0x37E) == 0) {
            return 0;
        }
        w = D_80063940[a1].unk18;
        var = w & 3;
    }

    v = var;
    if (v == 0) {
        return 0;
    }

    switch ((s32)v) {
    case 1:
    case 3:
        tbl = D_8006B1D4;
        base = var * 6 + tbl;
        offset = (D_80063940[a1].unkC >> 3) & 6;
        break;
    case 2:
    default:
        base = D_8006B1D4;
        offset = var * 6;
        break;
    }

    func_80034AB0(*(u16 *)(offset + (u32)base));
    return 1;
}

void func_800CC34C(void) {
    extern s32 D_800F19C8[2][6][3];
    extern u8 D_80103CE8[8][8];
    register s32 i asm("a2");
    register s32 j asm("a0");
    s32 off, col, k;
    register s32 rowoff asm("a3");
    u8 *row;
    u8 *base;
    i = 0;
    base = (u8 *)D_800F19C8;
    off = 0;
    do {
        j = 0;
        rowoff = off;
        col = 0;
        do {
            s32 *p;
            k = 2;
            p = (s32 *)(col + (rowoff + (u32)base) + 8);
            do {
                *p-- = 0;
                k--;
            } while (k >= 0);
            j++;
            col += 12;
        } while (j < 6);
        i++;
        off += 72;
    } while (i < 2);
    i = 0;
    row = (u8 *)D_80103CE8;
    do {
        u8 *p;
        j = 7;
        p = row + 7;
        do {
            *p-- = 0;
            j--;
        } while (j >= 0);
        i++;
        row += 8;
    } while (i < 8);
}


void func_800CC3E4(void) {
    extern M2C_UNK D_80103CE8[];
    func_8001A998(D_80103CE8, 0x40);
}

#include "common.h"

void func_800CC40C(void) {
    extern M2C_UNK D_800EFFEC[];
    extern M2C_UNK D_80103CE8[];
    func_8001AA70(D_80103CE8, D_800EFFEC, 0x40);
}

#include "common.h"

void func_800CC43C(void) {
    extern M2C_UNK D_800EFFEC[];
    extern M2C_UNK D_80103CE8[];
    func_8001AA70(D_800EFFEC, D_80103CE8, 0x40);
}

void func_800CC46C(s32 a0, s32 a1, s32 a2, s32 a3) {
    extern struct { u8 pad[0x12]; u16 count; u8 pad2[0x1A8 - 0x14]; } D_80091618[];
    extern s16 D_800F1958[];
    extern s16 D_800F1928[];
    extern struct { u8 *e[3]; } D_800F19C8[];
    u32 count;
    u16 i;
    s32 val;
    u16 k;
    u8 *p;

    if (a0 == 2) {
        return;
    }

    count = D_80091618[a1].count;
    for (i = 0; i < count; i++) {
        u32 idx = i;
        register s32 temp asm("v1") = (D_800F1958[a2] * a3) / 60 + D_800F1928[a2];
        val = temp;
        if (temp < 0) {
            val = temp + 0xFF;
        }
        val >>= 8;
        val <<= 8;
        val = temp - val;
        k = func_800B1260(a0);
        p = D_800F19C8[k].e[idx];
        p[0x5a] = val;
        p[0x59] = val;
        p[0x58] = val;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC5D4);

void func_800CC808(u8 *obj) {
    s16 v;
    func_800CC5D4();
    v = *(s16 *)(obj + 0x4e);
    if (v > 0) {
        *(s16 *)(obj + 0x52) = 0x16C000 / v;
        *(s16 *)(obj + 0x50) = *(s16 *)(obj + 0x52) & 0xFFF0;
        *(s16 *)(obj + 0x52) = *(s16 *)(obj + 0x52) & 0xFFF0;
    }
}

#include "common.h"

void func_800CC868(void *arg0) {
    extern s16 D_80078C20[];
    extern u16 D_8008EE44[];
    if (((((u32) M2C_FIELD(arg0, u32 *, 0x34) >> 8) & 1) != (*D_80078C20)) || ((*D_8008EE44) == 0x41)) {
        func_80013920();
        return;
    }
    func_800CC5D4();
}

void func_800CC8C4(u8 *obj) {
    extern s16 D_80078C20[];
    extern u16 D_8008EE44[];
    s16 v;
    if (((*(u32 *)(obj + 0x34) >> 8) & 1) != *D_80078C20) {
        func_80013920();
    } else if (*D_8008EE44 == 0x41) {
        func_80013920(obj);
    } else {
        func_800CC5D4(obj);
        v = *(s16 *)(obj + 0x4e);
        if (v > 0) {
            *(s16 *)(obj + 0x52) = 0x16C000 / v;
            *(s16 *)(obj + 0x50) = *(s16 *)(obj + 0x52) & 0xFFF0;
            *(s16 *)(obj + 0x52) = *(s16 *)(obj + 0x52) & 0xFFF0;
        }
    }
}

#include "common.h"

extern s16 D_80078C20[];
extern u16 D_8008EE44[];

s32 func_800CC974(u8 *obj) {
    u32 w = *(u32 *)(obj + 0x34);
    s32 b9 = (w >> 9) & 1;
    s32 b10 = (w >> 10) & 3;

    if (((w >> 8) & 1) != (*D_80078C20) || (*D_8008EE44) == 0x41) {
        return func_80013920(obj, b9, b10);
    }
    return func_800CC5D4(obj, b9, b10);
}

void func_800CC9E4(u8 *obj) {
    s16 v;
    u32 w = *(u32 *)(obj + 0x34);
    s32 b9 = (w >> 9) & 1;
    s32 b10 = (w >> 10) & 3;
    if (((w >> 8) & 1) != *D_80078C20) {
        func_80013920();
    } else if (*D_8008EE44 == 0x41) {
        func_80013920(obj, b9, b10);
    } else {
        func_800CC5D4(obj, b9, b10);
        v = *(s16 *)(obj + 0x4e);
        if (v > 0) {
            *(s16 *)(obj + 0x52) = 0x16C000 / v;
            *(s16 *)(obj + 0x50) = *(s16 *)(obj + 0x52) & 0xFFF0;
            *(s16 *)(obj + 0x52) = *(s16 *)(obj + 0x52) & 0xFFF0;
        }
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CCAA8);

void func_800CCF2C(s32 a0, s32 a1, s32 a2) {
    extern struct { u8 *e[3]; } D_800F19C8[];
    u16 k = func_800B1260(a0);
    u8 *p;
    p = D_800F19C8[k].e[a1];
    *(u32 *)(p + 0x38) = (*(u32 *)(p + 0x38) & ~0x40) | ((a2 & 1) << 6);
}

void func_800CCFA4(s32 a0, s32 a1, s32 a2) {
    extern u8 D_80100F38[];
    extern struct { u8 pad[0x14]; u16 ids[4]; s32 coords[3][3]; u8 rest[0x168]; } D_80091618[];
    extern u8 *D_800F19C8[][6][3];
    extern u16 D_80069AB4[];
    extern s32 func_800B1260(s32);
    extern void func_800CD1A0(s32, s16, s32, s32);
    extern void func_800A8E78(s32);
    s32 k = (u16)func_800B1260(a0);
    switch (a2) {
    case 1: {
        *(s32 *)((u8 *)D_800F19C8[0][k][a1] + 0x38) &= ~1;
        *(s32 *)((u8 *)D_800F19C8[1][k][a1] + 0x38) &= ~1;
        break;
    }
    case 0: {
        u8 *q;
        u16 x, y, n;
        *(s32 *)((u8 *)D_800F19C8[0][k][a1] + 0x38) |= 1;
        *(s32 *)((u8 *)D_800F19C8[1][k][a1] + 0x38) |= 1;
        n = D_80091618[k].ids[a1];
        q = (u8 *)&D_80091618[k].coords[a1];
        x = *(u16 *)q;
        if (*(s16 *)q == -1 || (y = *(u16 *)(q + 4), *(s16 *)(q + 4) == -1)) {
            u8 *p = D_80100F38;
            u8 *r = k * 0x79C + p;
            x = *(u16 *)(r + 0x336);
            y = *(u16 *)(r + 0x338);
        }
        func_800CD1A0(a0, (s16)(D_80069AB4[n] - 1), (s16)x, (s16)y);
        func_800A8E78((s32)D_800F19C8[0][k][a1]);
        func_800A8E78((s32)D_800F19C8[1][k][a1]);
        D_800F19C8[0][k][a1] = 0;
        D_800F19C8[1][k][a1] = 0;
        break;
    }
    }
}

extern u8 D_800F19C8[];
extern u8 D_800EFF58[];
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);
extern s16 func_800A9658(s16);
extern void func_800CD6E0(s32, s32);
void func_800CD1A0(s32 arg0, s16 arg1, s32 arg2, s32 arg3) {
    u8 *base;
    u8 *p;
    s16 temp_a0;
    s16 var_a2;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    s32 ret;
    u8 *row;

    ret = func_800A9658(arg1);
    var_a2 = 0;
    arg0 = arg0 != 1;
    temp_a3 = ret << 16;
    if (temp_a3 > 0) {
        temp_a1 = arg1 + 1;
        p = D_800EFF58;
        base = p + (arg0 << 6) + 0x94;
        do {
            temp_v0 = var_a2 / temp_a1;
            temp_v1 = var_a2 % temp_a1;
            temp_a0 = var_a2 + 1;
            var_a2 = temp_a0;
            temp_v0 = (s16)temp_v0 + 1;
            row = (u8 *)(((s16)arg2 - temp_v0) * 8 + (u32)base);
            temp_v1 = (s16)temp_v1 + 1;
            row[(s16)arg3 - temp_v1] = 0;
        } while ((temp_a0 << 16) < temp_a3);
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CD288);

void func_800CD418(s32 a0) {
    extern u8 D_80091618[], D_800F19C8[];
    register u8 *base asm("a1");
    register u8 *e asm("v1");
    u16 k = func_800B1350(a0);
    base = D_80091618;
    e = base + k * 0x1A8;
    {
        u16 n = *(u16 *)(e + 0x12);
        u16 i = 0;
        u8 *s3 = D_800F19C8 + k * 12;
        u8 *s4 = s3 + 0x48;

        for (; i < 3; i++) {
            if (i >= n) {
                *(s32 *)(s3 + i * 4) = 0;
                *(s32 *)(s4 + i * 4) = 0;
            } else {
                register s32 mask asm("a0");
                u32 off = i * 4;
                u8 **a = (u8 **)(off + (u32)s3);
                u8 **b = (u8 **)(off + (u32)s4);
                func_800A8E78((s32)*a);
                func_800A8E78((s32)*b);
                mask = ~1;
                *(s32 *)(*a + 0x38) &= mask;
                *(s32 *)(*b + 0x38) &= mask;
            }
        }
    }
}

void func_800CD530(s32 arg0) {
    extern u8 D_80091618[];
    extern u8 D_80100F38[];
    s32 idx = func_800B1260(arg0) & 0xFFFF;
    u8 *e = D_80091618 + idx * 0x1A8;
    u8 *rec = D_80100F38 + idx * 0x79C;
    u16 a3 = *(u16 *)(rec + 0x2C2);
    u16 t1 = *(u16 *)(rec + 0x336);
    s16 mode = *(s16 *)(rec + 0x2C0);
    u16 v1 = *(u16 *)(rec + 0x338);

    switch (mode) {
    case 1:
        *(s32 *)(e + 0x44) = (s16)t1;
        *(u16 *)(e + 0x40) = a3;
        *(s32 *)(e + 0x48) = (s16)v1;
        func_800C59F4(arg0, 1, (s16)a3);
        func_800CD9F4(arg0, 0);
        break;

    case 2:
        *(s32 *)(e + 0x54) = (s16)t1;
        *(u16 *)(e + 0x50) = a3;
        *(s32 *)(e + 0x58) = (s16)v1;
        func_800C5B30(arg0, 1, (s16)a3 - 8);
        func_800CD9F4(arg0, 1);
        break;
    }
}

void func_800CD654(s32 arg0) {
    extern u8 D_80100F38[];
    u8 *rec = D_80100F38 + (func_800B1260(arg0) & 0xFFFF) * 0x79C;

    switch (*(s16 *)(rec + 0x2C0)) {
    case 1:
        func_800CD6E0(arg0, 0);
        break;
    case 2:
        func_800CD6E0(arg0, 1);
        break;
    }
}

static inline u32 calc_dist_800CD6E0(s32 a, s16 b) {
    double d1 = (double)a;
    double d2 = (double)b;
    return func_8001AB74((u32)(d1 * d2));
}
void func_800CD6E0(s32 a0, s32 a1) {
    extern u8 D_80100F38[], D_8008ED68[];
    extern s16 D_800F1A64[];
    extern u16 D_800F1A58[];
    extern s32 func_800B1260(s32), func_8001AB74(u32), func_800C5888(s32), func_800C593C(s32);
    extern void func_80034AB0(s32);

    u8 pad[4];
    s32 s4 = 1 - a0;
    u16 k = func_800B1260(a0);
    u8 *p = D_80100F38 + k * 0x79C;

    switch (*(s16 *)(p + 0x22A)) {
    case 0:
        if (*(s16 *)(p + 0x224) != 0) {
            s16 y;
            double d1, d2;
            u8 *q;
            s16 t;
            s16 prod;
            *(u16 *)(p + 0x224) -= 1;
            y = *(u16 *)(p + 0x1DE) + *(u16 *)(p + 0x226);
            *(u16 *)(p + 0x1DE) = y;
            d1 = (double)*(s32 *)(p + 0x22C);
            d2 = (double)y;
            *(s16 *)(p + 0x1DC) = func_8001AB74((u32)(d1 * d2));
            if (*(s16 *)(p + 0x1E4) < 0) {
                s32 neg = -(s32)*(s16 *)(p + 0x1DC);
                *(s16 *)(p + 0x1DC) = neg;
            }
            q = D_8008ED68;
            *(s16 *)(*(u8 **)(p + 0x21C) + 0x46) = *(u16 *)(p + 0x1DC) - *(s32 *)(q + 0x108) / 2;
            *(s16 *)(*(u8 **)(p + 0x21C) + 0x4A) = *(u16 *)(p + 0x1DE) - *(s32 *)(q + 0x10C) / 2;
            prod = (s16)(((s16)(*(u16 *)(p + 0x1E8) - *(u16 *)(p + 0x1E0))) * (D_800F1A64[s4] - *(s16 *)(p + 0x224)));
            t = D_800F1A64[s4];
            *(s16 *)(*(u8 **)(p + 0x21C) + 0x4E) = *(u16 *)(p + 0x1E0) + (prod / t);
        } else {
            u8 *q;
            func_80034AB0(0x8B);
            *(u16 *)(p + 0x22A) = 1;
            *(u16 *)(p + 0x224) = 0x20;
            q = D_8008ED68;
            *(s16 *)(*(u8 **)(p + 0x21C) + 0x46) = *(u16 *)(p + 0x1E4) - *(s32 *)(q + 0x108) / 2;
            *(s16 *)(*(u8 **)(p + 0x21C) + 0x4A) = *(u16 *)(p + 0x1E6) - *(s32 *)(q + 0x10C) / 2;
            *(u16 *)(*(u8 **)(p + 0x21C) + 0x4E) = *(u16 *)(p + 0x1E8);
        }
        break;
    case 1:
        if (*(s16 *)(p + 0x224) != 0) {
            *(u16 *)(p + 0x224) -= 1;
        } else {
            *(u16 *)(p + 0x22A) = 2;
            *(u16 *)(p + 0x222) = 4;
            *(u16 *)(p + 0x224) = 8;
        }
        break;
    case 2:
        if (*(s16 *)(p + 0x222) != 0) {
            *(u16 *)(p + 0x222) -= 1;
            break;
        }
        switch (a1) {
        case 0:
            *(u16 *)(p + 0x222) = func_800C5888(a0);
            break;
        case 1:
            *(u16 *)(p + 0x222) = func_800C593C(a0);
            break;
        }
        if ((*(s16 *)(p + 0x224) -= 1) == 0) {
            *(u16 *)(p + 0x22A) = 3;
        }
        break;
    case 3:
        *(u16 *)(p + 0x228) = 0;
        D_800F1A58[k] = 1;
        break;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CD9F4);

void func_800CDFDC(s32 arg0) {
    extern u8 D_80100F38[];
    extern u8 D_80091618[];
    u16 k = func_800B1260(arg0);
    u8 *rec = D_80100F38 + k * 0x79C;

    func_800BA1D8(arg0);
    if (func_800E14C4(k) == 0) {
        s16 val = (*(s16 *)(rec + 0x37C) + 1) % 0x7FFF;
        *(s16 *)(rec + 0x37C) = val;
        if (*(s32 *)(rec + 0x2B8) == 0x30005) {
            s32 r = func_800D0CFC(arg0);
            s32 a1 = 1;
            if (r == 1) {
                a1 = 2;
            }
            func_80028200(*(u16 *)(D_80091618 + k * 0x1A8), a1);
        } else if ((val & 0xF) == 0xF) {
            func_80028200(*(u16 *)(D_80091618 + k * 0x1A8), 0);
        }
    }
}

#include "ghidra.h"
int func_800CE128(int param_1)

{
    extern s16 D_80069BBE[];
  int iVar1;
  
  iVar1 = (int)(*D_80069BBE);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x1ff;
  }
  param_1 = param_1 + (iVar1 >> 9);
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = param_1 + 7;
  }
  return param_1 + (iVar1 >> 3) * -8;
}
