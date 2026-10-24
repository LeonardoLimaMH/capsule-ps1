#include "common.h"

extern u8 D_8008ED68[];
extern void (*D_800B2E5C[])(void);

void func_800A4A28(void) {
    if (*(u16 *)(D_8008ED68 + 0xDC) == 1) {
        func_8001FD98(5);
    }
    D_800B2E5C[*(u16 *)(D_8008ED68 + 0xDC)]();
}
