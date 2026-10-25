#include "common.h"

extern u8 D_80085428[];
extern u8 D_8008F702;
extern s32 D_800922D0[];
extern s32 D_80078D28;

/* o valor em v0 na saída é o que sobra nos registradores do original */
s32 func_80030D00(void) {
    if (D_8008F702 != 0) {
        return ((u32)D_80085428 + 0x8000) & 0xFFFF0000;
    }
    if (D_800922D0[2] == 3) {
        D_80085428[0x5CB] = 0;
        D_800922D0[2] = 0;
    }
    if (--D_80078D28 <= 0) {
        D_80085428[0x5CB] = 4;
        D_800922D0[2] = 4;
    }
    return 4;
}
