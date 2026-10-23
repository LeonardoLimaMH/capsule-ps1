#include "common.h"

void func_80111538(s32 arg0) {
    do {

    } while (CdControl(0x15, arg0, 0) == 0);
    do {

    } while (CdRead2(0x1C0) == 0);
}
