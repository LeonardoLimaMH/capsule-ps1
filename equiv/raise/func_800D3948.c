/* stub-ret: mixed */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
#include "common.h"

extern u8 D_80100F38[], D_80091618[], D_800EF364[], D_800EFF58[];
extern u16 D_8006AF80;
extern s32 func_800B1260(s32), func_800B12D8(s32);

#define E(i) (D_80091618 + (i) * 0x1A8)
#define P(i) (D_80100F38 + (i) * 0x79C)
#define S(q, o) (*(s16 *)((q) + (o)))

s32 func_800D3948(s32 a0) {
    s32 k = func_800B1260(a0);
    s32 side = 1 - a0;
    u8 *p = P((u16)k);
    u8 *q1, *q2;
    u16 k1, k2;
    if (*(u16 *)(E((u16)k) + 0x90) != 0) {
        k = func_800B12D8(a0);
        side = a0;
    }
    if (D_800EF364[*(u16 *)(E((u16)k) + 0x10) * 64 + S(p, 0x336) * 8 + S(p, 0x338) - 9] == 0xFF) return 0;
    if (D_800EFF58[(u16)side * 64 + S(p, 0x336) * 8 + S(p, 0x338) + 0x8B] == 1) return S(p, 0x326);
    if (*(u16 *)(E(D_8006AF80) + 0x8A) == 0xFFFF) return -1;
    k1 = func_800B1260(a0);
    q1 = P(k1);
    k2 = func_800B12D8(a0);
    q2 = P(k2);
    if (*(u16 *)(E(k1) + 0x90) == *(u16 *)(E(k2) + 0x90)) return -1;
    if (S(q1, 0x336) == S(q2, 0x336) && S(q1, 0x338) == S(q2, 0x338)) return S(q1, 0x326);
    if (S(q1, 0x336) == S(q2, 0x332) && S(q1, 0x338) == S(q2, 0x334)) return S(q1, 0x326);
    return -1;
}
