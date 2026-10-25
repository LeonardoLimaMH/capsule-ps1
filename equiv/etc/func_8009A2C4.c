#include "common.h"

extern u8 D_8008ED68[];
extern u8 D_800859F0;
extern s32 D_800B3AD8;
extern s32 func_80012508(void), func_80012578(void), func_80019654(void), func_800337EC(void);
extern s32 func_800338DC(s32);
extern void func_8009C324(s32, s32, s32);

#define D16(o) (*(u16 *)(D_8008ED68 + (o)))

s32 func_8009A2C4(void) {
    s32 r;
    u16 m;
    if (D16(0xDC) == 8) func_8009C324(0, -0x18, 5);
    switch (D16(0xE0)) {
    case 0:
        m = D16(0xDC);
        D_800B3AD8 = 0;
        if (m == 2 && *(s32 *)(D_8008ED68 + 0xA18) == 1) return func_80012508();
        return func_80012578();
    case 1:
        r = func_80019654();
        if (r == 0) return r;
        return func_80012578();
    case 2:
        func_800338DC(D16(0xDC) == 2 ? 0x701D : 0x701E);
        return func_80012578();
    case 3:
        if (!(D_800859F0 & 4)) return func_80012508();
        r = func_800337EC() & 0x80;
        if (r == 0) return r;
        return func_80012508();
    }
    return 0x80080000; /* lixo do %hi no delay slot */
}
