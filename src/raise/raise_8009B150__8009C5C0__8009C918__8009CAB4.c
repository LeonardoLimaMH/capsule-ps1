#include "common.h"


int func_8009CAB4(u8 *arg0) {
    extern u8 D_8008ED68[];
    extern s16 D_8006B00C[];
    extern s32 func_800337EC(u8 *);
    extern void func_80034AB0(s32), func_80015CD0(void *, s32, s32), func_800185F8(void *);
    extern s32 func_80020304(s32), func_80019F30(s32, s32);

    register u8 *s0 asm("s0");
    register s32 var_v0 asm("v0");
    register s32 var_v1 asm("v1");
    u8 *p;
    s32 s1;
    s16 temp_a0;

    s0 = arg0;
    p = D_8008ED68;
    s1 = *(s32 *)(s0 + 0x80);

    if (p[0x99A] != 0) {
        return;
    }

    var_v1 = *(s32 *)(s0 + 0x3C);
    if (p[0x103] >= 2) {
        var_v0 = var_v1 + p[0x103];
    } else {
        var_v0 = var_v1 + 1;
    }
    *(s32 *)(s0 + 0x3C) = var_v0;

    switch (*(u16 *)(s0 + 0x7A)) {
    case 1:
        if ((u32)*(s32 *)(s0 + 0x3C) >= 0x78 || !(func_800337EC(p) & 1)) {
            func_80034AB0(0x801E);
            *(s32 *)(s0 + 0x3C) = 0;
            *(u16 *)(s0 + 0x7A) += 1;
        }
        break;
    case 2: {
        s32 res = func_80020304(8);
        s32 a0;
        s32 v1 = *(u16 *)(s0 + 0x46);
        v1 -= 4;
        v1 += res;
        a0 = *(u16 *)(s0 + 0x4A);
        *(u16 *)(s0 + 0x46) = v1;
        *(u16 *)(s0 + 0x4A) = a0 + 2;
        if ((u32)*(s32 *)(s0 + 0x3C) >= 0x1D) {
        case 0:
            *(u16 *)(s0 + 0x7A) += 1;
        }
        break;
    }
    case 3: {
        s32 res = func_80020304(12);
        s16 temp_v1;
        s32 v1 = *(u16 *)(s0 + 0x46);
        v1 -= 6;
        v1 += res;
        *(s16 *)(s0 + 0x46) = v1;
        temp_v1 = (s16)v1;
        if (temp_v1 >= 0x65) {
            *(s16 *)(s0 + 0x46) = 0x64;
        } else if (temp_v1 < -0x64) {
            *(s16 *)(s0 + 0x46) = -0x64;
        }
        if ((u32)*(s32 *)(s0 + 0x3C) >= 0xA0) {
            *(u16 *)(s0 + 0x7A) += 1;
        }
        break;
    }
    case 4:
        *(volatile s32 *)(s0 + 0x38) |= 8;
        temp_a0 = *(s16 *)(s0 + 0x46);
        var_v1 = (temp_a0 > 0 ? 0xC0 : -0xC0) - temp_a0;
        *(s16 *)(s0 + 0x6A) = var_v1 / (0x13D - *(s32 *)(s0 + 0x3C));
        break;
    }

    if (*(s16 *)(s0 + 0x24) < 0) {
        *(s32 *)(s0 + 0x7C) += 1;
        func_80015CD0(s0 + 0x14, func_80019F30(0x7000E, s1 * 2 + 0xA8), 1);
        *(s32 *)(s0 + 0x20) = 6;
        *(s32 *)(s0 + 0x18) = func_80019F30(0x6000E, (s1 != 0) ? 0x250 : 0x246);
    }
    if (*(s32 *)(s0 + 0x3C) == 0x13C) {
        func_800185F8(s0);
        *D_8006B00C = 0;
    }
}



