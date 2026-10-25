#include "common.h"

extern s32 (*D_800508B4[])(void);
extern u16 D_8008EE48;

s32 func_80012264(void) {
    return D_800508B4[D_8008EE48]();
}
