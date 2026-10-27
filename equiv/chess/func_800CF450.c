#include "common.h"

struct FunctionalUnaligned32 { u32 value; } __attribute__((packed));
#define M2C_UNALIGNED32(expr) (((struct FunctionalUnaligned32 *)&(expr))->value)
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
void func_800CF450(void) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    extern u8 D_80118C18[];
    s16 temp_a1;
    s32 var_s0;
    s32 var_v0;
    u32 temp_a2;
    u8 temp_s1;
    void *temp_t0;
    void *temp_v1;
    void *var_a2;
    void *var_a3;

    var_a3 = D_80118C18 + 0x4A0;
    var_a2 = D_80118C18 + 0x392;
    temp_s1 = M2C_FIELD(D_80118C18, u8 *, 0x39A);
    temp_t0 = D_80118C18 + 0x492;
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
    temp_a1 = M2C_FIELD(var_a2, s16 *, 0xC);
    M2C_FIELD(var_a3, u8 *, 0) = M2C_UNALIGNED32(M2C_FIELD(var_a2, u8 *, 0));
    M2C_FIELD(var_a3, u8 *, 4) = M2C_UNALIGNED32(M2C_FIELD(var_a2, u8 *, 4));
    M2C_FIELD(var_a3, u8 *, 8) = M2C_UNALIGNED32(M2C_FIELD(var_a2, u8 *, 8));
    M2C_FIELD(var_a3, s16 *, 0xC) = temp_a1;
    func_800D3408(1, temp_a1, var_a2, var_a3);
    temp_a2 = M2C_FIELD(D_80118C18, u8 *, 0xC) & 0xFF;
    M2C_FIELD(D_80118C18, s8 *, 0xA) = 2;
    if (temp_a2 == 0) {
        var_s0 = 0;
        var_v0 = 0 & 0xFF;
loop_6:
        temp_v1 = (var_v0 * 0x7C) + (temp_s1 * 0x2E8) + D_80085428;
        if ((M2C_FIELD(temp_v1, u8 *, 0x5F6) == 0) || (M2C_FIELD(temp_v1, s32 *, 0x600) & 0x300) || (M2C_FIELD(temp_v1, u8 *, 0x610) != 0) || (M2C_FIELD(temp_v1, s8 *, 0x5FB) == 0) || ((func_800DCA2C(((temp_s1 << 7) | (var_s0 + 1)) & 0xFF) & 0xFF) != 2)) {
            var_s0 += 1;
            var_v0 = var_s0 & 0xFF;
            if ((u32) (var_s0 & 0xFF) >= 5U) {

            } else {
                goto loop_6;
            }
        }
    } else if (M2C_FIELD(((((M2C_FIELD(D_80118C18, u8 *, 0xC) & 0x7F) - 1) * 0x7C) + ((temp_a2 >> 7) * 0x2E8) + D_80085428), s8 *, 0x5FB) != 0) {
        func_800DCA2C(M2C_FIELD(D_80118C18, u8 *, 0xC), D_80085428, temp_a2, D_80118C18);
    }
    if (M2C_FIELD(D_80118C18, u8 *, 0xE) == 0) {
        M2C_FIELD(D_80118C18, s8 *, 0xA) = 0;
    } else {
        func_800D3408(1);
        M2C_FIELD(D_80118C18, s8 *, 0xA) = 1;
        M2C_FIELD(D_80118C18, s8 *, 0x4A9) = 0;
        M2C_FIELD(D_80118C18, s8 *, 0x4A8) = (s8) (1 - M2C_FIELD(D_80118C18, u8 *, 0x39A));
        M2C_FIELD(D_80118C18, u16 *, 0x4A2) = (u16) M2C_FIELD(D_80118C18, u16 *, 0x396);
        M2C_FIELD(D_80118C18, u16 *, 0x4A4) = (u16) M2C_FIELD(D_80118C18, u16 *, 0x392);
        M2C_FIELD(D_80118C18, u16 *, 0x4A0) = (u16) M2C_FIELD(D_80118C18, u16 *, 0x396);
        M2C_FIELD(D_80118C18, s8 *, 0x4AE) = func_800D0884(0, M2C_FIELD(D_80118C18, u16 *, 0x396), M2C_FIELD(D_80118C18, u16 *, 0x392));
        M2C_FIELD(D_80118C18, s8 *, 0x4AF) = func_800D0884(1);
    }
    M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
}
