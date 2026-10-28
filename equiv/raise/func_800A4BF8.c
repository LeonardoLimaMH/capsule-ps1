/* stub-ret: mixed */
/* arg0: small */
/* max-insns: 300000 */
/* rand-u16: 0x8009162A 1 0,1,2 */
/* rand-u16: 0x800917D2 1 0,1,2 */
/* rand-u16: 0x8009197A 1 0,1,2 */
/* rand-u16: 0x80091B22 1 0,1,2 */
#include "common.h"

/* procura uma casa livre do tabuleiro: 50 sorteios e depois varredura de 8x8 */
extern u8 D_80091618[], D_800EF364[], D_8008ED68[];
extern s16 D_80069AB4[];
extern s32 rand(void), func_800A9658(s32), func_800A4320(s32, s32, s32, s32);

#define E(i) (D_80091618 + (i) * 0x1A8)

static s32 occupied(u16 k, u16 x, u16 y) {
    u8 *e = E(k);
    u16 i;
    for (i = 0; i < *(u16 *)(e + 0x12); i++) {
        s32 s2 = *(s32 *)(e + 0x1C + i * 12);
        s32 s1 = *(s32 *)(e + 0x20 + i * 12);
        s16 s0 = D_80069AB4[*(u16 *)(e + 0x14 + i * 2)];
        s16 m = func_800A9658((s16)(s0 - 1));
        s32 j;
        for (j = 0; j < m; j++)
            if (s2 - j / s0 == x && s1 - j % s0 == y) return 1;
    }
    return 0;
}

void func_800A4BF8(s32 a0, s16 *px, s16 *py) {
    u16 k = a0;
    u16 t = *(u16 *)(E(k) + 0x10);
    u8 *base = D_800EF364 + t * 64;
    u16 n;
    s32 x, y;
    __asm__("" :: "r"(&px), "r"(&py)); /* o original guarda a1/a2 nos slots de argumento */
    for (n = 0; n < 50; n++) {
        x = ((*(u16 *)(D_8008ED68 + 0x18) + rand()) & 7) + 1;
        y = ((*(u16 *)(D_8008ED68 + 0x18) + rand()) & 7) + 1;
        if (base[(u16)x * 8 + (u16)y - 9] == 0xFF) continue;
        if (occupied(k, x, y)) continue;
        if (func_800A4320(t, k, (u16)x, (u16)y) == 0) {
            *px = x;
            *py = y;
            return;
        }
    }
    for (x = 8; (u16)x != 0; x--) {
        for (y = 8; (u16)y != 0; y--) {
            if (base[(u16)x * 8 + (u16)y - 9] == 0xFF) continue;
            if (occupied(k, x, y)) continue;
            if (func_800A4320(t, k, (u16)x, (u16)y) == 0) {
                *px = x;
                *py = y;
                return;
            }
        }
    }
}
