#include "common.h"

void func_800CB6A0(void *arg0) {
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_v0;
    s16 var_v0_2;
    s16 var_v0_3;
    s16 var_v0_4;
    s16 var_v0_5;
    s16 var_v0_6;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0x14);
    M2C_FIELD(temp_a2, s32 *, 0) = (s32) (M2C_FIELD(temp_a2, s32 *, 0) + M2C_FIELD(temp_a2, s32 *, 0x10));
    M2C_FIELD(temp_a2, s32 *, 4) = (s32) (M2C_FIELD(temp_a2, s32 *, 4) + M2C_FIELD(temp_a2, s32 *, 0x14));
    M2C_FIELD(temp_a2, s32 *, 8) = (s32) (M2C_FIELD(temp_a2, s32 *, 8) + M2C_FIELD(temp_a2, s32 *, 0x18));
    M2C_FIELD(temp_a2, u16 *, 0x20) = (u16) (M2C_FIELD(temp_a2, u16 *, 0x28) + (M2C_FIELD(temp_a2, u16 *, 0x20) + 0x1000));
    M2C_FIELD(temp_a2, u16 *, 0x22) = (u16) (M2C_FIELD(temp_a2, u16 *, 0x2A) + (M2C_FIELD(temp_a2, u16 *, 0x22) + 0x1000));
    temp_a0 = (s16) M2C_FIELD(temp_a2, u16 *, 0x20);
    M2C_FIELD(temp_a2, u16 *, 0x24) = (u16) (M2C_FIELD(temp_a2, u16 *, 0x2C) + (M2C_FIELD(temp_a2, u16 *, 0x24) + 0x1000));
    var_v0 = temp_a0;
    if (temp_a0 < 0) {
        var_v0 = temp_a0 + 0xFFF;
    }
    temp_a1 = (s16) M2C_FIELD(temp_a2, u16 *, 0x22);
    M2C_FIELD(temp_a2, u16 *, 0x20) = (u16) (temp_a0 - ((var_v0 >> 0xC) << 0xC));
    var_v0_2 = temp_a1;
    if (temp_a1 < 0) {
        var_v0_2 = temp_a1 + 0xFFF;
    }
    temp_v1 = (s16) M2C_FIELD(temp_a2, u16 *, 0x24);
    M2C_FIELD(temp_a2, u16 *, 0x22) = (u16) (temp_a1 - ((var_v0_2 >> 0xC) << 0xC));
    var_v0_3 = temp_v1;
    if (temp_v1 < 0) {
        var_v0_3 = temp_v1 + 0xFFF;
    }
    M2C_FIELD(temp_a2, u16 *, 0x24) = (u16) (temp_v1 - ((var_v0_3 >> 0xC) << 0xC));
    M2C_FIELD(temp_a2, s32 *, 0x30) = (s32) (M2C_FIELD(temp_a2, s32 *, 0x30) + M2C_FIELD(temp_a2, s32 *, 0x40));
    M2C_FIELD(temp_a2, s32 *, 0x34) = (s32) (M2C_FIELD(temp_a2, s32 *, 0x34) + M2C_FIELD(temp_a2, s32 *, 0x44));
    M2C_FIELD(temp_a2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_a2, s32 *, 0x38) + M2C_FIELD(temp_a2, s32 *, 0x48));
    M2C_FIELD(temp_a2, u16 *, 0x50) = (u16) (M2C_FIELD(temp_a2, u16 *, 0x58) + (M2C_FIELD(temp_a2, u16 *, 0x50) + 0x1000));
    M2C_FIELD(temp_a2, u16 *, 0x52) = (u16) (M2C_FIELD(temp_a2, u16 *, 0x5A) + (M2C_FIELD(temp_a2, u16 *, 0x52) + 0x1000));
    temp_a0_2 = (s16) M2C_FIELD(temp_a2, u16 *, 0x50);
    M2C_FIELD(temp_a2, u16 *, 0x54) = (u16) (M2C_FIELD(temp_a2, u16 *, 0x5C) + (M2C_FIELD(temp_a2, u16 *, 0x54) + 0x1000));
    var_v0_4 = temp_a0_2;
    if (temp_a0_2 < 0) {
        var_v0_4 = temp_a0_2 + 0xFFF;
    }
    temp_a1_2 = (s16) M2C_FIELD(temp_a2, u16 *, 0x52);
    M2C_FIELD(temp_a2, u16 *, 0x50) = (u16) (temp_a0_2 - ((var_v0_4 >> 0xC) << 0xC));
    var_v0_5 = temp_a1_2;
    if (temp_a1_2 < 0) {
        var_v0_5 = temp_a1_2 + 0xFFF;
    }
    temp_v1_2 = (s16) M2C_FIELD(temp_a2, u16 *, 0x54);
    M2C_FIELD(temp_a2, u16 *, 0x52) = (u16) (temp_a1_2 - ((var_v0_5 >> 0xC) << 0xC));
    var_v0_6 = temp_v1_2;
    if (temp_v1_2 < 0) {
        var_v0_6 = temp_v1_2 + 0xFFF;
    }
    M2C_FIELD(temp_a2, u16 *, 0x54) = (u16) (temp_v1_2 - ((var_v0_6 >> 0xC) << 0xC));
}
