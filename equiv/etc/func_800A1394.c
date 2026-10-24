#include "common.h"

extern u8 D_8008ED68[];

void func_800A1394(u8 *arg0) {
    u16 v = *(u16 *)(arg0 + 0xC);

    if (D_8008ED68[0x103] < 2) {
        v += 1;
    } else {
        v += D_8008ED68[0x103];
    }
    *(u16 *)(arg0 + 0xC) = v;
    func_80018F90(*(u16 *)(arg0 + 0xC), 4);
}
