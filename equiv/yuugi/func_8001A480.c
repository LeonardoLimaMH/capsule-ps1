#include "common.h"

extern s32 *D_800700E4[];

/* tabela de pares (8 bytes): o primeiro campo aponta para onde gravar o valor */
void func_8001A480(s32 i, s32 value) {
    *D_800700E4[i * 2] = value;
}
