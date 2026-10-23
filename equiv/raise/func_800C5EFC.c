#include "common.h"

void func_800C5EFC(s32 arg0, s32 arg1) {
    extern s16 D_80078C20[];
    extern M2C_UNK D_800EE5D0[];
    extern s32 D_800EF350[];
    extern M2C_UNK D_80100F38[];
    s32 temp_s0;
    s32 temp_v1_6;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_s3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;

    temp_s3 = ((func_800B1260() & 0xFFFF) * 0x79C) + (*D_80100F38);
    switch (arg1) {                                 /* irregular */
    case 1:
        temp_v0 = func_800D4BE4();
        M2C_FIELD(temp_s3, void **, 0x184) = temp_v0;
        M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) | 1);
        temp_v1 = M2C_FIELD(temp_s3, void **, 0x184);
        temp_s0 = (arg0 & 1) << 9;
        M2C_FIELD(temp_v1, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v1, s32 *, 0x34) & ~0x200) | temp_s0);
        temp_v1_2 = M2C_FIELD(temp_s3, void **, 0x184);
        M2C_FIELD(temp_v1_2, s32 *, 0x34) = (s32) (M2C_FIELD(temp_v1_2, s32 *, 0x34) & ~0xC00);
        temp_v1_3 = M2C_FIELD(temp_s3, void **, 0x184);
        M2C_FIELD(temp_v1_3, s32 *, 0x34) = (s32) (M2C_FIELD(temp_v1_3, s32 *, 0x34) & 0xFFFF0FFF);
        temp_v0_2 = func_800B6D98(1, 0, 0, 7, 0, (*D_800EE5D0), (*D_800EF350), 0, arg1, 0, 2, 0);
        M2C_FIELD(temp_s3, void **, 0x18C) = temp_v0_2;
        M2C_FIELD(temp_v0_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x38) | 1);
        temp_a0 = M2C_FIELD(temp_s3, void **, 0x18C);
        M2C_FIELD(temp_a0, s32 *, 0x30) = (s32) ((M2C_FIELD(temp_a0, s32 *, 0x30) & ~7) | 1);
        temp_v1_4 = M2C_FIELD(temp_s3, void **, 0x18C);
        M2C_FIELD(temp_v1_4, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v1_4, s32 *, 0x34) & ~0x200) | temp_s0);
        temp_v1_5 = M2C_FIELD(temp_s3, void **, 0x18C);
        M2C_FIELD(temp_v1_5, s32 *, 0x34) = (s32) (M2C_FIELD(temp_v1_5, s32 *, 0x34) & ~0xC00);
        return;
    case 0:
        temp_a1 = M2C_FIELD(temp_s3, void **, 0x184);
        temp_v1_6 = ((1 - (*D_80078C20)) & 1) << 8;
        M2C_FIELD(temp_a1, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_a1, s32 *, 0x34) & ~0x100) | temp_v1_6);
        temp_a0_2 = M2C_FIELD(temp_s3, void **, 0x18C);
        M2C_FIELD(temp_a0_2, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_a0_2, s32 *, 0x34) & ~0x100) | temp_v1_6);
        return;
    }
}
