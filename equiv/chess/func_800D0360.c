#include "common.h"

struct FunctionalUnaligned32 { u32 value; } __attribute__((packed));
#define M2C_UNALIGNED32(expr) (((struct FunctionalUnaligned32 *)&(expr))->value)
void func_800D0360(void) {
    extern u16 D_800859F4[];
    extern u8 D_80118C18[];
    u16 temp_a1_4;
    u16 temp_a2_4;
    u8 *temp_a1_3;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_a3;
    u8 temp_a3_2;
    u8 temp_a3_3;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 temp_t0_3;
    u8 temp_t1;
    u8 temp_t2;
    u8 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a2_3;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_t3;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_a3;
    void *var_t0;

    temp_s0 = (M2C_FIELD(D_80118C18, u8 *, 0xA) * 0x10E) + (D_80118C18 + 0x392);
    var_t0 = temp_s0 + 0x10E;
    var_a3 = temp_s0;
    temp_t3 = (M2C_FIELD(D_80118C18, u8 *, 0xA) * 0xB4) + (D_80118C18 + 0xD);
    if (((s32) temp_s0 | (s32) var_t0) & 3) {
        do {
            M2C_FIELD(var_t0, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a3, u8 *, 0));
            M2C_FIELD(var_t0, u8 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a3, u8 *, 4));
            M2C_FIELD(var_t0, u8 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a3, u8 *, 8));
            M2C_FIELD(var_t0, u8 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_a3, u8 *, 0xC));
            var_a3 += 0x10;
            var_t0 += 0x10;
        } while (var_a3 != (temp_s0 + 0x100));
    } else {
        do {
            M2C_FIELD(var_t0, s32 *, 0) = (s32) M2C_FIELD(var_a3, s32 *, 0);
            M2C_FIELD(var_t0, s32 *, 4) = (s32) M2C_FIELD(var_a3, s32 *, 4);
            M2C_FIELD(var_t0, s32 *, 8) = (s32) M2C_FIELD(var_a3, s32 *, 8);
            M2C_FIELD(var_t0, s32 *, 0xC) = (s32) M2C_FIELD(var_a3, s32 *, 0xC);
            var_a3 += 0x10;
            var_t0 += 0x10;
        } while (var_a3 != (temp_s0 + 0x100));
    }
    M2C_FIELD(var_t0, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a3, u8 *, 0));
    M2C_FIELD(var_t0, u8 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a3, u8 *, 4));
    M2C_FIELD(var_t0, u8 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a3, u8 *, 8));
    M2C_FIELD(var_t0, s16 *, 0xC) = (s16) M2C_FIELD(var_a3, s16 *, 0xC);
    M2C_FIELD(D_80118C18, u8 *, 0xA) = (u8) (M2C_FIELD(D_80118C18, u8 *, 0xA) + 1);
    temp_v1 = M2C_FIELD(temp_t3, u8 *, 1);
    temp_s0_2 = temp_s0 + 0x10E;
    switch (temp_v1) {
    case 3:
        break;
    case 0:
        if ((u32) (((u32) ((*D_800859F4) & 0x700) >> 8) - 1) < 6U) {
            temp_v1_2 = temp_s0_2 + M2C_FIELD(temp_s0_2, u8 *, 8);
            M2C_FIELD(temp_v1_2, u8 *, 0xA) = (u8) (M2C_FIELD(temp_v1_2, u8 *, 0xA) - 1);
        }
        break;
    case 1:
        temp_t0 = M2C_FIELD(temp_t3, u8 *, 0);
        temp_a1 = (M2C_FIELD(D_80118C18, u8 *, 0xA) * 0x10E) + (D_80118C18 + 0x392);
        temp_a0 = temp_a1 + (((temp_t0 >> 7) * 0x2A) + 0x10) + (((temp_t0 & 0x7F) * 7) - 7);
        M2C_FIELD(((M2C_FIELD(temp_a0, u8 *, 0) * 0xD) + temp_a1 + M2C_FIELD(temp_a0, u8 *, 1)), s8 *, 0x64) = 0;
        temp_a2 = M2C_FIELD(temp_t3, u8 *, 2) / 13;
        temp_a3 = M2C_FIELD(temp_t3, u8 *, 2) % 13;
        M2C_FIELD((((temp_a2 & 0xFF) * 0xD) + temp_a1 + (temp_a3 & 0xFF)), u8 *, 0x64) = temp_t0;
        M2C_FIELD(temp_a0, u8 *, 0) = temp_a2;
        M2C_FIELD(temp_a0, u8 *, 1) = temp_a3;
        break;
    case 2:
        temp_t0_2 = M2C_FIELD(temp_t3, u8 *, 0);
        temp_a1_2 = (M2C_FIELD(D_80118C18, u8 *, 0xA) * 0x10E) + (D_80118C18 + 0x392);
        temp_a0_2 = temp_a1_2 + (((temp_t0_2 >> 7) * 0x2A) + 0x10) + (((temp_t0_2 & 0x7F) * 7) - 7);
        M2C_FIELD(((M2C_FIELD(temp_a0_2, u8 *, 0) * 0xD) + temp_a1_2 + M2C_FIELD(temp_a0_2, u8 *, 1)), s8 *, 0x64) = 0;
        temp_a2_2 = M2C_FIELD(temp_t3, u8 *, 2) / 13;
        temp_a3_2 = M2C_FIELD(temp_t3, u8 *, 2) % 13;
        M2C_FIELD((((temp_a2_2 & 0xFF) * 0xD) + temp_a1_2 + (temp_a3_2 & 0xFF)), u8 *, 0x64) = temp_t0_2;
        M2C_FIELD(temp_a0_2, u8 *, 0) = temp_a2_2;
        M2C_FIELD(temp_a0_2, u8 *, 1) = temp_a3_2;
        func_800D00B0(M2C_FIELD(temp_t3, u8 *, 0), (M2C_FIELD(temp_t3, u8 *, 3) / 13) & 0xFF, (M2C_FIELD(temp_t3, u8 *, 3) % 13) & 0xFF, temp_a3_2);
        break;
    case 4:
        temp_t0_3 = M2C_FIELD(temp_t3, u8 *, 0);
        temp_a2_3 = (M2C_FIELD(D_80118C18, u8 *, 0xA) * 0x10E) + (D_80118C18 + 0x392);
        temp_t1 = M2C_FIELD(temp_t3, u8 *, 2) / 13;
        temp_t2 = M2C_FIELD(temp_t3, u8 *, 2) % 13;
        temp_v1_3 = temp_a2_3 + (((temp_t0_3 >> 7) * 0x2A) + 0x10) + (((temp_t0_3 & 0x7F) * 7) - 7);
        temp_a1_3 = ((temp_t1 & 0xFF) * 0xD) + temp_a2_3 + 0x64 + (temp_t2 & 0xFF);
        temp_a3_3 = *temp_a1_3;
        M2C_FIELD(((M2C_FIELD(temp_v1_3, u8 *, 0) * 0xD) + temp_a2_3 + M2C_FIELD(temp_v1_3, u8 *, 1)), s8 *, 0x64) = 0;
        *temp_a1_3 = temp_t0_3;
        M2C_FIELD(temp_v1_3, u8 *, 0) = temp_t1;
        M2C_FIELD(temp_v1_3, u8 *, 1) = temp_t2;
        M2C_FIELD((((temp_a3_3 & 0x7F) * 7) + (temp_a2_3 + ((((s32) temp_a3_3 >> 7) * 0x2A) + 0x10))), s8 *, -5) = 0;
        break;
    }
    temp_a1_4 = M2C_FIELD(temp_s0_2, u16 *, 0);
    M2C_FIELD(temp_s0_2, s8 *, 9) = 0;
    M2C_FIELD(temp_s0_2, u16 *, 2) = (u16) M2C_FIELD(temp_s0_2, u16 *, 4);
    temp_a2_4 = M2C_FIELD(temp_s0_2, u16 *, 2);
    M2C_FIELD(temp_s0_2, u8 *, 8) = (u8) (1 - M2C_FIELD(temp_s0_2, u8 *, 8));
    M2C_FIELD(temp_s0_2, u16 *, 4) = temp_a1_4;
    M2C_FIELD(temp_s0_2, u16 *, 0) = temp_a2_4;
    M2C_FIELD(temp_s0_2, s8 *, 0xE) = func_800D0884(0, temp_a1_4, temp_a2_4);
    M2C_FIELD(temp_s0_2, s8 *, 0xF) = func_800D0884(1);
}
