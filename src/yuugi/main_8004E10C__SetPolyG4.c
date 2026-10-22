#include "common.h"
#include "yuugi.h"

void SetPolyG4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 3) = 8;
    M2C_FIELD(arg0, s8 *, 7) = 0x38;
}
