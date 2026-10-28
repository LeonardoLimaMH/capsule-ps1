/* stub-ret: mixed */
/* arg5: small */
/* max-insns: 200000 */
#include "common.h"

/* desenha val com n dígitos escalados por w (passo w*14 em 4.12), pulando zeros à esquerda;
 * com mode != 0 desenha depois um símbolo (10 se mode == 2, senão 11) na posição do último
 * zero pulado */
extern u8 D_8008ED68[];
extern s32 func_8001AA44(), func_8001EEC4();

#define HALF(o) (*(s32 *)(D_8008ED68 + (o)) / 2)

s32 func_8001F524(s32 x, s32 y, s32 z, s32 m, u32 val, u32 n, s16 w, u16 c, s32 c8, s32 mode) {
    s32 started = 0, last = -1, step = w * 14;
    u32 xb = 0;
    s32 g2 = z, g3 = m; /* sobras de a2/a3 que chegam a func_8001AA44 */
    u32 i, d;
    for (i = 0; i < n; i++, xb += step) {
        d = val / (u32)func_8001AA44(10, n - i - 1, g2, g3) % 10;
        g3 = d;
        if (d == 0 && !started && i < n - 1) {
            last = i;
            continue;
        }
        started = 1;
        g2 = (s16)z;
        func_8001EEC4((s16)(x + HALF(0x108) + (xb >> 12)), (s16)(y + HALF(0x10C)), (s16)z, d, w, (s16)c, m, c8);
    }
    if (mode == 0) return 0; /* v0 = sobra do sltu do laço */
    return func_8001EEC4((s16)(x + HALF(0x108) + last * (w * 14) / 4096), (s16)(y + HALF(0x10C)), (s16)z,
                         mode == 2 ? 10 : 11, w, (s16)c, m, c8);
}
