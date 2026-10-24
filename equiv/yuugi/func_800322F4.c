#include "common.h"

void func_800322F4(void) {
    extern s8 D_80078D34;
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_800922D0[];
    extern s16 D_800922DC[];
    if (M2C_FIELD(D_80085428, u8 *, 0x5C8) & 4) {
        (*D_800922DC) = M2C_FIELD(D_80085428, u8 *, 0x5C8) & 1;
        D_80078D34 = 1;
    } else {
        (*D_800922DC) = 2;
        D_80078D34 = 0;
    }
    M2C_FIELD(D_800922D0, s16 *, 0xE) = (s16) (((u8) M2C_FIELD(D_80085428, u8 *, 0x5C8) >> 1) & 1);
    M2C_FIELD(D_800922D0, s16 *, 0x10) = (s16) M2C_FIELD(D_80085428, u8 *, 0x5C9);
    M2C_FIELD(D_800922D0, s16 *, 0x12) = (s16) (((u8) M2C_FIELD(D_80085428, u8 *, 0x5CA) >> 3) & 1);
    M2C_FIELD(D_800922D0, s16 *, 0x14) = (s16) (((u8) M2C_FIELD(D_80085428, u8 *, 0x5CA) >> 4) & 1);
    M2C_FIELD(D_800922D0, s16 *, 0x16) = (s16) (M2C_FIELD(D_80085428, u16 *, 0x5CC) & 7);
    M2C_FIELD(D_800922D0, s16 *, 0x18) = (s16) (((u16) M2C_FIELD(D_80085428, u16 *, 0x5CC) >> 3) & 7);
}
