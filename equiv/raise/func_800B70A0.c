#include "common.h"

void func_800B70A0(s32 arg0) {
    extern u8 D_800859F2[];
    extern M2C_UNK D_800EEB9C[];
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_a0 = arg0 << 0x10;
    if (temp_a0 == 0) {
        if (func_800D1548(temp_a0) == 0) {
            M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x74C), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x74C), s32 *, 0x38) | 1);
            if ((*D_800859F2) & 8) {
                M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), s32 *, 0x38) | 1);
                M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x75C), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x75C), s32 *, 0x38) | 1);
            }
            if (M2C_FIELD(D_800EEB9C, s32 *, 0x76C) == 1) {
                temp_v1 = M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x770), s32 *, 0x38);
                if ((temp_v1 & 1) != M2C_FIELD(D_800EEB9C, s32 *, 0x76C)) {
                    M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x770), s32 *, 0x38) = (s32) (temp_v1 | 1);
                }
            }
            if (M2C_FIELD(D_800EEB9C, s32 *, 0x774) == 1) {
                temp_v1_2 = M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x778), s32 *, 0x38);
                if ((temp_v1_2 & 1) != M2C_FIELD(D_800EEB9C, s32 *, 0x774)) {
                    M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x778), s32 *, 0x38) = (s32) (temp_v1_2 | 1);
                }
            }
        }
    } else if (func_800D1548(temp_a0) == 0) {
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x74C), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x74C), s32 *, 0x38) & ~1);
        if ((*D_800859F2) & 8) {
            M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x754), s32 *, 0x38) & ~1);
            M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x75C), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x75C), s32 *, 0x38) & ~1);
        }
        if (M2C_FIELD(D_800EEB9C, s32 *, 0x76C) == 1) {
            M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x770), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x770), s32 *, 0x38) & ~1);
        }
        if (M2C_FIELD(D_800EEB9C, s32 *, 0x774) == 1) {
            M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x778), s32 *, 0x38) = (s32) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x778), s32 *, 0x38) & ~1);
        }
    }
}
