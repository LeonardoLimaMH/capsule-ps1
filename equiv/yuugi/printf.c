#include "common.h"

/* argumentos variáveis no estilo do PsyQ: a1..a3 vão para a área de parâmetros,
 * contígua aos argumentos de pilha, e prnt recebe o endereço do primeiro */
s32 printf(const s8 *fmt, s32 a1, s32 a2, s32 a3) {
    s32 *args = &a1;

    (void)&fmt;
    (void)&a2;
    (void)&a3;
    return prnt(1, fmt, args);
}
