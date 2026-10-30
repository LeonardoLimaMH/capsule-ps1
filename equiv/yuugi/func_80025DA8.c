#include "common.h"

void func_80025DA8(void) {
    extern M2C_UNK D_80069E4C[];
    extern u8 D_80085428[];
    extern M2C_UNK D_80100F38[];
    s32 temp_v1;
    void *temp_v0;

    switch ((*D_80085428)) {                           /* irregular */
    case 0:
        temp_v1 = func_800B1260() & 0xFFFF;
        if (temp_v1 != 0xFFFF) {
            temp_v0 = (temp_v1 * 0x79C) + (u8 *)D_80100F38;
            M2C_FIELD(temp_v0, u16 *, 0x32E) = (u16) M2C_FIELD(temp_v0, u16 *, 0x332);
            M2C_FIELD(temp_v0, u16 *, 0x330) = (u16) M2C_FIELD(temp_v0, u16 *, 0x334);
            M2C_FIELD(temp_v0, u16 *, 0x33A) = (u16) M2C_FIELD(temp_v0, u16 *, 0x33C);
            return;
        }
        return;
    case 1:
        M2C_FIELD(D_80069E4C, u8 *, 0x16) = (u8) M2C_FIELD(D_80069E4C, u8 *, 0x19);
        M2C_FIELD(D_80069E4C, u8 *, 0x17) = (u8) M2C_FIELD(D_80069E4C, u8 *, 0x1A);
        M2C_FIELD(D_80069E4C, u8 *, 0x18) = (u8) M2C_FIELD(D_80069E4C, u8 *, 0x1B);
        break;
    }
}
