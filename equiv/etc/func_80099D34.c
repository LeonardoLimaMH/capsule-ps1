#include "common.h"

void func_80099D34(void) {
    extern u8 D_80086228[];
    extern u8 D_8008ED68[];
    void *temp_v0;
    void *temp_v0_2;

    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE0)) {  /* irregular */
    case 0:
        if (M2C_FIELD(D_8008ED68, s32 *, 0xA68) == 0) {
            if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 3) {
                M2C_FIELD(D_80086228, s8 *, 0x19) = 0xE0;
                M2C_FIELD(D_80086228, s8 *, 0x1A) = 0xE0;
                M2C_FIELD(D_80086228, s8 *, 0x1B) = 0xE0;
                temp_v0 = D_80086228 + 0x4594;
                M2C_FIELD(temp_v0, s8 *, 0x19) = 0xE0;
                M2C_FIELD(temp_v0, s8 *, 0x1A) = 0xE0;
                M2C_FIELD(temp_v0, s8 *, 0x1B) = 0xE0;
            } else {
                M2C_FIELD(D_80086228, s8 *, 0x19) = 0;
                M2C_FIELD(D_80086228, s8 *, 0x1A) = 0;
                M2C_FIELD(D_80086228, s8 *, 0x1B) = 0;
                temp_v0_2 = D_80086228 + 0x4594;
                M2C_FIELD(temp_v0_2, s8 *, 0x19) = 0;
                M2C_FIELD(temp_v0_2, s8 *, 0x1A) = 0;
                M2C_FIELD(temp_v0_2, s8 *, 0x1B) = 0;
            }
            func_8001ADA0(8);
            func_80012578();
            return;
        }
        return;
    case 1:
        if (M2C_FIELD(D_8008ED68, s32 *, 0xA68) == 0) {
            if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) != 3) {
                func_8001AD48(6);
            }
            func_80012508();
        }
        break;
    }
}
