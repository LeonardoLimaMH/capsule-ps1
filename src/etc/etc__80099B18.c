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

void func_8009AA0C(void) {
    extern u16 D_8008EE48[];
    extern s32 D_800B3ADC[];
    extern s32 D_800B3B20[];
    extern s32 D_800B3B24[];
    extern void func_8009BDD8(s32, s32, s32);
    extern void func_80012578(void);
    extern int func_80012508();

    if (*D_800B3B20 != 0) {
        func_8009BDD8(0, 0xA0, 5);
    }
    switch (*D_8008EE48) {
    case 0:
        *D_800B3ADC = *D_800B3ADC - 1;
        if (*D_800B3ADC > 0) return;
        func_80012578();
        break;
    case 1:
        if (*D_800B3B20 < 10) return;
        *D_800B3ADC = 0x90;
        func_80012578();
        break;
    case 2:
        *D_800B3ADC = *D_800B3ADC - 1;
        if (*D_800B3ADC > 0) return;
        *D_800B3ADC = 0x70;
        func_80012578();
        break;
    case 3:
        *D_800B3ADC = *D_800B3ADC - 1;
        if (*D_800B3ADC > 0) return;
        *D_800B3ADC = 0x30;
        func_80012578();
        break;
    case 4:
        *D_800B3ADC = *D_800B3ADC - 1;
        if (*D_800B3ADC > 0) return;
        func_80012508();
        *D_800B3B24 = 0;
        break;
    }
}

void func_8009AB30(void) {
    extern u16 D_8008EE48[];
    extern s32 D_800B3ADC[];
    extern void func_80034AB0(s32);
    extern void func_80012578(void);
    switch (*D_8008EE48) {
    case 0:
        *D_800B3ADC = 0x1D;
        break;
    case 1:
        *D_800B3ADC = *D_800B3ADC - 1;
        if (*D_800B3ADC > 0) return;
        func_80034AB0(0x1B);
        *D_800B3ADC = 7;
        break;
    case 2:
        *D_800B3ADC = *D_800B3ADC - 1;
        if (*D_800B3ADC > 0) return;
        break;
    default:
        return;
    }
    func_80012578();
}

void func_8009ABE4(void) {
    extern u16 D_8008EE48[];
    extern s32 D_800B3ADC[];
    extern s32 D_800B3AE8[];
    extern s32 D_800B3B28[];
    extern void func_8009C324(s32, s32, s32);
    extern void func_80034AB0(s32);
    extern void func_80012578(void);
    extern int func_80012508();

    func_8009C324(0, -0x18, 5);
    switch (*D_8008EE48) {
    case 0:
        *D_800B3ADC = *D_800B3ADC - 1;
        if (*D_800B3ADC > 0) return;
        func_80034AB0(0x75);
        *D_800B3ADC = 0x1E;
        func_80012578();
        break;
    case 1:
        *D_800B3ADC = *D_800B3ADC - 1;
        if (*D_800B3ADC > 0) return;
        *D_800B3ADC = 0xA;
        func_80012578();
        break;
    case 2:
        *D_800B3ADC = *D_800B3ADC - 1;
        if (*D_800B3ADC > 0) return;
        *D_800B3ADC = 0x30;
        func_80012578();
        break;
    case 3:
        *D_800B3ADC = *D_800B3ADC - 1;
        if (*D_800B3ADC > 0) return;
        *D_800B3AE8 = 0;
        *D_800B3ADC = 0;
        *D_800B3B28 = 0;
        func_80012508();
        return;
    }
}

#include "common.h"

void func_8009AD04(void) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800B3ADC[];
    extern s32 D_800B3AE8[];
    extern s32 D_800B3AEC[];
    s32 temp_v0;

    func_8009C324(0, -0x18, 5);
    temp_v0 = (*D_800B3ADC) + 1;
    (*D_800B3ADC) = temp_v0;
    if (temp_v0 >= 0x4B0) {
        func_8001AD74(8);
        func_80034BD8(-3, 0);
        func_80033974(0x701E);
        func_80012508();
    }
    if ((M2C_GFIELD(D_8008ED68, u16, 0xE0) != 0) && ((M2C_GFIELD(D_8008ED68, s32, 0x88) & 0xA000) || (M2C_GFIELD(D_8008ED68, s32, 0x98) & 0xA000))) {
        func_80034AB0(0x84);
        (*D_800B3ADC) = 0;
        (*D_800B3AEC) ^= 1;
    }
    if ((M2C_GFIELD(D_8008ED68, s32, 0x88) & 0x830) || (M2C_GFIELD(D_8008ED68, s32, 0x98) & 0x830)) {
        func_80034AB0(0x48);
        if (M2C_GFIELD(D_8008ED68, u16, 0xE0) == 0) {
            (*D_800B3ADC) = 0;
            func_80012578();
            return;
        }
        if ((*D_800B3AEC) != 0) {
            M2C_GFIELD(D_8008ED68, s32, 0xA20) = 1;
        }
        (*D_800B3AE8) = 1;
        func_8001AD74(8);
        func_80034BD8(-3, 0);
        func_80033974(0x701E);
        func_80012508();
        return;
    }
    if (((M2C_GFIELD(D_8008ED68, s32, 0x88) & 0xC0) || (M2C_GFIELD(D_8008ED68, s32, 0x98) & 0xC0)) && (M2C_GFIELD(D_8008ED68, u16, 0xE0) != 0)) {
        func_80034AB0(0x5D);
        (*D_800B3ADC) = 0;
        func_800125AC(0);
    }
}

void func_8009AEB4(void) {
    extern u8 D_8008ED68[];
    extern u8 D_80085428[];
    extern s32 D_800B3AE0[], D_800B3B28[], D_800B3AE8[], D_800B3B24[];
    extern u8 D_8001FF50[], D_8001FDFC[];
    extern void func_80013668(void);
    extern void func_80011C40(void);
    extern void func_80012200(void *);
    extern void func_80099394();
    u8 *d = D_8008ED68;
    u8 *p = D_80085428;

    if (*(s32 *)(d + 0xA68) == 0) {
        s32 cond;
        func_80013668();
        func_80011C40();
        *D_800B3AE0 = 0;
        *D_800B3B28 = 0;
        cond = *D_800B3AE8;
        *D_800B3B24 = 0;
        if (cond != 0) {
            *(s32 *)(d + 0xA14) = 0;
            func_80012200(func_80099394);
        } else {
            p[1] = 1;
            D_80085428[0] = 1;
            *(s32 *)(d + 0xA14) += 1;
            if (*(s32 *)(d + 0xA14) & 1) {
                func_80012200(D_8001FF50);
            } else {
                func_80012200(D_8001FDFC);
            }
        }
    }
}

void func_8009AF80(void) {
    extern u8 D_8008ED68[];
    extern s32 D_800B3AE4[], D_800B3AE8[], D_800B3ADC[], D_800B3B28[], D_800B3B24[], D_800B3AE0[];
    extern void func_8001ADCC(s32);
    extern void func_8001ADA0(s32);
    extern void func_80012544(s32);
    u8 *d = D_8008ED68;
    switch (*D_800B3AE4) {
    case 0:
        func_8001ADCC(8);
        *D_800B3AE4 = *D_800B3AE4 + 1;
        break;
    case 1:
        if (*(s32 *)(d + 0xA68) == 0) {
            *D_800B3AE8 = 0;
            *D_800B3ADC = 0;
            *D_800B3B28 = 0;
            *D_800B3B24 = 0;
            func_80012544(8);
            func_8001ADA0(8);
            *D_800B3AE4 = *D_800B3AE4 + 1;
        }
        break;
    case 2:
        if (*(s32 *)(d + 0xA68) == 0) {
            *D_800B3AE4 = 0;
            *D_800B3AE0 = 0;
        }
        break;
    }
}

#include "common.h"

void func_8009B060(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 temp_v0;
    s32 var_v0;
    u16 temp_v0_2;

    if ((u32) (M2C_GFIELD(D_8008ED68, u16, 0xDC) - 8) < 3U) {
        M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
        M2C_FIELD(arg0, s16 *, 0x50) = 0x1000;
        M2C_FIELD(arg0, s32 *, 0x38) &= ~1;
        return;
    }
    if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 7) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if (M2C_GFIELD(D_8008ED68, u16, 0xE0) != 0) {
            if (M2C_FIELD(arg0, s16 *, 0x50) < 0x1000) {
                M2C_FIELD(arg0, s16 *, 0x50) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
                M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76));
                M2C_FIELD(arg0, u16 *, 0x74) = (u16) ((M2C_FIELD(arg0, s32 *, 0x3C) * 2) + 1);
                M2C_FIELD(arg0, u16 *, 0x76) = (u16) ((M2C_FIELD(arg0, s32 *, 0x3C) * 2) + 1);
                M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + 1);
                if (M2C_FIELD(arg0, s16 *, 0x50) >= 0x1000) {
                    M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
                    M2C_FIELD(arg0, s16 *, 0x50) = 0x1000;
                    M2C_FIELD(arg0, u16 *, 0x76) = 0U;
                    M2C_FIELD(arg0, u16 *, 0x74) = 0U;
                    func_80034AB0(0x1B);
                    M2C_FIELD(arg0, s32 *, 0x3C) = 0xA;
                }
            } else {
                temp_v0 = M2C_FIELD(arg0, s32 *, 0x3C);
                if (temp_v0 != 0) {
                    temp_v0_2 = (((temp_v0 & 1) ^ 1) << 8) + 0x1000;
                    M2C_FIELD(arg0, u16 *, 0x52) = temp_v0_2;
                    M2C_FIELD(arg0, s16 *, 0x50) = (s16) temp_v0_2;
                    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) - 1);
                    return;
                }
                M2C_FIELD(arg0, u16 *, 0x52) = 0x1000U;
                M2C_FIELD(arg0, s16 *, 0x50) = 0x1000;
            }
        }
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
block_11:
        M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__80099B18", func_8009B1CC);

void func_8009B500(u8 *arg0) {
    extern u16 D_8008EE44[];
    extern s32 D_800B3AF8[];
    u32 f = *(u32 *)(arg0 + 0x38) | 1;
    *(u32 *)(arg0 + 0x38) = f;
    if (*D_8008EE44 == 4 || (*D_8008EE44 == 5 && D_800B3AF8[*(s32 *)(arg0 + 0x84)] < 2)) {
        *(u32 *)(arg0 + 0x38) = f & ~1;
    }
}

#include "common.h"

void func_8009B564(void *arg0) {
    extern u8 D_8008ED68[];
    extern M2C_UNK D_800AF1AC[];
    extern s32 D_800B3ADC[];
    s32 temp_a3;
    s16 temp_a0;
    u16 temp_a1;
    u16 temp_v0;

    temp_a3 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_a3;
    temp_a0 = M2C_FIELD(arg0, u16 *, 0x84);
    if ((M2C_GFIELD(D_8008ED68, u16, 0xDC) == 6) && (M2C_GFIELD(D_8008ED68, u16, 0xE0) == 3)) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a3 & ~1);
        temp_a1 = M2C_FIELD(arg0, u16 *, 0x46);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((M2C_FIELD(arg0, s32 *, 0x30) & ~0x30) | 0x20);
        temp_v0 = temp_a1 + *(u16 *)((temp_a0 * 2) + (u8 *)D_800AF1AC);
        M2C_FIELD(arg0, u16 *, 0x46) = temp_v0;
        if ((temp_a0 == 0) && ((s16) temp_v0 < -0xB7)) {
            (*D_800B3ADC) = 0xB;
            func_80012508();
        }
    }
}

#include "common.h"

void func_8009B624(void *arg0) {
    extern u8 D_8008ED68[];
    extern M2C_UNK D_800B3AF8[];
    s32 temp_a2;
    s32 temp_v1;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_a2;
    if ((M2C_GFIELD(D_8008ED68, u16, 0xDC) == 5) && (*((D_800B3AF8 + (M2C_FIELD(arg0, s32 *, 0x84)))) == 2) && ((u16) M2C_GFIELD(D_8008ED68, u16, 0xE0) < 4U)) {
        temp_v1 = temp_a2 & ~1;
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_v1 | 0x40);
        if ((u16) M2C_GFIELD(D_8008ED68, u16, 0xE0) < 2U) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_v1 | 0x48);
            if (!(M2C_GFIELD(D_8008ED68, s32, 0x18) & 7)) {
                M2C_FIELD(arg0, u16 *, 0x6E) = (u16) (M2C_FIELD(arg0, u16 *, 0x6E) + 1);
            }
        }
    }
}

void func_8009B6D0(void *arg0) {
    extern u8 D_8008ED68[];
    s32 f;
    s32 g;
    f = (M2C_FIELD(arg0, s32 *, 0x38) | 1) & ~8;
    M2C_FIELD(arg0, s32 *, 0x38) = f;
    if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 5) {
        g = f & ~1;
        M2C_FIELD(arg0, s32 *, 0x38) = g;
        if (M2C_GFIELD(D_8008ED68, u16, 0xE0) == 3) {
            M2C_FIELD(arg0, s32 *, 0x38) = g | 8;
        }
    } else if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 6) {
        M2C_FIELD(arg0, s32 *, 0x38) = f & ~1;
    }
}
