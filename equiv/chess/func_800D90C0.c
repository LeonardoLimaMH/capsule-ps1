#include "common.h"

struct FunctionalUnaligned32 { u32 value; } __attribute__((packed));
#define M2C_UNALIGNED32(expr) (((struct FunctionalUnaligned32 *)&(expr))->value)
void func_800D90C0(s32 arg0) {
    extern u8 D_80085429[];
    extern u8 D_80085994[];
    extern u8 D_80118C18[];
    u16 temp_v1;
    u16 var_v0;
    u8 temp_t2;
    void *temp_t1;
    void *var_a3;
    void *var_t0;

    var_t0 = D_80118C18 + 0x5AE;
    var_a3 = D_80118C18 + 0x392;
    temp_t1 = (((u32) (arg0 & 0xFF) >> 7) * 0x2E8) + D_80085994 + ((arg0 & 0x7F) * 0x7C);
    temp_t2 = M2C_FIELD(temp_t1, u8 *, 0x12);
    if (((s32) var_a3 | (s32) var_t0) & 3) {
        do {
            M2C_FIELD(var_t0, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a3, u8 *, 0));
            M2C_FIELD(var_t0, u8 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a3, u8 *, 4));
            M2C_FIELD(var_t0, u8 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a3, u8 *, 8));
            M2C_FIELD(var_t0, u8 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_a3, u8 *, 0xC));
            var_a3 += 0x10;
            var_t0 += 0x10;
        } while (var_a3 != (D_80118C18 + 0x492));
    } else {
        do {
            M2C_FIELD(var_t0, s32 *, 0) = (s32) M2C_FIELD(var_a3, s32 *, 0);
            M2C_FIELD(var_t0, s32 *, 4) = (s32) M2C_FIELD(var_a3, s32 *, 4);
            M2C_FIELD(var_t0, s32 *, 8) = (s32) M2C_FIELD(var_a3, s32 *, 8);
            M2C_FIELD(var_t0, s32 *, 0xC) = (s32) M2C_FIELD(var_a3, s32 *, 0xC);
            var_a3 += 0x10;
            var_t0 += 0x10;
        } while (var_a3 != (D_80118C18 + 0x492));
    }
    M2C_FIELD(var_t0, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a3, u8 *, 0));
    M2C_FIELD(var_t0, u8 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a3, u8 *, 4));
    M2C_FIELD(var_t0, u8 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a3, u8 *, 8));
    M2C_FIELD(var_t0, s16 *, 0xC) = (s16) M2C_FIELD(var_a3, s16 *, 0xC);
    M2C_FIELD(D_80118C18, s8 *, 0x5B6) = (s8) (1 - M2C_FIELD(D_80118C18, u8 *, 0x39A));
    if ((*D_80085429) == 1) {
        var_v0 = M2C_FIELD(D_80118C18, u16 *, 0x5B4) + 0x32;
        goto block_10;
    }
    if (M2C_FIELD(temp_t1, s8 *, 0x13) != -1) {
        temp_v1 = M2C_FIELD(M2C_FIELD(D_80118C18, void **, 4), u16 *, 0x1A);
        var_v0 = M2C_FIELD(D_80118C18, u16 *, 0x5B4) - (temp_v1 + ((s32) (temp_v1 * ((temp_t2 - M2C_FIELD(temp_t1, s8 *, 0x13)) + 1)) / (s32) temp_t2));
block_10:
        M2C_FIELD(D_80118C18, u16 *, 0x5B4) = var_v0;
    }
}
