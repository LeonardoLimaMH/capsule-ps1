#include "common.h"

void func_800A9650(void) {
    extern u8 D_8008ED68[];
    extern u8 D_800B3828[];
    extern u8 D_800B3840[];
    extern u8 D_800B385C[];
    extern u8 D_800B3860[];
    extern u8 D_800B3C58[];
    extern s16 D_800B3CF6[];
    extern s32 D_800B3CFC[];
    extern s32 D_800B3D00[];
    extern s32 D_800B3D04[];
    extern s32 D_800B3D08[];
    extern int func_80099394();
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;

    (*D_800B3D08) += 1;
    if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 5) {
        if (M2C_FIELD(D_8008ED68, s32 *, 0xA68) == 0) {
            (*D_800B3CFC) = 0;
            func_80033974(0x7021);
            func_80012508();
        }
        temp_v0 = (s32) (*D_800B3CFC) >> 3;
        var_a2 = temp_v0;
        if (temp_v0 < 0) {
            var_a2 = temp_v0 + 3;
        }
        func_8001F1A8((*D_800B3CF6), 0x18, (s16) (temp_v0 - ((var_a2 >> 2) * 4)), 1, 0, D_800B385C, 1, 1, 3);
        temp_v1 = (s32) (*D_800B3CFC) >> 3;
        var_a2_2 = temp_v1;
        if (temp_v1 < 0) {
            var_a2_2 = temp_v1 + 3;
        }
        func_8001F35C((s16) ((u16) (*D_800B3CF6) + 0xE), 0x18, (s16) (temp_v1 - ((var_a2_2 >> 2) * 4)), 1, 0, (*D_800B3D00), (*D_800B3D04), 3);
        temp_a3 = (s32) (*D_800B3CFC) >> 3;
        var_a2_3 = temp_a3;
        if (temp_a3 < 0) {
            var_a2_3 = temp_a3 + 3;
        }
        func_8001F1A8((s16) ((u16) (*D_800B3CF6) + (((*D_800B3D04) + 1) * 0xE)), 0x18, (s16) (temp_a3 - ((var_a2_3 >> 2) * 4)), 1, 0, D_800B3860, 1, 0x13, 3);
        (*D_800B3CFC) += 1;
        return;
    }
    if (func_80019654() != 0) {
        func_80012200(&func_80099394);
    }
    if (M2C_FIELD(D_8008ED68, s32 *, 0xA68) != 0) {
        func_80020844(-0xA0, -0x78, 0x140, 0xF0, 0, 0, 0, 0, 4);
        func_8001F1A8(-0x78, M2C_FIELD(D_800B3C58, s16 *, 0x9A), 0, 1, 0, D_800B3828, 1, 0xC, 2);
        func_8001F1A8(-0x78, M2C_FIELD(D_800B3C58, s16 *, 0x9C), 0, 1, 0, D_800B3840, 1, 0xE, 2);
    }
}
