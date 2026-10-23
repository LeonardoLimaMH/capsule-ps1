#include "common.h"

void CdIntToPos(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s8 *, 2) = (s8) (((((arg0 + 0x96) % 75) / 10) * 0x10) + (((arg0 + 0x96) % 75) % 10));
    M2C_FIELD(arg1, s8 *, 1) = (s8) ((((((arg0 + 0x96) / 75) % 60) / 10) * 0x10) + ((((arg0 + 0x96) / 75) % 60) % 10));
    M2C_FIELD(arg1, s8 *, 0) = (s8) ((((((arg0 + 0x96) / 75) / 60) / 10) * 0x10) + ((((arg0 + 0x96) / 75) / 60) % 10));
}
