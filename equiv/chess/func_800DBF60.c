#include "common.h"

s32 func_800DBF60(s32 arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80118C18[];
    extern u8 D_80119660[];
    extern M2C_UNK D_8011970A[];
    u32 temp_s1;
    void *temp_a1;
    void *temp_s0;

    temp_s1 = arg0 & 0xFF;
    temp_s0 = (temp_s1 >> 7) + D_80118C18;
    if (M2C_FIELD(temp_s0, u8 *, 0x39E) != 0) {
        if ((func_800D7328(temp_s1, D_80119660) & 0xFF) && (func_800202A4(0x64) < (M2C_FIELD(temp_s0, u8 *, 0x39E) * 0x28))) {
            func_800D90C0(temp_s1);
            M2C_FIELD(temp_s0, u8 *, 0x5BA) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x5BA) - 1);
            temp_a1 = ((((*D_80119660) & 0x7F) - 1) * 0x7C) + (((u8) (*D_80119660) >> 7) * 0x2E8) + D_80085428;
            M2C_FIELD(D_8011970A, u8 *, 0) = (u8) M2C_FIELD(temp_a1, u8 *, 0x5FD);
            M2C_FIELD(D_8011970A, u8 *, 1) = (u8) M2C_FIELD(temp_a1, u8 *, 0x5FE);
            return 1;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
