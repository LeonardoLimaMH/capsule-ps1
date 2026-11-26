#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;

void func_800CBBB4(u8 *arg0) {
    extern u8 *D_8008ED68[];
    extern u8 D_800906A0[];
    u8 **pp = D_8008ED68;
    u32 var_a2;
    u8 *p;
    u8 *q;
    u8 *ctx;
    s32 n;
    s32 idx;
    u32 *ot;
    u32 end;
    s32 offset;
    u32 bit = *(u32 *)(arg0 + 0x50) & 1;
    if (bit != 1) {
        var_a2 = 0;
        q = arg0 + 0x18;
        p = *(u8 **)(*pp + 0x1090);
        ctx = *pp;
        if (p != 0) {
            end = (u32)(p + 0x18);
            if ((u32)(ctx + 0x4594) >= end) {
                var_a2 = end;
            }
        }
        *(u32 *)(ctx + 0x1090) = var_a2;
        SetPolyF4(p);
        SetSemiTrans(p, (*(u32 *)(arg0 + 0x50) >> 6) & 1);
        if (arg0[0x58] == 0) {
            func_8002CEC0(D_800906A0);
        }
        n = func_800CD564(q, p);
        p[4] = q[0x20];
        p[5] = q[0x21];
        idx = n - 1;
        p[6] = q[0x22];
        if ((u32)(n - 7) < 0x3FA) {
            offset = idx * 4;
            *(u32 *)p = (*(u32 *)p & 0xFF000000) | (*(u32 *)(offset + (u32)*pp + 0x70) & 0xFFFFFF);
            ot = (u32 *)(offset + (u32)*pp);
            ot[0x70 / 4] = (ot[0x70 / 4] & 0xFF000000) | ((u32)p & 0xFFFFFF);
            func_80018610(GetTPage(0, (*(u32 *)(arg0 + 0x50) >> 4) & 3, 0, 0) & 0xFFFF, idx);
        }
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CBD28);

void func_800CBFF8(void) {

}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CC000);

void func_800CC5DC(u8 *arg0) {
    extern u8 *D_8008ED68[];
    extern u8 D_800906A0[];
    u8 **pp = D_8008ED68;
    u32 var_a2;
    u8 *p;
    u8 *q;
    u8 *ctx;
    s32 n;
    s32 idx;
    u32 *ot;
    u32 end;
    s32 offset;
    u8 u0;
    u8 u1;
    u8 v0;
    u8 v1;
    u32 bit = *(u32 *)(arg0 + 0x50) & 1;

    if (bit != 1) {
        var_a2 = 0;
        q = arg0 + 0x18;
        p = *(u8 **)(*pp + 0x1090);
        ctx = *pp;
        if (p != 0) {
            end = (u32)(p + 0x28);
            if ((u32)(ctx + 0x4594) >= end) {
                var_a2 = end;
            }
        }
        *(u32 *)(ctx + 0x1090) = var_a2;
        SetPolyFT4(p);
        SetShadeTex(p, 0);
        SetSemiTrans(p, (*(u32 *)(arg0 + 0x50) >> 6) & 1);
        if (arg0[0x58] == 0) {
            func_8002CEC0(D_800906A0);
        }
        n = func_800CD85C(q, p);
        p[4] = q[0x30];
        p[5] = q[0x31];
        p[6] = q[0x32];
        u0 = q[0x24];
        p[0x1C] = u0;
        p[0xC] = u0;
        u1 = u0 + q[0x28];
        p[0x24] = u1;
        p[0x14] = u1;
        v0 = q[0x26];
        p[0x15] = v0;
        p[0xD] = v0;
        v1 = v0 + q[0x2A];
        p[0x25] = v1;
        p[0x1D] = v1;
        *(u16 *)(p + 0xE) = GetClut(*(u16 *)(q + 0x2C), *(u16 *)(q + 0x2E));
        idx = n - 1;
        *(u16 *)(p + 0x16) = GetTPage(0, (*(u32 *)(arg0 + 0x50) >> 4) & 3, *(u16 *)(q + 0x20), *(u16 *)(q + 0x22));
        if ((u32)(n - 7) < 0x3FA) {
            offset = idx * 4;
            *(u32 *)p = (*(u32 *)p & 0xFF000000) | (*(u32 *)(offset + (u32)*pp + 0x70) & 0xFFFFFF);
            ot = (u32 *)(offset + (u32)*pp);
            ot[0x70 / 4] = (ot[0x70 / 4] & 0xFF000000) | ((u32)p & 0xFFFFFF);
        }
    }
}

void func_800CC7BC(u8 *arg0) {
    extern u8 *D_8008ED68[];
    extern u8 D_800906A0[];
    u8 **pp = D_8008ED68;
    u32 var_a2;
    u8 *p;
    u8 *q;
    u8 *ctx;
    s32 n;
    s32 idx;
    u32 *ot;
    u32 end;
    s32 offset;
    u32 bit = *(u32 *)(arg0 + 0x50) & 1;

    if (bit != 1) {
        var_a2 = 0;
        q = arg0 + 0x18;
        p = *(u8 **)(*pp + 0x1090);
        ctx = *pp;
        if (p != 0) {
            end = (u32)(p + 0x24);
            if ((u32)(ctx + 0x4594) >= end) {
                var_a2 = end;
            }
        }
        *(u32 *)(ctx + 0x1090) = var_a2;
        SetPolyG4(p);
        SetSemiTrans(p, (*(u32 *)(arg0 + 0x50) >> 6) & 1);
        if (arg0[0x58] == 0) {
            func_8002CEC0(D_800906A0);
        }
        n = func_800CD768(q, p);
        p[4] = q[0x20];
        p[5] = q[0x21];
        p[6] = q[0x22];
        p[0xC] = q[0x23];
        p[0xD] = q[0x24];
        p[0xE] = q[0x25];
        p[0x14] = q[0x26];
        p[0x15] = q[0x27];
        p[0x16] = q[0x28];
        p[0x1C] = q[0x29];
        p[0x1D] = q[0x2A];
        idx = n - 1;
        p[0x1E] = q[0x2B];
        if ((u32)(n - 7) < 0x3FA) {
            offset = idx * 4;
            *(u32 *)p = (*(u32 *)p & 0xFF000000) | (*(u32 *)(offset + (u32)*pp + 0x70) & 0xFFFFFF);
            ot = (u32 *)(offset + (u32)*pp);
            ot[0x70 / 4] = (ot[0x70 / 4] & 0xFF000000) | ((u32)p & 0xFFFFFF);
            func_80018610(GetTPage(0, (*(u32 *)(arg0 + 0x50) >> 4) & 3, 0, 0) & 0xFFFF, idx);
        }
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CC99C);

void func_800CCC0C(u8 *arg0) {
    extern u8 *D_8008ED68[];
    extern u8 D_800906A0[];
    u8 **pp = D_8008ED68;
    u32 var_a2;
    u8 *p;
    u8 *q;
    u8 *ctx;
    s32 n;
    s32 idx;
    u32 *ot;
    u32 end;
    s32 offset;
    u32 bit = *(u32 *)(arg0 + 0x50) & 1;

    if (bit != 1) {
        var_a2 = 0;
        q = arg0 + 0x18;
        p = *(u8 **)(*pp + 0x1090);
        ctx = *pp;
        if (p != 0) {
            end = (u32)(p + 0x1C);
            if ((u32)(ctx + 0x4594) >= end) {
                var_a2 = end;
            }
        }
        *(u32 *)(ctx + 0x1090) = var_a2;
        SetPolyG3(p);
        SetSemiTrans(p, (*(u32 *)(arg0 + 0x50) >> 6) & 1);
        if (arg0[0x58] == 0) {
            func_8002CEC0(D_800906A0);
        }
        n = func_800CD6AC(q, p);
        idx = n - 1;
        if (*(s32 *)(arg0 + 0x80) != 0) {
            idx = 6;
        }
        p[4] = q[0x18];
        p[5] = q[0x19];
        p[6] = q[0x1A];
        p[0xC] = q[0x1B];
        p[0xD] = q[0x1C];
        p[0xE] = q[0x1D];
        p[0x14] = q[0x1E];
        p[0x15] = q[0x1F];
        p[0x16] = q[0x20];
        if ((u32)(idx - 6) < 0x3FA) {
            offset = idx * 4;
            *(u32 *)p = (*(u32 *)p & 0xFF000000) | (*(u32 *)(offset + (u32)*pp + 0x70) & 0xFFFFFF);
            ot = (u32 *)(offset + (u32)*pp);
            ot[0x70 / 4] = (ot[0x70 / 4] & 0xFF000000) | ((u32)p & 0xFFFFFF);
            func_80018610(GetTPage(0, (*(u32 *)(arg0 + 0x50) >> 4) & 3, 0, 0) & 0xFFFF, idx);
        }
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CCDE4);

void func_800CD014(u8 *arg0) {
    extern u8 *D_8008ED68[];
    extern u8 D_800906A0[];
    u8 **pp = D_8008ED68;
    u32 var_a2;
    u8 *p;
    u8 *q;
    u8 *ctx;
    s32 n;
    s32 idx;
    u32 *ot;
    u32 end;
    s32 offset;
    u32 bit = *(u32 *)(arg0 + 0x50) & 1;

    if (bit != 1) {
        var_a2 = 0;
        q = arg0 + 0x18;
        p = *(u8 **)(*pp + 0x1090);
        ctx = *pp;
        if (p != 0) {
            end = (u32)(p + 0x10);
            if ((u32)(ctx + 0x4594) >= end) {
                var_a2 = end;
            }
        }
        *(u32 *)(ctx + 0x1090) = var_a2;
        SetLineF2(p);
        SetSemiTrans(p, (*(u32 *)(arg0 + 0x50) >> 6) & 1);
        if (arg0[0x58] == 0) {
            func_8002CEC0(D_800906A0);
        }
        n = func_800CDA94(q, p);
        p[4] = q[0x10];
        p[5] = q[0x11];
        idx = n - 1;
        p[6] = q[0x12];
        if ((u32)(n - 7) < 0x3FA) {
            offset = idx * 4;
            *(u32 *)p = (*(u32 *)p & 0xFF000000) | (*(u32 *)(offset + (u32)*pp + 0x70) & 0xFFFFFF);
            ot = (u32 *)(offset + (u32)*pp);
            ot[0x70 / 4] = (ot[0x70 / 4] & 0xFF000000) | ((u32)p & 0xFFFFFF);
            func_80018610(GetTPage(0, (*(u32 *)(arg0 + 0x50) >> 4) & 3, 0, 0) & 0xFFFF, idx);
        }
    }
}

void func_800CD188(s32 arg0, s32 arg1) {
    typedef struct {
        u8 unk0[4];
        void *unk4;
        void *unk8;
        void *unkC;
        u8 unk10[0x1C - 0x10];
    } Entry1C;
    typedef struct {
        u8 unk0[0x24];
    } Entry24;
    typedef struct {
        u8 unk0[0x50];
    } Entry50;
    extern Entry1C D_80069EC4[][26];
    extern struct {
        Entry24 a[0xAE];
        Entry24 b[0xAE];
        Entry50 c[1];
    } D_80111FBC;
    s32 i;

    for (i = 0; i < 2; i++) {
        D_80069EC4[i][arg0 + 0x13].unk4 = &D_80111FBC.a[arg1];
        D_80069EC4[i][arg0 + 0x13].unk8 = &D_80111FBC.b[arg1];
        D_80069EC4[i][arg0 + 0x13].unkC = &D_80111FBC.c[arg1];
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CD200);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CD564);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CD658);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CD6AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CD768);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CD85C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CD950);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CD9F0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CDA94);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CDB30);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CDF4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CE330);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CE73C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CE9E4);

#include "common.h"
#include "gte_inline.h"

void func_800CEC5C(s32 unused_arg0, void *arg1, M2C_UNK arg2) {
    s32 temp_v1;

    PushMatrix();
    func_8002CEC0(arg1);
    temp_v1 = M2C_FIELD(arg1, s32 *, 8);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_8002AF9C(arg1, arg2);
        break;
    case 1:
        func_800CE73C(arg1, arg2);
        break;
    case 2:
        func_800CE9E4(arg1, arg2);
        break;
    case 3:
        func_8002B4D0(arg1, arg2);
        break;
    }
    PopMatrix();
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CED20);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844__800CBAA0__800CBBB4", func_800CEFA0);
