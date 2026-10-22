#include "common.h"
#include "yuugi.h"

void SetPolyGT3(void *arg0) {
    M2C_FIELD(arg0, s8 *, 3) = 9;
    M2C_FIELD(arg0, s8 *, 7) = 0x34;
}
