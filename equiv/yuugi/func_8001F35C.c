/* stub-ret: mixed */
/* arg6: small */
/* max-insns: 200000 */
#include "common.h"

/* desenha val com n dígitos em (x, y): zeros à esquerda são pulados (exceto o último dígito);
 * big escolhe o desenho grande (passo 14) ou o pequeno (passo 10) */
extern u8 D_8008ED68[];
extern s32 func_8001AA44(), func_8001EA24(), func_8001EC74();

#define HALF(o) (*(s32 *)(D_8008ED68 + (o)) / 2)

void func_8001F35C(s32 x, s32 y, s32 z, s32 big, s32 c4, u32 val, u32 n, s32 c7) {
    s32 started = 0, xa = 0, xb = 0;
    s32 g2 = z, g3 = big; /* sobras de a2/a3 que chegam a func_8001AA44 */
    u32 i, d;
    for (i = 0; i < n; i++, xb += 14) {
        d = val / (u32)func_8001AA44(10, n - i - 1, g2, g3) % 10;
        g3 = d;
        if (d != 0 || started || i >= n - 1) {
            d += 0xC2;
            g3 = d;
            g2 = (s16)z;
            started = 1;
            if (big) func_8001EA24((s16)(x + HALF(0x108) + xb), (s16)(y + HALF(0x10C)), (s16)z, d, c4, c7);
            else func_8001EC74((s16)(x + HALF(0x108) + xa), (s16)(y + HALF(0x10C)), (s16)z, d, c4, c7);
        }
        xa += 10;
    }
}
