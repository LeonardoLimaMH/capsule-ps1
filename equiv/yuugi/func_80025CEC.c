#include "common.h"

void func_80025CEC(s8 arg1, s8 arg2, s8 arg3) {
    extern M2C_UNK D_80069E4C[];
    extern u8 D_80085428[];
    extern M2C_UNK D_80100F38[];
    void *temp_v1;

    switch ((*D_80085428)) {                           /* irregular */
    case 0:
        temp_v1 = ((func_800B1260(arg3, arg1, arg2) & 0xFFFF) * 0x79C) + (*D_80100F38);
        M2C_FIELD(temp_v1, s16 *, 0x332) = (s16) arg1;
        M2C_FIELD(temp_v1, s16 *, 0x334) = (s16) arg2;
        M2C_FIELD(temp_v1, s16 *, 0x33C) = (s16) arg3;
        return;
    case 1:
        M2C_FIELD((*D_80069E4C), s8 *, 0x19) = arg1;
        M2C_FIELD((*D_80069E4C), s8 *, 0x1A) = arg2;
        M2C_FIELD((*D_80069E4C), s8 *, 0x1B) = arg3;
        return;
    }
}
