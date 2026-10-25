#include "common.h"

void func_800B8DA0(void *arg0) {
    extern u8 D_8008610F[];
    u16 temp_v1;
    u8 temp_v0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s32 *, 0x10) == 0) {
        func_800185F8();
    }
    if (M2C_FIELD(arg0, s32 *, 0x34) & 0x7F) {
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
        switch (temp_v1) {                          /* irregular */
        case 0:
            if ((*D_8008610F) != 0) {
                M2C_FIELD(arg0, u16 *, 0x7A) = 1U;
                return;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s16 *, 0x4A) = 0x1C;
            M2C_FIELD(arg0, s16 *, 0x4E) = 4;
            M2C_FIELD(arg0, u8 *, 0x5A) = 0U;
            M2C_FIELD(arg0, u8 *, 0x59) = 0U;
            M2C_FIELD(arg0, u8 *, 0x58) = 0U;
            M2C_FIELD(arg0, s16 *, 0x46) = 0;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            return;
        case 2:
            temp_v0 = M2C_FIELD(arg0, u8 *, 0x5A) + 2;
            M2C_FIELD(arg0, u8 *, 0x5A) = temp_v0;
            M2C_FIELD(arg0, u8 *, 0x59) = temp_v0;
            M2C_FIELD(arg0, u8 *, 0x58) = temp_v0;
            if ((temp_v0 & 0xFF) == 0x80) {
                M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            }
            break;
        }
    }
}
