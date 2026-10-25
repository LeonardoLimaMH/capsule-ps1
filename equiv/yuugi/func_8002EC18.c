#include "common.h"

extern u8 D_80085428[];
extern u8 D_8008ED68[];
extern s32 D_80078D28;
extern s32 D_800922D8;

/* o valor em v0 na saída é o que sobra nos registradores do original */
s32 func_8002EC18(void) {
    u16 n;

    if (D_8008ED68[0x99A] != 0) {
        return ((u32)D_80085428 + 0x8000) & 0xFFFF0000;
    }
    if (--D_80078D28 > 0) {
        return 1;
    }
    D_80085428[0x5CB] = 1;
    D_800922D8 = 1;
    n = *(u16 *)(D_8008ED68 + 0xF0) + 1;
    *(u16 *)(D_8008ED68 + 0xF0) = n;
    return n;
}
