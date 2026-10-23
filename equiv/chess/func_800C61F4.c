#include "common.h"

void func_800C61F4(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 temp_v1;
    s32 var_v0;
    u16 temp_v1_2;
    void *temp_v1_3;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0 = temp_v1 + 1;
    }
    temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x7A);
    M2C_FIELD(arg0, s32 *, 0x3C) = var_v0;
    switch (temp_v1_2) {                            /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
        break;
    case 1:
        if (M2C_FIELD(arg0, s16 *, 0x24) < 0) {
            func_800185F8(arg0);
        }
        break;
    }
    temp_v1_3 = M2C_FIELD(arg0, void **, 0x40);
    M2C_FIELD(arg0, u16 *, 0x46) = (u16) M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), u16 *, 0x46);
    M2C_FIELD(arg0, s16 *, 0x4A) = (s16) (M2C_FIELD(temp_v1_3, u16 *, 0x4A) - 0x1E);
    M2C_FIELD(arg0, s16 *, 0x4E) = (s16) (M2C_FIELD(temp_v1_3, u16 *, 0x4E) - 2);
    M2C_FIELD(arg0, u16 *, 0x50) = (u16) M2C_FIELD(temp_v1_3, u16 *, 0x50);
    M2C_FIELD(arg0, u16 *, 0x52) = (u16) M2C_FIELD(temp_v1_3, u16 *, 0x52);
    if (M2C_FIELD(arg0, s32 *, 0x84) == 1) {
        M2C_FIELD(arg0, u16 *, 0x50) = (u16) ((s16) M2C_FIELD(arg0, u16 *, 0x50) / 2);
        M2C_FIELD(arg0, u16 *, 0x52) = (u16) ((s16) M2C_FIELD(arg0, u16 *, 0x52) / 2);
    }
}
