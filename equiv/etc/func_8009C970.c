#include "common.h"

extern u8 D_80085428[];
extern u16 D_8008EE44;
extern void (*D_800B2C2C[])(u8 *);

void func_8009C970(void) {
    rand();
    D_800B2C2C[D_8008EE44](D_80085428);
}
