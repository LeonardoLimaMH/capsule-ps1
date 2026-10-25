#include "common.h"

/* memcpy de trás para frente: por palavras, meias-palavras ou bytes conforme o alinhamento */
void func_8001AA70(u8 *dst, u8 *src, s32 n) {
    s32 i;

    if (!((u32)src & 3) && !((u32)dst & 3) && !(n & 3)) {
        for (i = n / 4 - 1; i >= 0; i--) {
            ((u32 *)dst)[i] = ((u32 *)src)[i];
        }
        return;
    }
    if (!((u32)src & 1) && !((u32)dst & 1) && !(n & 1)) {
        for (i = n / 2 - 1; i >= 0; i--) {
            ((u16 *)dst)[i] = ((u16 *)src)[i];
        }
        return;
    }
    for (i = n - 1; i >= 0; i--) {
        dst[i] = src[i];
    }
}
