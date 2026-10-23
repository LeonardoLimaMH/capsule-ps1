#include "common.h"

void func_800B862C(void *arg0) {
    u8 temp_s1;
    u8 temp_s2;
    u8 temp_s3;
    void *temp_a1;
    void *temp_s0;
    void *temp_v1;

    temp_s0 = arg0 + 0x5D0;
    temp_s2 = M2C_FIELD(arg0, u8 *, 0xBCA);
    temp_s3 = M2C_FIELD(temp_s0, u8 *, 0x716);
    temp_s1 = M2C_FIELD((temp_s0 + temp_s2), u8 *, 0x5FB);
    if ((temp_s3 != 3) && (temp_s3 != 0xFF)) {
        if (temp_s1 != 5) {
            func_800A84A0(temp_s0 + ((temp_s2 * 0x2E8) + 0x18) + (temp_s1 * 0x7C), temp_s2, temp_s1, 0);
        }
        func_800125AC(0xB);
        return;
    }
    func_800125AC(3);
    temp_v1 = temp_s0 + ((temp_s1 * 0x7C) + (temp_s2 * 0x2E8));
    M2C_FIELD(temp_s0, s8 *, 0x60F) = 1;
    temp_a1 = temp_s0 + (temp_s2 * 2);
    M2C_FIELD(temp_a1, u8 *, 0x601) = (u8) M2C_FIELD(temp_v1, u8 *, 0x2D);
    M2C_FIELD(temp_a1, u8 *, 0x602) = (u8) M2C_FIELD(temp_v1, u8 *, 0x2E);
    M2C_FIELD(temp_s0, s8 *, 0x615) = 1;
    if (temp_s3 == 0xFF) {
        M2C_FIELD(temp_s0, s8 *, 0x60D) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x60E) = 1;
    }
}
