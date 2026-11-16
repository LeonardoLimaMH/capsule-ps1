#include "common.h"

s32 func_8009B800(void) {
    extern M2C_UNK D_8008ED68[];
    extern u8 *D_800EFF4C[];
    extern u16 D_8006AF80[];
    extern s32 D_800F2CA4[], D_8008F714[];
    extern void func_800B8700(s32, s32, s32);
    extern void func_800125D8(void), func_8009AA50(void), func_80034AB0(s32);
    extern void func_80012604(s32);
    u8 *b = (u8 *)D_8008ED68;
    register s32 r asm("s2") = 0;
    if (b[0x99A] != 1) {
        switch (*(u16 *)(b + 0xE4)) {
        case 0:
            M2C_GFIELD(D_8008ED68, s32, 0x9A0) = 0;
            M2C_GFIELD(D_8008ED68, s32, 0x9AC) = 0;
            func_800B8700(0x19, *D_8006AF80, 1);
            *(s32 *)(D_800EFF4C[0] + 0x38) |= 1;
            {
                s32 flags = *(s32 *)(D_800EFF4C[1] + 0x38);
                *D_800F2CA4 = 0;
                *(s32 *)(D_800EFF4C[1] + 0x38) = flags | 1;
            }
            func_800125D8();
            break;
        case 1:
            func_8009AA50();
            func_800125D8();
            break;
        case 2:
            break;
        case 3: {
            u8 *p = (u8 *)D_8008ED68;
            s32 v = *(s32 *)(p + 0x88);
            s32 s = 0;
            if (v & 0x20) {
                func_80034AB0(0x48);
                s = *(s32 *)(p + 0x9A0) ? -1 : 1;
            } else if (v & 0x40) {
                func_80034AB0(0x5D);
                s = -1;
            } else {
                if (v & 0x2000) goto alternar;
                if (v & 0x8000) {
            alternar:
                func_80034AB0(0x84);
                *(s32 *)(p + 0x9A0) ^= 1;
                }
            }
            if (s > 0) {
                *D_8008F714 = 2;
                func_800125D8();
            } else if (s < 0) {
                *D_8008F714 = 3;
                func_800125D8();
            }
            break;
        }
        case 4:
            break;
        case 5: {
            s32 a, b, c;
            if (*D_8008F714 == 2) {
                a = 0x19;
                b = *D_8006AF80;
                c = 0;
                r = 1;
                goto enviar;
            } else if (*D_8008F714 == 3) {
                a = 0x19;
                b = *D_8006AF80;
                c = 0;
                r = -1;
            enviar:
                func_800B8700(a, b, c);
            }
            func_80012604(0);
            break;
        }
        }
    }
    return r;
}


