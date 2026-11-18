#include "ghidra.h"
#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0__800C0E6C", func_800C0E6C);

void func_800C11F8(u8 *arg0) {
    extern u8 D_80069AD4[];
    extern s32 D_80069BB4[];
    extern u16 D_8008EE50[];
    u8 *base = arg0 + 0x5D0;
    s32 c = base[0x5FA];
    s32 c2 = base[0x712];
    s32 o = base[0x713];
    u8 *bc = base + c;
    u8 *y = base + (c2 * 0x2E8 + 0x18) + o * 0x7C;
    s32 index = bc[0x5FB];
    s32 res;
    u8 *ptr;
    s32 val;
    s32 i;
    u8 *src;
    u8 *dst;
    s32 next;

    switch (*D_8008EE50) {
    case 0:
        func_800CB9F4(base, c2, o);
        res = func_800C20E8(arg0, base, c, index, c2, o);
        i = 0;
        src = D_80069AD4;
        base[0x715] = res;
        ptr = y + res;
        *(s16 *)(base + 0x710) = ptr[0x6B] - ptr[0xE];
        base[0x7A4] = 0;
        dst = base;
        do {
            val = *(s32 *)(src + 0x44);
            src += 4;
            i++;
            *(s32 *)(dst + 0x78C) = val;
            dst += 4;
        } while (i < 3);
        func_800B3488(base, y);
        if (*D_80069BB4 == 0x460) {
            func_80012628();
        }
        func_80012628();
        return;
    case 1:
        if (func_800B2F48(arg0, 0) != 0) {
            func_80012628();
        }
        return;
    case 2:
        if (func_800C5FA0(arg0, base, y, 1, 1) != 0) {
            func_80012628();
        }
        return;
    case 3:
        func_800B3878(base);
        func_80012628();
    case 4:
        if (func_800B2F48(arg0, 1) != 0) {
            next = 10;
            if ((base[0x611] & 1) == 0) {
                next = 7;
            }
            func_80012604(next);
        }
        return;
    }
}

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

void func_800C1658(u8 *arg0) {
    extern u8 D_8008ED68[];
    extern u8 *func_800A8E84(u8 *);
    extern void func_80012628(void);
    extern void func_800B3878(u8 *);
    extern s32 func_800C7B30(u8 *, u8 *, u8 *, u8 *);
    extern s32 func_800B2ABC(u8 *, s32, u8 *, u8 *);
    extern s32 func_800B2F48(u8 *, s32);
    extern s32 func_800A835C(u8 *, s32);
    extern void func_800125D8(void);

    u8 *s0 = arg0 + 0x5D0;
    s32 c = s0[0x5FA];
    s32 c2 = s0[0x712];
    u8 *bc = s0 + c;
    u8 *x = s0 + (c * 0x2E8 + 0x18) + bc[0x5FB] * 0x7C;
    u8 *y = s0 + (c2 * 0x2E8 + 0x18) + s0[0x713] * 0x7C;
    u8 *ed = D_8008ED68;
    u16 cur;
    u16 next;
    u8 *mon;
    s32 res;

    switch (*(u16 *)(ed + 0xE8)) {
    case 0:
        func_80012628();
        *(u16 *)(arg0 + 0xC) = 0;
        break;
    case 1:
        cur = *(u16 *)(arg0 + 0xC);
        if (ed[0x103] >= 2) {
            next = cur + ed[0x103];
        } else {
            next = cur + 1;
        }
        *(u16 *)(arg0 + 0xC) = next;
        if (next >= 0x3C) {
            mon = func_800A8E84(s0);
            if (x[0] == 0x34 || ((*(u32 *)(mon + 0x10) >> 0xB) & 0xF) != 1) {
                func_800B3878(s0);
            }
            func_80012628();
        }
        break;
    case 2:
        mon = func_800A8E84(s0);
        if (x[0] == 0x34) {
            res = func_800C7B30(arg0, s0, x, y);
        } else if (((*(u32 *)(mon + 0x10) >> 0xB) & 0xF) == 1) {
            res = func_800B2ABC(arg0, 1, x, y);
        } else {
            res = func_800B2F48(arg0, 1);
        }
        if (res != 0) {
            func_80012628();
        }
        break;
    case 3:
        x[0x25] = func_800A835C(arg0, c);
        y[0x25] = func_800A835C(arg0, c2);
        func_800125D8();
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800BB910__800BF9B0__800C0E6C", func_800C1890);

void func_800C1A50(void) {
    func_800CAE14();
    func_800125AC(0xA);
}
