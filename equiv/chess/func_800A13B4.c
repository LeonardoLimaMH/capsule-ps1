#include "common.h"

void func_800A13B4(void *arg0) {
    extern u16 D_8008EE4C[];
    u16 temp_v1;
    u32 temp_v0;
    u32 temp_v0_2;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if ((*D_8008EE4C) != 0) {
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) ((M2C_FIELD(arg0, s32 *, 0x38) & ~1) | 8);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
        case 1:
            temp_v0 = M2C_FIELD(arg0, u32 *, 0x3C) + 1;
            M2C_FIELD(arg0, u32 *, 0x3C) = temp_v0;
            if (temp_v0 >= 0x1AU) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~8);
                M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
                return;
            }
        } else {
            return;
        }
        break;
    case 2:
        if ((u16) (*D_8008EE4C) >= 0xCU) {
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 8);
            M2C_FIELD(arg0, u16 *, 0x6A) = (u16) -(s32) M2C_FIELD(arg0, u16 *, 0x6A);
            M2C_FIELD(arg0, u16 *, 0x6E) = (u16) -(s32) M2C_FIELD(arg0, u16 *, 0x6E);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
        case 3:
            temp_v0_2 = M2C_FIELD(arg0, u32 *, 0x3C) + 1;
            M2C_FIELD(arg0, u32 *, 0x3C) = temp_v0_2;
            if (temp_v0_2 >= 0x1AU) {
                func_800185F8(arg0, arg0);
            }
        }
        break;
    }
}
