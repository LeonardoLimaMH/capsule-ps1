#include "common.h"

void slpm__SpuDataCallback(s32 arg0) {
    slpm_DMACallback(4, arg0);
}
