#include "common.h"

void func_800C5C34(void *arg0, void *arg1) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    u16 sp10;
    u16 sp12;
    u16 sp14;
    s32 temp_v1;
    s32 temp_v1_2;
    u16 var_v0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x88);
    if (temp_v1 == 0) {
        M2C_FIELD(arg0, u16 *, 0x50) = (u16) (M2C_FIELD(arg1, u16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
        M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg1, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76));
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg1, s32 *, 0x44) + M2C_FIELD(arg0, s32 *, 0x68));
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg1, s32 *, 0x48) + M2C_FIELD(arg0, s32 *, 0x6C));
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg1, s32 *, 0x4C) + M2C_FIELD(arg0, s32 *, 0x70));
        return;
    }
    if (temp_v1 != 3) {
        sp10 = M2C_FIELD(arg0, u16 *, 0x6A);
        sp12 = M2C_FIELD(arg0, u16 *, 0x6E);
        sp14 = M2C_FIELD(arg0, u16 *, 0x72);
        M2C_FIELD(arg0, u16 *, 0x4E) = func_800CD950(&sp10, arg0);
        M2C_FIELD(arg0, u16 *, 0x46) = (u16) (M2C_FIELD(arg0, u16 *, 0x46) - ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x108) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x108) >> 0x1F)) >> 1));
        M2C_FIELD(arg0, u16 *, 0x4A) = (u16) (M2C_FIELD(arg0, u16 *, 0x4A) - ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x10C) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x10C) >> 0x1F)) >> 1));
        func_800C9534(D_80085428, arg0, 0x140);
        M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76));
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x88);
        M2C_FIELD(arg0, u16 *, 0x50) = (u16) (M2C_FIELD(arg0, u16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
        if (temp_v1_2 == 1) {
            var_v0 = M2C_FIELD(arg0, u16 *, 0x4E) - 0xA;
            goto block_6;
        }
        var_v0 = 6;
        if (temp_v1_2 != 4) {
block_6:
            M2C_FIELD(arg0, u16 *, 0x4E) = var_v0;
        }
        if ((s16) M2C_FIELD(arg0, u16 *, 0x4E) < 6) {
            M2C_FIELD(arg0, u16 *, 0x4E) = 6U;
        }
    } else {
        M2C_FIELD(arg0, u16 *, 0x50) = (u16) M2C_FIELD(arg0, u16 *, 0x74);
        M2C_FIELD(arg0, u16 *, 0x52) = (u16) M2C_FIELD(arg0, u16 *, 0x76);
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x68);
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(arg0, s32 *, 0x6C);
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
    }
}
