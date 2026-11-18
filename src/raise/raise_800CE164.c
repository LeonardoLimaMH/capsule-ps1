#include "common.h"

void func_800CE164(s32 a0) {
    extern u8 D_80100F38[];
    extern u16 func_800B1260();
    u8 *p = D_80100F38 + ((func_800B1260(a0) & 0xFFFF) * 0x79C);
    u16 v;
    if (*(s16 *)(p + 0x328) > 0) {
        *(u16 *)(p + 0x328) -= 1;
        v = *(s16 *)(p + 0x324) == 7 ? 0 : *(u16 *)(p + 0x324) + 1;
    } else {
        *(u16 *)(p + 0x328) += 1;
        v = *(s16 *)(p + 0x324) == 0 ? 7 : *(u16 *)(p + 0x324) - 1;
    }
    *(volatile u16 *)(p + 0x324) = v;
    *(u16 *)(p + 0x326) = *(u16 *)(p + 0x324);
}
