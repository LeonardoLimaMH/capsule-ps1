#include "common.h"

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);
extern void func_800CD530(s32);

extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

extern void func_800CD530(s32);

void func_800C5670(s32 a0) {
    extern u8 D_800F1910[][2];
    extern s32 D_800EE5D0[];
    extern s32 func_80019F30(s32, s32);
    extern void func_800C59F4(s32, s32, s32);
    extern void func_800C5850(void *arg0, void *arg1, s32 arg2, s32 arg3, volatile int arg4);
    u8 *p = PL(a0);
    s16 n = PS16(0x37A);
    s32 arg1_val;
    s32 v;

    if (n >= 2) {
        func_800C59F4(a0, 0, PS16(0x2BA));
        if ((u16)(P16(0x2BA) - 4) < 2) {
            func_800C59F4(a0, 1, 8);
            func_800C5850(*(void **)(p + PS16(0x2BA) * 4 + 0x230), *(void **)(p + 0x250), 0, 0, 0);
            P32(0x21C) = P32(0x250);
        }
    } else {
        arg1_val = D_800EE5D0[6] + D_800F1910[PS16(0x2BA)][n];
        v = ((s32 (*)(s32, s32, s32))func_80019F30)(D_800EE5D0[0] | 0x60000, arg1_val, n);
        *(s32 *)(*(u8 **)(p + PS16(0x2BA) * 4 + 0x230) + 0x18) = v;
        P16(0x37A) += 1;
    }
}

extern u8 D_800EE5D0[];
extern u8 D_800EEB9C[];
s32 func_80019F30(s32, s32);
