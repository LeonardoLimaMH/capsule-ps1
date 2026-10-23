#include "common.h"

void func_800A90DC(void) {
    extern u16 D_8008EE48[];
    extern M2C_UNK D_800B385C[];
    extern M2C_UNK D_800B3860[];
    extern s16 D_800B3CF6[];
    extern s32 D_800B3CFC[];
    extern s32 D_800B3D00[];
    extern s32 D_800B3D04[];
    extern s32 D_800B3D08[];
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    u16 temp_s1;

    (*D_800B3D08) += 1;
    temp_s1 = (*D_8008EE48);
    switch (temp_s1) {                              /* irregular */
    case 1:
        temp_v0 = (s32) (*D_800B3CFC) >> 3;
        var_a2 = temp_v0;
        if (temp_v0 < 0) {
            var_a2 = temp_v0 + 3;
        }
        func_8001F1A8((*D_800B3CF6), 0x18, (s16) (temp_v0 - ((var_a2 >> 2) * 4)), 1, 0, (*D_800B385C), (s32) temp_s1, (s32) temp_s1, 3);
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
        func_8001F1A8((s16) ((u16) (*D_800B3CF6) + (((*D_800B3D04) + 1) * 0xE)), 0x18, (s16) (temp_a3 - ((var_a2_3 >> 2) * 4)), 1, 0, (*D_800B3860), (s32) temp_s1, 0x13, 3);
        temp_v0_2 = (*D_800B3CFC) + 1;
        (*D_800B3CFC) = temp_v0_2;
        if (temp_v0_2 >= 0x1C3) {
            func_80012578();
            return;
        }
        return;
    case 2:
        func_8001AD74(4);
        func_80012508();
        break;
    }
}
