#include "common.h"
#include "yuugi.h"

void SetLineF2(void *arg0) {
    M2C_FIELD(arg0, s8 *, 3) = 3;
    M2C_FIELD(arg0, s8 *, 7) = 0x40;
}
