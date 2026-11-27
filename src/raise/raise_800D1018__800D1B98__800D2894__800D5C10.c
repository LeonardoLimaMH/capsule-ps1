#include "common.h"

/* registro de 0x79C bytes; o campo 0x798 é lido como palavra ou como byte */
typedef struct {
    u8 _p0[0x2BC];
    s32 unk_2BC;
    u8 _p2C0[0x64];
    s16 unk_324;
    u16 unk_326;
    s16 unk_328;
    u8 _p32A[0x1A];
    s16 unk_344;
    u8 _p346[0x452];
    union {
        u32 w;
        u8 b;
    } f_798;
} S_80100F38;

typedef struct {
    u8 pad_0[0x10];
    u16 unk_10;
    u16 unk_12;
    u8 pad_14[0x7C];
    u16 unk_90;
    u8 pad_92[0x116];
} Slot_80091618;
extern S_80100F38 D_80100F38[];

typedef struct {
    u8 pad[0x8B];
    u8 grid[2][8][8];
} S_800EFF58;

typedef struct {
    u8 _p0[0x64];
    s32 f_64;
    s32 f_68;
    s32 f_6C;
    s32 f_70;
} Struct_80069E4C;

typedef struct {
    u8 _p0[0x54];
    s32 f_54;
    u8 _p58[0xE0 - 0x58];
    s32 f_E0;
} Struct_80069AD4;

typedef struct { u8 pad[0x386]; s16 field; u8 tail[0x414]; } Record_800D2894;

u8 *func_800D5C10(s32 idx) {
    u8 *rec = (u8 *)D_80100F38 + (idx & 0xFFFF) * 0x79C;

    *(s16 *)(rec + 0x396) = 0;
    return rec;
}

void func_800D5C44(s32 idx) {
    extern u8 D_8008EE6A[];
    u8 *rec = (u8 *)D_80100F38 + (idx & 0xFFFF) * 0x79C;

    *(s16 *)(rec + 0x39C) = 0;
    *D_8008EE6A = 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800D5C80);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800D613C);

s32 func_800D6848(s32 arg0) {
    extern s32 D_800F1D1C[][2];
    s32 val;
    s32 a0 = arg0 & 0x3F;

    if ((u32)a0 <= 0x10) {
        val = D_800F1D1C[a0][1];
    } else if (a0 <= 0x20) {
        val = D_800F1D1C[0x20 - a0][1];
    } else if (a0 <= 0x30) {
        val = -D_800F1D1C[a0 - 0x20][1];
    } else {
        val = -D_800F1D1C[0x40 - a0][1];
    }
    return (s16)val;
}

s32 func_800D68D4(s32 arg0) {
    extern s32 D_800F1D1C[][2];
    s32 val;
    s32 a0 = arg0 & 0x3F;

    if ((u32)a0 <= 0x10) {
        val = D_800F1D1C[a0][0];
    } else if (a0 <= 0x20) {
        val = -D_800F1D1C[0x20 - a0][0];
    } else if (a0 <= 0x30) {
        val = -D_800F1D1C[a0 - 0x20][0];
    } else {
        val = D_800F1D1C[0x40 - a0][0];
    }
    return (s16)val;
}

void func_800D6960(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 1) = arg2;
    M2C_FIELD(arg0, s8 *, 2) = arg3;
    M2C_FIELD(arg0, s8 *, 3) = 0x38;
}
extern void func_800D0730(s16 *, s32, s32, s32);
extern s32 func_800D6A2C(s32, s32, s32, s32, s32, s32);

s32 func_800D6978(s32 a0, s32 a1, s32 a2) {
    s16 b[4];
    u16 k = a0;
    u8 *p = (u8 *)D_80100F38 + k * 0x79C;
    func_800D0730(b, (s16)(*(u16 *)(p + 0x332) - 1), (s16)(*(u16 *)(p + 0x334) - 1), 0);
    return func_800D6A2C(k, b[0], b[2], 3, (u8)a1, (u16)a2);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800D6A2C);

void func_800D827C(void) {
    extern s32 D_80069BB4[];
    extern s32 D_80069EAC[];
    extern Slot_80091618 D_80091618[];
    extern u8 D_800EF524[];
    extern u8 D_800900C0[];
    extern s32 func_800B1260(s32);
    extern void func_800CCFA4(s32, s32, s32);
    extern void func_800B11F4(void);
    extern void func_800D8774(s32, s32, s32);
    s32 i, j;
    u32 k;

    i = 1;
    do {
        k = (u16)func_800B1260(i);
        {
        register u32 invalid asm("v0") = 0xFFFF;
        if (k != invalid) {
            u32 one = 1;
            u32 off;
            u32 c;
            u32 q_off;
            u8 *base;
            register u8 *p0 asm("a1");
            j = 0;
            off = 0x234;
            c = D_80091618[k].unk_10;
            base = D_800900C0;
            p0 = base;
            q_off = c * 0x9C;
            do {
                register s32 empty asm("v0") = -1;
                if (*(s32 *)((u8 *)q_off + (u32)D_800EF524) != empty) {
                    if (i == one) {
                        *(s32 *)p0 = i;
                    } else {
                        *(s32 *)(off + (u32)base) = one;
                    }
                }
                off += 0xBC;
                p0 += 0xBC;
                j++;
                q_off += 0x34;
            } while (j < 3);
            invalid = 0xFFFF;
            if (c != invalid && D_80091618[k].unk_12 != 0) {
                for (j = 0; j < D_80091618[k].unk_12; j++) {
                    func_800CCFA4(i, j, 0);
                }
            }
            D_80091618[k].unk_12 = 0;
        }
        }
        i--;
    } while (i >= 0);
    func_800B11F4();
    D_80069EAC[0] = D_80069BB4[0];
    func_800D8774(2, D_80069BB4[0], 0x500);
}

extern s32 D_80069B28[];
extern u8 D_80091618[], D_800EF524[], D_800900C0[];
extern void func_800D8A20(void);
s32 func_800D8440(void) {
    extern s32 D_80069B28[];
    extern u8 D_80091618[];
    extern u8 D_800EF524[];
    extern u8 D_800900C0[];
    s32 i;
    u8 *slots;
    u8 *grid;
    s32 minus_one;

    if (D_80069B28[0] != 0) {
        func_800D8A20();
        return 0;
    }

    i = 1;
    slots = D_80091618;
    grid = D_800EF524;
    minus_one = -1;

    do {
        u16 k = func_800B1260(i);
        if (k != 0xFFFF) {
            register s32 j asm("a2") = 0;
            register u32 off asm("a1") = 0x234;
            u8 *base;
            register u8 *p0 asm("a0");
            u32 unk = *(u16 *)(slots + k * 0x1A8 + 0x10);
            u32 q_off;

            base = D_800900C0;
            p0 = base;
            q_off = unk * 0x9C;

            do {
                if (*(s32 *)((u8 *)q_off + (u32)grid) != minus_one) {
                    register s32 one asm("v0") = 1;
                    if (i == one) {
                        *(s32 *)p0 = minus_one;
                    } else {
                        *(s32 *)(off + (u32)base) = minus_one;
                    }
                }
                off += 0xBC;
                p0 += 0xBC;
                j++;
                q_off += 0x34;
            } while (j < 3);
        }
        i--;
    } while (i >= 0);

    return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800D8558);

s32 func_800D865C(void) {
    extern s32 D_80069B28[];
    extern u8 D_80091618[];
    extern u8 D_800EF524[];
    extern u8 D_800900C0[];
    s32 i;
    u8 *slots;
    u8 *grid;
    s32 minus_one;

    if (D_80069B28[0] != 0) {
        func_800D8A20();
        return 0;
    }

    i = 1;
    slots = D_80091618;
    grid = D_800EF524;
    minus_one = -1;

    do {
        u16 k = func_800B1260(i);
        if (k != 0xFFFF) {
            register s32 j asm("a2") = 0;
            register u32 off asm("a1") = 0x234;
            u8 *base;
            register u8 *p0 asm("a0");
            u32 unk = *(u16 *)(slots + k * 0x1A8 + 0x10);
            u32 q_off;

            base = D_800900C0;
            p0 = base;
            q_off = unk * 0x9C;

            do {
                if (*(s32 *)((u8 *)q_off + (u32)grid) != minus_one) {
                    register s32 one asm("v0") = 1;
                    if (i == one) {
                        *(s32 *)p0 = minus_one;
                    } else {
                        *(s32 *)(off + (u32)base) = minus_one;
                    }
                }
                off += 0xBC;
                p0 += 0xBC;
                j++;
                q_off += 0x34;
            } while (j < 3);
        }
        i--;
    } while (i >= 0);

    return 1;
}

void func_800D8774(s32 mode, s32 a1, s32 a2) {
    extern u8 D_80069E4C[];
    extern s32 D_80069B28[];

    if (mode == 1) {
        goto case_1;
    }
    if (mode < 2) {
        goto set_b28;
    }
    if (mode == 2) {
        goto case_2;
    }
    *D_80069B28 = mode;
    goto end;

case_1:
    {
        u8 *p = D_80069E4C;
        *(s32 *)(p + 0x64) = a1;
        *(s32 *)(p + 0x68) = *(s32 *)(p + 0x60);
    }
    goto set_b28;

case_2:
    {
        u8 *p = D_80069E4C;
        *(s32 *)(p + 0x64) = a1;
        *(s32 *)(p + 0x68) = a2;
        *(s32 *)(p + 0x60) = a1;
    }

set_b28:
    *D_80069B28 = mode;

end:
    {
        u8 *p = D_80069E4C;
        *(s32 *)(p + 0x6C) = 0;
        *(s32 *)(p + 0x70) = 0x10;
    }
}

typedef struct {
    u16 x;
    u16 y;
    u16 z;
    u16 pad;
} Vec3s_800D87E8;

typedef struct {
    u8 pad0[0xB4];
    Vec3s_800D87E8 *unkB4;
    Vec3s_800D87E8 *unkB8;
} Struct_800D87E8;

void func_800D87E8(Struct_800D87E8 *arg0, s32 arg1, Vec3s_800D87E8 *arg2) {
    extern s32 D_80069B28[];
    extern s32 D_80069BB4[];
    extern s32 D_80069EB0[];
    extern s32 rand(void);
    register Vec3s_800D87E8 *s2 asm("s2");
    register Vec3s_800D87E8 *s1 asm("s1");
    register Vec3s_800D87E8 *s0 asm("s0");
    register s32 i asm("s3");
    register Vec3s_800D87E8 *t1 asm("t1");
    s32 j;

    s2 = arg2 + 1;
    s1 = arg0->unkB4;
    i = 0;
    s1 = (Vec3s_800D87E8 *)((u8 *)s1 + (arg1 << 5));
    s0 = s1;
    for (; i < 4; i++) {
        s0->x = (rand() % 0x800) - 0x400;
        s0->y = (rand() % 0x800) - 0x400;
        s0->z = rand() % 0x400;
        s0++;
    }

    t1 = arg0->unkB8;
    t1 = (Vec3s_800D87E8 *)((u8 *)t1 + (arg1 << 5));
    if (*D_80069B28 == 1) {
        goto case_1;
    }
    if (*D_80069B28 < 2) {
        goto end;
    }
    if (*D_80069B28 == 2) {
        goto case_2;
    }
    goto end;

case_1:
    {
        u16 *ps14;
        u16 *ps13;
        u16 *ps12;
        u16 *p_t1 = (u16 *)t1;
        u16 *p_s1 = (u16 *)s1;
        u16 *p_s2 = (u16 *)s2;

        j = 0;
        ps14 = (u16 *)t1 + 2;
        ps13 = (u16 *)s1 + 2;
        ps12 = (u16 *)s2 + 2;
        do {
            u16 v1, v2;
            j++;
            v1 = *p_s2;
            p_s2 += 4;
            v2 = *p_s1;
            p_s1 += 4;
            *p_t1 = (v1 - v2) * 2;
            p_t1 += 4;
            ps14[-1] = (ps12[-1] - ps13[-1]) * 2;
            v1 = *ps12;
            ps12 += 4;
            v2 = *ps13;
            ps13 += 4;
            *ps14 = (v1 - v2) * 2;
            ps14 += 4;
        } while (j < 4);
    }
    goto end;

case_2:
    {
        u16 *ps12;
        u16 *pu16;
        u16 *pu15;
        u16 *p_t1 = (u16 *)t1;
        u16 *p_s1 = (u16 *)s1;
        u16 *p_s2 = (u16 *)s2;

        j = 0;
        ps12 = (u16 *)t1 + 2;
        pu16 = (u16 *)s1 + 2;
        pu15 = (u16 *)s2 + 2;
        do {
            u16 u3, u4;
            j++;
            *p_t1 = *p_s1 - *p_s2;
            p_t1 += 4;
            ps12[-1] = pu16[-1] - pu15[-1];
            u3 = *pu15;
            pu15 += 4;
            u4 = *pu16;
            pu16 += 4;
            *ps12 = u4 - u3;
            *(Vec3s_800D87E8 *)p_s1 = *(Vec3s_800D87E8 *)p_s2;
            p_s2 += 4;
            p_s1 += 4;
            ps12 += 4;
        } while (j < 4);
    }

end:
    *D_80069BB4 = *D_80069EB0;
}

void func_800D8A20(void) {
    extern Struct_80069E4C D_80069E4C[];
    extern Struct_80069AD4 D_80069AD4[];

    if (D_80069E4C[0].f_6C == 0) {
        D_80069E4C[0].f_6C = 1;
        D_80069E4C[0].f_70 = 0x10;
        return;
    }

    if (D_80069E4C[0].f_70 >= 9) {
        D_80069AD4[0].f_E0 += (D_80069E4C[0].f_68 - D_80069E4C[0].f_64) / 8;
    } else {
        D_80069AD4[0].f_E0 -= (D_80069E4C[0].f_68 - D_80069E4C[0].f_64) / 8;
    }

    if (--D_80069E4C[0].f_70 == 0) {
        D_80069E4C[0].f_6C = 0;
        D_80069AD4[0].f_54 = 0;
        D_80069AD4[0].f_E0 = D_80069E4C[0].f_64;
    }
}

s32 func_800DBB3C(s16 id);
void func_800D8AF8(u8 *arg0, s32 arg1) {
 extern u8 D_8008F702[];
 extern u8 D_80069E4C[];
 register s32 i asm("t0");
 register s16 *a asm("a2");
 register s16 *b asm("a0");
 register s16 *bp asm("a3");
 register s16 *ap asm("a1");
 u8 *p;
 if(D_8008F702[0]!=1) {
 i=0;
 p=D_80069E4C;
 a=(s16 *)(*(u8 **)(arg0+0xB4)+arg1*32);
 b=(s16 *)(*(u8 **)(arg0+0xB8)+arg1*32);
 bp=b+2;
 ap=a+2;
 do {
 if(*(s32 *)(p+0x70)>=9) {
 a[0]+=b[0]>>7; ap[-1]+=bp[-1]>>7; ap[0]+=bp[0]>>7;
 } else {
 a[0]-=b[0]>>7; ap[-1]-=bp[-1]>>7; ap[0]-=bp[0]>>7;
 }
 i++; ap+=4; a+=4; bp+=4; b+=4;
 } while(i<4);
 }
}

s32 func_800D8BF8(void) {
    extern s32 D_800EE9B8[];
    s32 i;
    for (i = 1; i >= 0; i--) {
        u32 id = (u16)func_800B1260(i);
        if (id != 0xFFFF) {
            u32 w = D_80100F38[id].f_798.w;
            if (((w >> 14) & 0x3F) == 9 && ((w >> 26) & 0x1F) - 10 < 2) {
                if (D_800EE9B8[1 - i] == 0) {
                    continue;
                }
                return 1;
            }
        }
    }
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800D8CCC);
