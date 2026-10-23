#include "common.h"

void func_800AE03C(void *arg0, s32 arg1) {
    extern M2C_UNK D_8008ED68[];
    s32 temp_v0_2;
    void *temp_a0;
    void *temp_v0;

    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    case 0:
        M2C_FIELD(arg0, u16 *, 0x5F8) = 0U;
        func_80012628();
        return;
    case 1:
        M2C_FIELD(arg0, u16 *, 0x5F8) = (u16) (M2C_FIELD(arg0, u16 *, 0x5F8) + 1);
        if (((M2C_FIELD(arg0, u16 *, 0x5F8) % 14) << 0x10) == 0) {
            temp_a0 = arg0 + (arg1 * 2);
            temp_v0 = arg0 + (arg1 * 6);
            temp_v0_2 = func_800ADD70(arg0, arg1, M2C_FIELD(temp_a0, u8 *, 0x601), M2C_FIELD(temp_a0, u8 *, 0x602), (s32) M2C_FIELD(temp_v0, u8 *, 0x5EE), (s32) M2C_FIELD(temp_v0, u8 *, 0x5EF));
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
