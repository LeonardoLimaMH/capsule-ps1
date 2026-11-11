#include "common.h"

s32 func_800BF154(void) {
    extern s16 D_800F0668[];
    extern s16 D_800F066A[];
    extern s16 D_800F066C[];
    extern s16 D_800F066E[];
    extern s16 D_800F0670[];
    extern s16 D_800F0672[];
    extern s16 D_800F0674[];
    extern s16 D_800F0676[];
    extern s16 D_800F0678[];
    extern s16 D_800F067A[];
    extern s16 D_800F067C[];
    extern s16 D_800F067E[];
    extern s16 D_800F0680[];
    extern s16 D_800F0682[];
    extern s16 D_800F0684[];
    extern s16 D_800F0686[];
    extern s16 D_800F0708[];
    extern s16 D_800F070A[];
    extern s16 D_80100D80[];
    extern s16 D_80100DB8[];
    extern s16 D_80100DBA[];
    extern s16 D_80100DBC[];
    (*D_800F0668) = 0xB4;
    (*D_80100D80) = 0;
    (*D_800F066A) = 0;
    (*D_80100DBA) = 0;
    (*D_80100DBC) = 0;
    (*D_800F066C) = 0;
    (*D_800F066E) = 0;
    (*D_800F0670) = 0;
    (*D_800F0672) = 1;
    (*D_800F0674) = 1;
    (*D_800F0676) = 0;
    (*D_800F0678) = 0;
    (*D_800F067A) = 3;
    (*D_800F067C) = 2;
    (*D_800F067E) = 0;
    (*D_800F0680) = 0;
    (*D_800F0682) = 1;
    (*D_800F0684) = 0;
    (*D_800F0686) = 0;
    (*D_800F0708) = 0;
    (*D_80100DB8) = 0x1000;
    (*D_800F070A) = 0;
    return 0;
}

void func_800BF220(u32 idx) {
    extern u8 D_80091618[], D_80063940[];
    u8 *b = D_80091618;
    u8 *k = D_80063940;
    u8 *p = b + (idx & 0xFFFF) * 0x1A8;
    u32 t;
    *(u16 *)(p + 0xD0) -= 1;
    t = *(u32 *)(p + 0xC8);
    *(u32 *)(p + 0xCC) = t;
    *(u16 *)(p + 0xA0) = (*(u32 *)(k + *(u16 *)(p + 4) * 0x3C + 8) >> 12) & 3;
}

static inline s32 espera_800BF294(u8 *g) {
    extern s32 func_800DEB28(void);
    extern void func_800DEB38(void);
    for (;;) {
        if (func_800DEB28() == 1) {
            return 2;
        }
        func_800DEB38();
        func_800BF220(*(u16 *)(g + 0x1E));
    }
}

s32 func_800BF294(void) {
    typedef struct {
        u8 pad[0x178];
        u8 *o;
        u8 pad2[0x2C];
    } Rec;
    extern u8 D_800F1EB4[], D_80091618[], D_8008ED68[];
    extern s16 D_80100DBA[], D_80100DBC[], D_80100DB8[], D_80100D80[];
    extern s32 D_800EEBC0[];
    extern s32 func_800AECC8(u16), func_800DEB28(void);
    extern void func_800DEB38(void), func_800E1720(u16), func_800D8E90(s32);
    extern void func_800B7FA8(s32), func_800AC9E8(s32), func_800AC34C(s32);
    u8 *g = D_800F1EB4;
    s32 id = *(u16 *)(g + 0x1E);
    s32 r = func_800AECC8(id);
    Rec *b;

    if (r == -1 || r == 2) {
        func_800BF220((u16)id);
        for (;;) {
            if (func_800DEB28() == 1) {
                return 2;
            }
            func_800DEB38();
            func_800BF220(*(u16 *)(g + 0x1E));
        }
    }
    func_800E1720(id);
    func_800D8E90(r);
    b = (Rec *)D_80091618;
    *D_80100DBA = *(u16 *)(b[(s16)id].o + 0x46) + *(s32 *)(D_8008ED68 + 0x108) / 2;
    *D_80100DBC = *(u16 *)(b[(s16)id].o + 0x4A) + *(s32 *)(D_8008ED68 + 0x10C) / 2;
    *D_80100DB8 = *(u16 *)(b[(s16)id].o + 0x4E);
    if (*D_800EEBC0 == 5) {
        func_800B7FA8(0);
    }
    func_800AC9E8(0);
    func_800AC34C(0);
    *D_80100D80 = 0;
    return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BF154", func_800BF414);
