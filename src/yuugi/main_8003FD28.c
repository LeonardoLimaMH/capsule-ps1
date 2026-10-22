#include "common.h"
#include "yuugi.h"

void _SpuDataCallback(s32 arg0) {
    DMACallback(4, arg0);
}
