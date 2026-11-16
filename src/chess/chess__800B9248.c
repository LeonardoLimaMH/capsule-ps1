#include "ghidra.h"
#include "common.h"

void func_800B9248(undefined4 param_1,char *param_2)

{
  func_80034AB0(0x41);
  if (*param_2 == 'E') {
    param_2[0x17] = -0x78;
    param_2[0x23] = '\x01';
    *(undefined4 *)(*(int *)(param_2 + 0x70) + 0x88) = 0;
  }
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9298);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9684);

void func_800B97B4(u8 *p) {
    extern u8 *func_800A8EE8();
    extern void func_8009C4B0();
    u8 *base = p + 0x5d0;
    s32 c = base[0x5fa];
    s32 o = base[0x70c];
    s32 i = (base + c)[0x5fb];
    u32 *ret = (u32 *)func_800A8EE8(base, 1 - c, o);
    u32 flags;
    u32 type;

    (base + (c * 0x2e8 + i * 0x7c))[0x3e] = 1;
    func_8009C4B0(p, c, i);

    flags = ret[4];
    if ((flags & 3) == 2) {
        type = (flags >> 2) & 0x1f;
        if (type == 1 || type == 8 || type == 3) {
            s32 off = o * 0x7c;
            off += (1 - c) * 0x2e8;
            (base + off)[0x3e] = 2;
            if (o != 5) {
                func_8009C4B0(p, 1 - c, o);
            }
        }
    }
    base[0x619] = 0;
}

void func_800B98E8(u8 *p) {
    u8 *base = p + 0x5d0;
    s32 c = base[0x5fa];
    u8 *bc = base + c;
    u8 *x = base + (c * 0x2e8 + 0x18) + bc[0x5fb] * 0x7c;
    s32 n = 1 - c;
    u8 *y_base = base + (n * 0x2e8 + 0x18);
    s32 o = base[0x70c];
    u8 *y = y_base + o * 0x7c;
    if (func_800B2ABC(p, 0, x, y)) {
        func_800125D8();
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9990);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9B88);

void func_800B9E8C(u8 *p) {
    extern s32 func_800BAF44();
    extern s32 func_800BB344();
    extern s32 func_800BB670();
    extern void func_80012604(s32);

    u8 *base = p + 0x5d0;
    s32 c = base[0x5fa];
    u8 *bc = base + c;
    u8 *x = base + (c * 0x2e8 + 0x18) + bc[0x5fb] * 0x7c;
    s32 n = 1 - c;
    u8 *y_base = base + (n * 0x2e8 + 0x18);
    s32 o = base[0x70c];
    u8 v = *x;
    u8 *y = y_base + o * 0x7c;
    s32 res;

    switch (v) {
    case 0x52:
        res = func_800BAF44(p, base, x, y, o);
        break;
    case 0x56:
        res = func_800BB344(p, base, x, y);
        break;
    case 0x62:
        res = func_800BB670(p, base, x, y);
        break;
    default:
        return;
    }

    if (res != 0) {
        func_80012604(8);
    }
}

void func_800B9F9C(u8 *p) {
    extern void func_800CAC50(u8 *, u8 *, s32);
    extern void func_800A8EE8(u8 *, s32, s32);
    extern void func_800CABDC(u8 *, u8 *, s32);
    extern void func_80012604(s32);
    extern void func_80034AB0(s32);

    u8 *base = p + 0x5d0;
    s32 c = base[0x5fa];
    s32 o = base[0x70c];
    u8 *bc = base + c;
    u8 *x = base + (c * 0x2e8 + 0x18) + bc[0x5fb] * 0x7c;
    s32 n = 1 - c;
    u8 *y = base + (n * 0x2e8 + 0x18) + o * 0x7c;
    u32 flags;
    s32 code;

    if (base[0x60d] != 2) {
        return;
    }
    x[0x17] = 1;
    y[0x17] = 1;
    if (o == 5) {
        func_800CAC50(p, y, 0x1000);
        code = 0xb;
        goto block_call;
    }
    func_800A8EE8(base, n, o);
    func_800CABDC(p, y, 0x10000);
    func_80012604(10);
    flags = *(u32 *)(y + 0x1c);
    if (flags & 0x10000) {
        *(u32 *)(y + 0x1c) = flags ^ 0x10000;
        return;
    }
    if (flags & 0x20000) {
        s32 v = *y;
        *(u32 *)(y + 0x1c) = flags ^ 0x20000;
        if (v == 3 || v == 0x59) {
            func_80034AB0((v == 3) ? 0x3a : 0x4b);
            code = 9;
            y[0x17] = 0x8a;
            y[0x24] = 0x45;
block_call:
            func_80012604(code);
        }
    }
}

void func_800BA108(u8 *p) {
    extern u8 *func_800A8EE8();
    extern s32 func_800D8894();
    extern void func_800125AC();
    extern void func_800A903C();
    extern void func_80012604();

    u8 *base = p + 0x5d0;
    register s32 o asm("a3") = base[0x70c];
    register s32 c asm("v1") = base[0x5fa];
    s32 one = 1;
    register s32 n asm("a2") = one - c;
    s32 s3 = (n << 7) | (o + 1);
    s32 i = (base + c)[0x5fb];
    s32 s2 = (c << 7) | (i + 1);
    u8 *y_base = base + (n * 0x2e8 + 0x18);
    u8 *s1 = y_base + o * 0x7c;
    s32 code;

    if (base[0x720] != 0) {
        base[0x70d] = one;
        if (s1[0xe] != 0) {
            u8 *ret = func_800A8EE8(base, n, o);
            if ((*(u32 *)(ret + 0x10) & 0x7f) == 0x2a && s1[0x28] == 0) {
                s32 res = func_800D8894(s3 & 0xff, s2 & 0xff) & 0xff;
                *(s16 *)(base + 0x710) = res;
                if (res == 0) {
                    code = 0xe;
                } else {
                    base[0x614] = 2;
                    func_800125AC(8);
                    return;
                }
            } else if ((*(u32 *)(ret + 0x10) & 0x7f) == 0xe && s1[0x28] == 0) {
                base[0x614] = 2;
                code = 0xd;
            } else {
                code = 0xe;
            }
        } else {
            func_800A903C(p, base);
            code = 0xc;
        }
        func_80012604(code);
    }
}

void func_800BA274(u8 *p) {
    extern u8 D_8008ED68[];
    extern void func_80012628();
    extern s32 __udivdi3();
    extern s32 func_800A9100();
    extern void func_80012604(s32);

    u8 *base = p + 0x5d0;
    s32 c = base[0x5fa];
    s32 o = base[0x70c];
    u8 *y;
    u8 *ed;
    u16 temp_a2;
    u16 var_v0;
    s32 n;
    s32 v;
    s32 v1;

    y = base + (((1 - c) * 0x2e8) + 0x18) + o * 0x7c;
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
        if (var_v0 >= 0xa0) {
            n = 1 - c;
            if (__udivdi3(base, y, n, o) == 0) {
                v = func_800A9100(p, base, n, o);
                v1 = v - 1;
                if (v != 0) {
                    base[0x611] = (v1 * 8) | (c * 2) | 1;
                }
                base[0x611] |= 0x80;
                func_80012604(0xe);
            } else {
                func_80012604(0xe);
            }
        }
        break;
    }
}

void func_800BA3C4(u8 *p) {
    extern u8 D_8008ED68[];
    extern void func_80012628();
    extern s32 func_800B2ABC();
    extern void func_800125D8();

    u8 *base = p + 0x5d0;
    s32 c = base[0x5fa];
    u8 *bc = base + c;
    u8 *x;
    u8 *y;
    u8 *ed;
    u16 temp_a1;
    u16 var_v0;

    x = base + ((c * 0x2e8) + 0x18) + bc[0x5fb] * 0x7c;
    y = base + (((1 - c) * 0x2e8) + 0x18) + base[0x70c] * 0x7c;
    ed = D_8008ED68;

    switch (*(u16 *)(ed + 0xe8)) {
    case 0:
        *(u16 *)(p + 0xc) = 0;
        func_80012628();
        break;
    case 1:
        temp_a1 = *(u16 *)(p + 0xc);
        if (ed[0x103] >= 2) {
            var_v0 = temp_a1 + ed[0x103];
        } else {
            var_v0 = temp_a1 + 1;
        }
        *(u16 *)(p + 0xc) = var_v0;
        if (var_v0 >= 30) {
            if (func_800B2ABC(p, 1, x, y) != 0) {
                base[0x610] = 0;
                func_800125D8();
            }
        }
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA4E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA684);

s32 func_800BA744(u8 *p) {
    extern u8 D_8008EE6A[];
    extern s32 func_800A835C();
    extern s32 func_800125AC();
    u8 *base = p + 0x5d0;
    s32 c = base[0x5fa];
    s32 o = base[0x70c];
    s32 i = (base + c)[0x5fb];
    s32 n;
    u8 *x;
    u8 *y;
    *D_8008EE6A = 0;
    x = base + (c * 0x2e8 + 0x18) + i * 0x7c;
    n = 1 - c;
    base[0x614] = 0;
    y = base + (n * 0x2e8 + 0x18) + o * 0x7c;
    x[0x25] = func_800A835C(p, c);
    y[0x25] = func_800A835C(p, n);
    return func_800125AC(10);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA820);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BAD3C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BAF44);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BB344);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BB670);

s32 func_800BB880(s32 unused_arg0, s32 unused_arg1, void *arg2) {
    s32 var_a0;

    var_a0 = 0;
    if (M2C_FIELD(M2C_FIELD(arg2, void **, 0x70), s16 *, 0x24) < 0) {
        var_a0 = 1;
        {
            /* Preserve the initialized copy through v0; emits no asm instruction. */
            register s32 byte_value __asm__("$2") = var_a0;
            __asm__ volatile("" : "=r"(byte_value) : "0"(byte_value));
            M2C_FIELD(arg2, s8 *, 0x17) = byte_value;
        }
        M2C_FIELD(arg2, s32 *, 0x18) = (s32) (M2C_FIELD(arg2, s32 *, 0x18) ^ 0x08000000);
    }
    return var_a0;
}
