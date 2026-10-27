#include "common.h"

struct FunctionalUnaligned32 { u32 value; } __attribute__((packed));
#define M2C_UNALIGNED32(expr) (((struct FunctionalUnaligned32 *)&(expr))->value)
s32 func_800D79A4(void) {
    extern u8 D_80118C18[];
    s16 temp_v0;
    void *temp_t0;
    void *temp_t0_2;
    void *var_a2;
    void *var_a3;

    temp_v0 = func_800D113C();
    M2C_FIELD(D_80118C18, s16 *, 0x5AE) = temp_v0;
    if (M2C_FIELD(D_80118C18, u8 *, 0x39A) == 0) {
        var_a3 = D_80118C18 + 0x4A0;
        if (M2C_FIELD(D_80118C18, s16 *, 0x4A0) < temp_v0) {
            var_a2 = D_80118C18 + 0x5AE;
            temp_t0 = D_80118C18 + 0x6AE;
            if (((s32) var_a2 | (s32) var_a3) & 3) {
                do {
                    M2C_FIELD(var_a3, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a2, u8 *, 0));
                    M2C_FIELD(var_a3, u8 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a2, u8 *, 4));
                    M2C_FIELD(var_a3, u8 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a2, u8 *, 8));
                    M2C_FIELD(var_a3, u8 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_a2, u8 *, 0xC));
                    var_a2 += 0x10;
                    var_a3 += 0x10;
                } while (var_a2 != temp_t0);
            } else {
                do {
                    M2C_FIELD(var_a3, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
                    M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
                    M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
                    M2C_FIELD(var_a3, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
                    var_a2 += 0x10;
                    var_a3 += 0x10;
                } while (var_a2 != temp_t0);
            }
            goto block_12;
        }
        goto block_13;
    }
    var_a3 = D_80118C18 + 0x4A0;
    if (temp_v0 < M2C_FIELD(D_80118C18, s16 *, 0x4A0)) {
        var_a2 = D_80118C18 + 0x5AE;
        temp_t0_2 = D_80118C18 + 0x6AE;
        if (((s32) var_a2 | (s32) var_a3) & 3) {
            do {
                M2C_FIELD(var_a3, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a2, u8 *, 0));
                M2C_FIELD(var_a3, u8 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a2, u8 *, 4));
                M2C_FIELD(var_a3, u8 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a2, u8 *, 8));
                M2C_FIELD(var_a3, u8 *, 0xC) = M2C_UNALIGNED32(M2C_FIELD(var_a2, u8 *, 0xC));
                var_a2 += 0x10;
                var_a3 += 0x10;
            } while (var_a2 != temp_t0_2);
        } else {
            do {
                M2C_FIELD(var_a3, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
                M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
                M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
                M2C_FIELD(var_a3, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
                var_a2 += 0x10;
                var_a3 += 0x10;
            } while (var_a2 != temp_t0_2);
        }
block_12:
        M2C_FIELD(var_a3, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a2, u8 *, 0));
        M2C_FIELD(var_a3, u8 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a2, u8 *, 4));
        M2C_FIELD(var_a3, u8 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a2, u8 *, 8));
        M2C_FIELD(var_a3, s16 *, 0xC) = (s16) M2C_FIELD(var_a2, s16 *, 0xC);
        return 1;
    }
block_13:
    return 0;
}
