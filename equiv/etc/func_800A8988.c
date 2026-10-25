/* rand-mem: 0x8008EE44 1 0x10 */
/* rand-mem: 0x8008EE48 1 6 */
/* rand-mem: 0x800B3C2A 1 2 */
/* rand-mem: 0x800B3C20 1 4 */
/* rand-mem: 0x800B3C1C 1 0x40 */
#include "common.h"

extern u8 D_8008ED68[], D_80085428[], D_80091618[];
extern s32 D_800B3C20, D_800B3C1C;
extern u8 D_800B3C2A;
extern u16 D_800B2688[];
extern s32 func_80019F30(s32, s32);
extern void func_80015CD0(u8 *, s32, s32);

#define D16(o) (*(u16 *)(D_8008ED68 + (o)))
#define P32(o) (*(u32 *)(p + (o)))

s32 func_800A8988(u8 *p) {
    s32 sel = 0, v;
    u8 flag;
    u16 m = D16(0xDC);
    if (m == 6) {
        sel = D_80085428[0x50 + D_800B3C20 * 14];
        if (D16(0xE0) == 2) P32(0x38) |= 1;
        else P32(0x38) &= ~1;
        *(u16 *)(p + 0x46) = 0x50;
        v = D_800B2688[sel] - 0x10;
        flag = D_800B3C2A;
    } else if (m == 7) {
        u8 *e = D_80091618 + D_800B3C20 * 0x1A8;
        if (*(u16 *)(e + 0x10) == 0xFFFF) goto hide;
        sel = *(u16 *)e;
        *(u16 *)(p + 0x46) = 0x50;
        P32(0x38) &= ~1;
        v = D_800B2688[sel] - 0x10;
        flag = D_800B3C2A;
    } else if (m == 9) {
        sel = D_800B3C1C;
        *(u16 *)(p + 0x46) = -0x60;
        P32(0x38) &= ~1;
        v = D_800B2688[sel] - 0xC;
        flag = D_800B3C2A;
    } else {
        goto hide;
    }
    *(u16 *)(p + 0x4A) = v;
    if (flag) {
        D_800B3C2A = 0;
        func_80015CD0(p + 0x14, func_80019F30(0x7000C, sel + 0xB), 0);
    }
    goto scale;
hide:
    P32(0x38) |= 1;
scale:
    v = sel == 0x31 ? 0xF00 : 0x1000;
    *(u16 *)(p + 0x52) = v;
    *(u16 *)(p + 0x50) = v;
    return v;
}
