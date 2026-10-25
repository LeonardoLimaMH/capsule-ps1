#include "common.h"

void func_800B143C(s32 arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern u8 D_80091618[];
    extern u8 D_800EEB54[];
    M2C_FIELD(D_800EEB54, s16 *, 0) = (s16) (((u32) M2C_FIELD(((*(u16 *)(((arg0 & 0xFFFF) * 0x1A8) + D_80091618) * 0x3C) + D_80063940), u32 *, 0x18) >> 0xE) & 7);
    M2C_FIELD(D_800EEB54, s16 *, 2) = (s16) (((u32) M2C_FIELD(((*(u16 *)(((arg1 & 0xFFFF) * 0x1A8) + D_80091618) * 0x3C) + D_80063940), u32 *, 0x18) >> 0xE) & 7);
}
