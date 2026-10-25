#include "common.h"

void func_800AEA4C(void *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    s32 temp_a3;
    s32 temp_v0_2;
    void *temp_a2;
    void *temp_v0;

    temp_a3 = arg1 * 2;
    temp_a2 = arg0 + ((arg1 * 6) + 0x5EC);
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    case 0:
        M2C_FIELD(arg0, u16 *, 0x5F8) = 0U;
        func_80012628(temp_a2, temp_a3);
        return;
    case 1:
        M2C_FIELD(arg0, u16 *, 0x5F8) = (u16) (M2C_FIELD(arg0, u16 *, 0x5F8) + 1);
        temp_v0 = arg0 + temp_a3;
        if (((M2C_FIELD(arg0, u16 *, 0x5F8) % 14) << 0x10) == 0) {
            temp_v0_2 = func_800ADD70(arg0, arg1, M2C_FIELD(temp_v0, u8 *, 0x601), M2C_FIELD(temp_v0, u8 *, 0x602), (s32) M2C_FIELD(temp_a2, u8 *, 4), (s32) M2C_FIELD(temp_a2, u8 *, 5));
            M2C_FIELD(((arg1 * 0x10) + D_8008ED68), s32 *, 0x88) = temp_v0_2;
            if (temp_v0_2 == 0) {
                func_80012628();
                return;
            }
        }
        return;
    case 2:
        M2C_FIELD(arg0, u16 *, 0x5F8) = (u16) (M2C_FIELD(arg0, u16 *, 0x5F8) + 1);
        if (((M2C_FIELD(arg0, u16 *, 0x5F8) % 14) << 0x10) == 0) {
            M2C_FIELD(((arg1 * 0x10) + D_8008ED68), s32 *, 0x88) = 0x20;
        }
        break;
    }
}
