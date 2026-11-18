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

extern u16 D_8008EE44[];
extern void (*D_800AEFDC[])(void);
extern s32 D_800B3AD0[];
extern s32 func_80019F30(s32, s32);
extern void func_80012A20(s32, s32, s32, s32);
extern void func_80032DB0(s32, s32, s32, s32, s32, void (*)(void));
extern void func_8009A160();
extern void func_8001ADCC(s32);
extern s32 func_80012508(void);
extern char D_800AEFB4[], D_800AEFC8[], D_800AEFD8[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, char *, s32, s32, s32);

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

void func_8009B1CC(u8 *s1) {
    extern u8 D_8008ED68[];
    extern Struct_800AF000 D_800AF000[];
    extern u16 D_800AF198[];
    extern s32 D_800B3AF8[];
    extern s32 D_800B3B20[];
    extern s32 func_80019F30(s32, s32);
    extern void func_80015CD0(void *, s32, s32);
    extern void func_80034AB0(s32);
    s32 temp;
    u8 *a2;
    u16 v1;
    s32 idx;
    s32 *s2;
    Struct_800AF000 *s0;

    v1 = *(u16 *)(s1 + 0x84);
    temp = *(s32 *)(s1 + 0x38) | 1;
    a2 = D_8008ED68;
    *(s32 *)(s1 + 0x38) = temp;

    if (*(u16 *)(a2 + 0xDC) == 4) {
        *(s32 *)(s1 + 0x38) = temp & ~1;
        if (*(u16 *)(a2 + 0xE0) == 0) {
            if (*(s32 *)(s1 + 0x80) == 0) {
                if (*(s32 *)(s1 + 0x1C) == 0) {
                    func_80015CD0(s1 + 0x14, func_80019F30(0x70008, D_800AF000[(s16)v1].unk4), 0);
                    return;
                }
            }
            *(s32 *)(s1 + 0x80) -= 1;
            return;
        }
        *(s32 *)(s1 + 0x80) = D_800AF000[(s16)v1].unk6;
        return;
    }

    if (*(u16 *)(a2 + 0xDC) != 5) {
        return;
    }

    *(s32 *)(s1 + 0x38) = temp & ~1;
    if (*(u16 *)(a2 + 0xE0) == 0) {
        return;
    }

    if (*(s32 *)(s1 + 0x80) > 0) {
        *(s32 *)(s1 + 0x80) -= 1;
        return;
    }

    idx = (s16)v1;
    {
        s32 *tbl = D_800B3AF8;
        s2 = &tbl[idx];
    }
    if (*s2 == 0) {
        s1[0x58] += 3;
        s1[0x59] += 3;
        s1[0x5A] += 3;
        if (s1[0x58] < 0xFD) {
            return;
        }
        func_80015CD0(s1 + 0x14, func_80019F30(0x70008, 0xB), 1);
        *(s32 *)(s1 + 0x3C) = 0;
        *(s32 *)(s1 + 0x88) = 0;
        *s2 += 1;
        return;
    }

    if (*s2 == 1) {
        s1[0x5A] = 0x80;
        s1[0x59] = 0x80;
        s1[0x58] = 0x80;
        if (*(s16 *)(s1 + 0x24) < 0) {
            func_80015CD0(s1 + 0x14, func_80019F30(0x70008, D_800AF000[idx].unk8 + 0xC), 0);
            s0 = &D_800AF000[idx];
            *(s16 *)(s1 + 0x4E) = 3;
            *(s32 *)(s1 + 0x30) = (*(s32 *)(s1 + 0x30) & ~0x30) | 0x20;
            *(u16 *)(s1 + 0x6A) = s0->unkA;
            *(u16 *)(s1 + 0x68) = s0->unkC;
            { register u32 field asm("v0") = s0->unkE;
              *(u16 *)(s1 + 0x6E) = field; }
            { register u32 last asm("v1") = s0->unk10;
              register s32 flags asm("v0") = *(s32 *)(s1 + 0x38);
              *(s32 *)(s1 + 0x38) = flags | 8;
            { register s32 count asm("v0") = *D_800B3B20;
              s32 next;
              *(s16 *)(s1 + 0x52) = 0;
              *(s16 *)(s1 + 0x50) = 0;
              *(u16 *)(s1 + 0x6C) = last;
              count += 1;
              next = *s2 + 1;
              *D_800B3B20 = count;
              *s2 = next;
            }
            }
            func_80034AB0(0x85);
            return;
        }
        *(s32 *)(s1 + 0x3C) += 1;
        if (*(s32 *)(s1 + 0x3C) == D_800AF198[*(s32 *)(s1 + 0x88)]) {
            func_80034AB0(0x50);
            *(s32 *)(s1 + 0x88) += 1;
        }
        return;
    }

    if (*(s16 *)(s1 + 0x50) < 0x1000) {
        u16 step = *(u16 *)(s1 + 0x50) + 0x40;
        *(s16 *)(s1 + 0x50) = step;
        *(s16 *)(s1 + 0x52) = step;
    } else {
        *(s16 *)(s1 + 0x52) = 0x1000;
        *(s16 *)(s1 + 0x50) = 0x1000;
    }
}

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
