/* stub-ret: mixed */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* arg1: small */
/* arg2: small */
#include "common.h"

extern u8 D_80100F38[], D_80091618[], D_800EF364[], D_800EFF58[];
extern u16 D_8006AF80;
extern s32 func_800B1260(s32), func_800B12D8(s32);

#define E(i) (D_80091618 + (i) * 0x1A8)
#define P(i) (D_80100F38 + (i) * 0x79C)
#define S(q, o) (*(s16 *)((q) + (o)))

s32 func_800D3F88(s32 a0, s32 a1, s32 a2) {
    s32 k = func_800B1260(a0);
    s32 side = 1 - a0;
    u8 *p = P((u16)k);
    s16 r, c;
    u8 b;
    u16 k1, k2;
    u8 *q2;
    if (*(u16 *)(E((u16)k) + 0x90) != 0) {
        k = func_800B12D8(a0);
        side = a0;
    }
    r = *(u16 *)(p + 0x332) + (a1 - 1);
    c = *(u16 *)(p + 0x334) + (a2 - 1);
    b = D_800EF364[*(u16 *)(E((u16)k) + 0x10) * 64 + r * 8 + c];
    if (b == 0xFF) return 0xFF;
    if (D_800EFF58[(u16)side * 64 + 0x94 + r * 8 + c] == 1) return -1;
    if (*(u16 *)(E(D_8006AF80) + 0x8A) == 0xFFFF) return (s16)b;
    k1 = func_800B1260(a0);
    k2 = func_800B12D8(a0);
    q2 = P(k2);
    if (*(u16 *)(E(k1) + 0x90) == *(u16 *)(E(k2) + 0x90)) return (s16)b;
    if (r == S(q2, 0x336) - 1 && c == S(q2, 0x338) - 1) return -1;
    if (r == S(q2, 0x332) - 1 && c == S(q2, 0x334) - 1) return -1;
    return (s16)b;
}
