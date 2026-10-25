#include "common.h"

extern s32 D_8008F6A4;

void func_8001DB8C(s32 fmt, s32 a1, s32 a2, s32 a3) {
    /* função variádica: os quatro argumentos vão para a área de registradores da pilha */
    __asm__("" : : "r"(&fmt), "r"(&a2), "r"(&a3));
    func_8001DC44(-0xA0, (s16)(D_8008F6A4 * 8 - 0x60), 0, 0, fmt, &a1, 1);
}
