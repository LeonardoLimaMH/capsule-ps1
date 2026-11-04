#include "common.h"

typedef struct { u8 pad0[0x37E]; s16 st; u8 pad1[0x79C - 0x380]; } RaiseObj_800E1624;

extern u8 D_80100F38[];
s32 func_800E1624(s32 idx) {
    u8 *obj = (idx & 0xFFFF) * 0x79C + D_80100F38;

    if (*(s16 *)(obj + 0x37E) == 1) {
        return 1;
    }
    return *(s16 *)(obj + 0x37E) == 2;
}
