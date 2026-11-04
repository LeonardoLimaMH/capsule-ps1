#include "common.h"

typedef struct { u8 pad0[0x37E]; s16 st; u8 pad1[0x79C - 0x380]; } RaiseObj_800E1624;

extern RaiseObj_800E1624 D_80100F38[];
s32 func_800E1624(u16 idx) {
    if (D_80100F38[idx].st == 1) {
        return 1;
    }
    return D_80100F38[idx].st == 2;
}
