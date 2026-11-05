#include "ghidra.h"
#include "common.h"
#include "ghidra.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B38B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B3AE4);

s32 func_800B3C4C(u8 *arg0, s32 arg1) {
    u32 f;
    u32 g;
    s32 r;
    if (arg1 == 0x4E) {
        r = 11;
    } else {
        f = *(u32 *)(arg0 + 0x10);
        if ((f & 3) == 0) {
            if (((f >> 21) & 7) != 0) {
                if (((f >> 2) & 0x1F) == 0x12) {
                    r = 3;
                } else {
                    r = (((f >> 17) & 0xF) == 6) << 1;
                }
            } else {
                r = 1;
            }
        } else {
            g = (f >> 2) & 0x1F;
            if (g == 0xC) {
                r = 10;
            } else if ((f & 0x1807C) == 0x8024) {
                r = 6;
            } else if (g == 0x11) {
                r = 9;
            } else if (g == 0xE) {
                r = 6;
            } else if (g == 0x10) {
                r = 7;
            } else if (g == 0xD) {
                r = 8;
            } else if (((f >> 21) & 7) != 0) {
                r = 4;
            } else {
                r = 5;
            }
        }
    }
    return r;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B3D24);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B3EC4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B40F0);

#include "common.h"

void func_800B4284(void) {
    extern u16 D_8008EE4C[];
    switch ((*D_8008EE4C)) {                           /* irregular */
    case 0:
        func_800B3D24();
        return;
    case 1:
        func_800B3EC4();
        return;
    case 2:
        func_800B40F0();
        return;
    }
}

void func_800B4304(u8 *arg0) {
    extern u16 D_8008EE4C[];
    extern u8 D_80085428[];
    u8 *p = D_80085428;
    s32 v;
    if (D_8008EE4C[0] >= 2) {
        func_800185F8();
    }
    v = *(u32 *)(arg0 + 0x34) & 0x7F;
    if (v != 10) {
        if (v != (s8)p[0xBF5]) {
            *(u16 *)(arg0 + 0x66) = 0;
        } else {
            *(u16 *)(arg0 + 0x66) = 2;
        }
    }
}

void func_800B4384(u8 *arg0) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    u8 *p = D_80085428;
    u8 *ed;
    if (p[0xD77] != 0) {
        func_800185F8(arg0);
        return;
    }
    ed = D_8008ED68;
    *(s32 *)(arg0 + 0x54) += ed[0x103] < 2 ? 1 : ed[0x103];
    func_800A360C(p, p[0xBCA], arg0, 0);
}

#include "common.h"

void func_800B4400(void *arg0) {
    extern u8 D_8006388C[];
    extern u8 D_80063890[];
    extern u8 D_80100F94[];
    M2C_UNK var_a2;
    M2C_UNK var_a2_2;

    func_80020844(-0x48, -0x28, 0x90, 0x30, 0, 0, 0, 0, 4);
    func_8001F1A8(-0x30, -0x20, 0, 1, 0, D_80100F94, 1, 7, 3);
    var_a2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0xD77) == 0) {
        var_a2 = 3;
    }
    func_8001F1A8(-0x28, -0xC, var_a2, 1, 0, D_8006388C, 0, 2, 3);
    var_a2_2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0xD77) != 0) {
        var_a2_2 = 3;
    }
    func_8001F1A8(0, -0xC, var_a2_2, 1, 0, D_80063890, 0, 3, 3);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B4518);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B48F0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B4CA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5020);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5184);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B52FC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5438);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5780);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B58EC);

void func_800B5BE0(void *arg0) {
    extern u8 D_80085428[];
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
    if (M2C_GFIELD(D_80085428, u8, 0xD77) == 0xFF) {
        func_800185F8();
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x34) & 0x7F) {
        func_800B4400(D_80085428);
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5C4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5DA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B5F8C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B61C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B63CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B65CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B678C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B698C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B6B70);

void func_800B6D2C(u8 *arg0, u8 *arg1, s32 arg2) {
    extern struct { s32 f0; u8 pad[0x30]; } D_801010B0[];
    extern u8 func_800B7630();
    extern s32 func_800B6E24();
    u8 buf[0xA9];
    struct { u8 *p; s32 q; s32 f8; s32 fc; s32 f10; s32 f14; } s;
    struct { u8 a; u8 b; u8 c; u8 d; } t;
    s32 i;
    func_8001A998(buf, 0xA9);
    s.p = buf;
    s.q = D_801010B0[arg0[9]].f0;
    s.f10 = arg1[0x11];
    s.f8 = arg1[0x15];
    s.fc = arg1[0x16];
    s.f14 = 0;
    if (func_800B7630(arg0, arg2) == 0) {
        i = 0;
        do {
            t.a = arg1[0x15];
            t.b = arg1[0x16];
            t.c = i;
            t.d = 0;
            arg0[0x706] = 0;
            if (func_800B6E24(arg0, &s, &t) != 0) {
                return;
            }
            i++;
        } while (i < 4);
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B6E24);

void func_800B711C(u8 *arg0, u8 *arg1) {
    extern struct { s32 f0; u8 pad[0x30]; } D_801010B0[];
    extern s32 func_800B7200();
    u8 buf[0xA9];
    struct { u8 *p; s32 q; s32 f8; s32 fc; s32 f10; s32 f14; } s;
    struct { u8 a; u8 b; u8 c; u8 d; } t;
    s32 i;
    func_8001A998(buf, 0xA9);
    s.p = buf;
    s.q = D_801010B0[arg0[9]].f0;
    s.f10 = arg1[0x11];
    s.f8 = arg1[0x15];
    s.fc = arg1[0x16];
    s.f14 = 0;
    i = 0;
    do {
        t.a = arg1[0x15];
        t.b = arg1[0x16];
        t.c = i;
        t.d = 0;
        arg0[0x706] = 0;
        if (func_800B7200(arg0, &s, &t) != 0) {
            return;
        }
        i++;
    } while (i < 4);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7200);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B74BC);

s32 func_800B75C4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    (arg0 + arg0[0x26] * 2)[8] = arg2;
    (arg0 + arg0[0x26] * 2)[9] = arg1;
    arg0[0x26]++;
    if (arg0[2] == arg2 && arg0[3] == arg1 && arg0[0x27] == arg3 + arg4) {
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7630);

s32 func_800B7734(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    s32 d = arg2[0x15] - arg3[0x15];
    if (d < 0) {
        d = -d;
    }
    if (d < 2) {
        d = arg2[0x16] - arg3[0x16];
        if (d < 0) {
            d = -d;
        }
        if (d < 2) {
            return 1;
        }
    }
    return 0;
}

void func_800B7790(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3, u8 *arg4) {
    s32 i;
    s32 d;
    for (i = 0; i < 2; i++) {
        arg4[i] = arg2[0x15 + i];
    }
    for (i = 0; i < 2; i++) {
        d = arg4[i] - arg3[0x15 + i];
        if (d >= 2) {
            arg4[i] = arg4[i] - 1;
        } else if (d < -1) {
            arg4[i] = arg4[i] + 1;
        }
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B780C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7988);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7D64);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B7F34);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B80E4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B81E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8310);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8478);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B862C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8740);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B881C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8A0C);

#include "common.h"

void func_800B8DA0(void *arg0) {
    extern u8 D_8008610F[];
    u16 temp_v1;
    u8 temp_v0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s32 *, 0x10) == 0) {
        func_800185F8();
    }
    if (M2C_FIELD(arg0, s32 *, 0x34) & 0x7F) {
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((*D_8008610F) != 0) {
                M2C_FIELD(arg0, u16 *, 0x7A) = 1U;
                return;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s16 *, 0x4A) = 0x1C;
            M2C_FIELD(arg0, s16 *, 0x4E) = 4;
            M2C_FIELD(arg0, u8 *, 0x5A) = 0U;
            M2C_FIELD(arg0, u8 *, 0x59) = 0U;
            M2C_FIELD(arg0, u8 *, 0x58) = 0U;
            M2C_FIELD(arg0, s16 *, 0x46) = 0;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            return;
        case 2:
            temp_v0 = M2C_FIELD(arg0, u8 *, 0x5A) + 2;
            M2C_FIELD(arg0, u8 *, 0x5A) = temp_v0;
            M2C_FIELD(arg0, u8 *, 0x59) = temp_v0;
            M2C_FIELD(arg0, u8 *, 0x58) = temp_v0;
            if ((temp_v0 & 0xFF) == 0x80) {
                M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            }
            break;
        }
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8EC0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B8F38);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B9020);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B38B0", func_800B90FC);

#include "ghidra.h"
