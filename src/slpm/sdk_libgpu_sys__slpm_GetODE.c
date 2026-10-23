#include "common.h"

u32 slpm_GetODE(void) {
    extern void * D_80131B2C[];
    return M2C_FIELD((*D_80131B2C), u32 (**)(), 0x38)() >> 0x1F;
}
