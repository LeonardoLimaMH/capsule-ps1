#include "common.h"

void func_80020844(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, s32 arg8) {
    extern M2C_UNK D_8008ED68[];
    u32 temp_a0;
    u32 temp_s0;
    u32 var_t0;

    var_t0 = 0;
    temp_s0 = M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090);
    if (temp_s0 != 0) {
        temp_a0 = temp_s0 + 0x18;
        if ((u32) (M2C_FIELD(D_8008ED68, void **, 0) + 0x4594) >= temp_a0) {
            var_t0 = temp_a0;
        }
    }
    M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090) = var_t0;
    SetPolyF4((void *) temp_s0);
    SetSemiTrans((void *) temp_s0, 1);
    M2C_FIELD(temp_s0, u8 *, 4) = arg4;
    M2C_FIELD(temp_s0, u8 *, 5) = arg5;
    M2C_FIELD(temp_s0, u8 *, 6) = arg6;
    M2C_FIELD(temp_s0, s16 *, 8) = (s16) (arg0 + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2));
    M2C_FIELD(temp_s0, s16 *, 0xA) = (s16) (arg1 + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2));
    M2C_FIELD(temp_s0, s16 *, 0xC) = (s16) (arg2 + (arg0 + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2)));
    M2C_FIELD(temp_s0, s16 *, 0xE) = (s16) (arg1 + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2));
    M2C_FIELD(temp_s0, s16 *, 0x10) = (s16) (arg0 + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2));
    M2C_FIELD(temp_s0, s16 *, 0x12) = (s16) (arg3 + (arg1 + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2)));
    M2C_FIELD(temp_s0, s16 *, 0x14) = (s16) (arg2 + (arg0 + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2)));
    M2C_FIELD(temp_s0, s16 *, 0x16) = (s16) (arg3 + (arg1 + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2)));
    AddPrim(M2C_FIELD(D_8008ED68, void **, 0) + ((arg8 * 4) + 0x70), (void *) temp_s0);
    func_80018610(GetTPage(0, arg7, 0, 0) & 0xFFFF, arg8);
}
