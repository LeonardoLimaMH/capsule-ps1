#include "common.h"

void func_800CC5DC(void *arg0) {
    extern void * D_8008ED68[];
    extern M2C_UNK D_800906A0[];
    s32 temp_a0;
    s32 temp_v0;
    s8 temp_v1_3;
    s8 temp_v1_5;
    u32 temp_s1;
    u32 temp_v1;
    u32 var_a2;
    u8 temp_v1_2;
    u8 temp_v1_4;
    void *temp_a0_2;
    void *temp_s2;

    if ((M2C_FIELD(arg0, u32 *, 0x50) & 1) != 1) {
        var_a2 = 0;
        temp_s2 = arg0 + 0x18;
        temp_s1 = M2C_FIELD((*D_8008ED68), u32 *, 0x1090);
        if (temp_s1 != 0) {
            temp_v1 = temp_s1 + 0x28;
            if ((u32) ((*D_8008ED68) + 0x4594) >= temp_v1) {
                var_a2 = temp_v1;
            }
        }
        M2C_FIELD((*D_8008ED68), u32 *, 0x1090) = var_a2;
        SetPolyFT4((void *) temp_s1, (*D_8008ED68), (void *) var_a2);
        SetShadeTex((void *) temp_s1, 0);
        SetSemiTrans((void *) temp_s1, ((u32) M2C_FIELD(arg0, u32 *, 0x50) >> 6) & 1);
        if (M2C_FIELD(arg0, u8 *, 0x58) == 0) {
            func_8002CEC0(D_800906A0);
        }
        temp_v0 = func_800CD85C(temp_s2, (void *) temp_s1);
        M2C_FIELD(temp_s1, u8 *, 4) = (u8) M2C_FIELD(temp_s2, u8 *, 0x30);
        M2C_FIELD(temp_s1, u8 *, 5) = (u8) M2C_FIELD(temp_s2, u8 *, 0x31);
        M2C_FIELD(temp_s1, u8 *, 6) = (u8) M2C_FIELD(temp_s2, u8 *, 0x32);
        temp_v1_2 = M2C_FIELD(temp_s2, u8 *, 0x24);
        M2C_FIELD(temp_s1, u8 *, 0x1C) = temp_v1_2;
        M2C_FIELD(temp_s1, u8 *, 0xC) = temp_v1_2;
        temp_v1_3 = temp_v1_2 + M2C_FIELD(temp_s2, u8 *, 0x28);
        M2C_FIELD(temp_s1, s8 *, 0x24) = temp_v1_3;
        M2C_FIELD(temp_s1, s8 *, 0x14) = temp_v1_3;
        temp_v1_4 = M2C_FIELD(temp_s2, u8 *, 0x26);
        M2C_FIELD(temp_s1, u8 *, 0x15) = temp_v1_4;
        M2C_FIELD(temp_s1, u8 *, 0xD) = temp_v1_4;
        temp_v1_5 = temp_v1_4 + M2C_FIELD(temp_s2, u8 *, 0x2A);
        M2C_FIELD(temp_s1, s8 *, 0x25) = temp_v1_5;
        M2C_FIELD(temp_s1, s8 *, 0x1D) = temp_v1_5;
        M2C_FIELD(temp_s1, s16 *, 0xE) = GetClut(M2C_FIELD(temp_s2, u16 *, 0x2C), M2C_FIELD(temp_s2, u16 *, 0x2E));
        M2C_FIELD(temp_s1, s16 *, 0x16) = GetTPage(0, ((u32) M2C_FIELD(arg0, u32 *, 0x50) >> 4) & 3, M2C_FIELD(temp_s2, u16 *, 0x20), M2C_FIELD(temp_s2, u16 *, 0x22));
        if ((u32) (temp_v0 - 7) < 0x3FAU) {
            temp_a0 = (temp_v0 - 1) * 4;
            M2C_FIELD(temp_s1, s32 *, 0) = (s32) ((M2C_FIELD(temp_s1, s32 *, 0) & 0xFF000000) | (M2C_FIELD((temp_a0 + (*D_8008ED68)), s32 *, 0x70) & 0xFFFFFF));
            temp_a0_2 = temp_a0 + (*D_8008ED68);
            M2C_FIELD(temp_a0_2, s32 *, 0x70) = (s32) ((M2C_FIELD(temp_a0_2, s32 *, 0x70) & 0xFF000000) | (temp_s1 & 0xFFFFFF));
        }
    }
}
