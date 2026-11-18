#include "ghidra.h"
#include "common.h"

void func_800BF9B0(void *arg0) {
    extern u16 D_8008EE50[];
    switch ((*D_8008EE50)) {                           /* irregular */
    case 0:
        if (func_800A1330(arg0, M2C_FIELD(arg0, u8 *, 0xBCA)) != 0) {
            func_800220B8(arg0);
            func_80012628();
            return;
        }
        func_8001264C(2);
        return;
    case 1:
        if (func_800220D4(arg0, 1, M2C_FIELD(arg0, u8 *, 0xBCA), 0) != 0) {
            func_80012628();
            return;
        }
        return;
    case 2:
        func_800125D8();
        break;
    }
}

void func_800BFA84(u8 *arg0, s32 arg1) {
    typedef struct {
        u8 unk0;
        u8 pad1[0x24];
        u8 unk25;
        u8 unk26;
        u8 pad27[0x7C - 0x27];
    } ChessUnit5D0_BFA84;

    typedef struct {
        u8 unk0;
        u8 unk1;
    } ChessPos5D0;

    typedef struct {
        u8 pad0[0x18];
        ChessUnit5D0_BFA84 units[2][6];
        u8 pad5E8[0x5FA - (0x18 + 2 * 6 * 0x7C)];
        u8 unk5FA;
        u8 unk5FB[2];
        u8 pad5FD[0x601 - 0x5FD];
        ChessPos5D0 unk601[2];
        u8 pad605[0x60E - 0x605];
        u8 unk60E;
        u8 pad60F;
        u8 unk610;
        u8 pad611[0x712 - 0x611];
        u8 unk712;
        u8 unk713;
    } ChessSub5D0_BFA84;

    typedef struct {
        u8 pad0[0x10];
        u32 unk10;
    } ChessMonInfo;

    extern u16 D_8008EE50[];
    extern u8 func_800A8444(u8 *, ChessUnit5D0_BFA84 *, u8, u8);
    extern ChessMonInfo *func_800A8E84();
    extern s32 func_800C7864(u8 *, ChessSub5D0_BFA84 *, ChessUnit5D0_BFA84 *, ChessUnit5D0_BFA84 *);
    extern s32 func_800B2ABC(u8 *, s32, ChessUnit5D0_BFA84 *, ChessUnit5D0_BFA84 *);
    extern s32 func_800B3714(u8 *, ChessSub5D0_BFA84 *, ChessUnit5D0_BFA84 *);
    extern void func_8009C4B0(u8 *, s32, s32);
    extern void func_800A87C8(u8 *, s32, s32, s32);

    ChessSub5D0_BFA84 *s0 = (ChessSub5D0_BFA84 *)(arg0 + 0x5D0);
    s32 s3 = s0->unk5FA;
    s32 s4 = s0->unk5FB[s3];
    ChessUnit5D0_BFA84 *s2 = &s0->units[s3][s4];
    ChessUnit5D0_BFA84 *s6 = &s0->units[s0->unk712][s0->unk713];
    s32 s1 = *D_8008EE50;
    s32 res;

    switch (s1) {
    case 0:
        s0->unk60E = 1;
        s0->unk610 = 0;
        if (arg1 < 2) {
            s2->unk25 = func_800A8444(arg0, s2, s0->unk601[s3].unk0, s0->unk601[s3].unk1);
        }
        func_80012628();
        break;
    case 1:
        if (arg1 == 0) {
            ChessMonInfo *mon = func_800A8E84(s0);
            if (s2->unk0 == 0x34) {
                res = func_800C7864(arg0, s0, s2, s6);
            } else if (((mon->unk10 >> 11) & 0xF) == s1) {
                res = func_800B2ABC(arg0, 0, s2, s6);
            } else {
                res = func_800B3714(arg0, s0, s2);
            }
        } else {
            res = func_800B3714(arg0, s0, s2);
        }
        if (res != 0) {
            func_80012628();
        }
        break;
    case 2:
        s2->unk26 = s1;
        func_8009C4B0(arg0, s3, s4);
        func_800A87C8(arg0, s3, s4, 1);
        func_800125D8();
        break;
    }
}

typedef struct {
    u8 pad[0xE];
    u8 unkE;
    u8 pad2[0x7C - 0xF];
} ChessUnit5D0;
typedef struct {
    u8 pad0[0x18];
    ChessUnit5D0 units[2][6];
    u8 pad5E8[0x5FA - (0x18 + 2 * 6 * 0x7C)];
    u8 unk5FA;
    u8 unk5FB[2];
    u8 pad5FD[0x710 - 0x5FD];
    s16 unk710;
    u8 unk712;
    u8 unk713;
} ChessSub5D0;
extern u8 func_800C202C(void *, u8, u8);
extern void func_800125D8(void);
void func_800BFC70(u8 *arg0) {
    ChessSub5D0 *s0 = (ChessSub5D0 *)(arg0 + 0x5D0);
    s32 v1 = s0->unk712;
    s32 a0 = s0->unk713;
    s32 a1 = s0->unk5FA;
    u8 p2 = (v1 << 7) | (a0 + 1);
    u8 p1 = (a1 << 7) | (s0->unk5FB[a1] + 1);
    ChessUnit5D0 *s1 = &s0->units[v1][a0];
    s16 val = func_800C202C(s0, p1, p2);

    s0->unk710 = val;
    if (s1->unkE < val) {
        s0->unk710 = s1->unkE;
    }
    func_800125D8();
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0", func_800BFD34);

void func_800BFE18(u8 *arg0, s32 arg1) {
    typedef struct {
        u8 unk0;
        u8 pad1[0x7C - 1];
    } ChessUnit5D0_BFE18;

    typedef struct {
        u8 pad0[0x18];
        ChessUnit5D0_BFE18 units[2][6];
        u8 pad5E8[0x5FA - (0x18 + 2 * 6 * 0x7C)];
        u8 unk5FA;
        u8 unk5FB[2];
        u8 pad5FD[0x712 - 0x5FD];
        u8 unk712;
        u8 unk713;
    } ChessSub5D0_BFE18;

    extern u16 D_8008EE50[];
    extern s32 (*D_80102018[])();
    extern s32 func_800DCF3C(ChessUnit5D0_BFE18 *);
    extern void func_800DCE48(void);
    extern void func_800DCE78(void);
    extern void func_80012628(void);
    extern void func_800125D8(void);

    ChessSub5D0_BFE18 *s1 = (ChessSub5D0_BFE18 *)(arg0 + 0x5D0);
    s32 c = s1->unk5FA;
    s32 u = s1->unk5FB[c];
    ChessUnit5D0_BFE18 *s2 = &s1->units[c][u];
    ChessUnit5D0_BFE18 *s3 = &s1->units[s1->unk712][s1->unk713];
    s32 state = *D_8008EE50;
    s32 res;

    switch (state) {
    case 0:
        if (func_800DCF3C(s2) != 0) {
            func_800DCE48();
            if (arg1 != 2) {
                func_80012628();
            } else {
                func_800125D8();
            }
        }
        break;
    case 1:
        func_800DCE78();
        if (arg1 == state) {
            res = D_80102018[s2->unk0](arg0, s1, s2, s3);
        } else {
            res = D_80102018[s2->unk0](arg0, s1, s2);
        }
        if (res != 0) {
            func_800125D8();
        }
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0", func_800BFFAC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0", func_800C01F4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0", func_800C0440);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0", func_800C0658);

void func_800C087C(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_800B3338(param_1,1);
  if (iVar1 != 0) {
    func_800125D8();
  }
  return;
}

void func_800C08AC(u8 *p) {
    typedef struct {
        u8 x;
        u8 y;
    } ChessPair;

    typedef struct {
        u8 unk0;
        u8 unk1;
        u8 unk2;
        u8 unk3;
        u8 unk4[2];
        u8 unk6[2];
        ChessPair unk8[15];
        u8 unk26;
    } ChessCB0;

    extern s8 func_800A8378(u8 *);
    extern void func_80012604(s32);

    u8 *s1 = p + 0x5D0;
    ChessCB0 *s0 = (ChessCB0 *)(p + 0xCB0);
    s32 v1 = s1[0x5FA];
    s32 u = (s1 + v1)[0x5FB];
    u8 *s2;
    s32 a1;
    s32 res;

    s1[0x610] = 0;
    s2 = s1 + (v1 * 0x2E8 + 0x18) + u * 0x7C;

    for (a1 = 0; a1 < 2; a1++) {
        u8 *v1_p = (u8 *)s0 + a1;
        v1_p[4] = *(((u8 *)s0) + s0->unk26 * 2 + a1 + 8);
        v1_p[6] = (s2 + a1)[0x15];
    }

    s0->unk26++;
    s2[0x25] = func_800A8378(p);
    s1[0x709] = 8;
    s1[0x708] = 8;

    if (s2[0] == 0x21 || s2[0] == 0x25 || s2[0] == 0x3D) {
        if (s0->unk0 == s0->unk6[0] && s0->unk1 == s0->unk6[1]) {
            a1 = 0;
            if (s0->unk8[0].x == s1[0x6E2] && s0->unk8[0].y == s1[0x6E3]) {
                s1[0x70A] = 8;
            } else {
                a1++;
                while (s0->unk8[a1].x != s1[0x6E2] || s0->unk8[a1].y != s1[0x6E3]) {
                    a1++;
                }
                s1[0x70A] = (a1 + 1) * 8;
            }
            res = 6;
            goto end;
        }
        if (s2[0] != 0x3D) {
fail:
            s2[0x17] = 0x88;
            s2[0x23] = 0;
        } else {
            s2[0x17] = 1;
        }
    } else {
        goto fail;
    }
    *(u32 *)(s2 + 0x18) |= 0x40040;
    res = 7;
end:
    func_80012604(res);
}

void func_800C0A94(s32 arg0)
{
    extern u16 D_8008EE50[];
    u8 *temp_s1;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a1;
    u8 new_var;
    void *temp_a2;
    temp_a2 = arg0 + 0x5D0;
    temp_v1 = M2C_FIELD(temp_a2, u8 *, 0x5FA);
    new_var = M2C_FIELD(temp_a2 + temp_v1, u8 *, 0x5FB);
    temp_s1 = temp_a2 + (temp_v1 * 0x2E8 + 0x18) + new_var * 0x7C;
    temp_a1 = temp_a2 + (M2C_FIELD(temp_a2, u8 *, 0x712) * 0x2E8 + 0x18) + M2C_FIELD(temp_a2, u8 *, 0x713) * 0x7C;
    switch (*D_8008EE50) {
    case 0:
        if (((M2C_FIELD(func_800A8E84(temp_a2, temp_a1, temp_a2, arg0), u32 *, 0x10) >> 11) & 15) == 1) {
            temp_v1_2 = *temp_s1;
            if (temp_v1_2 == 0x2B || temp_v1_2 == 0x30) {
                func_800125D8();
            } else {
                func_80012628();
                break;
            }
        }
        func_800125D8();
        break;
    case 1:
        func_800B3488(temp_a2, temp_a1, temp_a2, arg0);
        func_80012628();
        break;
    case 2:
        if (func_800B3338(arg0, 0, temp_a2, arg0) != 0) {
            func_800125D8();
        }
        break;
    }
}
