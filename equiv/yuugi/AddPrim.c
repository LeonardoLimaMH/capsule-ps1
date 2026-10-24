#include "common.h"

void AddPrim(s32 *arg0, s32 *arg1) {
    *arg1 = (*arg1 & 0xFF000000) | (*arg0 & 0xFFFFFF);
    *arg0 = (*arg0 & 0xFF000000) | ((s32) arg1 & 0xFFFFFF);
}
