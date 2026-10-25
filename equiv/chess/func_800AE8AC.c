#include "common.h"

void func_800AE8AC(void *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    u8 temp_a3;
    void *temp_t1;
    void *temp_v1;

    temp_t1 = arg0 + ((arg1 * 6) + 0x5EC);
    temp_a3 = M2C_FIELD((arg0 + arg1), u8 *, 0x5FB);
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    case 0:
        M2C_FIELD(arg0, u16 *, 0x5F8) = 0U;
        func_80012628(M2C_FIELD(D_8008ED68, u16 *, 0xE8), arg1 * 3, temp_a3);
        return;
    case 1:
        M2C_FIELD(arg0, u16 *, 0x5F8) = (u16) (M2C_FIELD(arg0, u16 *, 0x5F8) + 1);
        if (((M2C_FIELD(arg0, u16 *, 0x5F8) % 14) << 0x10) == 0) {
            temp_v1 = arg0 + ((temp_a3 * 0x7C) + (arg1 * 0x2E8));
            M2C_FIELD(((arg1 * 0x10) + D_8008ED68), s32 *, 0x88) = func_800ADD70(arg0, arg1, M2C_FIELD(temp_v1, u8 *, 0x2D), M2C_FIELD(temp_v1, u8 *, 0x2E), (s32) M2C_FIELD(temp_t1, u8 *, 4), (s32) M2C_FIELD(temp_t1, u8 *, 5));
            func_80012628();
            return;
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
