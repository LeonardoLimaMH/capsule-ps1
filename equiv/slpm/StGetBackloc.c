#include "common.h"

s32 StGetBackloc(s32 arg0) {
    extern s32 D_80134F08[];
    extern M2C_UNK D_80137310[];
    extern s32 D_80137314[];
    if ((*D_80134F08) == 0) {
        CdIntToPos(CdPosToInt(D_80137310) + 1, arg0);
        return (*D_80137314);
    }
    return -1;
}
