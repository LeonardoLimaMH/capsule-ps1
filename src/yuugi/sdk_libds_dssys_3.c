#include "common.h"
#include "yuugi.h"

s32 DsMix(void) {
    CD_vol();
    return 1;
}

s32 DsGetSector(void) {
    return CD_getsector() == 0;
}

s32 DsGetSector2(void) {
    return CD_getsector2() == 0;
}
