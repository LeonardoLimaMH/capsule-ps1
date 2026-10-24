#include "common.h"

extern u16 D_8008EE44;
extern void (*D_800AEFDC[])(void);

void func_80099C08(void) {
    D_800AEFDC[D_8008EE44]();
}
