#include "common.h"

extern s32 (*D_80069AA4[])(void);
extern u16 D_8008EE44;

s32 func_800238FC(void) {
    return D_80069AA4[D_8008EE44]();
}
