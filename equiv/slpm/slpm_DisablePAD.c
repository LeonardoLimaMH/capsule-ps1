#include "common.h"

extern void (*jtbl_8013350C)(void);

/* salta para a rotina instalada na tabela (os argumentos seguem intactos) */
void slpm_DisablePAD(void) {
    jtbl_8013350C();
}
