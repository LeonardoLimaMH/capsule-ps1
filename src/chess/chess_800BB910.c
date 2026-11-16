#include "ghidra.h"
#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BB910);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BBACC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BBB54);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BBD20);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BC49C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BCE0C);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BCFB8);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BE244);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BF86C);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BFA84);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BFC70);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BFD34);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BFE18);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800BFFAC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C01F4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C0440);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C0658);

void func_800C087C(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_800B3338(param_1,1);
  if (iVar1 != 0) {
    func_800125D8();
  }
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C08AC);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C0BEC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C0E6C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C11F8);

void func_800C13F0(u8 *p) {
    extern u16 D_8008EE50[];
    extern void func_80012628();
    extern void func_800125D8();
    extern s32 func_800C5FA0();

    u8 *base = p + 0x5d0;
    s32 c = base[0x5fa];
    u8 *bc = base + c;
    u8 *x = base + (c * 0x2e8 + 0x18) + bc[0x5fb] * 0x7c;
    u8 *y = base + (base[0x712] * 0x2e8 + 0x18) + base[0x713] * 0x7c;
    s32 state = *D_8008EE50;

    switch (state) {
    case 0:
        x[0x17] = 1;
        *(s32 *)(x + 0x18) = 0;
        base[0x610] = 2;
        *(s16 *)(p + 0xc) = 0;
        func_80012628();
        break;
    case 1:
        if (func_800C5FA0(p, base, y, 0, state) != 0) {
            func_80012628();
        }
        break;
    case 2:
        if (*(s32 *)(y + 0x18) == 0 && *(s32 *)(y + 0x1c) == 0) {
            func_800125D8();
        }
        break;
    }
}

void func_800C1528(u8 *p) {
    extern u8 D_8008ED68[];
    extern void func_80012628();
    extern s32 __udivdi3();
    extern s32 func_800A9100();
    extern void func_80012604(s32);
    u8 *base = p + 0x5d0;
    s32 c = base[0x712];
    s32 o = base[0x713];
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
            }
            func_80012604(0xa);
        }
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C1658);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C1890);

void func_800C1A50(void) {
    func_800CAE14();
    func_800125AC(0xA);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C1A78);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C1CA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C1F84);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C202C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910", func_800C20E8);
