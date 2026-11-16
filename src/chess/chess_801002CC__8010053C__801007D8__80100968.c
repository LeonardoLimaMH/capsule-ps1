#include "common.h"


/* objeto de peça usado por func_80100AF4 */
typedef struct {
    u8 _p0[0x18];
    s32 f18;
    u8 _p1[0x1C];
    s32 f38;
    u8 _p2[0x1C];
    u8 f58;
    u8 f59;
    u8 f5A;
} S80100AF4;

extern void func_80012578();


void func_80100968(u8 *a) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    u8 *s = D_80085428;
    u8 *d = D_8008ED68;
    if (*(u16 *)(d + 0xDC) == 4) {
        *(s32 *)(a + 0x38) &= ~1;
        switch (*(u16 *)(d + 0xE0)) {
        case 0: {
            u8 v = a[0x58];
            if (v >= 0x80) {
                func_800220B8(s);
                s[0x5E5] = 6;
                *(s32 *)(s + 0x14) = func_8001F8B0(0x1D, 0);
                func_80012578();
            } else {
                v++;
                a[0x58] = v;
                a[0x5A] = v;
                a[0x59] = v;
            }
            break;
        }
        case 2: {
            s16 t;
            u32 f;
            *(u16 *)(a + 0x4A) += *(u16 *)(a + 0x6E);
            f = *(u32 *)(d + 0x18);
            if (f == (f / 28) * 28 && *(s16 *)(a + 0x6E) <= 0) {
                *(u16 *)(a + 0x6E) += 1;
            }
            t = *(u16 *)(a + 0x50) - *(u16 *)(a + 0x74);
            *(u16 *)(a + 0x50) = t;
            if (t < 0) {
                *(u16 *)(a + 0x52) = 0;
                *(u16 *)(a + 0x50) = 0;
            } else {
                *(u16 *)(a + 0x52) = t;
            }
            t = *(u16 *)(a + 0x54) + 0x50;
            *(u16 *)(a + 0x54) = t;
            *(u16 *)(a + 0x54) = t % 4096;
            break;
        }
        }
    } else {
        *(s32 *)(a + 0x38) |= 1;
    }
}

