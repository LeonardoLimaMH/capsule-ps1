#include "common.h"

extern s32 (*D_80063664[])(u8 *);

s32 func_8001AFA0(u8 *obj) {
    return D_80063664[*(u16 *)(obj + 0x40)](obj);
}
