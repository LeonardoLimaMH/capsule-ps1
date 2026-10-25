/* arg1: small */
#include "common.h"

extern u8 *D_801333D4;
extern u16 D_801333EC;
extern char D_80110B78[], D_80110B98[], D_80110BAC[];
extern void slpm__spu_Fw1ts(void);
extern s32 slpm_printf(const char *, ...);

#define SPU16(o) (*(volatile u16 *)(D_801333D4 + (o)))

void func_8011EC84(u16 *src, u32 size) {
    u32 i;
    s32 n, k;
    u16 start;

    SPU16(0x1A6) = D_801333EC;
    start = SPU16(0x1AE) & 0x7FF;
    slpm__spu_Fw1ts();
    while (size != 0) {
        u8 *spu;
        n = size < 0x41 ? (s32)size : 0x40;
        spu = D_801333D4;
        for (k = 0; k < n; k += 2) *(volatile u16 *)(spu + 0x1A8) = *src++;
        SPU16(0x1AA) = (SPU16(0x1AA) & 0xFFCF) | 0x10;
        slpm__spu_Fw1ts();
        if (SPU16(0x1AE) & 0x400) {
            for (i = 1;; i++) {
                if (i >= 0xF01) {
                    slpm_printf(D_80110B78, D_80110B98);
                    break;
                }
                if (!(SPU16(0x1AE) & 0x400)) break;
            }
        }
        size -= n;
        slpm__spu_Fw1ts();
        slpm__spu_Fw1ts();
    }
    SPU16(0x1AA) = SPU16(0x1AA) & 0xFFCF;
    if ((SPU16(0x1AE) & 0x7FF) != start) {
        for (i = 1;; i++) {
            if (i >= 0xF01) {
                slpm_printf(D_80110B78, D_80110BAC);
                break;
            }
            if ((SPU16(0x1AE) & 0x7FF) == start) break;
        }
    }
}
