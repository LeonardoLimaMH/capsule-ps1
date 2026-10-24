#include "common.h"

void func_800AB78C(void) {
    extern u8 D_800859F8[];
    extern M2C_UNK D_8008ED68[];
    extern u8 D_800B3D24[];
    extern s32 D_800B3D34[];
    (*D_800B3D34) = M2C_FIELD(D_8008ED68, s32 *, 0x88);
    if (((*D_800859F8) == 2) && ((*D_800B3D24) != 0)) {
        (*D_800B3D34) = M2C_FIELD(D_8008ED68, s32 *, 0x98);
    }
}
