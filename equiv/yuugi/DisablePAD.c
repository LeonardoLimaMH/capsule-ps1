#include "common.h"

extern void (*jtbl_8009667C)(void);

/* salta para a rotina instalada na tabela (os argumentos seguem intactos) */
void DisablePAD(void) {
    jtbl_8009667C();
}
