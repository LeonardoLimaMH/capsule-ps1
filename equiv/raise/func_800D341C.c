/* rand-mem: 0x800EFFEC 128 1 */
/* rand-u16: 0x8010126A 1 1,2,3,4,5,6,7,8 */
/* rand-u16: 0x8010126C 1 1,2,3,4,5,6,7,8 */
/* rand-u16: 0x8010125E 1 0,1,2,3,4,5,6,7 */
/* rand-u16: 0x80091628 1 0,1 */
/* rand-u16: 0x800916A8 1 0,1 */
/* rand-u16: 0x80101A06 1 1,2,3,4,5,6,7,8 */
/* rand-u16: 0x80101A08 1 1,2,3,4,5,6,7,8 */
/* rand-u16: 0x801019FA 1 0,1,2,3,4,5,6,7 */
/* rand-u16: 0x800917D0 1 0,1 */
/* rand-u16: 0x80091850 1 0,1 */
/* rand-u16: 0x801021A2 1 1,2,3,4,5,6,7,8 */
/* rand-u16: 0x801021A4 1 1,2,3,4,5,6,7,8 */
/* rand-u16: 0x80102196 1 0,1,2,3,4,5,6,7 */
/* rand-u16: 0x80091978 1 0,1 */
/* rand-u16: 0x800919F8 1 0,1 */
/* rand-u16: 0x8010293E 1 1,2,3,4,5,6,7,8 */
/* rand-u16: 0x80102940 1 1,2,3,4,5,6,7,8 */
/* rand-u16: 0x80102932 1 0,1,2,3,4,5,6,7 */
/* rand-u16: 0x80091B20 1 0,1 */
/* rand-u16: 0x80091BA0 1 0,1 */
/* stub-ret: mixed */
/* max-insns: 50000 */
/* arg1: small */
/* arg2: small */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
#include "common.h"

/* anda pelo tabuleiro na direção (a1, a2) a partir da peça e conta as casas (campo +0x382) */
extern u8 D_80091618[], D_80100F38[], D_800EF364[], D_800EFF58[];
extern u16 D_8006AF80;
extern s32 D_8008ED80;
extern s32 func_800B1260(s32), func_800B12D8(s32), func_800202A4(s32);

#define E(i) (D_80091618 + (i) * 0x1A8)
#define P(i) (D_80100F38 + (i) * 0x79C)
#define S(q, o) (*(s16 *)((q) + (o)))

/* a peça já está na borda para a direção dir? */
static s32 at_edge(s32 dir, s16 r, s16 c) {
    switch (dir) {
    case 0: return r + 1 == 8;
    case 1: return r + 1 == 8 || c + 1 == 1;
    case 2: return c + 1 == 1;
    case 3: return r + 1 == 1 || c + 1 == 1;
    case 4: return r + 1 == 1;
    case 5: return r + 1 == 1 || c + 1 == 8;
    case 6: return c + 1 == 8;
    case 7: return r + 1 == 8 || c + 1 == 8;
    }
    return 0;
}

s32 func_800D341C(s32 a0, s32 a1, s32 a2) {
    s32 k = func_800B1260(a0);
    u16 side = 1 - a0;
    u8 *p = P((u16)k);
    u16 t;
    s32 r, c;
    u8 s5;
    s16 dir;
    __asm__("" :: "r"(&a1), "r"(&a2)); /* o original guarda a1/a2 nos slots de argumento */
    if (*(u16 *)(E((u16)k) + 0x90) != 0) {
        k = func_800B12D8(a0);
        side = a0;
    }
    r = *(u16 *)(p + 0x332) + (a1 - 1);
    c = *(u16 *)(p + 0x334) + (a2 - 1);
    t = *(u16 *)(E((u16)k) + 0x10);
    s5 = D_800EF364[t * 64 + (s16)r * 8 + (s16)c];
    if (s5 == 0xFF) return 0xFF;
    if (D_800EFF58[side * 64 + 0x94 + (s16)r * 8 + (s16)c] == 1) return 0xFF;
    if (*(u16 *)(E(D_8006AF80) + 0x8A) != 0xFFFF) {
        u16 k1 = func_800B1260(a0);
        u16 k2;
        u8 *q2;
        p = P(k1);
        k2 = func_800B12D8(a0);
        q2 = P(k2);
        if (*(u16 *)(E(k1) + 0x90) != *(u16 *)(E(k2) + 0x90)) {
            if ((s16)r == S(q2, 0x336) - 1 && (s16)c == S(q2, 0x338) - 1) return 0xFF;
            if ((s16)r == S(q2, 0x332) - 1 && (s16)c == S(q2, 0x334) - 1) return 0xFF;
        }
    }
    *(u16 *)(p + 0x382) = 1;
    dir = S(p, 0x326);
    for (;;) {
        u8 b;
        if ((u32)dir < 8 && at_edge(dir, r, c)) break;
        r += a1;
        c += a2;
        if (D_800EFF58[side * 64 + 0x94 + (s16)r * 8 + (s16)c] != 0) break;
        b = D_800EF364[t * 64 + (s16)r * 8 + (s16)c];
        if (b == 0xFF) break;
        *(u16 *)(p + 0x382) += 1;
        s5 = b;
    }
    if (S(p, 0x382) >= 6) {
        s16 n = (s16)((u16)D_8008ED80 + func_800202A4(8)) % S(p, 0x382) + 1;
        if (n <= 0) n = 1;
        else if (S(p, 0x382) < n) n = *(u16 *)(p + 0x382);
        if (n >= 3) *(u16 *)(p + 0x382) = n;
    }
    return (s16)-(s16)s5;
}
