#include "common.h"

typedef struct {
    u8 pad[4];
    s16 unk4;
    s16 unk6;
    s16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    u16 unk10;
} Struct_800AF000;

void func_80099B18(u8 *arg0) {
    extern u16 D_8008EE44[];
    extern u8 D_80085428[];
    extern s16 D_800B3ACC[];
    extern void func_80015CD0(void *, s32, s32);
    u8 *q = D_80085428;
    s32 a2 = *(s32 *)(arg0 + 0x7C);
    if (*D_8008EE44 < 7U && q[0x5CB] == 4) {
        register s32 m asm("a1") = ~1;
        register u32 f asm("v0") = *(u32 *)(arg0 + 0x38);
        s32 v = *D_800B3ACC;
        s32 w = *(s32 *)(arg0 + 0x80);
        f &= m;
        *(u32 *)(arg0 + 0x38) = f;
        if (w == v) {
            arg0[0x5A] = 0x80;
            arg0[0x59] = 0x80;
            arg0[0x58] = 0x80;
            if (*(s32 *)(arg0 + 0x1C) == 0) {
                *(s32 *)(arg0 + 0x18) = 0;
                func_80015CD0(arg0 + 0x14, func_80019F30(0x70009, *(s32 *)(arg0 + 0x80) + 1), 0);
            }
        } else {
            arg0[0x5A] = 0x50;
            arg0[0x59] = 0x50;
            arg0[0x58] = 0x50;
            *(s32 *)(arg0 + 0x18) = func_80019F30(0x60009, a2);
            *(s32 *)(arg0 + 0x1C) = 0;
        }
    } else {
        *(u32 *)(arg0 + 0x38) |= 1;
    }
}

#include "common.h"

extern u16 D_8008EE44[];
extern void (*D_800AEFDC[])(void);

void func_80099C08(void) {
    D_800AEFDC[(*D_8008EE44)]();
}

#include "common.h"

void func_80099C48(void) {
    extern int func_80012508();
    func_80019F30(8, func_80012508);
    func_80012508();
}

#include "common.h"

extern s32 D_800B3AD0[];
extern s32 func_80019F30(s32, s32);
extern void func_80012A20(s32, s32, s32, s32);
extern void func_80032DB0(s32, s32, s32, s32, s32, void (*)(void));
extern void func_8009A160();
extern void func_8001ADCC(s32);
extern s32 func_80012508(void);

s32 func_80099C78(void) {
    s32 i;
    for (i = 0; i < 2; i++) func_80012A20(func_80019F30(0x20008, i + 2), 1, 0, 0);
    func_80012A20(func_80019F30(0x50008, 0), 1, 0, 0);
    func_80032DB0(0, 0, 3, 8, 0, func_8009A160);
    (*D_800B3AD0) = 0xB4;
    func_8001ADCC(8);
    return func_80012508();
}

void func_80099D34(void) {
    extern u8 D_8008ED68[];
    extern u8 D_80086228[];
    extern void func_8001ADA0(s32);
    extern void func_8001AD48(s32);
    extern void func_80012578(void);
    extern s32 func_80012508(void);
    u8 *d = D_8008ED68;
    register u8 *p asm("v0");
    register s32 val asm("v1");

    switch (*(u16 *)(d + 0xE0)) {
    case 0:
        if (*(s32 *)(d + 0xA68) == 0) {
            register s32 three asm("v0") = 3;
            register s32 val_dc asm("v1") = *(u16 *)(d + 0xDC);
            register s32 arg asm("a0") = 8;
            if (val_dc == three) {
                p = D_80086228;
                val = 0xE0;
                p[0x19] = val;
                p[0x1A] = val;
                p[0x1B] = val;
                p += 0x4594;
                p[0x19] = val;
                p[0x1A] = val;
                p[0x1B] = val;
            } else {
                p = D_80086228;
                p[0x19] = 0;
                p[0x1A] = 0;
                p[0x1B] = 0;
                p += 0x4594;
                p[0x19] = 0;
                p[0x1A] = 0;
                p[0x1B] = 0;
            }
            func_8001ADA0(arg);
            func_80012578();
        }
        break;
    case 1:
        if (*(s32 *)(d + 0xA68) == 0) {
            if (*(u16 *)(d + 0xDC) != 3) {
                func_8001AD48(6);
            }
            func_80012508();
        }
        break;
    }
}

#include "common.h"

void func_80099E2C(void) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800B3AD0[];
    s32 temp_v0;

    temp_v0 = (*D_800B3AD0) - 1;
    (*D_800B3AD0) = temp_v0;
    if ((temp_v0 < 0) || (M2C_GFIELD(D_8008ED68, s32, 0x88) & 0x8F0) || (M2C_GFIELD(D_8008ED68, s32, 0x98) & 0x8F0)) {
        func_8001ADCC(8);
        (*D_800B3AD0) = 0x168;
        func_80012508();
    }
}

#include "common.h"

void func_80099EA0(void) {
    extern M2C_UNK D_8008ED68[];
    extern void func_8009A1D4(void);
    if ((u16) M2C_GFIELD(D_8008ED68, u16, 0xDC) < 7U) {
        func_8009A094();
        func_80020688(-8, -0x18, 0x80, 0x30, 0x3A0, 0, 0x3F0, 0x164, 0x80, 0x80, 0x80, 0, 0, 3);
        if (M2C_GFIELD(D_8008ED68, s32, 0xA68) == 0) {
            func_80012508();
        }
    } else {
        if (M2C_GFIELD(D_8008ED68, s32, 0xA68) == 0) {
            func_80012200(func_8009A1D4);
            return;
        }
        func_8009A094();
        func_80020688(-8, -0x18, 0x80, 0x30, 0x3A0, 0, 0x3F0, 0x164, 0x80, 0x80, 0x80, 0, 0, 3);
    }
}

#include "common.h"

void func_80099FCC(void) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800B3AD0[];
    s32 temp_v0;

    func_8009A094();
    func_80020688(-8, -0x18, 0x80, 0x30, 0x3A0, 0, 0x3F0, 0x164, 0x80, 0x80, 0x80, 0, 0, 3);
    temp_v0 = (*D_800B3AD0) - 1;
    (*D_800B3AD0) = temp_v0;
    if ((temp_v0 < 0) || (M2C_GFIELD(D_8008ED68, s32, 0x88) & 0x830) || (M2C_GFIELD(D_8008ED68, s32, 0x98) & 0x830)) {
        func_8001AD74(6);
        func_80012508();
    }
}

#include "common.h"

extern char D_800AEFB4[], D_800AEFC8[], D_800AEFD8[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, char *, s32, s32, s32);

s32 func_8009A094(void) {
    func_8001F1A8(-0x98, -0x18, 0, 1, 0, D_800AEFB4, 1, 9, 3);
    func_8001F1A8(-0x80, 8, 0, 1, 0, D_800AEFC8, 1, 8, 3);
    return func_8001F1A8(0x70, 8, 0, 1, 0, D_800AEFD8, 1, 2, 3);
}

void func_8009A160(u8 *arg0) {
    extern M2C_UNK D_8008ED68[];
    u16 a = M2C_GFIELD(D_8008ED68, u16, 0xDC);
    if ((a == 3 && M2C_GFIELD(D_8008ED68, u16, 0xE0) != 0) || a == 4 || (a == 5 && M2C_GFIELD(D_8008ED68, u16, 0xE0) == 0)) {
        *(u32 *)(arg0 + 0x38) &= ~1;
    } else {
        *(u32 *)(arg0 + 0x38) |= 1;
    }
}

void func_8009A1D4(void) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE44[];
    extern void (*D_800AF1B8[])(void);
    extern void (*D_800AF1E4[])(void);
    extern s32 D_800B3AE0[];
    u8 *d = D_8008ED68;

    if ((u16)(*(u16 *)(d + 0xDC) - 5) < 3) {
        if (*D_800B3AE0 != 0) {
            D_800AF1E4[0]();
            goto call_tbl;
        }
        if ((*(s32 *)(d + 0x88) & 0x8F0) != 0 || (*(s32 *)(d + 0x98) & 0x8F0) != 0) {
            *D_800B3AE0 = 1;
        }
    }
    if (*D_800B3AE0 != 0) {
        D_800AF1E4[0]();
    }
call_tbl:
    D_800AF1B8[*D_8008EE44]();
}

#include "common.h"

void func_8009A294(void) {
    extern int func_80012508();
    func_80019F30(8, func_80012508);
    func_80012508();
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__80099B18", func_8009A2C4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__80099B18", func_8009A3E8);

void func_8009A9B0(void) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800B3ADC[];
    extern void func_80012578(void);
    if (M2C_GFIELD(D_8008ED68, u16, 0xE0) == 0) {
        if (M2C_GFIELD(D_8008ED68, s32, 0xA68) == 0) {
            func_80012578();
        }
    } else {
        *D_800B3ADC = 0x20;
        func_80012508();
    }
}
