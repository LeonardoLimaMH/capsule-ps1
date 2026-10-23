#include "common.h"

void func_800CCDE4(void *arg0) {
    extern M2C_UNK D_80069B44[];
    extern void * D_8008ED68[];
    s32 temp_a1;
    s32 temp_s1_2;
    s32 temp_v0_2;
    u32 temp_s0_2;
    u32 temp_v1;
    u32 var_a2;
    void *temp_a1_2;
    void *temp_s0;
    void *temp_s0_3;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;

    if ((M2C_FIELD(arg0, u32 *, 0x50) & 1) != 1) {
        temp_s2 = M2C_FIELD(arg0, void **, 0x14);
        temp_s1 = arg0 + 0x18;
        PushMatrix();
        SetColorMatrix(M2C_FIELD(arg0, void **, 0x14) + 0xC4);
        temp_v0 = M2C_FIELD(arg0, void **, 0x14);
        temp_s0 = temp_s2 + 0x84;
        SetBackColor(M2C_FIELD(temp_v0, u8 *, 0x60), M2C_FIELD(temp_v0, u8 *, 0x61), M2C_FIELD(temp_v0, u8 *, 0x62));
        RotMatrix(temp_s2 + 0x20, temp_s0);
        TransMatrix(temp_s0, temp_s2);
        var_a2 = 0;
        temp_s0_2 = M2C_FIELD((*D_8008ED68), u32 *, 0x1090);
        if (temp_s0_2 != 0) {
            temp_v1 = temp_s0_2 + 0x24;
            if ((u32) ((*D_8008ED68) + 0x4594) >= temp_v1) {
                var_a2 = temp_v1;
            }
        }
        M2C_FIELD((*D_8008ED68), u32 *, 0x1090) = var_a2;
        SetPolyG3((void *) temp_s0_2, (*D_8008ED68), (void *) var_a2);
        SetSemiTrans((void *) temp_s0_2, ((u32) M2C_FIELD(arg0, u32 *, 0x50) >> 6) & 1);
        temp_v0_2 = func_800CDF4C(temp_s1, (void *) temp_s0_2, temp_s2 + 0x84, temp_s2 + 0x64);
        M2C_FIELD(temp_s0_2, u8 *, 4) = (u8) M2C_FIELD(temp_s1, u8 *, 0x18);
        M2C_FIELD(temp_s0_2, u8 *, 5) = (u8) M2C_FIELD(temp_s1, u8 *, 0x19);
        M2C_FIELD(temp_s0_2, u8 *, 6) = (u8) M2C_FIELD(temp_s1, u8 *, 0x1A);
        M2C_FIELD(temp_s0_2, u8 *, 0xC) = (u8) M2C_FIELD(temp_s1, u8 *, 0x1B);
        M2C_FIELD(temp_s0_2, u8 *, 0xD) = (u8) M2C_FIELD(temp_s1, u8 *, 0x1C);
        M2C_FIELD(temp_s0_2, u8 *, 0xE) = (u8) M2C_FIELD(temp_s1, u8 *, 0x1D);
        M2C_FIELD(temp_s0_2, u8 *, 0x14) = (u8) M2C_FIELD(temp_s1, u8 *, 0x1E);
        M2C_FIELD(temp_s0_2, u8 *, 0x15) = (u8) M2C_FIELD(temp_s1, u8 *, 0x1F);
        temp_s1_2 = temp_v0_2 - 1;
        M2C_FIELD(temp_s0_2, u8 *, 0x16) = (u8) M2C_FIELD(temp_s1, u8 *, 0x20);
        if ((u32) (temp_v0_2 - 7) < 0x3FAU) {
            temp_a1 = temp_s1_2 * 4;
            M2C_FIELD(temp_s0_2, s32 *, 0) = (s32) ((M2C_FIELD(temp_s0_2, s32 *, 0) & 0xFF000000) | (M2C_FIELD((temp_a1 + (*D_8008ED68)), s32 *, 0x70) & 0xFFFFFF));
            temp_a1_2 = temp_a1 + (*D_8008ED68);
            M2C_FIELD(temp_a1_2, s32 *, 0x70) = (s32) ((M2C_FIELD(temp_a1_2, s32 *, 0x70) & 0xFF000000) | (temp_s0_2 & 0xFFFFFF));
            func_80018610(GetTPage(0, ((u32) M2C_FIELD(arg0, u32 *, 0x50) >> 4) & 3, 0, 0) & 0xFFFF, temp_s1_2);
        }
        SetColorMatrix(D_80069B44);
        temp_s0_3 = D_80069B44 - 0x70;
        SetBackColor(M2C_FIELD(temp_s0_3, u8 *, 0x6C), M2C_FIELD(temp_s0_3, u8 *, 0x6D), M2C_FIELD(temp_s0_3, u8 *, 0x6E));
        PopMatrix();
    }
}
