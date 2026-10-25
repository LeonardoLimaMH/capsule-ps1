#include "common.h"

extern u8 *D_801333D4;
extern u16 D_801333EC;
extern s32 D_801333FC, D_80133424, D_80133428, D_8013342C;
extern volatile u32 *D_801333D8, *D_801333DC, *D_801333E0;
extern void func_8011F4B4(), func_8011F48C();

#define REG(o) (*(volatile u16 *)(D_801333D4 + (o)))

s32 slpm__spu_t(s32 mode, s32 a1, s32 a2, s32 a3) {
    /* função variádica: os quatro argumentos vão para a área de registradores da pilha */
    s32 i;
    u32 n;
    u16 want;

    __asm__("" : : "r"(&mode), "r"(&a1), "r"(&a2), "r"(&a3));
    switch (mode) {
    case 2:
        D_801333EC = (u32)a1 >> D_801333FC;
        REG(0x1A6) = D_801333EC;
        return 0;
    case 1:
        D_80133424 = 0;
        if (REG(0x1A6) != D_801333EC) {
            for (i = 1;; i++) {
                if (i >= 0xF01) {
                    return -2;
                }
                if (REG(0x1A6) == D_801333EC) {
                    break;
                }
            }
        }
        REG(0x1AA) = (REG(0x1AA) & 0xFFCF) | 0x20;
        return 0;
    case 0:
        D_80133424 = 1;
        if (REG(0x1A6) != D_801333EC) {
            for (i = 1;; i++) {
                if (i >= 0xF01) {
                    return -2;
                }
                if (REG(0x1A6) == D_801333EC) {
                    break;
                }
            }
        }
        REG(0x1AA) |= 0x30;
        return 0;
    case 3:
        want = D_80133424 == 1 ? 0x30 : 0x20;
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
        if (D_80133424 == 1) {
            func_8011F4B4();
        } else {
            func_8011F48C();
        }
        D_80133428 = a1;
        n = a2;
        D_8013342C = (n >> 6) + ((n & 0x3F) != 0);
        *D_801333D8 = D_80133428;
        *D_801333DC = (D_8013342C << 16) | 0x10;
        *D_801333E0 = D_80133424 == 1 ? 0x1000200 : 0x1000201;
        return 0;
    }
    return mode < 0;
}
