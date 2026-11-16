#include "ghidra.h"
#include "common.h"






void func_800C0BEC(u8 *arg0) {
    struct Unk63940 {
        u8 unk0[0x20];
        u32 flags;
        u8 unk24[0x18];
    };
    extern u8 D_80018600[];
    extern struct Unk63940 D_80063940[];
    extern u8 D_8008ED68[];
    extern u16 D_8008EE50[];
    extern s32 func_800C1CA4();
    extern s32 func_80015B3C();
    extern void func_80015EF8();
    extern void func_80012628();
    extern void func_800CAA44();
    extern void func_800CB9F4();
    extern void func_800CABDC();
    extern void func_800A903C();
    extern void func_80012604();

    u8 *s0 = arg0 + 0x5D0;
    u8 c = s0[0x5FA];
    u8 c2 = s0[0x712];
    u8 o2 = s0[0x713];
    u8 *bc = s0 + c;
    u8 *x = s0 + (c * 0x2E8 + 0x18) + bc[0x5FB] * 0x7C;
    u8 *y = s0 + (c2 * 0x2E8 + 0x18) + o2 * 0x7C;
    u8 *ed;
    u16 cur;
    u16 next;
    s32 sfx;

    switch (*D_8008EE50) {
    case 0:
        if (s0[0x60D] != 0) {
            if (x[0] == 0x26) {
                func_80015EF8(func_80015B3C(func_800C1CA4, D_80018600, 2));
            }
            if (((D_80063940[x[0]].flags >> 0xB) & 0xF) != 0 && *(s16 *)(s0 + 0x710) != 0) {
                *(s32 *)(y + 0x1C) |= 8;
                *(s32 *)(y + 0x18) |= 1;
            }
            func_80012628();
        }
        break;
    case 1:
        if (s0[0x60D] == 2) {
            x[0x17] = 1;
            func_800CAA44(arg0, y);
            func_800CB9F4(s0, c2, o2);
            y[0x6B] = y[0xE] - *(s16 *)(s0 + 0x710);
            func_80012628();
        }
        break;
    case 2:
        s0[0x610] = 2;
        *(u16 *)(arg0 + 0xC) = 0;
        func_80012628();
        break;
    case 3:
        ed = D_8008ED68;
        cur = *(u16 *)(arg0 + 0xC);
        if (ed[0x103] >= 2) {
            next = cur + ed[0x103];
        } else {
            next = cur + 1;
        }
        *(u16 *)(arg0 + 0xC) = next;
        if (next >= 0x28) {
            func_800CABDC(arg0, y, 0x10000);
            func_80012628();
        }
        break;
    case 4:
        if (s0[0x720] != 0) {
            s0[0x70D] = 1;
            sfx = 0xB;
            if (y[0xE] == 0) {
                func_800A903C(arg0, s0, c2, o2);
                sfx = 9;
            }
            func_80012604(sfx);
        }
        break;
    }
}

