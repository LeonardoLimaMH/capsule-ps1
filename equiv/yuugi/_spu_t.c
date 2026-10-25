#include "common.h"

extern u8 *D_80071598;
extern u16 D_800715B0;
extern s32 D_800715C0, D_800715E8, D_800715EC, D_800715F0;
extern volatile u32 *D_8007159C, *D_800715A0, *D_800715A4;
extern void func_8003FC98(), func_8003FC70();

#define REG(o) (*(volatile u16 *)(D_80071598 + (o)))

s32 _spu_t(s32 mode, s32 a1, s32 a2, s32 a3) {
    /* função variádica: os quatro argumentos vão para a área de registradores da pilha */
    s32 i;
    u32 n;
    u16 want;

    __asm__("" : : "r"(&mode), "r"(&a1), "r"(&a2), "r"(&a3));
    switch (mode) {
    case 2:
        D_800715B0 = (u32)a1 >> D_800715C0;
        REG(0x1A6) = D_800715B0;
        return 0;
    case 1:
        D_800715E8 = 0;
        if (REG(0x1A6) != D_800715B0) {
            for (i = 1;; i++) {
                if (i >= 0xF01) {
                    return -2;
                }
                if (REG(0x1A6) == D_800715B0) {
                    break;
                }
            }
        }
        REG(0x1AA) = (REG(0x1AA) & 0xFFCF) | 0x20;
        return 0;
    case 0:
        D_800715E8 = 1;
        if (REG(0x1A6) != D_800715B0) {
            for (i = 1;; i++) {
                if (i >= 0xF01) {
                    return -2;
                }
                if (REG(0x1A6) == D_800715B0) {
                    break;
                }
            }
        }
        REG(0x1AA) |= 0x30;
        return 0;
    case 3:
        want = D_800715E8 == 1 ? 0x30 : 0x20;
        if ((REG(0x1AA) & 0x30) != want) {
            for (i = 1;; i++) {
                if (i >= 0xF01) {
                    return -2;
                }
                if ((REG(0x1AA) & 0x30) == want) {
                    break;
                }
            }
        }
        if (D_800715E8 == 1) {
            func_8003FC98();
        } else {
            func_8003FC70();
        }
        D_800715EC = a1;
        n = a2;
        D_800715F0 = (n >> 6) + ((n & 0x3F) != 0);
        *D_8007159C = D_800715EC;
        *D_800715A0 = (D_800715F0 << 16) | 0x10;
        *D_800715A4 = D_800715E8 == 1 ? 0x1000200 : 0x1000201;
        return 0;
    }
    return mode < 0;
}
