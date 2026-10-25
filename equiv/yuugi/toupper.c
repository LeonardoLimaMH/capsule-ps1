#include "common.h"

extern u8 D_80078A7D[];  /* tabela de tipos de caractere (bit 1: minúscula) */

s32 toupper(s32 c) {
    s32 r = c;

    if (D_80078A7D[c & 0xFF] & 2) {
        r = c - 0x20;
    }
    return (s8)r;
}
