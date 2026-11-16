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

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA108);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA274);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA3C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA4E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA684);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA744);

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
