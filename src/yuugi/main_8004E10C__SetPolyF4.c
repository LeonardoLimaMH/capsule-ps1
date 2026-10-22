#include "common.h"
#include "yuugi.h"

void SetPolyF4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 3) = 5;
    M2C_FIELD(arg0, s8 *, 7) = 0x28;
}
