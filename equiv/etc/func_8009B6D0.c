#include "common.h"

void func_8009B6D0(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 temp_a1;
    s32 temp_v1;

    temp_v1 = (M2C_FIELD(arg0, s32 *, 0x38) | 1) & ~8;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_v1;
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xDC)) {  /* irregular */
    case 5:
        temp_a1 = temp_v1 & ~1;
        M2C_FIELD(arg0, s32 *, 0x38) = temp_a1;
        if (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 3) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_a1 | 8);
            return;
        }
        return;
    case 6:
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (temp_v1 & ~1);
        break;
    }
}
