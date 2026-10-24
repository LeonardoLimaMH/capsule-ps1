#include "common.h"

void func_80018440(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_v0;
    u16 temp_a3;
    u32 temp_s0;
    u32 temp_v1;
    u32 var_a2;
    void *temp_a0;

    if ((M2C_FIELD(arg0, u32 *, 0x28) & 1) != 1) {
        var_a2 = 0;
        temp_s0 = M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090);
        if (temp_s0 != 0) {
            temp_v1 = temp_s0 + 0x18;
            if ((u32) (M2C_FIELD(D_8008ED68, void **, 0) + 0x4594) >= temp_v1) {
                var_a2 = temp_v1;
            }
        }
        M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090) = var_a2;
        SetPolyF4((void *) temp_s0, M2C_FIELD(D_8008ED68, void **, 0), (void *) var_a2);
        SetShadeTex((void *) temp_s0, 0);
        SetSemiTrans((void *) temp_s0, ((u32) M2C_FIELD(arg0, u32 *, 0x28) >> 6) & 1);
        temp_v0 = GetTPage(0, ((u32) M2C_FIELD(arg0, u32 *, 0x28) >> 4) & 3, 0, 0);
        M2C_FIELD(temp_s0, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 0x30);
        M2C_FIELD(temp_s0, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 0x31);
        M2C_FIELD(temp_s0, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 0x32);
        temp_a3 = M2C_FIELD(arg0, u16 *, 0x1A);
        temp_a1 = M2C_FIELD(arg0, s16 *, 0x1E) + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2) + M2C_FIELD(arg0, s16 *, 0x14);
        temp_a2 = temp_a1 + M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(temp_s0, s16 *, 8) = temp_a1;
        M2C_FIELD(temp_s0, s16 *, 0x10) = temp_a1;
        M2C_FIELD(temp_s0, s16 *, 0xC) = temp_a2;
        M2C_FIELD(temp_s0, s16 *, 0x14) = temp_a2;
        temp_v1_2 = M2C_FIELD(arg0, s16 *, 0x22) + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2) + M2C_FIELD(arg0, s16 *, 0x16);
        M2C_FIELD(temp_s0, s16 *, 0xA) = temp_v1_2;
        M2C_FIELD(temp_s0, s16 *, 0xE) = temp_v1_2;
        temp_v1_3 = temp_v1_2 + temp_a3;
        M2C_FIELD(temp_s0, s16 *, 0x12) = temp_v1_3;
        M2C_FIELD(temp_s0, s16 *, 0x16) = temp_v1_3;
        M2C_FIELD(temp_s0, s32 *, 0) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0) & 0xFF000000) | (M2C_FIELD(((M2C_FIELD(arg0, s16 *, 0x26) * 4) + M2C_FIELD(D_8008ED68, void **, 0)), s32 *, 0x70) & 0xFFFFFF));
        temp_a0 = (M2C_FIELD(arg0, s16 *, 0x26) * 4) + M2C_FIELD(D_8008ED68, void **, 0);
        M2C_FIELD(temp_a0, s32 *, 0x70) = (s32) ((M2C_FIELD(temp_a0, s32 *, 0x70) & 0xFF000000) | (temp_s0 & 0xFFFFFF));
        func_80018610(temp_v0 & 0xFFFF, M2C_FIELD(arg0, s16 *, 0x26), temp_a2, temp_a3);
    }
}
