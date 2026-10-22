#include "common.h"
#include "yuugi.h"

void SetPolyG3(void *arg0) {
    M2C_FIELD(arg0, s8 *, 3) = 6;
    M2C_FIELD(arg0, s8 *, 7) = 0x30;
}
