#include "common.h"

/* argumentos variáveis no estilo do PsyQ: a1..a3 vão para a área de parâmetros,
 * contígua aos argumentos de pilha, e slpm_prnt recebe o endereço do primeiro */
s32 slpm_printf(const s8 *fmt, s32 a1, s32 a2, s32 a3) {
    s32 *args = &a1;

    (void)&fmt;
    (void)&a2;
    (void)&a3;
    return slpm_prnt(1, fmt, args);
}
