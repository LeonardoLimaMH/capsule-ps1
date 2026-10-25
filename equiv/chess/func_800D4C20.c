#include "common.h"

s32 func_800D4C20(s32 arg0, u8 *arg1) {
    extern u8 D_80063940[];
    extern u8 D_80085428[];
    extern u8 D_80118C18[];
    u8 *sp10;
    u8 sp14;
    u8 sp15;
    s8 sp16;
    s8 sp17;
    u8 sp18;
    s32 temp_a2_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s8 var_s0;
    s8 var_s1;
    s8 var_s3;
    u32 temp_s0_3;
    u32 temp_s2;
    u32 temp_s6;
    u32 temp_v1;
    u8 *var_v0;
    u8 var_v1;
    void *temp_a2;
    void *temp_s1;
    void *temp_s2_2;
    void *temp_s4;

    temp_a2 = D_80118C18 + 0x392;
    temp_s6 = arg0 & 0xFF;
    temp_s2 = temp_s6 >> 7;
    temp_s0 = arg0 & 0x7F;
    temp_s4 = (M2C_FIELD(D_80118C18, u8 *, 0xA) * 0x10E) + temp_a2;
    temp_s1 = temp_s4 + ((temp_s2 * 0x2A) + 0x10) + ((temp_s0 * 7) - 7);
    func_8001A998(arg1, 0xA9, temp_a2);
    var_s3 = 0;
    temp_s0_2 = temp_s0 - 1;
    *arg1 = M2C_FIELD(temp_s1, u8 *, 1) + (M2C_FIELD(temp_s1, u8 *, 0) * 0xD);
    if (temp_s0_2 == 5) {
        var_s3 = func_800D3F7C(temp_s4, temp_s6, arg1 + 1, 1);
    } else if (M2C_FIELD(temp_s1, u8 *, 5) != 0) {
        temp_v1 = ((u32) M2C_FIELD(((M2C_FIELD(((temp_s0_2 * 0x7C) + (temp_s2 * 0x2E8) + D_80085428), u8 *, 0x5E8) * 0x3C) + D_80063940), u32 *, 8) >> 8) & 0xF;
        switch (temp_v1) {
        case 0:
        case 1:
        case 2:
        case 4:
        case 6:
        case 7:
        case 8:
            var_s3 = func_800D4100(temp_s4, arg0 & 0xFF, arg1 + 1, 1);
            break;
        case 5:
            var_s3 = func_800D449C(temp_s4, arg0 & 0xFF, arg1 + 1, 1);
            break;
        case 3:
        case 9:
            var_s1 = 0;
            temp_s0_3 = arg0 & 0xFF;
            temp_a2_2 = arg0 & 0x7F;
            temp_s2_2 = temp_s4 + (((temp_s0_3 >> 7) * 0x2A) + 0x10) + ((temp_a2_2 * 7) - 7);
            func_8001A998(&sp18, 0xA9, (void *) temp_a2_2);
            sp10 = &sp18;
            func_800D3D2C(temp_s4, temp_s0_3, &sp18, 0);
            var_s0 = 0;
            do {
                sp14 = M2C_FIELD(temp_s2_2, u8 *, 0);
                sp16 = var_s0;
                var_s0 += 1;
                sp17 = 0;
                sp15 = M2C_FIELD(temp_s2_2, u8 *, 1);
                func_800D46D0(temp_s4, arg0 & 0xFF, &sp10);
            } while ((u32) (var_s0 & 0xFF) < 4U);
            var_v1 = 0;
            var_v0 = &sp18;
            do {
                if (*var_v0 != 0) {
                    (arg1 + 1)[var_s1 & 0xFF] = var_v1;
                    var_s1 += 1;
                }
                var_v1 += 1;
                var_v0 = &(&sp18)[var_v1];
            } while ((s32) var_v1 < 0xA9);
            var_s3 = var_s1;
            break;
        }
    }
    return (var_s3 + 1) & 0xFF;
}
