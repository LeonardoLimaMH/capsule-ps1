#include "common.h"

void func_800CBD28(void *arg0) {
    extern M2C_UNK D_80069B44[];
    extern void * D_8008ED68[];
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 temp_a1;
    s32 temp_s2_2;
    s32 temp_v0_2;
    s32 var_v1;
    u32 temp_s1;
    u32 temp_v1;
    u32 var_a2;
    void *temp_a1_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s2;
    void *temp_s3;
    void *temp_v0;

    if ((M2C_FIELD(arg0, u32 *, 0x50) & 1) != 1) {
        temp_s2 = M2C_FIELD(arg0, void **, 0x14);
        temp_s3 = arg0 + 0x18;
        PushMatrix();
        SetColorMatrix(M2C_FIELD(arg0, void **, 0x14) + 0xC4);
        temp_v0 = M2C_FIELD(arg0, void **, 0x14);
        temp_s0 = temp_s2 + 0x84;
        SetBackColor(M2C_FIELD(temp_v0, u8 *, 0x60), M2C_FIELD(temp_v0, u8 *, 0x61), M2C_FIELD(temp_v0, u8 *, 0x62));
        RotMatrix(temp_s2 + 0x20, temp_s0);
        TransMatrix(temp_s0, temp_s2);
        var_a2 = 0;
        temp_s1 = M2C_FIELD((*D_8008ED68), u32 *, 0x1090);
        if (temp_s1 != 0) {
            temp_v1 = temp_s1 + 0x18;
            if ((u32) ((*D_8008ED68) + 0x4594) >= temp_v1) {
                var_a2 = temp_v1;
            }
        }
        M2C_FIELD((*D_8008ED68), u32 *, 0x1090) = var_a2;
        SetPolyF4((void *) temp_s1, (*D_8008ED68), (void *) var_a2);
        SetSemiTrans((void *) temp_s1, ((u32) M2C_FIELD(arg0, u32 *, 0x50) >> 6) & 1);
        temp_v0_2 = func_800CDB30(temp_s3, (void *) temp_s1, temp_s2 + 0x84, temp_s2 + 0x64);
        M2C_FIELD(temp_s1, u8 *, 4) = (u8) M2C_FIELD(temp_s3, u8 *, 0x20);
        M2C_FIELD(temp_s1, u8 *, 5) = (u8) M2C_FIELD(temp_s3, u8 *, 0x21);
        M2C_FIELD(temp_s1, u8 *, 6) = (u8) M2C_FIELD(temp_s3, u8 *, 0x22);
        M2C_FIELD(arg0, s32 *, 0x5C) = (s32) ((s32) (M2C_FIELD(temp_s1, s16 *, 8) + M2C_FIELD(temp_s1, s16 *, 0x14)) / 2);
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) ((s32) (M2C_FIELD(temp_s1, s16 *, 0xA) + M2C_FIELD(temp_s1, s16 *, 0x16)) / 2);
        var_v1 = (M2C_FIELD(temp_s1, s16 *, 0xA) * 7) + M2C_FIELD(temp_s1, s16 *, 0x16);
        temp_s2_2 = temp_v0_2 - 1;
        if (var_v1 < 0) {
            var_v1 += 7;
        }
        M2C_FIELD(arg0, s32 *, 0x74) = (s32) (var_v1 >> 3);
        M2C_FIELD(arg0, s32 *, 0x64) = temp_s2_2;
        M2C_FIELD(arg0, s32 *, 0x68) = ratan2(M2C_FIELD(temp_s1, s16 *, 0xA) - M2C_FIELD(temp_s1, s16 *, 0xE), M2C_FIELD(temp_s1, s16 *, 8) - M2C_FIELD(temp_s1, s16 *, 0xC));
        sp10 = (s32) M2C_FIELD(temp_s1, s16 *, 8);
        sp18 = 0;
        sp14 = (s32) M2C_FIELD(temp_s1, s16 *, 0xA);
        sp20 = (s32) M2C_FIELD(temp_s1, s16 *, 0xC);
        sp28 = 0;
        sp24 = (s32) M2C_FIELD(temp_s1, s16 *, 0xE);
        M2C_FIELD(arg0, s32 *, 0x6C) = func_8001ABD4(&sp10, &sp20);
        sp20 = (s32) M2C_FIELD(temp_s1, s16 *, 0x10);
        sp28 = 0;
        sp24 = (s32) M2C_FIELD(temp_s1, s16 *, 0x12);
        M2C_FIELD(arg0, s32 *, 0x70) = func_8001ABD4(&sp10, &sp20);
        if ((u32) (temp_v0_2 - 7) < 0x3FAU) {
            temp_a1 = temp_s2_2 * 4;
            M2C_FIELD(temp_s1, s32 *, 0) = (s32) ((M2C_FIELD(temp_s1, s32 *, 0) & 0xFF000000) | (M2C_FIELD((temp_a1 + (*D_8008ED68)), s32 *, 0x70) & 0xFFFFFF));
            temp_a1_2 = temp_a1 + (*D_8008ED68);
            M2C_FIELD(temp_a1_2, s32 *, 0x70) = (s32) ((M2C_FIELD(temp_a1_2, s32 *, 0x70) & 0xFF000000) | (temp_s1 & 0xFFFFFF));
            func_80018610(GetTPage(0, ((u32) M2C_FIELD(arg0, u32 *, 0x50) >> 4) & 3, 0, 0) & 0xFFFF, temp_s2_2);
        }
        SetColorMatrix(D_80069B44);
        temp_s0_2 = D_80069B44 - 0x70;
        SetBackColor(M2C_FIELD(temp_s0_2, u8 *, 0x6C), M2C_FIELD(temp_s0_2, u8 *, 0x6D), M2C_FIELD(temp_s0_2, u8 *, 0x6E));
        PopMatrix();
    }
}
