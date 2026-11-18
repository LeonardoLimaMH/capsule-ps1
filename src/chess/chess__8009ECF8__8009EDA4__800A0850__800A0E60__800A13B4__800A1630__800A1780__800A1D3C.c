#include "ghidra.h"
#include "matching.h"
#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780__800A1D3C", func_800A1D3C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780__800A1D3C", func_800A208C);

void func_800A2308(u8 *arg0) {
    typedef struct {
        u8 pad0[0x15];
        u8 unk15[2];
        u8 unk17;
        u8 pad18[0x7c - 0x18];
    } ChessUnit_A2308;

    typedef struct {
        u8 pad0[0x10];
        u8 unk10[2];
        u8 pad12[0x18 - 0x12];
        ChessUnit_A2308 units[2][6];
        u8 pad5E8[0x5FA - 0x5E8];
        u8 unk5FA;
        u8 pad5FB[0x601 - 0x5FB];
        u8 unk601[2][2];
        u8 pad605[0x615 - 0x605];
        u8 unk615;
        u8 pad616[0x619 - 0x616];
        u8 unk619;
        u8 unk61A;
        u8 pad61B[0x6DB - 0x61B];
        u8 unk6DB[2];
    } ChessSub5D0_A2308;

    extern void func_800AE03C();
    extern void func_800C8EF0();
    extern s32 func_800A1924();
    extern void func_80012604();

    ChessSub5D0_A2308 *base = (ChessSub5D0_A2308 *)(arg0 + 0x5D0);
    u8 c = base->unk5FA;
    s32 idx = base->unk6DB[c];
    s32 i;
    s32 ret;

    if (base->unk61A == 0 || base->unk61A == 5) {
        if (base->unk10[c] != 0) {
            func_800AE03C(base, c);
        }
        func_800C8EF0(arg0, c, base->unk601[c]);
        for (i = 0; i < 2; i++) {
            base->units[c][idx].unk15[i] = base->unk601[c][i];
        }
        ret = func_800A1924(arg0, c, base->unk601[c]);
        if (ret > 0) {
            base->unk619 = 0;
            base->unk615 = 0;
            func_80012604(6);
        } else if (ret < 0) {
            u8 *p;
            i = 1;
            p = (u8 *)base + (idx * 0x7c + c * 0x2e8) + 1;
            for (; i >= 0; i--) {
                p[0x2d] = 0;
                p--;
            }
            base->units[c][idx].unk17 = 0;
            func_80012604(2);
        }
    }
}

void func_800A24A4(u8 *arg0) {
    typedef struct {
        u8 pad0[0xC];
        u16 unkC;
    } Arg0_A24A4;

    typedef struct {
        u8 pad0[0x10];
        u8 unk10[2];
        u8 pad12[0x5FA - 0x12];
        u8 unk5FA;
        u8 pad5FB[0x615 - 0x5FB];
        u8 unk615;
        u8 pad616[0x619 - 0x616];
        u8 unk619;
        u8 unk61A;
        u8 pad61B[0x6D9 - 0x61B];
        u8 unk6D9[2];
        u8 pad6DB[0x6DF - 0x6DB];
        u8 unk6DF;
    } Sub5D0_A24A4;

    typedef struct {
        u32 unk0;
        u8 pad4[0xC];
    } Entry88_A24A4;

    typedef struct {
        u8 pad0[0x88];
        Entry88_A24A4 unk88[6];
        u16 unkE8;
        u8 padEA[0x103 - 0xEA];
        u8 unk103;
    } D8008ED68_A24A4;

    extern D8008ED68_A24A4 D_8008ED68[];
    extern void func_80012628();
    extern void func_800AECC4();
    extern void func_80034AB0();
    extern void func_80012604();
    extern void func_800A1CA0();

    Sub5D0_A24A4 *base = (Sub5D0_A24A4 *)(arg0 + 0x5D0);
    u8 c = base->unk5FA;
    u32 flags;

    if (base->unk61A == 0 || base->unk61A == 5) {
        switch (D_8008ED68[0].unkE8) {
        case 0:
            if (base->unk10[c] != 0) {
                u16 cur = ((Arg0_A24A4 *)arg0)->unkC;
                u16 next;
                if (D_8008ED68[0].unk103 >= 2) {
                    next = cur + D_8008ED68[0].unk103;
                } else {
                    next = cur + 1;
                }
                ((Arg0_A24A4 *)arg0)->unkC = next;
                if (next < 0x15) {
                    break;
                }
            }
            func_80012628();
            break;
        case 1:
            if (base->unk10[c] != 0) {
                func_800AECC4(base, c);
            }
            flags = D_8008ED68[0].unk88[c].unk0;
            if (flags & 0x20) {
                if (base->unk6DF == 0) {
                    func_80034AB0(0x48);
                    base->unk6D9[c] = 6;
                    base->unk619 = 0;
                    base->unk615 = 0;
                    base->unk5FA ^= 1;
                    func_80012604(7);
                    break;
                }
                goto label_5d;
            }
            if (flags & 0x40) {
            label_5d:
                func_80034AB0(0x5D);
                base->unk6DF = 0;
                func_800A1CA0(arg0, base, base->unk5FA);
                func_80012604(4);
                break;
            }
            if (flags & 0x8000) {
                func_80034AB0(0x84);
                base->unk6DF ^= 1;
            } else if (flags & 0x2000) {
                func_80034AB0(0x84);
                base->unk6DF ^= 1;
            }
            break;
        }
    }
}

void func_800A2660(u8 *arg0) {
    typedef struct {
        u8 pad0[0xE0];
        s32 unkE0;
        u8 padE4[0x4];
        s16 unkE8;
        s16 unkEA;
        u8 padEC[0x140 - 0xEC];
        s32 unk140;
        u8 pad144[0x4];
        s16 unk148;
        u8 pad14A[0x2];
    } Cam_A2660;

    typedef struct {
        u8 pad0[0x30];
        u16 unk30;
        u8 pad32[0x2];
    } Stage_A2660;

    typedef struct {
        u8 pad0[0x9];
        u8 unk9;
        u8 padA[0x61A - 0xA];
        u8 unk61A;
    } Sub5D0_A2660;

    extern Cam_A2660 D_80069AD4[];
    extern u16 D_8008EE50[];
    extern Stage_A2660 D_801010B0[];
    extern void func_80012628();
    extern void func_800125D8();
    extern void func_8002CC74();
    extern void func_8002CD50();

    Sub5D0_A2660 *base = (Sub5D0_A2660 *)(arg0 + 0x5D0);

    switch (*D_8008EE50) {
    case 0:
        if (base->unk61A == 5) {
            func_80012628();
        } else {
            func_800125D8();
        }
        break;
    case 1:
        base->unk61A = 4;
        D_80069AD4[0].unk148 = 0x1C0;
        D_80069AD4[0].unk140 = 0x660;
        func_80012628();
        break;
    case 2:
        if (D_80069AD4[0].unkE8 == D_80069AD4[0].unk148) {
            base->unk61A = 0;
            func_80012628();
        } else {
            D_80069AD4[0].unkE8 += 0xF70;
            D_80069AD4[0].unkE0 += 0x1000 - ((s32)D_801010B0[base->unk9].unk30 - 0x660) / 4;
        }
        D_80069AD4[0].unkE8 %= 0x1000;
        D_80069AD4[0].unkEA %= 0x1000;
        D_80069AD4[0].unkE0 %= 0x1000;
        func_8002CC74();
        func_8002CD50();
        break;
    case 3:
        func_800125D8();
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780__800A1D3C", func_800A2810);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780__800A1D3C", func_800A2D38);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780__800A1D3C", func_800A2E20);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780__800A1D3C", func_800A3080);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780__800A1D3C", func_800A33F8);
