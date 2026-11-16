#include "common.h"
#include "yuugi.h"

static inline u32 distance_sqrt(u32 n) {
    u32 x;
    u32 y;
    if (n == 0) {
        return 0;
    }
    x = 1;
    y = n;
    while (x < y) {
        x <<= 1;
        y >>= 1;
    }
    do {
        y = x;
        x = (n / y + y) >> 1;
    } while (x < y);
    return y;
}

static inline s32 distance_abs(s32 value) {
    if (value < 0) {
        value = -value;
    }
    return value;
}

s32 func_8001AA44(s32 arg0, s32 arg1) {
    s32 var_a2;
    s32 var_v1;

    var_a2 = 1;
    var_v1 = 0;
    if (arg1 > 0) {
        do {
            var_v1 += 1;
            var_a2 *= arg0;
        } while (var_v1 < arg1);
    }
    return var_a2;
}

void func_8001AA70(void *dst, void *src, s32 n) {
    struct { s32 *s; s32 *d; } p4;
    struct { u16 *s; u16 *d; } p2;
    u8 *s1;
    u8 *d1;
    s32 i;
    if (((u32)src & 3) == 0 && ((u32)dst & 3) == 0 && (n & 3) == 0) {
        p4.s = src;
        p4.d = dst;
        for (i = n / 4 - 1; i >= 0; i--) {
            p4.d[i] = p4.s[i];
        }
    } else if (((u32)src & 1) == 0 && ((u32)dst & 1) == 0 && (n & 1) == 0) {
        p2.s = src;
        p2.d = dst;
        for (i = n / 2 - 1; i >= 0; i--) {
            p2.d[i] = p2.s[i];
        }
    } else {
        s1 = src;
        d1 = dst;
        for (i = n - 1; i >= 0; i--) {
            d1[i] = s1[i];
        }
    }
}

#include "common.h"

u32 func_8001AB74(u32 n) {
    u32 x = 1;
    u32 y;

    if (n == 0) {
        return 0;
    }
    y = n;
    while (x < y) {
        x <<= 1;
        y >>= 1;
    }
    do {
        y = x;
        x = (n / y + y) >> 1;
    } while (x < y);
    return y;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001AA44", func_8001ABD4);

void func_8001AD48(s32 arg0)
{
  int new_var2;
  int new_var;
 if (arg0 || new_var2) { new_var = 1; new_var2 = 2; } else { new_var = 1; new_var2 = 2; } do { func_8001ADF8(new_var, arg0, new_var2, new_var); } while (0);
}

void func_8001AD74(s32 arg0) {
    func_8001ADF8(0, arg0, 2, 1);
}

void func_8001ADA0(s32 arg0) {
    {
        register s32 matching_a0 __asm__("$4") = (3);
        register s32 matching_a1 __asm__("$5") = (arg0);
        register s32 matching_a2 __asm__("$6") = 1;
        __asm__ volatile("" : "=r"(matching_a0), "=r"(matching_a1), "=r"(matching_a2)
        : "0"(matching_a0), "1"(matching_a1), "2"(matching_a2));
        func_8001ADF8(matching_a0, matching_a1, matching_a2, matching_a2);
    }
}

void func_8001ADCC(s32 arg0) {
    {
        register s32 matching_a0 __asm__("$4") = (2);
        register s32 matching_a1 __asm__("$5") = (arg0);
        register s32 matching_a2 __asm__("$6") = 1;
        __asm__ volatile("" : "=r"(matching_a0), "=r"(matching_a1), "=r"(matching_a2)
        : "0"(matching_a0), "1"(matching_a1), "2"(matching_a2));
        func_8001ADF8(matching_a0, matching_a1, matching_a2, matching_a2);
    }
}

extern u8 D_8008ED68[];
extern u8 *func_80015B3C();
extern s32 func_8001AFA0(u8 *);
extern void func_80018440();
typedef enum { E0 = 0, E1 = 1, E2 = 2, E3 = 3 } MyEnum;
u8 *func_8001ADF8(MyEnum a0, s32 a1, MyEnum a2, s32 a3) {
    u8 *b = D_8008ED68;
    u8 *o = func_80015B3C(func_8001AFA0, func_80018440, 0);
    u8 *q;
    s32 w, h;

    *(s32 *)(o + 0x38) = a1;
    *(s32 *)(o + 0x3C) = a3;
    switch (a2) {
    case E0:
        *(u32 *)(o + 0x28) &= ~0x30;
        break;
    case E1:
        *(u32 *)(o + 0x28) = (*(u32 *)(o + 0x28) & ~0x30) | 0x10;
        break;
    case E2:
        *(u32 *)(o + 0x28) = (*(u32 *)(o + 0x28) & ~0x30) | 0x20;
        break;
    case E3:
        *(u32 *)(o + 0x28) |= 0x30;
        break;
    }
    *(s32 *)(o + 0x34) = a0;
    *(u32 *)(o + 0x28) = (*(u32 *)(o + 0x28) | 0x40) & ~1;
    switch (a0) {
    case E0:
    case E2:
        o[0x32] = 0;
        o[0x31] = 0;
        o[0x30] = 0;
        break;
    case E1:
    case E3:
        o[0x32] = 0xFF;
        o[0x31] = 0xFF;
        o[0x30] = 0xFF;
        break;
    }
    q = D_8008ED68;
    w = *(s32 *)(q + 0x108) / 2;
    *(s16 *)(o + 0x14) = -w;
    h = *(s32 *)(q + 0x10C) / 2;
    *(s16 *)(o + 0x18) = 0x140;
    *(s16 *)(o + 0x1A) = 0xF0;
    *(s16 *)(o + 0x16) = -h;
    *(s32 *)(b + 0xA68) = 1;
    return o;
}

#include "common.h"

extern s32 (*D_80063664[])(u8 *);

s32 func_8001AFA0(u8 *obj) {
    return D_80063664[*(u16 *)(obj + 0x40)](obj);
}

void func_8001AFDC(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x40) = (u16) (M2C_FIELD(arg0, u16 *, 0x40) + 1);
}

void func_8001AFF0(u8 *p) {
    switch (*(s32 *)(p + 0x34) & 1) {
    case 0:
        if ((s32)(p[0x30] + *(s32 *)(p + 0x38)) < 0xFF) {
            p[0x30] = p[0x30] + p[0x38];
            p[0x31] = p[0x31] + p[0x38];
            p[0x32] = p[0x32] + p[0x38];
        } else {
            p[0x32] = 0xFF;
            p[0x31] = 0xFF;
            p[0x30] = 0xFF;
            *(u16 *)(p + 0x40) += 1;
        }
        break;
    case 1:
        if ((s32)(p[0x30] - *(s32 *)(p + 0x38)) > 0) {
            p[0x30] = p[0x30] - p[0x38];
            p[0x31] = p[0x31] - p[0x38];
            p[0x32] = p[0x32] - p[0x38];
        } else {
            p[0x32] = 0;
            p[0x31] = 0;
            p[0x30] = 0;
            *(u16 *)(p + 0x40) += 1;
        }
        break;
    }
}
