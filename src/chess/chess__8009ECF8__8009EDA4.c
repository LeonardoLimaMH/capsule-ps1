#include "ghidra.h"
#include "matching.h"
#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4", func_8009EDA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4", func_8009EFB0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4", func_8009F25C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4", func_8009F4AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4", func_8009F820);

void func_8009F960(void) {
    extern u8 D_800861A0[];
    if ((*D_800861A0) != 0) {
        func_800185F8();
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4", func_8009F98C);

void func_8009FD2C(void *arg0, void *arg1) {
    extern s16 D_80101B3A[];
    (*D_80101B3A) = ((s32) (M2C_FIELD(arg1, u8 *, 0x28) + 1) >> 1) + 0xC2;
    M2C_FIELD(arg0, s32 *, 0x14) = func_8001F8B0(0x19, 9);
}

void func_8009FD78(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = func_8001F8B0(0x19, arg1 - 3);
}

void func_8009FDAC(u8 *arg0, s32 arg1) {
    extern u16 *D_80101B88[];
    extern u16 *D_80101B8C[];
    s32 q;
    u16 *p;
    s32 r;
    if (arg1 != 0) {
        if (arg1 < 10) {
            p = D_80101B88[0];
            p[8] = arg1 + 0xC2;
            r = func_8001F8B0(0x19, 5);
        } else {
            p = D_80101B8C[0];
            q = arg1 / 10;
            p[8] = q + 0xC2;
            p[9] = arg1 - q * 10 + 0xC2;
            r = func_8001F8B0(0x19, 6);
        }
    } else {
        r = func_8001F8B0(0x19, 4);
    }
    *(s32 *) (arg0 + 0x14) = r;
}

void func_8009FE5C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = func_8001F8B0(0x19, 8);
}

void func_8009FE90(u8 *arg0, u8 *arg1) {
    extern u16 D_80101B4A[];
    extern u16 D_80100D3C[];
    extern u16 D_80101B66[];
    s32 n;
    s32 i;
    n = func_800CA3DC(arg1);
    for (i = 0; i < n; i++) {
        D_80101B4A[i] = arg1[i];
    }
    for (i = 0; i < 14; i++) {
        D_80101B4A[i + n] = D_80100D3C[i];
    }
    D_80101B66[n] = 0xFFEE;
    *(s32 *) (arg0 + 0x14) = func_8001F8B0(0x19, 10);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4", func_8009FF58);

void func_800A0238(s32 arg0, s32 arg1) {
    extern u8 D_80100D58[];
    func_8009FF58(arg0, D_80100D58, 0x18, arg1);
}

void func_800A0264(s32 arg0, s32 arg1) {
    extern u8 D_80100D88[];
    func_8009FF58(arg0, D_80100D88, 0x16, arg1);
}

void func_800A0290(s32 arg0, s32 arg1) {
    extern u8 D_80100DB4[];
    func_8009FF58(arg0, D_80100DB4, 0xB, arg1);
}

void func_800A02BC(s32 arg0, s32 arg1) {
    extern u8 D_80100DCC[];
    func_8009FF58(arg0, D_80100DCC, 0x8, arg1);
}

void func_800A02E8(s32 arg0, s32 arg1) {
    extern u8 D_80100DDC[];
    func_8009FF58(arg0, D_80100DDC, 0x28, arg1);
}

void func_800A0314(s32 arg0, s32 arg1) {
    extern u8 D_80100E2C[];
    func_8009FF58(arg0, D_80100E2C, 0xC, arg1);
}

void func_800A0340(s32 arg0, s32 arg1) {
    extern u8 D_80100E44[];
    func_8009FF58(arg0, D_80100E44, 0x13, arg1);
}

void func_800A036C(s32 arg0, s32 arg1) {
    extern u8 D_80100E6C[];
    func_8009FF58(arg0, D_80100E6C, 0x17, arg1);
}

void func_800A0398(s32 arg0, s32 arg1) {
    extern u8 D_80100E9C[];
    func_8009FF58(arg0, D_80100E9C, 0x1B, arg1);
}

void func_800A03C4(s32 arg0, s32 arg1) {
    extern u8 D_80100ED4[];
    func_8009FF58(arg0, D_80100ED4, 0x13, arg1);
}

s32 func_800A03F0(u32 arg0, s32 arg1, s32 arg2) {
    extern s32 D_80065310[];
    s32 off;
    if (arg0 >= 8U) {
        off = 0;
    } else {
        off = arg2 * 0x980 - 0x5580;
    }
    return *(s32 *) (arg1 * 4 + (D_80065310[arg0] + off)) + off;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4", func_800A0448);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4", func_800A04C8);

s32 func_800A0540(u8 *arg0, u32 arg1) {
    extern s32 D_80065310[];
    u32 b;
    u8 c;
    u32 t;
    s32 n;
    s32 off;
    if (*(arg0 + arg1 + 0x5E4) == 0xFF) {
        return 0;
    }
    if (arg1 == arg0[0xBCA]) {
        b = arg0[0xBEF];
        n = (u8) (b % 3) + 6;
        if (b < 2U) {
            arg0[0xBEF] = b + 1;
        }
    } else {
        c = arg0[0xBEF];
        n = (c & 1) + 9;
        if (c == 0) {
            arg0[0xBEF] = c + 1;
        }
    }
    t = *(arg0 + arg1 + 0x5E4);
    if (t >= 8U) {
        off = 0;
    } else {
        off = arg1 * 0x980 - 0x5580;
    }
    *(s32 *) (arg0 + 0x14) = *(s32 *) (n * 4 + (D_80065310[t] + off)) + off;
    return 1;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4", func_800A062C);
