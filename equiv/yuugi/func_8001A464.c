#include "common.h"

extern s32 *D_8006DDE4[];

/* tabela de pares (8 bytes): o primeiro campo aponta para onde gravar o valor */
void func_8001A464(s32 i, s32 value) {
    *D_8006DDE4[i * 2] = value;
}
