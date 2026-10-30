#include "common.h"
#include "yuugi.h"

#include "common.h"

void SpuSetTransferCallback(s32 arg0) {
    extern s32 D_800715D0;
    if (arg0 != D_800715D0) {
        D_800715D0 = arg0;
    }
}
