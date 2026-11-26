#include "common.h"
#include "yuugi.h"

typedef struct {
    s16 x;
    s16 y;
    s32 f_4;
    u8 f_8[0x10];
} S_800637AC;
extern S_800637AC D_800637AC[];

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))
#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))
#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))
#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))
#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))
#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))
#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))
#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))
#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))
#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))
#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))
#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))
#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))
#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))
#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))
extern u32 D_80078BE0;
typedef struct {
    u8 pad00[0xC];
    u32 unk0C;
    u8 pad10[0x2C];
} S_80063940;
extern S_80063940 D_80063940[];
extern s8 D_80085429[];
typedef struct {
    s16 x, y, w, h;
} Rect;
extern Rect D_80078BE8[];
extern u8 D_8001033C[];
extern s32 DsControlB();
extern u16 D_8008EE44[];
extern s32 func_80012508(), _96_remove();
extern void ResetCallback(), ClearImage();
extern void DsDataCallback(), DsReadyCallback(), StopRCnt(), PadStop();
extern void StopCallback(), func_8004FDEC(), func_8004FDDC();
extern void func_8002E4D0();
extern u16 D_8005089C[];
extern s32 func_80033E5C();
extern u8 *func_80015B3C();
extern void func_80018600();
extern u8 D_80085428[];
extern void func_80015EF8(), func_800227D4(), func_800161C4();
extern s32 func_80019F30();
extern s32 (*D_80069AA4[])(void);
extern s32 (*D_80069AA4[])(void);
extern s32 (*D_80069AA4[])(void);
extern s32 (*D_80069AA4[])(void);
extern s32 (*D_80069AA4[])(void);
extern u8 D_8008ED68[];
s32 rand(void);
s32 rand(void);
extern s32 (*D_80069AA4[])(void);
extern s32 (*D_80069AA4[])(void);
extern s32 (*D_80069AA4[])(void);
extern s32 (*D_80069AA4[])(void);
extern s32 (*D_80069AA4[])(void);
extern s32 (*D_80069AA4[])(void);
extern s32 (*D_80069AA4[])(void);
extern s32 (*D_80069AA4[])(void);
extern s32 (*D_80069AA4[])(void);
extern s32 (*D_80069AA4[])(void);

void func_80021870(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern u8 D_8008ED68[];
    u8 *p = D_8008ED68;
    s32 temp_v1;
    s32 var_v0;
    if ((M2C_FIELD(p, s32 *, 0x990) == 1) || (M2C_FIELD(arg0, s32 *, 0x3C) != 0)) {
        func_80021618(arg0, arg1, arg2, arg3, arg4);
        if (M2C_FIELD(p, s32 *, 0x990) == 1) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C);
            if (M2C_FIELD(p, u8 *, 0x103) >= 2U) {
                var_v0 = temp_v1 + M2C_FIELD(p, u8 *, 0x103);
            } else {
                var_v0 = temp_v1 + 1;
            }
            M2C_FIELD(arg0, s32 *, 0x3C) = var_v0;
        }
    }
}

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

s32 func_80021910(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4) {
    extern u16 D_800638B4[][8];
    extern s32 func_800372B4();
    s32 ret = 1;
    s32 idx = 0;
    s32 val;

    if (arg3 >= 2) {
        arg3 = 1;
    }
    if (arg4 < 4) {
        if (arg4 == 2) {
            val = 0;
        } else {
            val = func_800372B4();
        }
    } else {
        val = 0;
    }
    if (val >= 0x17D) {
        if (arg2[5] == 0 || arg2[5] == 4) {
            idx = 2;
        } else {
            idx = 1;
        }
    } else if (val > 0) {
        idx = 0;
    } else {
        ret = 0;
    }
    if (ret != 0) {
        if (arg4 != 4) {
            *(s32 *)(arg0 + 0x18) = func_80019F30((arg3 != 0) ? 0x60013 : 0x6000E, D_800638B4[arg3][arg1] + idx);
        } else {
            *(s32 *)(arg0 + 0x18) = func_80019F30(0x6000A, idx | 0xA8);
        }
    }
    return ret;
}

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

s32 func_80021A4C(s32 arg0, s32 arg1) {
    s32 var_a2;
    s32 temp_v1;
    void *temp_a0;

    var_a2 = 0;
    temp_a0 = arg0 + 0x10;
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0xE);
    M2C_FIELD(temp_a0, s8 *, 2) = 1;
    M2C_FIELD(temp_a0, s16 *, 0xC) = (s16) (temp_v1 * 3);
    if (arg1 == 0) {
        var_a2 = M2C_FIELD(temp_a0, u16 *, 0xE) == 0;
    } else if ((u16) M2C_FIELD(temp_a0, u16 *, 0xE) >= 0x20U) {
        var_a2 = 1;
    }
    return var_a2;
}

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

s32 func_80021A9C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct Pad { u8 pad[0x88]; s32 btn; };
    extern u8 D_8008ED68[];
    s32 input;
    u32 test;
    register s32 ret asm("v0");
    register void *p asm("t0") = arg0 + 0x5D0;
    if (((arg3 < 2) || (arg3 == 5)) &&
        M2C_FIELD(p, u8 *, 0x10) && M2C_FIELD(p, u8 *, 0x11)) {
        return M2C_FIELD(arg0, u16 *, 0x1E) >= 31U;
    }
    if (M2C_FIELD(arg0, u8 *, 1)) {
        test = *(volatile u16 *)(arg0 + 0x1E) < 31U;
        goto invert;
    }
    if (arg1) {
        if (arg3 == 4) {
            struct Pad *base = (struct Pad *)D_8008ED68;
            ret = base->btn & 0x60;
            if (ret) goto one;
            ret = ((struct Pad *)((u8 *)base + 0x10))->btn & 0x60;
            if (ret) goto one;
            ret = 0;
            goto done;
one:
            ret = 1;
            goto done;
        }
        if (M2C_FIELD(p, u8 *, 0x11)) {
            arg2 = 0;
            goto input;
        }
    } else {
        arg2 = 0;
        goto input;
    }
    if (M2C_FIELD(p, u8 *, 0x10)) arg2 = 1;
input:
    {
        register u8 *base asm("v0") = D_8008ED68;
        register s32 bits asm("v1") = ((struct Pad *)(base + arg2 * 0x10))->btn;
        ret = bits & 0x20;
        if (ret) goto one;
        ret = bits & 0x40;
        if (ret) goto one;
    }
    test = M2C_FIELD(arg0, u16 *, 0x1E) < 181U;
invert:
    ret = test ^ 1;
done:
    return ret;
}

void func_80021BB4(void *p, s32 a1, s32 idx, s32 mode) {
    struct S_P {
        u8 pad[0x5E4];
        u8 unk5E4[0x10];
    };
    extern u16 D_800638B4[][8], D_80063894[][8];
    extern u8 *func_80015B3C();
    extern void func_80015EF8(), func_800214B0(), func_800161C4(), func_8003422C(), func_800374E8();
    extern s32 func_80019F30();
    void *v0 = p + 0x10;
    register u16 *s2 asm("s2") = M2C_FIELD(v0, u16 **, 4);
    s32 cnt = 0;
    s32 k, r, m;
    u32 m1;
    s32 s3_1, s3_2;
    u8 *o;

    M2C_FIELD(v0, s16 *, 0xE) = 0x20;
    if (mode != 2) {
        func_8003422C(0x8000);
    }
    s3_1 = ((struct S_P *)p)->unk5E4[idx];
    if (a1 >= 2) {
        k = 1;
    } else {
        k = a1;
    }
    o = func_80015B3C(func_800214B0, func_800161C4, 4);
    func_80015EF8(o);
    *(s16 *)(o + 0x46) = -0xA0;
    *(s16 *)(o + 0x4E) = 3;
    *(u32 *)(o + 0x30) = (*(u32 *)(o + 0x30) & ~0x1C0) | 0x40;
    if (mode != 4) {
        r = func_80019F30(k != 0 ? 0x60013 : 0x6000E, D_800638B4[k][s3_1] + 3);
    } else {
        r = func_80019F30(0x6000A, 0xAB);
    }
    *(s32 *)(o + 0x18) = r;
    if (mode == 0) {
        if (s3_1 == 6) {
            m1 = 7;
        } else if (s3_1 == 7) {
            m1 = 6;
        } else {
            m1 = s3_1;
        }
        *(s16 *)(o + 0x28) = (u32)(idx * 64 + 0xC0) - m1 * 32;
    }
    *(s32 *)(o + 0x80) = 1;
    *(s32 *)(o + 0x7C) = s3_1;
    *(s32 *)(o + 0x84) = mode;
    *(u32 *)(o + 0x38) |= 1;

    k = a1;
    s3_2 = ((struct S_P *)p)->unk5E4[idx];
    if (k >= 2) {
        k = 1;
    }
    o = func_80015B3C(func_800214B0, func_800161C4, 4);
    func_80015EF8(o);
    *(s16 *)(o + 0x46) = -0xA0;
    *(s16 *)(o + 0x4E) = 3;
    *(u32 *)(o + 0x30) = (*(u32 *)(o + 0x30) & ~0x1C0) | 0x40;
    if (mode != 4) {
        r = func_80019F30(k != 0 ? 0x60013 : 0x6000E, D_80063894[k][s3_2]);
    } else {
        r = func_80019F30(0x6000A, 0xA7);
    }
    *(s32 *)(o + 0x18) = r;
    if (mode == 0) {
        if (s3_2 == 6) {
            m = 7;
        } else if (s3_2 == 7) {
            m = 6;
        } else {
            m = s3_2;
        }
        *(s16 *)(o + 0x28) = (u32)(idx * 64 + 0xC0) - m * 32;
    }
    *(s32 *)(o + 0x7C) = s3_2;
    *(s32 *)(o + 0x80) = 0;
    *(s32 *)(o + 0x84) = mode;
    *(u32 *)(o + 0x38) |= 1;
    if (s2 != 0) {
        while (*s2 != 0xFFEE) {
            if (*s2 == 0xFFE0) {
                func_800374E8(s2[1]);
                return;
            }
            if (cnt++ >= 0x51) {
                break;
            }
            s2++;
        }
    }
}

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

void func_80021EA8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern u8 D_8008ED68[];
    s32 var_a0;
    s32 var_a1;
    register s32 test asm("v0");
    register u16 *temp_v0 asm("v0");
    register u16 *var_a0_2 asm("a0");
    register u16 *old asm("v1");
    register u16 temp_v1 asm("v1");
    u16 var_v1;
    u8 temp_v1_2;
    register void *temp_s2 asm("s2");
    register void *temp_s1 asm("s1");

    temp_s1 = arg0 + 0x10;
    temp_s2 = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(temp_s1, s16 *, 0xC) = 0;
    M2C_FIELD(temp_s1, s8 *, 2) = 1;
    if (((M2C_FIELD(temp_s2, u8 *, 0x12) != 0) || (M2C_FIELD(temp_s2, u8 *, 0xE) == 2)) && ((arg3 == 2) || !(func_800337EC() & 4)) && !(func_800337EC() & 1)) {
        var_v1 = M2C_FIELD(temp_s1, u16 *, 0xE);
        if (D_8008ED68[0x103] >= 2U) {
            var_v1 += D_8008ED68[0x103];
        } else {
            var_v1 += 1;
        }
        M2C_FIELD(temp_s1, u16 *, 0xE) = var_v1;
        var_a0 = 0xC8;
        test = 3;
        if (arg3 != test) {
            var_a0 = 0x128;
        }
        var_a1 = 0xD4;
        test = var_v1 & 0x10;
        if (test) {
            var_a1 = 0xD0;
        }
        func_8001EA24(var_a0, var_a1, 1, 0xEE, 0, 3);
    }
    if (func_80021A9C(arg0, arg1, arg2, arg3) != 0) {
        if (M2C_FIELD(temp_s2, u8 *, 0x12) != 0) {
            func_8001E310();
            if (arg3 != 2) {
                goto block_26;
            }
            goto block_27;
        }
        temp_v1_2 = M2C_FIELD(temp_s2, u8 *, 0xE);
        if (temp_v1_2 == 2) {
            M2C_FIELD(temp_s1, u16 *, 0xE) = 0U;
            M2C_FIELD(temp_s2, u8 *, 0xE) = (u8) (M2C_FIELD(temp_s2, u8 *, 0xE) + 1);
            return;
        }
        if (temp_v1_2 == 1) {
            if (arg3 != 2) {
                func_8003422C(0x8000);
            }
            var_a0_2 = M2C_FIELD(temp_s2, u16 **, 0);
            if (*var_a0_2 != 0xFFEB) {
                do {
                    temp_v0 = var_a0_2 + 1;
                    old = var_a0_2;
                    M2C_FIELD(temp_s2, u16 **, 0) = temp_v0;
                    var_a0_2 = temp_v0;
                    temp_v1 = old[1];
                } while (temp_v1 != 0xFFEB);
            }
        } else {
            func_8001E310();
            if (arg3 != 2) {
block_26:
                func_8003422C(0x8000);
            }
block_27:
            M2C_FIELD(temp_s1, u16 *, 0xE) = 0U;
            M2C_FIELD(temp_s1, u8 *, 0) = (u8) (M2C_FIELD(temp_s1, u8 *, 0) + 1);
        }
    }
}

void func_800220B8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918__80021870", func_800220D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918__80021870", func_8002243C);

void func_80022700(u8 *o) {
    u16 v;

    if (M2C_GFIELD(D_80085428, s32, 0x14) == 0) {
        func_800185F8(o);
        return;
    }
    if (D_80085428[0x12] != 0) {
        *(s32 *)(o + 0x38) &= ~1;
        v = M2C_GFIELD(D_80085428, u16, 0x1C);
        *(s16 *)(o + 0x4A) = v + 0x26;
        if (M2C_GFIELD(D_80085428, s32, 0x18) != 0) {
            func_8001F1A8(0x3F, (s16)(v + 0x5D), 1, 0, 0, M2C_GFIELD(D_80085428, s32, 0x18), 0, 8,
                          *(s16 *)(o + 0x4E) - 1);
        }
    } else {
        *(s32 *)(o + 0x38) |= 1;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918__80021870", func_800227D4);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

void func_80022C34(s32 f, s32 a1, s32 a2)
{
  u8 *obj;
  u32 new_var;
  u32 t;
  obj = func_80015B3C(func_800227D4, func_800161C4, 4);
  func_80015EF8(obj);
  *((u32 *) (obj + 0x18)) = (f != 0) ? (func_80019F30(0x60013, 0xD7)) : (func_80019F30(0x6000E, 0x2B7));
  *((s16 *) (obj + 0x46)) = -0x58;
  *((s16 *) (obj + 0x4A)) = -0x1E8;
  *((s16 *) (obj + 0x6E)) = 6;
  *((s16 *) (obj + 0x4E)) = 4;
  *((u32 *) (obj + 0x34)) = ((*((u32 *) (obj + 0x34))) & (~0x7F)) | 1;
  obj = func_80015B3C(func_800227D4, func_800161C4, 4);
  func_80015EF8(obj);
  *((u32 *) (obj + 0x18)) = (f != 0) ? (func_80019F30(0x60013, 0xD8)) : (func_80019F30(0x6000E, 0x2B8));
  *((s16 *) (obj + 0x46)) = -0x1D8;
  new_var = *((u32 *) (obj + 0x34));
  *((s16 *) (obj + 0x6A)) = 6;
  *((s16 *) (obj + 0x4A)) = -0x30;
  t = new_var;
  *((s16 *) (obj + 0x4E)) = 4;
  *((u32 *) (obj + 0x7C)) = a2;
  *((u32 *) (obj + 0x34)) = (t & (~0x7F)) | 2;
  obj = func_80015B3C(func_800227D4, func_800161C4, 4);
  func_80015EF8(obj);
  t = *((u32 *) (obj + 0x34));
  *((s16 *) (obj + 0x46)) = 0x1C0;
  *((s16 *) (obj + 0x6A)) = -6;
  *((s16 *) (obj + 0x4A)) = 8;
  *((s16 *) (obj + 0x4E)) = 4;
  *((u32 *) (obj + 0x7C)) = a2;
  *((u32 *) (obj + 0x34)) = t & (~0x7F);
  obj = func_80015B3C(func_800227D4, func_800161C4, 4);
  func_80015EF8(obj);
  *((u32 *) (obj + 0x18)) = (f != 0) ? (func_80019F30(0x60013, 0xD9)) : (func_80019F30(0x6000E, 0x2B9));
  *((s16 *) (obj + 0x46)) = 0x1A0;
  *((s16 *) (obj + 0x6A)) = -6;
  *((s16 *) (obj + 0x4A)) = -0x30;
  *((s16 *) (obj + 0x4E)) = 4;
  *((u32 *) (obj + 0x34)) = ((*((u32 *) (obj + 0x34))) & (~0x7F)) | 3;
}

void func_80022E64(u16 *dst, s32 b, s32 off, s32 mode) {
    extern u16 D_80065164[][6];
    extern u16 D_800638E4[], D_80063900[], D_80063928[];
    register s32 orig asm("t1") = off;
    register s32 done asm("t0") = 0;
    u16 *src = D_80065164[0];
    s32 k;
    register s32 base asm("a2");
    u16 v;
    off = done;
    b = (s32)src + b * 12;
    do {
        v = ((u16 *)b)[off];
        if (v == 0x219) done = 1;
        if (done) break;
        dst[orig + off] = v;
        off++;
    } while (off < 5);
    if (mode == 0) {
        k = 0;
        base = orig + off;
        do { dst[base + k] = D_800638E4[k]; k++; } while (k < 13);
    } else if (mode == 1) {
        k = 0;
        base = orig + off;
        do { dst[base + k] = D_80063900[k]; k++; } while (k < 20);
    } else {
        k = 0;
        base = orig + off;
        do { dst[base + k] = D_80063928[k]; k++; } while (k < 11);
    }
}

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

void func_80022F80(u8 *o, s32 b) {
    extern u16 D_80065164[][6];
    extern u16 D_80065264[];
    extern u16 D_80063900[];
    extern s32 func_8001F8B0();
    u16 *dst = D_80065264;
    s32 done = 0;
    s32 i = 0;
    u16 *src = D_80065164[0];
    s32 next;
    s32 k;
    u16 v;
    b = (s32)src + b * 12;
    do {
        v = ((u16 *)b)[i];
        if (v == 0x219) done = 1;
        if (done) break;
        next = i + 1;
        dst[next] = v;
        i = next;
    } while (i < 5);
    k = 0;
    i++;
    do {
        dst[i + k] = D_80063900[k];
        k++;
    } while (k < 20);
    *(s32 *)(o + 0x14) = func_8001F8B0(0x1B, 1);
}

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

void func_80023050(u8 *o, s32 b) {
    extern u16 D_80065164[][6];
    extern u16 D_80065298[];
    extern u16 D_80063928[];
    extern s32 func_8001F8B0();
    u16 *dst = D_80065298;
    s32 done = 0;
    s32 i = 0;
    u16 *src = D_80065164[0];
    s32 next;
    s32 k;
    u16 v;
    b = (s32)src + b * 12;
    do {
        v = ((u16 *)b)[i];
        if (v == 0x219) done = 1;
        if (done) break;
        next = i + 1;
        dst[next] = v;
        i = next;
    } while (i < 5);
    k = 0;
    i++;
    do {
        dst[i + k] = D_80063928[k];
        k++;
    } while (k < 11);
    *(s32 *)(o + 0x14) = func_8001F8B0(0x1B, 2);
}

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

s32 func_80023120(s32 n) {
    extern u8 D_8008ED68[];
    u8 *p = D_8008ED68;
    u32 f = *(u32 *)(p + n * 16 + 0x88);
    s32 ret = 0;
    if (f & 0x20) {
        ret = *(s32 *)(p + 0x99C) + 1;
    } else if (f & 0x40) {
        ret = -1;
    } else if (f & 0x4000) {
        *(u32 *)(p + 0x99C) = (*(u32 *)(p + 0x99C) + 1) % 3;
    } else if (f & 0x1000) {
        *(u32 *)(p + 0x99C) = (*(u32 *)(p + 0x99C) + 2) % 3;
    }
    return ret;
}

extern s32 (*D_80069AA4[])(void);

s32 func_800231C4(u8 *o, s32 a1, s32 idx) {
    extern u16 D_8008EE54[];
    extern u8 D_8006AF90[];
    extern s32 func_8001F8B0();
    extern s32 func_800212AC();
    s32 r = 0;

    switch (D_8008EE54[0]) {
    case 0:
        if (*(s16 *)(D_8006AF90 + idx * 30) >= 4) {
            func_80012668();
            o[0xBE0] = 0;
        } else {
            r = 1;
        }
        break;
    case 1:
        func_800220B8(o);
        *(s32 *)(o + 0x14) = func_8001F8B0(0x1B, 0);
        func_80012668();
        break;
    case 2:
        r = func_800212AC(o, a1, 2, 1);
        if (r == 2) {
            (*(u16 *)(D_8006AF90 + idx * 30))--;
        }
        break;
    }
    return r;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918__80021870", func_800232F4);

static inline s32 helper_8002367C(u8 *o, s32 a1, s32 idx, u8 *g) {
    extern u8 D_8006AF90[];
    extern void func_80012668();
    extern s32 func_8001F8B0(), func_800212AC();
    u16 st = *(u16 *)(g + 0xEC);
    s32 r = 0;

    switch (st) {
    case 0:
        if (*(s16 *)(D_8006AF90 + idx * 30) >= 4) {
            func_80012668();
            o[0xBE0] = 0;
        } else {
            r = 1;
        }
        break;
    case 1:
        func_800220B8(o);
        *(s32 *)(o + 0x14) = func_8001F8B0(0x1B, 0);
        func_80012668();
        break;
    case 2:
        r = func_800212AC(o, a1, 2, 1);
        if (r == st) {
            (*(u16 *)(D_8006AF90 + idx * 30))--;
        }
        break;
    }
    return r;
}

s32 func_8002367C(u8 *o, s32 a1, s32 a2, s32 a3) {
    extern u8 D_8008ED68[];
    extern void func_80012628(), func_8001264C();
    extern s32 func_800212AC(), func_800232F4();
    s32 ret = 0;
    s32 idx = 0;
    u8 *g;
    s32 v;

    if (o[0] != 0) {
        idx = o[0xBCA];
    }
    g = D_8008ED68;
    switch (*(u16 *)(g + 0xE8)) {
    case 0:
        v = helper_8002367C(o, o[0], idx, g);
        if (v == 2) {
            func_80012628();
        } else if (v != 0) {
            func_8001264C(3);
        }
        break;
    case 1:
        func_800220B8(o);
        func_80023050(o, a1);
        func_80012628();
        break;
    case 2:
        if (func_800212AC(o, o[0], 2, 1) != 0) {
            ret = 1;
        }
        break;
    case 3:
        v = func_800232F4(o, o[0], (s16)a1, (s16)a2, (s16)a3, idx);
        if (v > 0) {
            ret = 1;
        } else if (v < 0) {
            func_8001264C(0);
        }
        break;
    }
    return ret;
}

void func_800238DC(void) {
    func_80020094();
}

extern s32 (*D_80069AA4[])(void);

s32 func_800238FC(void) {
    return D_80069AA4[(*D_8008EE44)]();
}
