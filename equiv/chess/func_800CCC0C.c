#include "common.h"

void func_800CCC0C(void *arg0) {
    extern void * D_8008ED68[];
    extern M2C_UNK D_800906A0[];
    s32 temp_a0;
    s32 var_s2;
    u32 temp_s0;
    u32 temp_v1;
    u32 var_a2;
    void *temp_a0_2;
    void *temp_s1;

    if ((M2C_FIELD(arg0, u32 *, 0x50) & 1) != 1) {
        var_a2 = 0;
        temp_s1 = arg0 + 0x18;
        temp_s0 = M2C_FIELD((*D_8008ED68), u32 *, 0x1090);
        if (temp_s0 != 0) {
            temp_v1 = temp_s0 + 0x1C;
            if ((u32) ((*D_8008ED68) + 0x4594) >= temp_v1) {
                var_a2 = temp_v1;
            }
        }
        M2C_FIELD((*D_8008ED68), u32 *, 0x1090) = var_a2;
        SetPolyG3((void *) temp_s0, (*D_8008ED68), (void *) var_a2);
        SetSemiTrans((void *) temp_s0, ((u32) M2C_FIELD(arg0, u32 *, 0x50) >> 6) & 1);
        if (M2C_FIELD(arg0, u8 *, 0x58) == 0) {
            func_8002CEC0(D_800906A0);
        }
        var_s2 = func_800CD6AC(temp_s1, (void *) temp_s0) - 1;
        if (M2C_FIELD(arg0, s32 *, 0x80) != 0) {
            var_s2 = 6;
        }
        M2C_FIELD(temp_s0, u8 *, 4) = (u8) M2C_FIELD(temp_s1, u8 *, 0x18);
        M2C_FIELD(temp_s0, u8 *, 5) = (u8) M2C_FIELD(temp_s1, u8 *, 0x19);
        M2C_FIELD(temp_s0, u8 *, 6) = (u8) M2C_FIELD(temp_s1, u8 *, 0x1A);
        M2C_FIELD(temp_s0, u8 *, 0xC) = (u8) M2C_FIELD(temp_s1, u8 *, 0x1B);
        M2C_FIELD(temp_s0, u8 *, 0xD) = (u8) M2C_FIELD(temp_s1, u8 *, 0x1C);
        M2C_FIELD(temp_s0, u8 *, 0xE) = (u8) M2C_FIELD(temp_s1, u8 *, 0x1D);
        M2C_FIELD(temp_s0, u8 *, 0x14) = (u8) M2C_FIELD(temp_s1, u8 *, 0x1E);
        M2C_FIELD(temp_s0, u8 *, 0x15) = (u8) M2C_FIELD(temp_s1, u8 *, 0x1F);
        M2C_FIELD(temp_s0, u8 *, 0x16) = (u8) M2C_FIELD(temp_s1, u8 *, 0x20);
        if ((u32) (var_s2 - 6) < 0x3FAU) {
            temp_a0 = var_s2 * 4;
            M2C_FIELD(temp_s0, s32 *, 0) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0) & 0xFF000000) | (M2C_FIELD((temp_a0 + (*D_8008ED68)), s32 *, 0x70) & 0xFFFFFF));
            temp_a0_2 = temp_a0 + (*D_8008ED68);
            M2C_FIELD(temp_a0_2, s32 *, 0x70) = (s32) ((M2C_FIELD(temp_a0_2, s32 *, 0x70) & 0xFF000000) | (temp_s0 & 0xFFFFFF));
            func_80018610(GetTPage(0, ((u32) M2C_FIELD(arg0, u32 *, 0x50) >> 4) & 3, 0, 0) & 0xFFFF, var_s2);
        }
    }
}
