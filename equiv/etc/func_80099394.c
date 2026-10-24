#include "common.h"

extern u8 D_8008ED68[];
extern void (*D_800AEF98[])(void);

void func_80099394(void) {
    if (*(u16 *)(D_8008ED68 + 0xDC) == 2) {
        func_8001FD98(4);
    }
    D_800AEF98[*(u16 *)(D_8008ED68 + 0xDC)]();
}
