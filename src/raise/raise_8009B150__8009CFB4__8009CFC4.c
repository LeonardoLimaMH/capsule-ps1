#include "common.h"

#include "common.h"

void func_8009CFC4(void *arg0, u32 arg2) {
    extern s16 D_8006B006[];
    extern M2C_UNK D_8008ED68[];
    s8 var_v0;
    s32 temp_v1_2;
    u32 temp_v1;
    u32 temp_v1_3;
    u32 var_a0;
    u32 var_a2;

    var_a2 = arg2;
    temp_v1 = M2C_FIELD(arg0, u32 *, 0x3C);
    if ((u8) M2C_GFIELD(D_8008ED68, u8, 0x103) >= 2U) {
        var_a0 = temp_v1 + M2C_GFIELD(D_8008ED68, u8, 0x103);
    } else {
        var_a0 = temp_v1 + 1;
    }
    temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x7A);
    M2C_FIELD(arg0, u32 *, 0x3C) = var_a0;
    switch (temp_v1_2) {                            /* irregular */
    case 0:
        M2C_FIELD(arg0, u16 *, 0x7A) = 1U;
        return;
    case 1:
        M2C_FIELD(arg0, u16 *, 0x7A) = 2U;
        return;
    case 2:
        temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x34) & 0x7F;
        if ((u8) M2C_GFIELD(D_8008ED68, u8, 0x103) >= 2U) {
            var_a2 = temp_v1_3 * M2C_GFIELD(D_8008ED68, u8, 0x103);
            var_v0 = var_a0 < var_a2;
        } else {
            var_v0 = var_a0 < temp_v1_3;
        }
        if (var_v0 == 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) ((M2C_FIELD(arg0, s32 *, 0x38) & ~1) | 8);
            if (!(M2C_FIELD(arg0, s32 *, 0x34) & 0x7F)) {
                func_80034AB0(4);
            }
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            return;
        }
        return;
    case 3:
        if ((u32) ((M2C_FIELD(arg0, u16 *, 0x46) + 0xB4) & 0xFFFF) >= 0x169U) {
            func_800185F8(arg0);
            (*D_8006B006) = 0;
        }
        break;
    }
}

extern u8 *func_80015B3C();
extern void func_80015EF8();
extern s32 func_80019F30();
extern void func_80015CD0();
extern s32 func_80020304();
extern s32 ratan2();
extern void func_80012A20();
extern void func_800161C4();
extern u8 D_8008ED68[];
u8 *func_8009D11C(void) {
    u8 *p;
    u8 *q;
    s32 a;
    s32 b;
    p = func_80015B3C(func_8009CFC4, func_800161C4, 2);
    func_80015EF8(p);
    *(s32 *)(p + 0x38) |= 1;
    func_80015CD0(p + 0x14, func_80019F30(0x7000E, 0xA9), 0);
    q = p;
    if (func_80020304(2) != 0) {
        *(s16 *)(p + 0x46) = 0xB4;
        *(s16 *)(p + 0x6A) = -6;
    } else {
        *(s16 *)(p + 0x46) = -0xB4;
        *(s16 *)(p + 0x6A) = 6;
    }
    *(s16 *)(q + 0x4A) = func_80020304(100) - 0x32;
    b = func_80020304(6) - 3;
    *(s16 *)(q + 0x6E) = b;
    a = ratan2(*(s16 *)(q + 0x6A), (s16)b);
    *(s16 *)(q + 0x54) = 0xE00 - a;
    *(s16 *)(q + 0x4E) = 7;
    *(s32 *)(q + 0x34) &= ~0x7F;
    return p;
}

void func_8009D21C(void) {
    u8 *base = D_8008ED68;
    func_80012A20(func_80019F30(0x2000E, 0x2C), 1, 0, 0);
    *(u8 **)(base + 0x9B8) = func_8009D11C();
}
