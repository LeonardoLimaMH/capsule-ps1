/* stub-ret: mixed */
/* arg0: small */
/* arg5: small */
/* max-insns: 400000 */
/* rand-u32-strided: 0x80132114 1 4 0x80150000 */
/* rand-u32-strided: 0x80132130 1 4 0x80150010 */
/* rand-u32-strided: 0x8013212C 1 4 0x80150020,0x1F8010F0 */
/* rand-u16: 0x80150000 1 0x40,0xC0,0x41 */
#include "common.h"

/* dispara o DMA do canal ch: espera o canal livre (avisa após 0x10000 leituras), liga/desliga
 * o bit do canal em D_80132130->+2, habilita o canal no DPCR, programa MADR/BCR, espera o
 * dispositivo (bit 0x40 de *D_80132114) e escreve o CHCR */
extern u8 D_80110AA8[];
extern u8 *D_80132130;
extern volatile u8 *D_80132114;
extern volatile u32 *D_8013212C;
extern s32 slpm_printf_k() __asm__("slpm_printf"); /* sem protótipo: a2/a3 sobram na chamada */

#define DMA(ch, r) (*(volatile u32 *)(0x1F801080 + (ch) * 16 + (r) * 4))

s32 func_8011AA1C(s32 ch, s32 madr, s32 hi, s32 lo, s32 chcr, s32 flag) {
    volatile s32 dummy;
    s32 i = 0, busy;
    if (DMA(ch, 2) & 0x1000000) {
        for (;;) {
            if (i == 0x10000) {
                slpm_printf_k(D_80110AA8, DMA(ch, 2), 0x10000, lo);
                break;
            }
            busy = DMA(ch, 2) & 0x1000000;
            i++;
            if (!busy) break;
        }
    }
    if ((u8)flag == 1) D_80132130[2] |= 1 << ch;
    else D_80132130[2] &= ~(1 << ch);
    dummy = *(volatile s32 *)D_80132130;
    *D_8013212C |= 1 << (ch * 4 + 3);
    DMA(ch, 0) = madr;
    DMA(ch, 1) = (hi << 16) | lo;
    while (!(*D_80132114 & 0x40))
        ;
    DMA(ch, 2) = chcr;
    return dummy = DMA(ch, 2);
}
