/* rand-mem: 0x8008F78C 1 4 */
/* rand-mem: 0x8008F784 1 3 */
/* rand-mem: 0x8008F790 1 4 */
#include "common.h"

extern u8 D_8008ED68[], D_800B3B38[], D_800B3B88[];
extern s32 D_8008F784;
extern u16 D_800B3C14;
extern void func_8001A998(u8 *, s32);
extern void func_800A29D4(u8 *);
extern s32 rand(void);
extern void func_800A2B64(u8 *, s32);
extern void func_800A2A80(u8 *, s32);
extern s32 func_80012544(s32), func_80012508(void);

#define D32(o) (*(s32 *)(D_8008ED68 + (o)))

s32 func_8009D918(u8 *p) {
    u8 *s = p + 0x5D0;
    u8 b6 = s[6], b7 = s[7], b4 = s[4], b5 = s[5], b8 = s[8];
    s32 m;
    u8 v;
    func_8001A998(s, 0x7AC);
    s[6] = b6 ? b6 : 1;
    s[7] = b7 ? b7 : 1;
    s[4] = b4;
    s[8] = b8;
    s[5] = b5;
    func_800A29D4(p);
    v = D_800B3B38[0x32];
    s[0x17] = v;
    s[0x16] = v;
    s[0xB] = D_800B3B38[0x36];
    s[0x12] = D_800B3B38[0x28];
    v = D_800B3B38[0x2A];
    s[0xA] = 0;
    s[0x13] = v;
    func_800A2B64(p, rand() & 1);
    s[0x14] = 0xFF;
    s[0x15] = 0;
    s[9] = 0;
    D_800B3C14 = 0x7015;
    D_800B3B88[1] = 0;
    D_800B3B88[0] = 0;
    m = D32(0xA24);
    if (m == 1) {
        s[0] = 0;
        s[0x11] = m;
        func_800A2A80(p, 2);
        s[0x15] = D32(0xA1C) == 2 ? 7 : s[4];
        if (D_8008F784 == 1) return func_80012544(8);
        return func_80012544(0x1B);
    }
    if (m == 2) {
        s32 t;
        s[0] = 1;
        s[0x11] = 1;
        s[0x15] = 0xFF;
        t = D32(0xA1C);
        *(u16 *)(D_800B3B38 + 0xC) = 0;
        *(u16 *)(D_800B3B38 + 8) = 0;
        if (t) return func_80012544(0x1B);
        *(u16 *)D_800B3B38 = 0;
        D32(0xA24) = 0;
        return func_80012544(7);
    }
    if ((u32)m < 3) return func_80012508();
    s[0] = 2;
    s[0x11] = 0;
    s[0x15] = 0xFF;
    *(u16 *)(D_800B3B38 + 0xC) = 0;
    *(u16 *)(D_800B3B38 + 8) = 0;
    return func_80012544(0x1B);
}
