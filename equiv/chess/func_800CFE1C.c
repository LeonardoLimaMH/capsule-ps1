#include "common.h"

void func_800CFE1C(void) {
    extern M2C_UNK D_80085428[];
    extern u8 D_80085FF2[];
    extern M2C_UNK D_801010B0[];
    extern M2C_UNK D_80118C18[];
    extern M2C_UNK D_80118FAA[];
    s16 var_v0;
    s32 var_a3;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t6;
    u8 temp_a0;
    u8 var_a1;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1;

    func_8001A998(D_80118FAA, 0x546);
    var_t2 = 0;
    temp_v0 = D_80118FAA - 0x392;
    var_t6 = 0;
    var_a1 = M2C_FIELD(D_80085428, u8 *, 0xBDB);
    var_t3 = 0;
    M2C_FIELD(temp_v0, s8 *, 0xA) = 0;
    M2C_FIELD(temp_v0, u8 *, 0x39F) = var_a1;
    M2C_FIELD(temp_v0, u8 *, 0x39C) = (u8) M2C_FIELD(D_80085428, u8 *, 0x5E6);
    M2C_FIELD(temp_v0, u8 *, 0x39D) = (u8) M2C_FIELD(D_80085428, u8 *, 0x5E7);
    M2C_FIELD(temp_v0, u8 *, 0x39E) = (u8) M2C_FIELD(D_80085428, u8 *, 0xBDA);
    M2C_FIELD(D_80118FAA, s32 *, -0x392) = (s32) *((M2C_FIELD(D_80085428, u8 *, 0x5D9) * 0x34) + D_801010B0);
    do {
        var_a3 = 0;
        var_t1 = var_t6;
        var_t0 = var_t3;
loop_2:
        temp_a2 = var_t0 + D_80085428;
        if ((M2C_FIELD(temp_a2, u8 *, 0x5F6) != 0) && !(M2C_FIELD(temp_a2, s32 *, 0x600) & 0x300)) {
            var_a1 = M2C_FIELD(temp_a2, u8 *, 0x5FD);
            temp_a0 = M2C_FIELD(temp_a2, u8 *, 0x5FE);
            M2C_FIELD((temp_a0 + (((var_a1 & 0xFF) * 0xD) + temp_v0)), s8 *, 0x3F6) = (s8) ((var_t2 << 7) | (var_a3 + 1));
            temp_v1 = var_t1 + temp_v0;
            M2C_FIELD(temp_v1, u8 *, 0x3A2) = var_a1;
            M2C_FIELD(temp_v1, u8 *, 0x3A3) = temp_a0;
            M2C_FIELD(temp_v1, u8 *, 0x3A4) = (u8) M2C_FIELD(temp_a2, u8 *, 0x5F6);
            M2C_FIELD(temp_v1, u8 *, 0x3A5) = (u8) M2C_FIELD(temp_a2, u8 *, 0x5F7);
            M2C_FIELD(temp_v1, u8 *, 0x3A6) = (u8) M2C_FIELD(temp_a2, u8 *, 0x5F8);
            M2C_FIELD(temp_v1, u8 *, 0x3A7) = (u8) M2C_FIELD(temp_a2, u8 *, 0x5F9);
            M2C_FIELD(temp_v1, u8 *, 0x3A8) = (u8) M2C_FIELD(temp_a2, u8 *, 0x5FA);
        }
        var_t1 += 7;
        var_a3 += 1;
        var_t0 += 0x7C;
        if (var_a3 < 6) {
            goto loop_2;
        }
        var_t6 += 0x2A;
        var_t2 += 1;
        var_t3 += 0x2E8;
    } while (var_t2 < 2);
    M2C_FIELD(D_80118C18, u8 *, 0x39A) = (u8) (*D_80085FF2);
    M2C_FIELD(D_80118C18, s8 *, 0x3A0) = func_800D0884(0, var_a1, temp_a2, var_a3);
    M2C_FIELD(D_80118C18, s8 *, 0x3A1) = func_800D0884(1);
    if (M2C_FIELD(D_80118C18, u8 *, 0x39A) == 0) {
        M2C_FIELD(D_80118C18, s16 *, 0x392) = -0x4E20;
        M2C_FIELD(D_80118C18, s16 *, 0x394) = -0x4E20;
        var_v0 = 0x4E20;
    } else {
        M2C_FIELD(D_80118C18, s16 *, 0x392) = 0x4E20;
        M2C_FIELD(D_80118C18, s16 *, 0x394) = 0x4E20;
        var_v0 = -0x4E20;
    }
    M2C_FIELD(D_80118C18, s16 *, 0x396) = var_v0;
}
