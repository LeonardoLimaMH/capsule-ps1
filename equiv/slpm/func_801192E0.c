#include "common.h"

s32 func_801192E0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK sp10;

    CdIntToPos(arg1, &sp10);
    CdControl(2, &sp10, 0);
    CdRead(arg0, arg2, 0x80);
    return CdReadSync(0, 0) == 0;
}
