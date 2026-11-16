#include "common.h"

#include "ghidra.h"

void func_800ACD98(void *arg0) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE48[];
    extern u8 D_800B3D20[];
    u8 *p = (u8 *)arg0;
    u8 *d = D_8008ED68;
    s32 val;

    if (*(u16 *)(d + 0xDC) == 5) {
        *(s16 *)(p + 0x46) = -0x68;
        *(s32 *)(p + 0x38) &= ~1;
        if ((*(u16 *)(d + 0xE0) == *(u16 *)(d + 0xDC)) && (*D_800B3D20 == 0)) {
            *(u16 *)(p + 0x50) += *(u16 *)(p + 0x74);
            *(u16 *)(p + 0x52) += *(u16 *)(p + 0x76);
            if ((s16)*(u16 *)(p + 0x50) >= 0x1000) {
                *(u16 *)(p + 0x52) = 0x1000;
                *(u16 *)(p + 0x50) = 0x1000;
                *D_800B3D20 = 1;
                goto end;
            }
        } else if ((*D_8008EE48 == 6) && (*D_800B3D20 == 0)) {
            *(u16 *)(p + 0x50) -= *(u16 *)(p + 0x74);
            *(u16 *)(p + 0x52) -= *(u16 *)(p + 0x76);
            if ((s16)*(u16 *)(p + 0x50) <= 0) {
                *(u16 *)(p + 0x52) = 0;
                *(u16 *)(p + 0x50) = 0;
                *D_800B3D20 = 1;
                goto end;
            }
        } else if (*D_8008EE48 < 5) {
            val = *(s32 *)(p + 0x38);
            *(u16 *)(p + 0x52) = 0;
            *(u16 *)(p + 0x50) = 0;
            goto block_13;
        }
    } else if (*(u16 *)(d + 0xDC) < 7) {
        val = *(s32 *)(p + 0x38);
block_13:
        *(s32 *)(p + 0x38) = val | 1;
    }
end: ;
}
