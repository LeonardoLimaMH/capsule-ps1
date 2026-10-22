#include "common.h"
#include "yuugi.h"

void SetPolyGT4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 3) = 0xC;
    M2C_FIELD(arg0, s8 *, 7) = 0x3C;
}
