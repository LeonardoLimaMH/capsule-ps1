#include "common.h"

void func_800C48DC(u8 *s2) {
    extern M2C_UNK D_8008ED68[];
    extern s8 D_80101020[];
    extern void func_8001ADF8();
    extern void func_800C4600();
    extern void func_800AADE0();
    extern u8 *func_80015B3C();
    extern void func_80015EF8();
    extern void func_8001AA70();
    extern void func_800185F8();

    s32 s3;
    s32 s4;
    s32 s5;
    u32 temp_v1_4;
    u32 var_v0;
    u8 *s1;
    u8 *s0;
    s8 *p;
    register s8 *table asm("a0");
    register u8 *p1 asm("v0");
    register u8 *p2 asm("v1");
    s16 temp50;
    s16 temp52;
    s16 temp4e;

    s3 = *(s32 *)(s2 + 0x84);
    s4 = *(s32 *)(s2 + 0x7C);
    s5 = *(s32 *)(s2 + 0x80);
    temp_v1_4 = *(u32 *)(s2 + 0x3C);

    if (((u8)((struct { u8 _p[0x103]; u8 v; } *)D_8008ED68)->v) >= 2U) {
        var_v0 = temp_v1_4 + ((struct { u8 _p[0x103]; u8 v; } *)D_8008ED68)->v;
    } else {
        var_v0 = temp_v1_4 + 1;
    }
    *(u32 *)(s2 + 0x3C) = var_v0;

    switch (*(u16 *)(s2 + 0x7A)) {
    case 0:
        if ((var_v0 >> 3) >= (u32)s3) {
            func_8001ADF8(1, 0x40, 1, 1);
            *(u32 *)(s2 + 0x38) &= ~1;
            *(u16 *)(s2 + 0x7A) += 1;
        }
        break;
    case 1:
        if (*(s16 *)(s2 + 0x24) < 0) {
            if (s3 < 8) {
                s1 = *(u8 **)(s2 + 0x40);
                s0 = func_80015B3C(func_800C4600, func_800AADE0, 5);
                func_80015EF8(s0);
                *(s32 *)(s0 + 0x7C) = s4;
                *(s32 *)(s0 + 0x80) = s5;
                func_8001AA70(s0 + 0x14, s1 + 0x14, 0x20);
                *(u8 **)(s0 + 0x40) = s1;
                *(u32 *)(s0 + 0x34) = (*(u32 *)(s0 + 0x34) & ~0x7F) | 1;
            }
            func_800185F8(s2);
        }
        break;
    }

    table = D_80101020;
    p = table + (s3 % 5) * 2;
    p1 = *(u8 * volatile *)(s2 + 0x40);
    p2 = *(u8 * volatile *)(s2 + 0x40);
    *(u16 *)(s2 + 0x50) = *(u16 *)(p1 + 0x50);
    *(u16 *)(s2 + 0x52) = *(u16 *)(p2 + 0x52);

    *(u16 *)(s2 + 0x46) = *(u16 *)(*(u8 **)(s2 + 0x40) + 0x46) + (p[0] * *(s16 *)(s2 + 0x50)) / 4096;
    *(u16 *)(s2 + 0x4A) = *(u16 *)(*(u8 **)(s2 + 0x40) + 0x4A) + (p[1] * *(s16 *)(s2 + 0x52)) / 4096;
    temp50 = (s16)*(u16 *)(s2 + 0x50);
    temp52 = (s16)*(u16 *)(s2 + 0x52);
    temp4e = *(s16 *)(*(u8 **)(s2 + 0x40) + 0x4E);

    *(s16 *)(s2 + 0x50) = temp50 / 2;
    *(s16 *)(s2 + 0x52) = temp52 / 2;
    *(s16 *)(s2 + 0x4E) = temp4e - 2;
}

u8 *func_800C4B40(void *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    extern void func_8009CA60();
    extern void func_80034AB0();
    extern u8 *func_80015B3C();
    extern void func_80015EF8();
    extern void func_800161C4();
    extern s32 func_80019F30();
    extern void func_80015CD0();
    s32 i;
    u8 *o;

    func_8009CA60(1);
    func_80034AB0(0x800C);
    for (i = 0; i < 10; i++) {
        o = func_80015B3C(func_800C48DC, func_800161C4, 5);
        func_80015EF8(o);
        *(s32 *)(o + 0x7C) = arg2;
        *(s32 *)(o + 0x80) = arg3;
        *(s32 *)(o + 0x84) = i + 1;
        *(u8 **)(o + 0x40) = arg1;
        *(u32 *)(o + 0x38) |= 1;
        func_80015CD0(o + 0x14, func_80019F30(0x70013, 0x59), 2);
    }
    return o;
}

struct Obj_800C4C18 {
    u8 pad0[0x38];
    s32 f38;
    u32 f3C;
    u8 pad40[0x6];
    u16 f46;
    u8 pad48[0x2];
    u16 f4A;
    u8 pad4C[0x2];
    s32 f4E : 16;
    s16 f50;
    s16 f52;
    u8 pad54[0x26];
    u16 f7A;
    u8 pad7C[0x8];
    u16 f84;
    u8 pad86[0x2];
    u16 f88;
    u8 pad8A[0x2];
    u16 f8C;
};
void func_800C4C18(u8 *arg0) {
    extern u8 D_8008ED68[];
    extern void func_800185F8();
    extern s32 func_800CD950();

    u16 pos[3];
    s32 temp_lo;
    u32 temp_v1;
    u32 var_a0;

    {
        u8 *ed = (u8 *)D_8008ED68;
        temp_v1 = *(u32 *)(arg0 + 0x3C);
        if (ed[0x103] >= 2) {
            var_a0 = temp_v1 + ed[0x103];
        } else {
            var_a0 = temp_v1 + 1;
        }
        *(u32 *)(arg0 + 0x3C) = var_a0;
    }

    switch (*(u16 *)(arg0 + 0x7A)) {
    case 0:
        *(u16 *)(arg0 + 0x7A) = 1;
        break;
    case 1:
        *(s32 *)(arg0 + 0x38) &= ~1;
        *(u16 *)(arg0 + 0x7A) += 1;
        break;
    case 2:
        if (var_a0 >= 101) {
            func_800185F8(arg0);
            return;
        }
        break;
    }

    if (!(*(s32 *)(arg0 + 0x38) & 1)) {
        register s32 v0 asm("v0");
        s32 *screen;
        pos[0] = *(u16 *)(arg0 + 0x84);
        pos[1] = *(u16 *)(arg0 + 0x88);
        pos[2] = *(u16 *)(arg0 + 0x8C);
        v0 = func_800CD950(pos, arg0) - 1;
        *(volatile s16 *)(arg0 + 0x4E) = v0;
        temp_lo = 0x140000 / *(s16 *)(arg0 + 0x4E);
        screen = (s32 *)D_8008ED68;
        *(u16 *)(arg0 + 0x46) -= screen[0x108 / 4] / 2;
        *(u16 *)(arg0 + 0x4A) -= screen[0x10C / 4] / 2;
        *(s16 *)(arg0 + 0x52) = temp_lo;
        *(s16 *)(arg0 + 0x50) = temp_lo;
    }
}
