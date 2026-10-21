#ifndef YUUGI_H
#define YUUGI_H

#include "common.h"

/* ---- Variáveis globais do executável principal (YUUGI.EXE) ---- */
extern u8 __bss_start[]; /* 0x80078CD8: primeiro objeto do .bss */

/* ---- Funções do executável principal ---- */
void func_8001A998(void* buf, s32 n);
void func_8001C9D8(void);

#endif /* YUUGI_H */
