#include "ghidra.h"
#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BB910);

s32 func_800BBACC(s32 a0, s32 a1, u8 *a2) {
    extern u16 D_8008EE54[];
    extern void func_80012668(void);
    s32 r = 0;

    switch (D_8008EE54[0]) {
    case 0:
        a2[0x17] = 0x8A;
        a2[0x24] = 0x45;
        a2[0x23] = 1;
        func_80012668();
        break;
    case 1:
        if (*(s16 *)(*(u8 **)(a2 + 0x70) + 0x24) < 0) {
            r = 1;
        }
        break;
    }
    return r;
}

typedef struct {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x18];
    u32 unk3C;
    u8 pad40[6];
    s16 unk46;
    u8 pad48[2];
    s16 unk4A;
    u8 pad4C[4];
    s16 unk50;
    s16 unk52;
    u8 pad54[4];
    u8 unk58;
    u8 unk59;
    u8 unk5A;
    u8 pad5B[0x1F];
    u16 unk7A;
    s32 unk7C;
    s32 unk80;
    s32 unk84;
} UnkBBB54;

extern void func_800CA2C8(s16, s16, s16, s16, s16, s32);
typedef struct {
    u8 pad0[0x3C];
    u32 unk3C;
    u8 pad40[6];
    s16 unk46;
    u8 pad48[2];
    u16 unk4A;
    u8 pad4C[6];
    s16 unk52;
} UnkBCE0C;

typedef struct {
    u8 b0, b1, b2, b3;
} Tile800BE244;
typedef struct {
    Tile800BE244 (*board)[13];
    u8 pad[0x30];
} Stage800BE244;
typedef struct {
    u8 pad[0x88];
    struct {
        u32 flags;
        u8 pad[0xC];
    } pad88[2];
} Ed800BE244;

void func_800BBB54(UnkBBB54 *arg0) {
    extern s32 D_8008F7A8[];
    extern s32 rcos(s32);
    extern s32 rsin(s32);
    extern void func_80013920(UnkBBB54 *);
    u32 u7a;
    u32 u3c;
    u32 u1;
    u8 c;
    s16 s;
    s32 trig;

    if (arg0->unk20 == 5) {
        arg0->unk20 = 2;
    }
    u7a = arg0->unk7A;
    u3c = arg0->unk3C;
    u1 = (u3c * 3) >> 1;
    c = ((u3c - u7a) * 0xFF) / u3c;
    arg0->unk58 = c;
    arg0->unk5A = c;
    arg0->unk59 = c;
    s = ((u1 - arg0->unk7A) << 12) / u1;
    arg0->unk52 = s;
    arg0->unk50 = s;
    if (arg0->unk58 < 10) {
        func_80013920(arg0);
    }
    trig = rcos(((arg0->unk84 + arg0->unk7A) << 12) / 200);
    arg0->unk46 = (((arg0->unk80 * arg0->unk7C * 3) / 4) * trig) / 4096;
    trig = rsin(((arg0->unk84 + arg0->unk7A) << 12) / 200);
    arg0->unk4A = (((arg0->unk80 * arg0->unk7C * 2) / 5) * trig) / 4096;
    arg0->unk7A++;
    arg0->unk7C++;
    if (*D_8008F7A8 != 0) {
        arg0->unk7C += 2;
    }
}

extern void func_800CA2C8(s16, s16, s16, s16, s16, s32);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BBD20);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BC49C);

extern void func_800CA2C8(s16, s16, s16, s16, s16, s32);
void func_800BCE0C(UnkBCE0C *arg0) {
    extern s32 D_80069BB4[];
    extern u8 D_80086105[];
    extern u8 D_8008ED68[];
    u32 temp_v1;
    u8 *ed;
    s32 y;

    temp_v1 = arg0->unk3C;
    if (temp_v1 < 0x32U) {
        arg0->unk52 = (s16)((temp_v1 << 0xC) / 30);
    }
    ed = D_8008ED68;
    arg0->unk3C += (ed[0x103] >= 2) ? ed[0x103] : 1;
    y = arg0->unk4A - (0xEBE0 / *D_80069BB4);
    func_800CA2C8(arg0->unk46, (s16)y, 2, 0x1800, arg0->unk52, 5);
    if (*D_80086105 != 0) {
        func_800185F8(arg0);
    }
}

void func_800BCEEC(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;

  if (*(int *)(param_1 + 0x20) == 5) {
    *(undefined4 *)(param_1 + 0x20) = 2;
  }
  uVar1 = (undefined1)((int)((0x4b - (uint)*(ushort *)(param_1 + 0x7a)) * 0xff) / 0x4b);
  *(undefined1 *)(param_1 + 0x58) = uVar1;
  *(undefined1 *)(param_1 + 0x5a) = uVar1;
  *(undefined1 *)(param_1 + 0x59) = uVar1;
  uVar2 = (undefined2)((int)((100 - (uint)*(ushort *)(param_1 + 0x7a)) * 0x1000) / 100);
  *(undefined2 *)(param_1 + 0x52) = uVar2;
  *(undefined2 *)(param_1 + 0x50) = uVar2;
  if (*(byte *)(param_1 + 0x58) < 10) {
    func_80013920(param_1);
  }
  *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
  return;
}

extern void func_800CA2C8(s16, s16, s16, s16, s16, s32);

void func_800BCFB8(u8 *arg0) {
    extern u8 D_8008ED68[];
    u8 *ed = D_8008ED68;
    s32 d = 60;
    s32 k = 400;
    s32 v;
    s32 n;
    s32 c;
    s32 s;

    v = *(s16 *)(arg0 + 0x16) + (ed[0x103] >= 2 ? ed[0x103] : 1);
    *(s16 *)(arg0 + 0x16) = v;
    n = (s16)v;
    if (n > d) {
        func_80013920(arg0);
    } else {
        c = (d - n) * 0xFF / d;
        s = (k * n) / d;
        *(u16 *)(arg0 + 0x3E) += 200;
        arg0[0x32] = c;
        arg0[0x31] = c;
        arg0[0x30] = c;
        *(s16 *)(arg0 + 0x3C) = s;
        *(s16 *)(arg0 + 0x3A) = s + 0x30;
    }
}

void func_800BD080(void *arg0) {
    extern u16 D_8008EE50[];
    switch (*D_8008EE50) {
    case 0:
        if (M2C_FIELD(arg0, u8 *, 0xBE1) & 1) {
            func_8001264C(5);
            return;
        }
        func_80012628();
        return;
    case 1:
        if (func_800A0C54(arg0, 1 - M2C_FIELD(arg0, u8 *, 0xBCA)) != 0) {
            func_800220B8(arg0);
            func_80012628();
            return;
        }
        func_8001264C(3);
        return;
    case 2:
        if (func_800220D4(arg0, 1, 1 - M2C_FIELD(arg0, u8 *, 0xBCA), 0) != 0) {
            func_8001264C(5);
        }
        return;
    case 3:
        if (func_800A0C54(arg0, M2C_FIELD(arg0, u8 *, 0xBCA)) != 0) {
            func_800220B8(arg0);
            func_80012628();
            return;
        }
        func_8001264C(5);
        return;
    case 4:
        if (func_800220D4(arg0, 1, M2C_FIELD(arg0, u8 *, 0xBCA), 0) != 0) {
            func_80012628();
        }
        return;
    case 5:
        func_800125D8();
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BD1B0);

void func_800BD3D4(u8 *p) {
    extern u8 D_8008ED68[];
    extern void func_80012628();
    extern s32 __udivdi3();
    extern s32 func_800A9100();
    extern void func_800125D8();
    u8 *base = p + 0x5d0;
    register s32 c asm("s1") = base[0x5fa];
    s32 o = (base + c)[0x5fb];
    u8 *y;
    u8 *ed;
    u16 temp_a2;
    u16 var_v0;
    s32 v;
    s32 v1;

    y = base + (c * 0x2e8 + 0x18) + o * 0x7c;
    ed = D_8008ED68;
    switch (*(u16 *)(ed + 0xe8)) {
    case 0:
        *(u16 *)(p + 0xc) = 0;
        func_80012628();
        break;
    case 1:
        temp_a2 = *(u16 *)(p + 0xc);
        if (ed[0x103] >= 2) {
            var_v0 = temp_a2 + ed[0x103];
        } else {
            var_v0 = temp_a2 + 1;
        }
        *(u16 *)(p + 0xc) = var_v0;
        if (var_v0 >= 100) {
            if (__udivdi3(base, y, c, o) == 0) {
                v = func_800A9100(p, base, c, o);
                v1 = v - 1;
                if (v != 0) {
                    base[0x611] = (v1 * 8) | ((1 - c) * 2) | 1;
                }
                base[0x611] |= 0x80;
            }
            func_800125D8();
        }
        break;
    }
}

void func_800BD51C(u8 *arg0) {
    extern u16 D_8008EE50[];
    extern void func_800CABDC(u8 *, u8 *, s32);
    extern void func_80012628(void);
    extern void func_8009C4B0(u8 *, s32, s32);
    extern void func_800A903C(u8 *, u8 *, s32, s32);
    extern void func_800125AC(s32);
    extern void func_80012604(s32);
    extern void func_800125D8(void);
    u8 *s0 = arg0 + 0x5D0;
    s32 a2 = s0[0x5FA];
    register u8 *selection asm("a0") = s0 + a2;
    s32 t3 = a2 * 0x2E8;
    register s32 row_offset asm("v1") = t3 + 0x18;
    s32 a3 = selection[0x5FB];
    s32 t1 = a3 * 0x7C;
    u8 *a1 = s0 + row_offset + t1;

    switch (*D_8008EE50) {
    case 0:
        func_800CABDC(arg0, a1, 0x10000);
        func_80012628();
        return;
    case 1:
        if (s0[0x720] != 0) {
            s0[0x70D] = 1;
            func_80012628();
        }
        return;
    case 2:
        if (a1[0xE] != 0) {
            (s0 + (t1 + t3))[0x3E] = 1;
            func_8009C4B0(arg0, a2, a3);
            s0[0x60D] = 0;
            s0[0x70D] = 0;
            s0[0x614] = 0;
            func_800125AC(6);
            func_80012604(5);
            return;
        }
        func_800A903C(arg0, s0, a2, a3);
        func_800125D8();
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BD654);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BD8EC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BDBC0);

extern void func_800CA2C8(s16, s16, s16, s16, s16, s32);

void func_800BE244(u8 *base, s32 c, s32 mode) {
    extern Stage800BE244 D_801010B0[];
    extern Ed800BE244 D_8008ED68[];
    extern s32 func_800A8E34(u8 *, s32, s32);
    register u8 *b asm("s3") = base;
    Tile800BE244 (*board)[13] = D_801010B0[b[9]].board;
    s32 side;
    s32 idx;
    register s32 dir asm("s4");
    s32 one;
    u8 *pair;
    register u8 *unit asm("a0");
    u8 *p;
    u32 flags;
    u8 v;
    s32 x, y;

    if (mode == 0) {
        side = 1 - c;
        idx = -1;
        dir = 1;
    } else {
        flags = D_8008ED68[0].pad88[c].flags;
        if (flags & 0x1000) {
            dir = -1;
        } else if (flags & 0x8000) {
            dir = -1;
        } else if (flags & 0x4000) {
            dir = 1;
        } else if (flags & 0x2000) {
            dir = 1;
        } else {
            return;
        }
        p = b + c * 2;
        v = board[p[0x601]][p[0x602]].b3;
        side = v >> 7;
        idx = (v & 0x7F) - 1;
    }
    one = 1;
    pair = b + c * 2;
next:
    if (dir > 0) {
        idx++;
        if (idx == 6) {
            side = one - side;
            idx = 0;
        }
    } else if (idx == 0) {
        side = one - side;
        idx = 5;
    } else {
        idx--;
    }
    if (func_800A8E34(b, side, idx) != 0) goto next;
    unit = b + (idx * 0x7C + side * 0x2E8);
    x = unit[0x2D];
    y = unit[0x2E];
    if (*(b + x * 13 + y + 0x630) != 2) goto next;
    pair[0x601] = x;
    pair[0x602] = y;
}

void func_800BE408(s32 arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x5D0;
    func_8001A998(arg0 + 0xCB0, 0x2B);
    func_8001A998(arg0 + 0xCDC, 6);
    func_8001A998(arg0 + 0xCE2, 4);
    M2C_FIELD(temp_s1, s8 *, 0x712) = 0;
    M2C_FIELD(temp_s1, u8 *, 0x713) = 0xFF;
    func_800125D8();
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BE46C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BE8F4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BEC20);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BEE98);

void func_800BF0D0(s32 arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    s32 sp10;
    s32 sp14;
    s32 flags;
    s32 c;
    s32 x;
    s32 y;
    s32 o;
    s32 state;
    u8 *pair;
    u8 *base;
    u8 *selection;
    register u8 *p asm("v0");
    register u8 *cell asm("v1");
    register s32 unit_offset asm("v1");
    u8 *unit;
    u8 *ed;

    base = (u8 *)(arg0 + 0x5D0);
    c = base[0x5FA];
    state = base[0x61A];
    selection = base + c;
    o = selection[0x5FB];
    if (state == 0 || state == 5) {
        if ((((M2C_FIELD(func_800A8E84(base), u32 *, 0x10) >> 21) & 7) ^ 1) != 0) {
            if (selection[0x10] != 0) {
                func_800AEA4C(base, c);
            }
            func_800C8EF0(arg0, c, base + (c * 2 + 0x601));
        } else {
            if (selection[0x10] != 0) {
                func_800AEBD0(base, c);
            }
            func_800BE244(base, c, 1);
        }
        if (base[0x61A] != 5) {
            if (arg1 == 2) {
                p = base + c * 2;
                base[0x7A8] = func_800A44E8(arg0, p[0x601], p[0x602]);
            }
            ed = D_8008ED68;
            flags = *(s32 *)(c * 0x10 + ed + 0x88);
            if (flags & 0x20) {
                p = base + c * 2;
                x = p[0x601];
                y = p[0x602];
                cell = (u8 *)(x * 13 + (u32)base + y);
                if (cell[0x630] == 2) {
                    func_80034AB0(0x48);
                    base[0x619] = 0;
                    base[0x7A7] = 1;
                    func_800CA730(arg0, c, &sp10, &sp14);
                    base[0x712] = *(u8 *)&sp10;
                    base[0x713] = *(u8 *)&sp14;
                    if ((base + c)[0x10] == 0) {
                        p = base + c * 6;
                        p[0x5F0] = x;
                        p[0x5F1] = y;
                    }
                    unit_offset = o * 0x7C;
                    unit_offset += c * 0x2E8;
                    cell = base + unit_offset;
                    cell[0x2F] = 1;
                    base[0x615] = 0;
                    if (arg1 != 1) {
                        base[0x614] = 0;
                    }
                    func_800125D8();
                    return;
                }
                func_80034AB0(0x4C);
                return;
            }
            if (flags & 0x40) {
                func_80034AB0(0x5D);
                pair = base + c * 2;
                base[0x7A7] = 1;
                unit = base + (o * 0x7C + c * 0x2E8);
                base[0x619] = 0;
                pair[0x601] = unit[0x2D];
                pair[0x602] = unit[0x2E];
                unit[0x2F] = 0x81;
                unit[0x3B] = 0;
                base[0x610] = 2;
                func_800125AC(3);
            }
        }
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BF39C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BF6A0);
