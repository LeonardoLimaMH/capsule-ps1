#include "common.h"

void func_800F52C4(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 temp_s4;
    s32 temp_s6;
    u16 temp_s2;
    u16 temp_s3;
    u16 var_v1;
    u32 temp_s0;
    u32 temp_v1;
    u32 var_a2;

    temp_s6 = GetTPage(0, M2C_FIELD(arg0, u8 *, 0x30), 0, 0) & 0xFFFF;
    temp_s2 = M2C_FIELD(arg0, u16 *, 0x32);
    temp_s3 = M2C_FIELD(arg0, u16 *, 0x34);
    temp_s4 = temp_s2 - temp_s3;
    if ((u8) M2C_FIELD((*D_8008ED68), u8 *, 0x103) >= 2U) {
        var_v1 = temp_s3 + M2C_FIELD((*D_8008ED68), u8 *, 0x103);
    } else {
        var_v1 = temp_s3 + 1;
    }
    M2C_FIELD(arg0, u16 *, 0x34) = var_v1;
    var_a2 = 0;
    if ((u16) M2C_FIELD(arg0, u16 *, 0x32) < (u32) (var_v1 & 0xFFFF)) {
        func_80013920(arg0);
        return;
    }
    temp_s0 = M2C_FIELD(M2C_FIELD((*D_8008ED68), void **, 0), u32 *, 0x1090);
    if (temp_s0 != 0) {
        temp_v1 = temp_s0 + 0x18;
        if ((u32) (M2C_FIELD((*D_8008ED68), void **, 0) + 0x4594) >= temp_v1) {
            var_a2 = temp_v1;
        }
    }
    M2C_FIELD(M2C_FIELD((*D_8008ED68), void **, 0), u32 *, 0x1090) = var_a2;
    SetPolyF4((void *) temp_s0, M2C_FIELD((*D_8008ED68), void **, 0), (void *) var_a2);
    SetShadeTex((void *) temp_s0, 0);
    SetSemiTrans((void *) temp_s0, 1);
    M2C_FIELD(temp_s0, s8 *, 4) = (s8) ((s32) ((M2C_FIELD(arg0, u8 *, 0x28) * temp_s4) + (M2C_FIELD(arg0, u8 *, 0x2C) * temp_s3)) / (s32) temp_s2);
    M2C_FIELD(temp_s0, s8 *, 5) = (s8) ((s32) ((M2C_FIELD(arg0, u8 *, 0x29) * temp_s4) + (M2C_FIELD(arg0, u8 *, 0x2D) * temp_s3)) / (s32) temp_s2);
    M2C_FIELD(temp_s0, s16 *, 8) = 0;
    M2C_FIELD(temp_s0, s16 *, 0xA) = 0;
    M2C_FIELD(temp_s0, s8 *, 6) = (s8) ((s32) ((M2C_FIELD(arg0, u8 *, 0x2A) * temp_s4) + (M2C_FIELD(arg0, u8 *, 0x2E) * temp_s3)) / (s32) temp_s2);
    M2C_FIELD(temp_s0, s16 *, 0xE) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x10) = 0;
    M2C_FIELD(temp_s0, s16 *, 0xC) = (s16) ((M2C_FIELD((*D_8008ED68), u32 *, 0x108) + ((u32) M2C_FIELD((*D_8008ED68), u32 *, 0x108) >> 0x1F)) & 0xFFFE);
    M2C_FIELD(temp_s0, s16 *, 0x12) = (s16) ((M2C_FIELD((*D_8008ED68), u32 *, 0x10C) + ((u32) M2C_FIELD((*D_8008ED68), u32 *, 0x10C) >> 0x1F)) & 0xFFFE);
    M2C_FIELD(temp_s0, s16 *, 0x14) = (s16) ((M2C_FIELD((*D_8008ED68), u32 *, 0x108) + ((u32) M2C_FIELD((*D_8008ED68), u32 *, 0x108) >> 0x1F)) & 0xFFFE);
    M2C_FIELD(temp_s0, s16 *, 0x16) = (s16) ((M2C_FIELD((*D_8008ED68), u32 *, 0x10C) + ((u32) M2C_FIELD((*D_8008ED68), u32 *, 0x10C) >> 0x1F)) & 0xFFFE);
    AddPrim(M2C_FIELD((*D_8008ED68), void **, 0) + 0x200, (void *) temp_s0);
    func_80018610(temp_s6, 0x64);
}
