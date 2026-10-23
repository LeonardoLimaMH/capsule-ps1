#include "common.h"

void func_800CBBB4(void *arg0) {
    extern void * D_8008ED68[];
    extern M2C_UNK D_800906A0[];
    s32 temp_a0;
    s32 temp_s1_2;
    s32 temp_v0;
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
            temp_v1 = temp_s0 + 0x18;
            if ((u32) ((*D_8008ED68) + 0x4594) >= temp_v1) {
                var_a2 = temp_v1;
            }
        }
        M2C_FIELD((*D_8008ED68), u32 *, 0x1090) = var_a2;
        SetPolyF4((void *) temp_s0, (*D_8008ED68), (void *) var_a2);
        SetSemiTrans((void *) temp_s0, ((u32) M2C_FIELD(arg0, u32 *, 0x50) >> 6) & 1);
        if (M2C_FIELD(arg0, u8 *, 0x58) == 0) {
            func_8002CEC0(D_800906A0);
        }
        temp_v0 = func_800CD564(temp_s1, (void *) temp_s0);
        M2C_FIELD(temp_s0, u8 *, 4) = (u8) M2C_FIELD(temp_s1, u8 *, 0x20);
        M2C_FIELD(temp_s0, u8 *, 5) = (u8) M2C_FIELD(temp_s1, u8 *, 0x21);
        temp_s1_2 = temp_v0 - 1;
        M2C_FIELD(temp_s0, u8 *, 6) = (u8) M2C_FIELD(temp_s1, u8 *, 0x22);
        if ((u32) (temp_v0 - 7) < 0x3FAU) {
            temp_a0 = temp_s1_2 * 4;
            M2C_FIELD(temp_s0, s32 *, 0) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0) & 0xFF000000) | (M2C_FIELD((temp_a0 + (*D_8008ED68)), s32 *, 0x70) & 0xFFFFFF));
            temp_a0_2 = temp_a0 + (*D_8008ED68);
            M2C_FIELD(temp_a0_2, s32 *, 0x70) = (s32) ((M2C_FIELD(temp_a0_2, s32 *, 0x70) & 0xFF000000) | (temp_s0 & 0xFFFFFF));
            func_80018610(GetTPage(0, ((u32) M2C_FIELD(arg0, u32 *, 0x50) >> 4) & 3, 0, 0) & 0xFFFF, temp_s1_2);
        }
    }
}
