/* stub-ret: mixed */
/* max-insns: 400000 */
/* arg1: small */
/* rand-u32-strided: 0x80071598 1 4 0x80150000 */
/* (registradores do SPU apontados para a RAM: o emulador falha com store de I/O em delay slot) */
/* rand-u16: 0x801501AE 1 0,0x400,0x7FF,0x123 */
#include "common.h"

/* envia n bytes de src à memória do SPU pela FIFO de transferência manual (blocos de 64
 * bytes), esperando o SPU após cada bloco; no fim volta ao modo parado e espera o SPU voltar
 * ao estado inicial (0x1AE & 0x7FF), avisando se demorar mais de 0xF00 leituras */
extern volatile u8 *D_80071598;
extern u16 D_800715B0;
extern u8 D_80010C10[], D_80010C30[], D_80010C44[];
extern s32 _spu_Fw1ts(), printf_k() __asm__("printf");

#define R(o) (*(volatile u16 *)(D_80071598 + (o)))

/* o original chega a cada chamada com as sobras de a0..a3: g0..g3 reproduzem esses registradores */
#define C(f) f(g0, g1, g2, g3)

s32 func_8003F468(u16 *src, u32 n, s32 a2, s32 a3) {
    s32 g0 = (s32)src, g1, g2 = a2, g3 = a3;
    s32 i, chunk, r;
    u16 saved, raw;
    u16 v = D_800715B0;
    g1 = R(0x1AE);
    saved = g1 & 0x7FF;
    R(0x1A6) = v;
    C(_spu_Fw1ts);
    while (n != 0) {
        chunk = n < 0x41 ? n : 0x40;
        if (chunk > 0) {
            volatile u16 *fifo = (volatile u16 *)(D_80071598 + 0x1A8);
            g0 = (s32)D_80071598;
            for (i = 0; i < chunk; i += 2) *fifo = *src++;
        }
        raw = R(0x1AA);
        g0 = raw;
        R(0x1AA) = (raw & 0xFFCF) | 0x10;
        C(_spu_Fw1ts);
        if (R(0x1AE) & 0x400) {
            for (i = 1;; i++) {
                if (i > 0xF00) {
                    g0 = (s32)D_80010C10;
                    g1 = (s32)D_80010C30;
                    C(printf_k);
                    break;
                }
                if (!(R(0x1AE) & 0x400)) break;
            }
        }
        n -= chunk;
        C(_spu_Fw1ts);
        C(_spu_Fw1ts);
    }
    raw = R(0x1AA);
    R(0x1AA) = raw & 0xFFCF;
    r = R(0x1AE) & 0x7FF;
    if (r == saved) return r;
    g0 = raw;
    g1 = saved;
    for (i = 1;; i++) {
        if (i > 0xF00) {
            g0 = (s32)D_80010C10;
            g1 = (s32)D_80010C44;
            return C(printf_k);
        }
        r = R(0x1AE) & 0x7FF;
        if (r == saved) return r;
    }
}
