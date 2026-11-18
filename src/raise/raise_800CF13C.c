#include "common.h"

void func_800CF13C(void) {
    extern u8 D_80100F38[];
    extern u16 func_800B1260();
    u8 *obj = D_80100F38 + (func_800B1260() & 0xFFFF) * 0x79C;

    *(u16 *)(obj + 0x1CC) += *(u16 *)(obj + 0x1D4);
    *(u16 *)(obj + 0x1CE) += *(u16 *)(obj + 0x1D6);
    *(u16 *)(obj + 0x1D0) += *(u16 *)(obj + 0x1D8);
}
